class CfgVehicles
{
    class EGVAR(pops,poppackItem);
    class immersion_pops_poppackItem: EGVAR(pops,poppackItem)
    {
        scope = 1;
        scopeCurator = 1;
        dislpayName = "DEPRECATED";
    };

    class EGVAR(morley,cigpackItem);
    class murshun_cigs_cigpackItem : EGVAR(morley,cigpackItem) 
    {
        scope = 1;
        scopeCurator = 1;
        dislpayName = "DEPRECATED";
    };

    class PVAR(lighterItem);
    class murshun_cigs_lighterItem : PVAR(lighterItem)
    {
        scope = 1;
        scopeCurator = 1;
        dislpayName = "DEPRECATED";
    };

    class PVAR(matchesItem);
    class murshun_cigs_matchesItem : PVAR(matchesItem)
    {
        scope = 1;
        scopeCurator = 1;
        dislpayName = "DEPRECATED";
    };
};