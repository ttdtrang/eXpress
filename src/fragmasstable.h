//
//  fragmasstable.h
//  express
//
//  Created by Adam Roberts on 9/7/11.
//  Copyright 2011 Adam Roberts. All rights reserved.
//

#ifndef express_fragmasstable_h
#define express_fragmasstable_h

#include <vector>

const size_t INT_BIT = sizeof(int)*CHAR_BIT; 

/** 
 * The FragMassTable class is used to recursively calculate the fragment mass values, which grow over time based on
 * a "forgetting factor" parameter.  The class also stores these mass values at certain intervals because there
 * is not a known closed-form formula for when the previous value is unknown. When a new bundle is created during
 * a merge it uses this table to look up the "nearest" stored value based on the new number of observed counts.
 *  @author    Adam Roberts
 *  @date      2011
 *  @copyright Artistic License 2.0
 **/
class FragMassTable
{
    /**
     * a private double that stores the "forgetting factor" parameter specifying how fast the fragment masses grow
     */
    double _ff_param;
    
    /**
     * a private double that stores the current number of observed fragments
     */
    size_t _n;
    
    /**
     * a private double that stores the mass for the next observed fragment (should really be mass_{n+1}) (logged)
     */
    double _mass_n;
    
    /**
     * a private double that stores the cumulative mass for the first n fragments (logged)
     */
    double _cum_mass_n;
    
    /**
     * a private vector of size_t that stores the indices for which the mass and cumulative mass were stored in lookup tables
     **/
    std::vector<size_t> _n_table;
    
    /**
     * a private vector of doubles that stores the next fragment mass for different values of n (indexed by _n_table) (logged)
     **/
    std::vector<double> _mass_table;
    
    /**
     * a private vector of doubles that stores the cumulative fragment mass for different values of n (indexed by _n_table) (logged)
     **/
    std::vector<double> _cum_mass_table;
    
    /**
     * a private member function that returns an index to the _n_table for the nearest value of n (without going over)
     * @param n a size_t to find the nearest index of
     * @return an index into the _n_table for the nearest value of n (without going over)
     **/
    size_t n_to_index (size_t n);
public:
    
    /**
     * FragMassTable constructor.
     * @param ff_param a parameter specifying how fast the fragment masses grow
     **/
    FragMassTable(double ff_param);
    
    /**
     * a member function that updates and returns the next fragment mass (_mass_n) based on the current values of _n and _mass_n
     * the cumulative fragment mass (_cum_mass_n) is also updated and _n is incremented by 1 (after all other changes)
     * if the next index has been reached in the tables (_n_table, _mass_table, _cum_mass_table), the new values are added
     * @return the updated value of _mass_n (logged)
     **/
    double next_frag_mass();
    
    /**
     * a member function that calculates the next fragment mass  based on the given values of n and _mass_n
     * @param n the number of observed fragments
     * @param curr_mass the current fragment mass (logged)
     * @return the next fragment mass (logged)
     **/
    double next_frag_mass(size_t n, double curr_mass);
    
    /**
     * a member function that finds and returns the nearest stored value of n (without going over)
     * the mass and cumulative mass values associated with this n are also returned through the
     * referenced arguments mass and curr_mass
     * @param n number of fragments observed
     * @param mass mass of next fragment for returned number of fragments (logged)
     * @param cum_mass cumulative mass for returned number of fragments (logged)
     * @return nearest (without going over) number of fragments for stored values
     */
    size_t nearest_stored_mass(size_t n, double& mass, double& cum_mass);
};

#endif