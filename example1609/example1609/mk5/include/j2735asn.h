/* Automatically generated file - do not edit */
#ifndef _FFASN1_J2735ASN_H
#define _FFASN1_J2735ASN_H

#include "asn1defs.h"

#ifdef  __cplusplus
extern "C" {
#endif

typedef int SAEAccidentsAndIncidents;

enum {
  SAEAccidentsAndIncidents_accident = 513,
  SAEAccidentsAndIncidents_serious_accident = 514,
  SAEAccidentsAndIncidents_injury_accident = 515,
  SAEAccidentsAndIncidents_minor_accident = 516,
  SAEAccidentsAndIncidents_multi_vehicle_accident = 517,
  SAEAccidentsAndIncidents_numerous_accidents = 518,
  SAEAccidentsAndIncidents_accident_involving_a_bicycle = 519,
  SAEAccidentsAndIncidents_accident_involving_a_bus = 520,
  SAEAccidentsAndIncidents_accident_involving_a_motorcycle = 521,
  SAEAccidentsAndIncidents_accident_involving_a_pedestrian = 522,
  SAEAccidentsAndIncidents_accident_involving_a_train = 523,
  SAEAccidentsAndIncidents_accident_involving_a_truck = 524,
  SAEAccidentsAndIncidents_accident_involving_a_semi_trailer = 562,
  SAEAccidentsAndIncidents_accident_involving_hazardous_materials = 525,
  SAEAccidentsAndIncidents_earlier_accident = 526,
  SAEAccidentsAndIncidents_medical_emergency = 527,
  SAEAccidentsAndIncidents_secondary_accident = 528,
  SAEAccidentsAndIncidents_rescue_and_recovery_work_REMOVED = 529,
  SAEAccidentsAndIncidents_accident_investigation_work = 530,
  SAEAccidentsAndIncidents_incident = 531,
  SAEAccidentsAndIncidents_stalled_vehicle = 532,
  SAEAccidentsAndIncidents_abandoned_vehicle = 533,
  SAEAccidentsAndIncidents_disabled_vehicle = 534,
  SAEAccidentsAndIncidents_disabled_truck = 535,
  SAEAccidentsAndIncidents_disabled_semi_trailer = 536,
  SAEAccidentsAndIncidents_disabled_bus = 537,
  SAEAccidentsAndIncidents_disabled_train = 538,
  SAEAccidentsAndIncidents_vehicle_spun_out = 539,
  SAEAccidentsAndIncidents_vehicle_on_fire = 540,
  SAEAccidentsAndIncidents_vehicle_in_water = 541,
  SAEAccidentsAndIncidents_vehicles_slowing_to_look_at_accident = 542,
  SAEAccidentsAndIncidents_jackknifed_semi_trailer = 543,
  SAEAccidentsAndIncidents_jackknifed_trailer_home = 544,
  SAEAccidentsAndIncidents_jackknifed_trailer = 545,
  SAEAccidentsAndIncidents_spillage_occurring_from_moving_vehicle = 546,
  SAEAccidentsAndIncidents_acid_spill = 547,
  SAEAccidentsAndIncidents_chemical_spill = 548,
  SAEAccidentsAndIncidents_fuel_spill = 549,
  SAEAccidentsAndIncidents_hazardous_materials_spill = 550,
  SAEAccidentsAndIncidents_oil_spill = 551,
  SAEAccidentsAndIncidents_spilled_load = 552,
  SAEAccidentsAndIncidents_toxic_spill = 553,
  SAEAccidentsAndIncidents_overturned_vehicle = 554,
  SAEAccidentsAndIncidents_overturned_truck = 555,
  SAEAccidentsAndIncidents_overturned_semi_trailer = 556,
  SAEAccidentsAndIncidents_overturned_bus = 557,
  SAEAccidentsAndIncidents_derailed_train = 558,
  SAEAccidentsAndIncidents_stuck_vehicle = 559,
  SAEAccidentsAndIncidents_truck_stuck_under_bridge = 560,
  SAEAccidentsAndIncidents_bus_stuck_under_bridge = 561,
  SAEAccidentsAndIncidents_accident_cleared = 638,
  SAEAccidentsAndIncidents_incident_cleared = 639,
};

extern const ASN1CType asn1_type_SAEAccidentsAndIncidents[];

typedef int SAEAlternateRoute;

enum {
  SAEAlternateRoute_detour_where_possible = 8449,
  SAEAlternateRoute_no_detour_available = 8450,
  SAEAlternateRoute_follow_signs = 8451,
  SAEAlternateRoute_follow_detour_signs = 8452,
  SAEAlternateRoute_follow_special_detour_markers = 8453,
  SAEAlternateRoute_do_not_follow_detour_signs = 8454,
  SAEAlternateRoute_detour_in_operation = 8455,
  SAEAlternateRoute_follow_local_detour = 8456,
  SAEAlternateRoute_compulsory_detour_in_operation = 8457,
  SAEAlternateRoute_no_suitable_detour_available = 8458,
  SAEAlternateRoute_detour_is_no_longer_recommended = 8459,
  SAEAlternateRoute_local_drivers_are_recommended_to_avoid_the_area = 8460,
  SAEAlternateRoute_trucks_are_recommended_to_avoid_the_area = 8461,
  SAEAlternateRoute_consider_alternate_route = 8462,
  SAEAlternateRoute_consider_alternate_parking = 8463,
  SAEAlternateRoute_consider_alternate_destination = 8464,
  SAEAlternateRoute_consider_alternate_area = 8465,
  SAEAlternateRoute_snow_route = 8466,
  SAEAlternateRoute_emergency_snow_route = 8467,
  SAEAlternateRoute_evacuation_route = 8468,
  SAEAlternateRoute_truck_route = 8469,
  SAEAlternateRoute_hazardous_materials_route = 8470,
  SAEAlternateRoute_detour = 8471,
};

extern const ASN1CType asn1_type_SAEAlternateRoute[];

typedef int SAEAssetStatus;

enum {
  SAEAssetStatus_unknown_status = 10240,
  SAEAssetStatus_ready_for_use = 10241,
  SAEAssetStatus_working_normally = 10242,
  SAEAssetStatus_working_autonomously = 10243,
  SAEAssetStatus_working_incorrectly = 10244,
  SAEAssetStatus_not_working = 10245,
  SAEAssetStatus_normal_maintenance = 10246,
  SAEAssetStatus_in_route_to_use = 10247,
  SAEAssetStatus_returning_from_use = 10248,
  SAEAssetStatus_out_of_service = 10249,
  SAEAssetStatus_off_duty = 10250,
  SAEAssetStatus_on_patrol = 10251,
  SAEAssetStatus_on_call = 10252,
  SAEAssetStatus_on_break = 10253,
  SAEAssetStatus_mandatory_time_off = 10254,
  SAEAssetStatus_low_on_fuel = 10255,
  SAEAssetStatus_low_on_water = 10256,
  SAEAssetStatus_low_charge = 10257,
  SAEAssetStatus_missing = 10258,
};

extern const ASN1CType asn1_type_SAEAssetStatus[];

typedef int SAEClosures;

enum {
  SAEClosures_closed_to_traffic = 769,
  SAEClosures_closed = 770,
  SAEClosures_closed_ahead = 771,
  SAEClosures_closed_intermittently = 772,
  SAEClosures_closed_for_repairs = 773,
  SAEClosures_closed_for_the_season = 774,
  SAEClosures_blocked = 775,
  SAEClosures_blocked_ahead = 776,
  SAEClosures_reduced_to_one_lane = 777,
  SAEClosures_reduced_to_two_lanes = 778,
  SAEClosures_reduced_to_three_lanes = 779,
  SAEClosures_collapse = 780,
  SAEClosures_out = 781,
  SAEClosures_open_to_traffic = 891,
  SAEClosures_open = 892,
  SAEClosures_reopened_to_traffic = 893,
  SAEClosures_clearing = 894,
  SAEClosures_cleared_from_road = 895,
};

extern const ASN1CType asn1_type_SAEClosures[];

typedef int SAEDelayStatusCancellation;

enum {
  SAEDelayStatusCancellation_delays = 1537,
  SAEDelayStatusCancellation_short_delays = 1538,
  SAEDelayStatusCancellation_long_delays = 1539,
  SAEDelayStatusCancellation_very_long_delays = 1540,
  SAEDelayStatusCancellation_delays_of_uncertain_duration = 1541,
  SAEDelayStatusCancellation_delayed_until_further_notice = 1542,
  SAEDelayStatusCancellation_busy = 1543,
  SAEDelayStatusCancellation_very_busy = 1544,
  SAEDelayStatusCancellation_crowded = 1545,
  SAEDelayStatusCancellation_overcrowded = 1546,
  SAEDelayStatusCancellation_cancellations = 1547,
  SAEDelayStatusCancellation_route_canceled_and_no_replacement = 1548,
  SAEDelayStatusCancellation_service_canceled = 1549,
  SAEDelayStatusCancellation_service_suspended = 1550,
  SAEDelayStatusCancellation_service_withdrawn = 1551,
  SAEDelayStatusCancellation_service_fully_booked = 1552,
  SAEDelayStatusCancellation_all_services_fully_booked = 1553,
  SAEDelayStatusCancellation_next_departure = 1554,
  SAEDelayStatusCancellation_next_arrival = 1555,
  SAEDelayStatusCancellation_very_frequent_service = 1556,
  SAEDelayStatusCancellation_frequent_service = 1557,
  SAEDelayStatusCancellation_fairly_frequent_service = 1558,
  SAEDelayStatusCancellation_regular_service = 1559,
  SAEDelayStatusCancellation_irregular_service = 1560,
  SAEDelayStatusCancellation_not_operating = 1561,
  SAEDelayStatusCancellation_system_busy = 1562,
  SAEDelayStatusCancellation_system_very_busy = 1563,
  SAEDelayStatusCancellation_system_crowded = 1564,
  SAEDelayStatusCancellation_system_overcrowded = 1565,
  SAEDelayStatusCancellation_deleted_travel_time = 1566,
  SAEDelayStatusCancellation_headway = 1567,
  SAEDelayStatusCancellation_extra_services_in_operation = 1568,
  SAEDelayStatusCancellation_delays_clearing = 1660,
  SAEDelayStatusCancellation_delays_cleared = 1661,
  SAEDelayStatusCancellation_normal_services_resumed = 1662,
  SAEDelayStatusCancellation_operating = 1663,
};

extern const ASN1CType asn1_type_SAEDelayStatusCancellation[];

typedef int SAEDeviceStatus;

enum {
  SAEDeviceStatus_lane_control_signs_not_working = 2305,
  SAEDeviceStatus_lane_control_signs_working_incorrectly = 2306,
  SAEDeviceStatus_lane_control_signs_operating = 2307,
  SAEDeviceStatus_variable_message_signs_not_working = 2308,
  SAEDeviceStatus_variable_message_signs_working_incorrectly = 2309,
  SAEDeviceStatus_variable_message_signs_operating = 2310,
  SAEDeviceStatus_emergency_telephones_not_working = 2311,
  SAEDeviceStatus_emergency_telephone_number_not_working = 2312,
  SAEDeviceStatus_traffic_lights_not_working = 2313,
  SAEDeviceStatus_traffic_lights_working_incorrectly = 2314,
  SAEDeviceStatus_ramp_control_signals_not_working = 2315,
  SAEDeviceStatus_ramp_control_signals_working_incorrectly = 2316,
  SAEDeviceStatus_temporary_traffic_lights_not_working = 2317,
  SAEDeviceStatus_temporary_traffic_lights_working_incorrectly = 2318,
  SAEDeviceStatus_traffic_signal_control_computer_not_working = 2319,
  SAEDeviceStatus_traffic_signal_timings_changed = 2320,
  SAEDeviceStatus_overheight_warning_system_triggered = 2321,
  SAEDeviceStatus_equipment_failure = 2322,
  SAEDeviceStatus_railroad_crossing_equipment_failure = 2323,
  SAEDeviceStatus_tunnel_ventilation_not_working = 2324,
  SAEDeviceStatus_power_failure = 2325,
  SAEDeviceStatus_widespread_power_outages = 2326,
  SAEDeviceStatus_technical_problems = 2327,
  SAEDeviceStatus_sign_down = 2328,
  SAEDeviceStatus_lines_in_road_faded = 2329,
  SAEDeviceStatus_damaged_light_standard = 2330,
  SAEDeviceStatus_traffic_signal_stuck_on_flash = 2331,
  SAEDeviceStatus_guide_rail = 2332,
  SAEDeviceStatus_fencing = 2333,
  SAEDeviceStatus_light_standard_hanging_by_wires = 2334,
  SAEDeviceStatus_call_box = 2335,
  SAEDeviceStatus_signal_cabinet = 2336,
  SAEDeviceStatus_detector = 2337,
  SAEDeviceStatus_improper_use_of_State_vehicle_or_equipment = 2338,
  SAEDeviceStatus_bulb_out = 2339,
  SAEDeviceStatus_not_yet_operational = 2340,
  SAEDeviceStatus_not_yet_installed = 2341,
  SAEDeviceStatus_electronic_signs_repaired = 2428,
  SAEDeviceStatus_emergency_call_facilities_restored = 2429,
  SAEDeviceStatus_traffic_signals_repaired = 2430,
  SAEDeviceStatus_railroad_crossing_equipment_now_working_normally = 2431,
};

extern const ASN1CType asn1_type_SAEDeviceStatus[];

typedef int SAEDisasters;

enum {
  SAEDisasters_flash_flood = 3073,
  SAEDisasters_major_flood = 3074,
  SAEDisasters_reservoir_failure = 3075,
  SAEDisasters_levee_failure = 3076,
  SAEDisasters_tsunami = 3077,
  SAEDisasters_tidal_wave = 3078,
  SAEDisasters_volcanic_eruption = 3079,
  SAEDisasters_ash_fall = 3080,
  SAEDisasters_lava_flow = 3081,
  SAEDisasters_serious_fire = 3082,
  SAEDisasters_forest_fire = 3083,
  SAEDisasters_wildfire = 3084,
  SAEDisasters_building_fire = 3085,
  SAEDisasters_brush_fire = 3086,
  SAEDisasters_grass_fire = 3087,
  SAEDisasters_fire_danger_extreme = 3088,
  SAEDisasters_fire_danger_very_high = 3089,
  SAEDisasters_fire_danger_high = 3090,
  SAEDisasters_fire_danger_medium = 3091,
  SAEDisasters_fire_danger_low = 3092,
  SAEDisasters_earthquake_damage = 3093,
  SAEDisasters_air_crash = 3094,
  SAEDisasters_rail_crash = 3095,
  SAEDisasters_toxic_release = 3096,
  SAEDisasters_toxic_leak = 3097,
  SAEDisasters_radioactive_release = 3098,
  SAEDisasters_radiation_hazard = 3099,
  SAEDisasters_reactor_leakage = 3100,
  SAEDisasters_explosion = 3101,
  SAEDisasters_major_hazardous_materials_fire = 3102,
  SAEDisasters_major_hazardous_materials_release = 3103,
  SAEDisasters_disaster_cleared = 3199,
};

extern const ASN1CType asn1_type_SAEDisasters[];

typedef int SAEDisturbances;

enum {
  SAEDisturbances_assault = 3329,
  SAEDisturbances_crime = 3330,
  SAEDisturbances_robbery = 3331,
  SAEDisturbances_fare_dispute = 3332,
  SAEDisturbances_shooting = 3333,
  SAEDisturbances_gunfire_on_roadway = 3334,
  SAEDisturbances_suicide = 3335,
  SAEDisturbances_fight = 3336,
  SAEDisturbances_gang_fight = 3337,
  SAEDisturbances_person_harassment = 3338,
  SAEDisturbances_person_injured = 3339,
  SAEDisturbances_sick_customer = 3363,
  SAEDisturbances_unruly_passenger = 3340,
  SAEDisturbances_person_intoxicated = 3341,
  SAEDisturbances_crowd_control_problem = 3342,
  SAEDisturbances_demonstration = 3343,
  SAEDisturbances_march = 3344,
  SAEDisturbances_public_disturbance = 3345,
  SAEDisturbances_riot = 3346,
  SAEDisturbances_civil_unrest = 3347,
  SAEDisturbances_civil_emergency = 3348,
  SAEDisturbances_strike = 3349,
  SAEDisturbances_public_transit_strike = 3350,
  SAEDisturbances_stampede = 3351,
  SAEDisturbances_teargas_used = 3352,
  SAEDisturbances_security_alert = 3353,
  SAEDisturbances_security_incident = 3354,
  SAEDisturbances_checkpoint = 3355,
  SAEDisturbances_bomb_alert = 3356,
  SAEDisturbances_terrorist_incident = 3357,
  SAEDisturbances_high_velocity_shell_fire = 3358,
  SAEDisturbances_explosives_in_use = 3359,
  SAEDisturbances_air_raid = 3360,
  SAEDisturbances_weapons_of_mass_destruction_threat = 3361,
  SAEDisturbances_military_operations = 3362,
  SAEDisturbances_security_problem_cleared = 3454,
  SAEDisturbances_traffic_disturbance_cleared = 3455,
};

extern const ASN1CType asn1_type_SAEDisturbances[];

typedef int SAEGenericLocations;

enum {
  SAEGenericLocations_on_bridges = 7937,
  SAEGenericLocations_in_tunnels = 7938,
  SAEGenericLocations_entering_or_leaving_tunnels = 7939,
  SAEGenericLocations_on_ramps = 7940,
  SAEGenericLocations_in_road_construction_area = 7941,
  SAEGenericLocations_around_a_curve = 7942,
  SAEGenericLocations_on_curve = 8026,
  SAEGenericLocations_on_tracks = 8009,
  SAEGenericLocations_in_street = 8025,
  SAEGenericLocations_shoulder = 8027,
  SAEGenericLocations_on_minor_roads = 7943,
  SAEGenericLocations_in_the_opposing_lanes = 7944,
  SAEGenericLocations_adjacent_to_roadway = 7945,
  SAEGenericLocations_across_tracks = 8024,
  SAEGenericLocations_on_bend = 7946,
  SAEGenericLocations_intersection = 8032,
  SAEGenericLocations_entire_intersection = 7947,
  SAEGenericLocations_in_the_median = 7948,
  SAEGenericLocations_moved_to_side_of_road = 7949,
  SAEGenericLocations_moved_to_shoulder = 7950,
  SAEGenericLocations_on_the_roadway = 7951,
  SAEGenericLocations_dip = 8010,
  SAEGenericLocations_traffic_circle = 8011,
  SAEGenericLocations_crossover = 8028,
  SAEGenericLocations_cross_road = 8029,
  SAEGenericLocations_side_road = 8030,
  SAEGenericLocations_to = 8014,
  SAEGenericLocations_by = 8015,
  SAEGenericLocations_through = 8016,
  SAEGenericLocations_area_of = 8017,
  SAEGenericLocations_under = 8018,
  SAEGenericLocations_over = 8019,
  SAEGenericLocations_from = 8020,
  SAEGenericLocations_approaching = 8021,
  SAEGenericLocations_entering_at = 8022,
  SAEGenericLocations_exiting_at = 8023,
  SAEGenericLocations_in_shaded_areas = 7952,
  SAEGenericLocations_in_low_lying_areas = 7953,
  SAEGenericLocations_in_the_downtown_area = 7954,
  SAEGenericLocations_in_the_inner_city_area = 7955,
  SAEGenericLocations_in_parts = 7956,
  SAEGenericLocations_in_some_places = 7957,
  SAEGenericLocations_in_the_ditch = 7958,
  SAEGenericLocations_in_the_valley = 7959,
  SAEGenericLocations_on_hill_top = 7960,
  SAEGenericLocations_near_the_foothills = 7961,
  SAEGenericLocations_at_high_altitudes = 7962,
  SAEGenericLocations_near_the_lake = 7963,
  SAEGenericLocations_near_the_shore = 7964,
  SAEGenericLocations_nearby_basin = 8008,
  SAEGenericLocations_over_the_crest_of_a_hill = 7965,
  SAEGenericLocations_other_than_on_the_roadway = 7966,
  SAEGenericLocations_near_the_beach = 7967,
  SAEGenericLocations_near_beach_access_point = 7968,
  SAEGenericLocations_mountain_pass = 8006,
  SAEGenericLocations_lower_level = 7969,
  SAEGenericLocations_upper_level = 7970,
  SAEGenericLocations_coast = 8034,
  SAEGenericLocations_airport = 7971,
  SAEGenericLocations_concourse = 7972,
  SAEGenericLocations_gate = 7973,
  SAEGenericLocations_baggage_claim = 7974,
  SAEGenericLocations_customs_point = 7975,
  SAEGenericLocations_reservation_center = 8007,
  SAEGenericLocations_station = 7976,
  SAEGenericLocations_platform = 7977,
  SAEGenericLocations_dock = 7978,
  SAEGenericLocations_depot = 7979,
  SAEGenericLocations_ev_charging_point = 7980,
  SAEGenericLocations_information_welcome_point = 7981,
  SAEGenericLocations_at_rest_area = 7982,
  SAEGenericLocations_at_service_area = 7983,
  SAEGenericLocations_at_weigh_station = 7984,
  SAEGenericLocations_roadside_park = 8033,
  SAEGenericLocations_picnic_areas = 7985,
  SAEGenericLocations_rest_area = 7986,
  SAEGenericLocations_service_stations = 7987,
  SAEGenericLocations_toilets = 7988,
  SAEGenericLocations_bus_stop = 8031,
  SAEGenericLocations_park_and_ride_lot = 8012,
  SAEGenericLocations_on_the_right = 7989,
  SAEGenericLocations_on_the_left = 7990,
  SAEGenericLocations_in_the_center = 7991,
  SAEGenericLocations_in_the_opposite_direction = 7992,
  SAEGenericLocations_cross_traffic = 7993,
  SAEGenericLocations_northbound_traffic = 7994,
  SAEGenericLocations_eastbound_traffic = 7995,
  SAEGenericLocations_southbound_traffic = 7996,
  SAEGenericLocations_westbound_traffic = 7997,
  SAEGenericLocations_north = 7998,
  SAEGenericLocations_south = 7999,
  SAEGenericLocations_east = 8000,
  SAEGenericLocations_west = 8001,
  SAEGenericLocations_northeast = 8002,
  SAEGenericLocations_northwest = 8003,
  SAEGenericLocations_southeast = 8004,
  SAEGenericLocations_southwest = 8005,
};

extern const ASN1CType asn1_type_SAEGenericLocations[];

typedef int SAEIncidentResponseEquipment;

enum {
  SAEIncidentResponseEquipment_ground_fire_suppression = 9985,
  SAEIncidentResponseEquipment_heavy_ground_equipment = 9986,
  SAEIncidentResponseEquipment_aircraft = 9988,
  SAEIncidentResponseEquipment_marine_equipment = 9989,
  SAEIncidentResponseEquipment_support_equipment = 9990,
  SAEIncidentResponseEquipment_medical_rescue_unit = 9991,
  SAEIncidentResponseEquipment_other = 9993,
  SAEIncidentResponseEquipment_ground_fire_suppression_other = 9994,
  SAEIncidentResponseEquipment_engine = 9995,
  SAEIncidentResponseEquipment_truck_or_aerial = 9996,
  SAEIncidentResponseEquipment_quint = 9997,
  SAEIncidentResponseEquipment_tanker_pumper_combination = 9998,
  SAEIncidentResponseEquipment_brush_truck = 10000,
  SAEIncidentResponseEquipment_aircraft_rescue_firefighting = 10001,
  SAEIncidentResponseEquipment_heavy_ground_equipment_other = 10004,
  SAEIncidentResponseEquipment_dozer_or_plow = 10005,
  SAEIncidentResponseEquipment_tractor = 10006,
  SAEIncidentResponseEquipment_tanker_or_tender = 10008,
  SAEIncidentResponseEquipment_aircraft_other = 10024,
  SAEIncidentResponseEquipment_aircraft_fixed_wing_tanker = 10025,
  SAEIncidentResponseEquipment_helitanker = 10026,
  SAEIncidentResponseEquipment_helicopter = 10027,
  SAEIncidentResponseEquipment_marine_equipment_other = 10034,
  SAEIncidentResponseEquipment_fire_boat_with_pump = 10035,
  SAEIncidentResponseEquipment_boat_no_pump = 10036,
  SAEIncidentResponseEquipment_support_apparatus_other = 10044,
  SAEIncidentResponseEquipment_breathing_apparatus_support = 10045,
  SAEIncidentResponseEquipment_light_and_air_unit = 10046,
  SAEIncidentResponseEquipment_medical_rescue_unit_other = 10054,
  SAEIncidentResponseEquipment_rescue_unit = 10055,
  SAEIncidentResponseEquipment_urban_search_rescue_unit = 10056,
  SAEIncidentResponseEquipment_high_angle_rescue = 10057,
  SAEIncidentResponseEquipment_crash_fire_rescue = 10058,
  SAEIncidentResponseEquipment_bLS_unit = 10059,
  SAEIncidentResponseEquipment_aLS_unit = 10060,
  SAEIncidentResponseEquipment_mobile_command_post = 10075,
  SAEIncidentResponseEquipment_chief_officer_car = 10076,
  SAEIncidentResponseEquipment_hAZMAT_unit = 10077,
  SAEIncidentResponseEquipment_type_i_hand_crew = 10078,
  SAEIncidentResponseEquipment_type_ii_hand_crew = 10079,
  SAEIncidentResponseEquipment_privately_owned_vehicle = 10083,
  SAEIncidentResponseEquipment_other_apparatus_resource = 10084,
  SAEIncidentResponseEquipment_ambulance = 10085,
  SAEIncidentResponseEquipment_bomb_squad_van = 10086,
  SAEIncidentResponseEquipment_combine_harvester = 10087,
  SAEIncidentResponseEquipment_construction_vehicle = 10088,
  SAEIncidentResponseEquipment_farm_tractor = 10089,
  SAEIncidentResponseEquipment_grass_cutting_machines = 10090,
  SAEIncidentResponseEquipment_hAZMAT_containment_tow = 10091,
  SAEIncidentResponseEquipment_heavy_tow = 10092,
  SAEIncidentResponseEquipment_light_tow = 10094,
  SAEIncidentResponseEquipment_flatbed_tow = 10114,
  SAEIncidentResponseEquipment_hedge_cutting_machines = 10093,
  SAEIncidentResponseEquipment_mobile_crane = 10095,
  SAEIncidentResponseEquipment_refuse_collection_vehicle = 10096,
  SAEIncidentResponseEquipment_resurfacing_vehicle = 10097,
  SAEIncidentResponseEquipment_road_sweeper = 10098,
  SAEIncidentResponseEquipment_survey_crews = 10115,
  SAEIncidentResponseEquipment_roadside_litter_collection_crews = 10099,
  SAEIncidentResponseEquipment_salvage_vehicle = 10100,
  SAEIncidentResponseEquipment_sand_truck = 10101,
  SAEIncidentResponseEquipment_snowplow = 10102,
  SAEIncidentResponseEquipment_steam_roller = 10103,
  SAEIncidentResponseEquipment_swat_team_van = 10104,
  SAEIncidentResponseEquipment_track_laying_vehicle = 10105,
  SAEIncidentResponseEquipment_unknown_vehicle = 10106,
  SAEIncidentResponseEquipment_white_lining_vehicle = 10107,
  SAEIncidentResponseEquipment_dump_truck = 10108,
  SAEIncidentResponseEquipment_supervisor_vehicle = 10109,
  SAEIncidentResponseEquipment_snow_blower = 10110,
  SAEIncidentResponseEquipment_rotary_snow_blower = 10111,
  SAEIncidentResponseEquipment_road_grader = 10112,
  SAEIncidentResponseEquipment_steam_truck = 10113,
};

extern const ASN1CType asn1_type_SAEIncidentResponseEquipment[];

typedef int SAEIncidentResponseStatus;

enum {
  SAEIncidentResponseStatus_unconfirmed_report = 2817,
  SAEIncidentResponseStatus_initial_response_en_route = 2818,
  SAEIncidentResponseStatus_follow_up_response_en_route = 2819,
  SAEIncidentResponseStatus_initial_response_on_scene = 2820,
  SAEIncidentResponseStatus_follow_up_response_on_scene = 2821,
  SAEIncidentResponseStatus_confirmed_report = 2822,
  SAEIncidentResponseStatus_scene_is_unsecured_at_this_time = 2823,
  SAEIncidentResponseStatus_response_scene_secured = 2824,
  SAEIncidentResponseStatus_rescue_and_recovery_work_in_progress = 2825,
  SAEIncidentResponseStatus_extraction_in_progress = 2826,
  SAEIncidentResponseStatus_clearance_work_in_progress = 2827,
  SAEIncidentResponseStatus_body_removal_operations = 2828,
  SAEIncidentResponseStatus_fire_containment_contained = 2829,
  SAEIncidentResponseStatus_fire_containment_not_contained = 2830,
  SAEIncidentResponseStatus_event_cleared = 2831,
  SAEIncidentResponseStatus_traffic_clearing = 2832,
  SAEIncidentResponseStatus_incident_closed = 2833,
};

extern const ASN1CType asn1_type_SAEIncidentResponseStatus[];

typedef int SAESystemInformation;

enum {
  SAESystemInformation_information_available_on_radio = 4353,
  SAESystemInformation_information_available_on_TV = 4354,
  SAESystemInformation_call_to_get_information = 4355,
  SAESystemInformation_information_available_via_Internet = 4356,
  SAESystemInformation_test_message = 4357,
  SAESystemInformation_no_information_available = 4358,
  SAESystemInformation_null_description = 4359,
  SAESystemInformation_police_assistance = 4361,
  SAESystemInformation_police_monitor_CB = 4362,
  SAESystemInformation_emergency_notification = 4363,
  SAESystemInformation_in_emergency_dial_911 = 4364,
  SAESystemInformation_travel_Info_call_511 = 4365,
  SAESystemInformation_car_pool_information = 4366,
  SAESystemInformation_information_service_resumed = 4478,
  SAESystemInformation_information_service_is_being_suspended = 4360,
  SAESystemInformation_message_canceled = 4479,
};

extern const ASN1CType asn1_type_SAESystemInformation[];

typedef int SAEAdviceInstructionsMandatory;

enum {
  SAEAdviceInstructionsMandatory_keep_to_the_right = 7425,
  SAEAdviceInstructionsMandatory_keep_to_the_left = 7426,
  SAEAdviceInstructionsMandatory_use_right_lane = 7427,
  SAEAdviceInstructionsMandatory_use_left_lane = 7428,
  SAEAdviceInstructionsMandatory_stay_in_lane = 7450,
  SAEAdviceInstructionsMandatory_merge = 7451,
  SAEAdviceInstructionsMandatory_heavy_vehicles_use_right_lane = 7429,
  SAEAdviceInstructionsMandatory_heavy_vehicles_use_left_lane = 7430,
  SAEAdviceInstructionsMandatory_observe_signals = 7431,
  SAEAdviceInstructionsMandatory_observe_signs = 7432,
  SAEAdviceInstructionsMandatory_no_passing = 7433,
  SAEAdviceInstructionsMandatory_no_smoking = 7434,
  SAEAdviceInstructionsMandatory_no_open_flames = 7435,
  SAEAdviceInstructionsMandatory_use_shoulder_as_lane = 7436,
  SAEAdviceInstructionsMandatory_do_not_drive_on_the_shoulder = 7437,
  SAEAdviceInstructionsMandatory_allow_emergency_vehicles_to_pass = 7438,
  SAEAdviceInstructionsMandatory_clear_a_lane_for_emergency_vehicles = 7439,
  SAEAdviceInstructionsMandatory_pull_over_to_the_edge_of_the_roadway = 7440,
  SAEAdviceInstructionsMandatory_wait_for_escort_vehicle = 7441,
  SAEAdviceInstructionsMandatory_in_emergency_wait_for_police_patrol = 7442,
  SAEAdviceInstructionsMandatory_reduce_your_speed = 7443,
  SAEAdviceInstructionsMandatory_observe_speed_limits = 7444,
  SAEAdviceInstructionsMandatory_check_point = 7445,
  SAEAdviceInstructionsMandatory_entry_requirements = 7446,
  SAEAdviceInstructionsMandatory_insurance_requirements = 7447,
  SAEAdviceInstructionsMandatory_firearms_requirements = 7448,
  SAEAdviceInstructionsMandatory_pet_requirements = 7449,
  SAEAdviceInstructionsMandatory_slower_traffic_keep_right = 7452,
  SAEAdviceInstructionsMandatory_keep_off = 7453,
  SAEAdviceInstructionsMandatory_evacuate_area_immediately = 7454,
  SAEAdviceInstructionsMandatory_shoulder_travel_no_longer_allowed = 7547,
};

extern const ASN1CType asn1_type_SAEAdviceInstructionsMandatory[];

typedef int SAEAdviceInstructionsRecommendations;

enum {
  SAEAdviceInstructionsRecommendations_drive_carefully = 7169,
  SAEAdviceInstructionsRecommendations_drive_with_extreme_caution = 7170,
  SAEAdviceInstructionsRecommendations_approach_with_care = 7171,
  SAEAdviceInstructionsRecommendations_keep_your_distance = 7172,
  SAEAdviceInstructionsRecommendations_increase_normal_following_distance = 7173,
  SAEAdviceInstructionsRecommendations_test_your_brakes = 7174,
  SAEAdviceInstructionsRecommendations_cross_intersection_with_care = 7175,
  SAEAdviceInstructionsRecommendations_pass_with_care = 7176,
  SAEAdviceInstructionsRecommendations_pass = 7200,
  SAEAdviceInstructionsRecommendations_use_low_beam_headlights = 7177,
  SAEAdviceInstructionsRecommendations_use_fog_lights = 7178,
  SAEAdviceInstructionsRecommendations_use_hazard_warning_lights = 7179,
  SAEAdviceInstructionsRecommendations_do_not_leave_your_vehicle = 7180,
  SAEAdviceInstructionsRecommendations_leave_your_vehicle_and_proceed_to_next_safe_place = 7181,
  SAEAdviceInstructionsRecommendations_turn_off_engine = 7182,
  SAEAdviceInstructionsRecommendations_close_all_windows_turn_off_heater_air_conditioner_and_vents = 7183,
  SAEAdviceInstructionsRecommendations_turn_off_air_conditioner_to_prevent_engine_overheating = 7184,
  SAEAdviceInstructionsRecommendations_turn_off_mobile_phones_and_two_way_radios = 7185,
  SAEAdviceInstructionsRecommendations_prepare_to_stop = 7186,
  SAEAdviceInstructionsRecommendations_be_prepared_to_stop = 7201,
  SAEAdviceInstructionsRecommendations_stop_at_next_rest_area = 7187,
  SAEAdviceInstructionsRecommendations_stop_at_next_safe_place = 7188,
  SAEAdviceInstructionsRecommendations_only_travel_if_absolutely_necessary = 7189,
  SAEAdviceInstructionsRecommendations_drive_to_another_service_area = 7190,
  SAEAdviceInstructionsRecommendations_use_through_traffic_lanes = 7191,
  SAEAdviceInstructionsRecommendations_use_local_traffic_lanes = 7192,
  SAEAdviceInstructionsRecommendations_use_left_hand_parallel_roadway = 7193,
  SAEAdviceInstructionsRecommendations_use_right_hand_parallel_roadway = 7194,
  SAEAdviceInstructionsRecommendations_use_heavy_vehicle_lane = 7195,
  SAEAdviceInstructionsRecommendations_observe_recommended_speed = 7196,
  SAEAdviceInstructionsRecommendations_signals_sequenced_for_speed = 7202,
  SAEAdviceInstructionsRecommendations_maintain_top_safe_speed = 7203,
  SAEAdviceInstructionsRecommendations_facing_traffic = 7197,
  SAEAdviceInstructionsRecommendations_push_button = 7198,
  SAEAdviceInstructionsRecommendations_to_cross_street = 7199,
  SAEAdviceInstructionsRecommendations_evacuate_area_voluntarily = 7204,
  SAEAdviceInstructionsRecommendations_shelter_in_place = 7205,
};

extern const ASN1CType asn1_type_SAEAdviceInstructionsRecommendations[];

typedef ASN1String SAEITIStxt;

extern const ASN1CType asn1_type_SAEITIStxt[];

typedef int SAEITISgroups;

enum {
  SAEITISgroups_trafficConditions = 1,
  SAEITISgroups_accidentsAndIncidents = 2,
  SAEITISgroups_closures = 3,
  SAEITISgroups_roadwork = 4,
  SAEITISgroups_obstruction = 5,
  SAEITISgroups_delayStatusCancellation = 6,
  SAEITISgroups_unusualDriving = 7,
  SAEITISgroups_mobileSituation = 8,
  SAEITISgroups_deviceStatus = 9,
  SAEITISgroups_restrictionClass = 10,
  SAEITISgroups_incidentResponseStatus = 11,
  SAEITISgroups_disasters = 12,
  SAEITISgroups_disturbances = 13,
  SAEITISgroups_sportingEvents = 14,
  SAEITISgroups_specialEvents = 15,
  SAEITISgroups_parkingInformation = 16,
  SAEITISgroups_systemInformation = 17,
  SAEITISgroups_weatherConditions = 18,
  SAEITISgroups_precipitation = 19,
  SAEITISgroups_winds = 20,
  SAEITISgroups_visibilityAndAirQuality = 21,
  SAEITISgroups_temperature = 22,
  SAEITISgroups_pavementConditions = 23,
  SAEITISgroups_winterDrivingRestrictions = 24,
  SAEITISgroups_winterDrivingIndex = 25,
  SAEITISgroups_suggestionAdvice = 26,
  SAEITISgroups_warningAdvice = 27,
  SAEITISgroups_adviceInstructionsRecommendations = 28,
  SAEITISgroups_adviceInstructionsMandatory = 29,
  SAEITISgroups_qualifiers = 30,
  SAEITISgroups_genericLocations = 31,
  SAEITISgroups_laneRoadway = 32,
  SAEITISgroups_alternateRoute = 33,
  SAEITISgroups_units = 34,
  SAEITISgroups_transitMode = 35,
  SAEITISgroups_vehicleGroupAffected = 36,
  SAEITISgroups_travelerGroupAffected = 37,
  SAEITISgroups_responderGroupAffected = 38,
  SAEITISgroups_incidentResponseEquipment = 39,
  SAEITISgroups_assetStatus = 40,
  SAEITISgroups_roadsideAssets = 41,
  SAEITISgroups_transitOperations = 42,
  SAEITISgroups_objects = 43,
  SAEITISgroups_validManeuvers = 44,
  SAEITISgroups_largeNumbers = 45,
  SAEITISgroups_namedObjects = 46,
  SAEITISgroups_recreationalObjectsAndActivities = 47,
  SAEITISgroups_regulatoryAndWarningSigns = 48,
  SAEITISgroups_smallNumbers = 49,
  SAEITISgroups_states = 50,
  SAEITISgroups_structures = 51,
  SAEITISgroups_streetSuffixes = 52,
  SAEITISgroups_mUTCDLocations = 53,
};

extern const ASN1CType asn1_type_SAEITISgroups[];

typedef int SAEITIScode;

enum {
  SAEITIScode_stopped_traffic = 257,
  SAEITIScode_stop_and_go_traffic = 258,
  SAEITIScode_slow_traffic = 259,
  SAEITIScode_heavy_traffic = 260,
  SAEITIScode_traffic_building = 261,
  SAEITIScode_long_queues = 262,
  SAEITIScode_traffic_congestion = 263,
  SAEITIScode_traffic_lighter_than_normal = 264,
  SAEITIScode_traffic_heavier_than_normal = 265,
  SAEITIScode_traffic_much_heavier_than_normal = 266,
  SAEITIScode_current_speed = 267,
  SAEITIScode_speed_limit = 268,
  SAEITIScode_travel_time = 269,
  SAEITIScode_merging_traffic = 272,
  SAEITIScode_contraflow = 273,
  SAEITIScode_contraflow_canceled = 378,
  SAEITIScode_traffic_flowing_freely = 379,
  SAEITIScode_traffic_easing = 380,
  SAEITIScode_traffic_returned_to_normal = 381,
  SAEITIScode_no_problems_to_report = 382,
  SAEITIScode_traffic_congestion_cleared = 383,
  SAEITIScode_accident = 513,
  SAEITIScode_serious_accident = 514,
  SAEITIScode_injury_accident = 515,
  SAEITIScode_minor_accident = 516,
  SAEITIScode_multi_vehicle_accident = 517,
  SAEITIScode_numerous_accidents = 518,
  SAEITIScode_accident_involving_a_bicycle = 519,
  SAEITIScode_accident_involving_a_bus = 520,
  SAEITIScode_accident_involving_a_motorcycle = 521,
  SAEITIScode_accident_involving_a_pedestrian = 522,
  SAEITIScode_accident_involving_a_train = 523,
  SAEITIScode_accident_involving_a_truck = 524,
  SAEITIScode_accident_involving_a_semi_trailer = 562,
  SAEITIScode_accident_involving_hazardous_materials = 525,
  SAEITIScode_earlier_accident = 526,
  SAEITIScode_medical_emergency = 527,
  SAEITIScode_secondary_accident = 528,
  SAEITIScode_rescue_and_recovery_work_REMOVED = 529,
  SAEITIScode_accident_investigation_work = 530,
  SAEITIScode_incident = 531,
  SAEITIScode_stalled_vehicle = 532,
  SAEITIScode_abandoned_vehicle = 533,
  SAEITIScode_disabled_vehicle = 534,
  SAEITIScode_disabled_truck = 535,
  SAEITIScode_disabled_semi_trailer = 536,
  SAEITIScode_disabled_bus = 537,
  SAEITIScode_disabled_train = 538,
  SAEITIScode_vehicle_spun_out = 539,
  SAEITIScode_vehicle_on_fire = 540,
  SAEITIScode_vehicle_in_water = 541,
  SAEITIScode_vehicles_slowing_to_look_at_accident = 542,
  SAEITIScode_jackknifed_semi_trailer = 543,
  SAEITIScode_jackknifed_trailer_home = 544,
  SAEITIScode_jackknifed_trailer = 545,
  SAEITIScode_spillage_occurring_from_moving_vehicle = 546,
  SAEITIScode_acid_spill = 547,
  SAEITIScode_chemical_spill = 548,
  SAEITIScode_fuel_spill = 549,
  SAEITIScode_hazardous_materials_spill = 550,
  SAEITIScode_oil_spill = 551,
  SAEITIScode_spilled_load = 552,
  SAEITIScode_toxic_spill = 553,
  SAEITIScode_overturned_vehicle = 554,
  SAEITIScode_overturned_truck = 555,
  SAEITIScode_overturned_semi_trailer = 556,
  SAEITIScode_overturned_bus = 557,
  SAEITIScode_derailed_train = 558,
  SAEITIScode_stuck_vehicle = 559,
  SAEITIScode_truck_stuck_under_bridge = 560,
  SAEITIScode_bus_stuck_under_bridge = 561,
  SAEITIScode_accident_cleared = 638,
  SAEITIScode_incident_cleared = 639,
  SAEITIScode_closed_to_traffic = 769,
  SAEITIScode_closed = 770,
  SAEITIScode_closed_ahead = 771,
  SAEITIScode_closed_intermittently = 772,
  SAEITIScode_closed_for_repairs = 773,
  SAEITIScode_closed_for_the_season = 774,
  SAEITIScode_blocked = 775,
  SAEITIScode_blocked_ahead = 776,
  SAEITIScode_reduced_to_one_lane = 777,
  SAEITIScode_reduced_to_two_lanes = 778,
  SAEITIScode_reduced_to_three_lanes = 779,
  SAEITIScode_collapse = 780,
  SAEITIScode_out = 781,
  SAEITIScode_open_to_traffic = 891,
  SAEITIScode_open = 892,
  SAEITIScode_reopened_to_traffic = 893,
  SAEITIScode_clearing = 894,
  SAEITIScode_cleared_from_road = 895,
  SAEITIScode_road_construction = 1025,
  SAEITIScode_major_road_construction = 1026,
  SAEITIScode_long_term_road_construction = 1027,
  SAEITIScode_construction_work = 1028,
  SAEITIScode_paving_operations = 1029,
  SAEITIScode_work_in_the_median = 1030,
  SAEITIScode_road_reconstruction = 1031,
  SAEITIScode_opposing_traffic = 1032,
  SAEITIScode_narrow_lanes = 1033,
  SAEITIScode_construction_traffic_merging = 1034,
  SAEITIScode_single_line_traffic_alternating_directions = 1035,
  SAEITIScode_road_maintenance_operations = 1036,
  SAEITIScode_road_marking_operations = 1037,
  SAEITIScode_road_widening = 1061,
  SAEITIScode_cracks = 1052,
  SAEITIScode_crack_REMOVE = 1058,
  SAEITIScode_bumps = 1053,
  SAEITIScode_drop_off = 1059,
  SAEITIScode_storm_drain = 1054,
  SAEITIScode_bridge_maintenance_operations = 1038,
  SAEITIScode_bridge_construction = 1039,
  SAEITIScode_bridge_demolition_work = 1040,
  SAEITIScode_seismic_retrofit = 1060,
  SAEITIScode_overgrown_grass = 1055,
  SAEITIScode_overgrown_brushshrubs = 1056,
  SAEITIScode_overgrown_trees = 1057,
  SAEITIScode_blasting = 1041,
  SAEITIScode_avalanche_control_activities = 1042,
  SAEITIScode_water_main_work = 1043,
  SAEITIScode_gas_main_work = 1044,
  SAEITIScode_work_on_underground_cables = 1045,
  SAEITIScode_work_on_underground_services = 1046,
  SAEITIScode_new_road_construction_layout = 1047,
  SAEITIScode_new_road_layout = 1048,
  SAEITIScode_temporary_lane_markings = 1049,
  SAEITIScode_temporary_traffic_lights = 1050,
  SAEITIScode_emergency_maintenance = 1051,
  SAEITIScode_utility_work = 1062,
  SAEITIScode_road_maintenance_cleared = 1146,
  SAEITIScode_normal_road_layout_restored = 1147,
  SAEITIScode_road_work_clearance_in_progress = 1148,
  SAEITIScode_road_construction_cleared = 1149,
  SAEITIScode_normal_traffic_lanes_restored = 1150,
  SAEITIScode_road_work_cleared = 1151,
  SAEITIScode_obstruction_on_roadway = 1281,
  SAEITIScode_object_on_roadway = 1282,
  SAEITIScode_objects_falling_from_moving_vehicle = 1283,
  SAEITIScode_debris_on_roadway = 1284,
  SAEITIScode_storm_damage = 1285,
  SAEITIScode_people_on_roadway = 1286,
  SAEITIScode_bicyclists_on_roadway = 1287,
  SAEITIScode_sightseers_obstructing_access = 1288,
  SAEITIScode_large_numbers_of_visitors = 1289,
  SAEITIScode_animal_on_roadway = 1290,
  SAEITIScode_large_animal_on_roadway = 1291,
  SAEITIScode_herd_of_animals_on_roadway = 1292,
  SAEITIScode_animal_struck = 1293,
  SAEITIScode_advertising_signs = 1315,
  SAEITIScode_fallen_trees = 1294,
  SAEITIScode_over_turned_trees = 1311,
  SAEITIScode_tree_limbs = 1312,
  SAEITIScode_utility_pole_down = 1314,
  SAEITIScode_downed_power_lines = 1295,
  SAEITIScode_downed_cables = 1296,
  SAEITIScode_subsidence = 1297,
  SAEITIScode_road_surface_collapse = 1298,
  SAEITIScode_frost_jacking = 1317,
  SAEITIScode_frost_heave = 1316,
  SAEITIScode_pavement_buckled = 1299,
  SAEITIScode_pothole = 1300,
  SAEITIScode_flooding = 1301,
  SAEITIScode_broken_water_main = 1302,
  SAEITIScode_collapsed_sewer = 1303,
  SAEITIScode_wash_out = 1319,
  SAEITIScode_washboard = 1318,
  SAEITIScode_sewer_overflow = 1304,
  SAEITIScode_gas_leak = 1305,
  SAEITIScode_snowmelt = 1306,
  SAEITIScode_mudslide = 1307,
  SAEITIScode_avalanche = 1308,
  SAEITIScode_rockfall = 1309,
  SAEITIScode_landslide = 1310,
  SAEITIScode_clearance_work = 1406,
  SAEITIScode_obstruction_cleared = 1407,
  SAEITIScode_delays = 1537,
  SAEITIScode_short_delays = 1538,
  SAEITIScode_long_delays = 1539,
  SAEITIScode_very_long_delays = 1540,
  SAEITIScode_delays_of_uncertain_duration = 1541,
  SAEITIScode_delayed_until_further_notice = 1542,
  SAEITIScode_busy = 1543,
  SAEITIScode_very_busy = 1544,
  SAEITIScode_crowded = 1545,
  SAEITIScode_overcrowded = 1546,
  SAEITIScode_cancellations = 1547,
  SAEITIScode_route_canceled_and_no_replacement = 1548,
  SAEITIScode_service_canceled = 1549,
  SAEITIScode_service_suspended = 1550,
  SAEITIScode_service_withdrawn = 1551,
  SAEITIScode_service_fully_booked = 1552,
  SAEITIScode_all_services_fully_booked = 1553,
  SAEITIScode_next_departure = 1554,
  SAEITIScode_next_arrival = 1555,
  SAEITIScode_very_frequent_service = 1556,
  SAEITIScode_frequent_service = 1557,
  SAEITIScode_fairly_frequent_service = 1558,
  SAEITIScode_regular_service = 1559,
  SAEITIScode_irregular_service = 1560,
  SAEITIScode_not_operating = 1561,
  SAEITIScode_system_busy = 1562,
  SAEITIScode_system_very_busy = 1563,
  SAEITIScode_system_crowded = 1564,
  SAEITIScode_system_overcrowded = 1565,
  SAEITIScode_deleted_travel_time = 1566,
  SAEITIScode_headway = 1567,
  SAEITIScode_extra_services_in_operation = 1568,
  SAEITIScode_delays_clearing = 1660,
  SAEITIScode_delays_cleared = 1661,
  SAEITIScode_normal_services_resumed = 1662,
  SAEITIScode_operating = 1663,
  SAEITIScode_vehicle_traveling_wrong_way = 1793,
  SAEITIScode_reckless_driver = 1794,
  SAEITIScode_prohibited_vehicle_on_roadway = 1795,
  SAEITIScode_emergency_vehicles_on_roadway = 1796,
  SAEITIScode_high_speed_emergency_vehicles = 1797,
  SAEITIScode_high_speed_chase = 1798,
  SAEITIScode_dangerous_vehicle_warning_cleared = 1918,
  SAEITIScode_emergency_vehicle_warning_cleared = 1919,
  SAEITIScode_abnormal_load = 2049,
  SAEITIScode_wide_load = 2050,
  SAEITIScode_long_load = 2051,
  SAEITIScode_slow_vehicle = 2052,
  SAEITIScode_farm_equipment = 2053,
  SAEITIScode_horse_drawn_vehicles = 2054,
  SAEITIScode_overheight_load = 2055,
  SAEITIScode_overweight_load = 2056,
  SAEITIScode_tracked_vehicle = 2057,
  SAEITIScode_vehicle_carrying_hazardous_materials = 2058,
  SAEITIScode_slow_moving_maintenance_vehicle = 2059,
  SAEITIScode_convoy = 2060,
  SAEITIScode_military_convoy = 2061,
  SAEITIScode_refugee_convoy = 2062,
  SAEITIScode_motorcade = 2063,
  SAEITIScode_mobile_situation_repositioning = 2064,
  SAEITIScode_winter_maintenance_vehicles = 2065,
  SAEITIScode_snowplows = 2066,
  SAEITIScode_slow_moving_maintenance_vehicle_warning_cleared = 2172,
  SAEITIScode_exceptional_load_warning_cleared = 2173,
  SAEITIScode_hazardous_load_warning_cleared = 2174,
  SAEITIScode_convoy_cleared = 2175,
  SAEITIScode_lane_control_signs_not_working = 2305,
  SAEITIScode_lane_control_signs_working_incorrectly = 2306,
  SAEITIScode_lane_control_signs_operating = 2307,
  SAEITIScode_variable_message_signs_not_working = 2308,
  SAEITIScode_variable_message_signs_working_incorrectly = 2309,
  SAEITIScode_variable_message_signs_operating = 2310,
  SAEITIScode_emergency_telephones_not_working = 2311,
  SAEITIScode_emergency_telephone_number_not_working = 2312,
  SAEITIScode_traffic_lights_not_working = 2313,
  SAEITIScode_traffic_lights_working_incorrectly = 2314,
  SAEITIScode_ramp_control_signals_not_working = 2315,
  SAEITIScode_ramp_control_signals_working_incorrectly = 2316,
  SAEITIScode_temporary_traffic_lights_not_working = 2317,
  SAEITIScode_temporary_traffic_lights_working_incorrectly = 2318,
  SAEITIScode_traffic_signal_control_computer_not_working = 2319,
  SAEITIScode_traffic_signal_timings_changed = 2320,
  SAEITIScode_overheight_warning_system_triggered = 2321,
  SAEITIScode_equipment_failure = 2322,
  SAEITIScode_railroad_crossing_equipment_failure = 2323,
  SAEITIScode_tunnel_ventilation_not_working = 2324,
  SAEITIScode_power_failure = 2325,
  SAEITIScode_widespread_power_outages = 2326,
  SAEITIScode_technical_problems = 2327,
  SAEITIScode_sign_down = 2328,
  SAEITIScode_lines_in_road_faded = 2329,
  SAEITIScode_damaged_light_standard = 2330,
  SAEITIScode_traffic_signal_stuck_on_flash = 2331,
  SAEITIScode_guide_rail = 2332,
  SAEITIScode_fencing = 2333,
  SAEITIScode_light_standard_hanging_by_wires = 2334,
  SAEITIScode_call_box = 2335,
  SAEITIScode_signal_cabinet = 2336,
  SAEITIScode_detector = 2337,
  SAEITIScode_improper_use_of_State_vehicle_or_equipment = 2338,
  SAEITIScode_bulb_out = 2339,
  SAEITIScode_not_yet_operational = 2340,
  SAEITIScode_not_yet_installed = 2341,
  SAEITIScode_electronic_signs_repaired = 2428,
  SAEITIScode_emergency_call_facilities_restored = 2429,
  SAEITIScode_traffic_signals_repaired = 2430,
  SAEITIScode_railroad_crossing_equipment_now_working_normally = 2431,
  SAEITIScode_restrictions = 2561,
  SAEITIScode_ramp_restrictions = 2562,
  SAEITIScode_truck_restriction = 2563,
  SAEITIScode_speed_restriction = 2564,
  SAEITIScode_noise_restriction = 2565,
  SAEITIScode_traffic_regulations_have_been_changed = 2566,
  SAEITIScode_local_access_only = 2567,
  SAEITIScode_no_trailers = 2568,
  SAEITIScode_no_high_profile_vehicles = 2569,
  SAEITIScode_hazardous_materials_truck_restriction = 2570,
  SAEITIScode_no_through_traffic = 2571,
  SAEITIScode_no_motor_vehicles = 2572,
  SAEITIScode_width_limit = 2573,
  SAEITIScode_height_limit = 2574,
  SAEITIScode_length_limit = 2575,
  SAEITIScode_axle_load_limit = 2576,
  SAEITIScode_gross_weight_limit = 2577,
  SAEITIScode_axle_count_limit = 2578,
  SAEITIScode_carpool_lane_available = 2579,
  SAEITIScode_carpool_restrictions_changed = 2580,
  SAEITIScode_hOV_2_no_single_occupant_vehicles = 2581,
  SAEITIScode_hOV_3_no_vehicles_with_less_than_three_occupants = 2582,
  SAEITIScode_bus_lane_available_for_all_vehicles = 2583,
  SAEITIScode_truck_lane_available_for_all_vehicles = 2584,
  SAEITIScode_permits_call_in_basis = 2585,
  SAEITIScode_permits_temporarily_closed = 2586,
  SAEITIScode_permits_closed = 2587,
  SAEITIScode_road_use_permits_required = 2588,
  SAEITIScode_permits_open = 2675,
  SAEITIScode_restrictions_for_high_profile_vehicles_lifted = 2676,
  SAEITIScode_width_limit_lifted = 2677,
  SAEITIScode_height_limit_lifted = 2678,
  SAEITIScode_length_limit_lifted = 2679,
  SAEITIScode_axle_load_limit_lifted = 2680,
  SAEITIScode_weight_limit_lifted = 2681,
  SAEITIScode_axle_count_limit_lifted = 2682,
  SAEITIScode_carpool_restrictions_lifted = 2683,
  SAEITIScode_lane_restrictions_lifted = 2684,
  SAEITIScode_ramp_restrictions_lifted = 2685,
  SAEITIScode_motor_vehicle_restrictions_lifted = 2686,
  SAEITIScode_restrictions_lifted = 2687,
  SAEITIScode_unconfirmed_report = 2817,
  SAEITIScode_initial_response_en_route = 2818,
  SAEITIScode_follow_up_response_en_route = 2819,
  SAEITIScode_initial_response_on_scene = 2820,
  SAEITIScode_follow_up_response_on_scene = 2821,
  SAEITIScode_confirmed_report = 2822,
  SAEITIScode_scene_is_unsecured_at_this_time = 2823,
  SAEITIScode_response_scene_secured = 2824,
  SAEITIScode_rescue_and_recovery_work_in_progress = 2825,
  SAEITIScode_extraction_in_progress = 2826,
  SAEITIScode_clearance_work_in_progress = 2827,
  SAEITIScode_body_removal_operations = 2828,
  SAEITIScode_fire_containment_contained = 2829,
  SAEITIScode_fire_containment_not_contained = 2830,
  SAEITIScode_event_cleared = 2831,
  SAEITIScode_traffic_clearing = 2832,
  SAEITIScode_incident_closed = 2833,
  SAEITIScode_flash_flood = 3073,
  SAEITIScode_major_flood = 3074,
  SAEITIScode_reservoir_failure = 3075,
  SAEITIScode_levee_failure = 3076,
  SAEITIScode_tsunami = 3077,
  SAEITIScode_tidal_wave = 3078,
  SAEITIScode_volcanic_eruption = 3079,
  SAEITIScode_ash_fall = 3080,
  SAEITIScode_lava_flow = 3081,
  SAEITIScode_serious_fire = 3082,
  SAEITIScode_forest_fire = 3083,
  SAEITIScode_wildfire = 3084,
  SAEITIScode_building_fire = 3085,
  SAEITIScode_brush_fire = 3086,
  SAEITIScode_grass_fire = 3087,
  SAEITIScode_fire_danger_extreme = 3088,
  SAEITIScode_fire_danger_very_high = 3089,
  SAEITIScode_fire_danger_high = 3090,
  SAEITIScode_fire_danger_medium = 3091,
  SAEITIScode_fire_danger_low = 3092,
  SAEITIScode_earthquake_damage = 3093,
  SAEITIScode_air_crash = 3094,
  SAEITIScode_rail_crash = 3095,
  SAEITIScode_toxic_release = 3096,
  SAEITIScode_toxic_leak = 3097,
  SAEITIScode_radioactive_release = 3098,
  SAEITIScode_radiation_hazard = 3099,
  SAEITIScode_reactor_leakage = 3100,
  SAEITIScode_explosion = 3101,
  SAEITIScode_major_hazardous_materials_fire = 3102,
  SAEITIScode_major_hazardous_materials_release = 3103,
  SAEITIScode_disaster_cleared = 3199,
  SAEITIScode_assault = 3329,
  SAEITIScode_crime = 3330,
  SAEITIScode_robbery = 3331,
  SAEITIScode_fare_dispute = 3332,
  SAEITIScode_shooting = 3333,
  SAEITIScode_gunfire_on_roadway = 3334,
  SAEITIScode_suicide = 3335,
  SAEITIScode_fight = 3336,
  SAEITIScode_gang_fight = 3337,
  SAEITIScode_person_harassment = 3338,
  SAEITIScode_person_injured = 3339,
  SAEITIScode_sick_customer = 3363,
  SAEITIScode_unruly_passenger = 3340,
  SAEITIScode_person_intoxicated = 3341,
  SAEITIScode_crowd_control_problem = 3342,
  SAEITIScode_demonstration = 3343,
  SAEITIScode_march = 3344,
  SAEITIScode_public_disturbance = 3345,
  SAEITIScode_riot = 3346,
  SAEITIScode_civil_unrest = 3347,
  SAEITIScode_civil_emergency = 3348,
  SAEITIScode_strike = 3349,
  SAEITIScode_public_transit_strike = 3350,
  SAEITIScode_stampede = 3351,
  SAEITIScode_teargas_used = 3352,
  SAEITIScode_security_alert = 3353,
  SAEITIScode_security_incident = 3354,
  SAEITIScode_checkpoint = 3355,
  SAEITIScode_bomb_alert = 3356,
  SAEITIScode_terrorist_incident = 3357,
  SAEITIScode_high_velocity_shell_fire = 3358,
  SAEITIScode_explosives_in_use = 3359,
  SAEITIScode_air_raid = 3360,
  SAEITIScode_weapons_of_mass_destruction_threat = 3361,
  SAEITIScode_military_operations = 3362,
  SAEITIScode_security_problem_cleared = 3454,
  SAEITIScode_traffic_disturbance_cleared = 3455,
  SAEITIScode_sports_event = 3585,
  SAEITIScode_game = 3586,
  SAEITIScode_tournament = 3587,
  SAEITIScode_track_and_field_event = 3588,
  SAEITIScode_baseball_game = 3589,
  SAEITIScode_basketball_game = 3590,
  SAEITIScode_boxing_match = 3591,
  SAEITIScode_football_game = 3592,
  SAEITIScode_soccer_game = 3593,
  SAEITIScode_golf_tournament = 3594,
  SAEITIScode_hockey_game = 3595,
  SAEITIScode_tennis_tournament = 3596,
  SAEITIScode_wrestling_match = 3597,
  SAEITIScode_road_race = 3598,
  SAEITIScode_automobile_race = 3599,
  SAEITIScode_bicycle_race = 3600,
  SAEITIScode_race_event = 3601,
  SAEITIScode_marathon = 3602,
  SAEITIScode_horse_show = 3603,
  SAEITIScode_rodeo = 3604,
  SAEITIScode_water_sports_event = 3605,
  SAEITIScode_winter_sports_event = 3606,
  SAEITIScode_skating_event = 3607,
  SAEITIScode_dog_sled_race = 3608,
  SAEITIScode_sporting_event_ended = 3711,
  SAEITIScode_major_event = 3841,
  SAEITIScode_airshow = 3842,
  SAEITIScode_hot_air_ballooning = 3843,
  SAEITIScode_concert = 3844,
  SAEITIScode_state_occasion = 3845,
  SAEITIScode_vIP_visit = 3846,
  SAEITIScode_show = 3847,
  SAEITIScode_festival = 3848,
  SAEITIScode_exhibition = 3849,
  SAEITIScode_performing_arts = 3850,
  SAEITIScode_outdoor_market = 3851,
  SAEITIScode_fair = 3852,
  SAEITIScode_carnival = 3853,
  SAEITIScode_fireworks_display = 3854,
  SAEITIScode_trade_expo = 3855,
  SAEITIScode_movie_filming = 3856,
  SAEITIScode_presidential_visit = 3857,
  SAEITIScode_parade = 3858,
  SAEITIScode_procession = 3859,
  SAEITIScode_funeral_procession = 3860,
  SAEITIScode_crowd = 3861,
  SAEITIScode_holiday_traffic_crowds = 3862,
  SAEITIScode_event_ended = 3967,
  SAEITIScode_normal_parking_restrictions_lifted = 4097,
  SAEITIScode_parking_meter_restrictions_lifted = 4098,
  SAEITIScode_special_parking_restrictions_in_force = 4099,
  SAEITIScode_full_parking_lot = 4100,
  SAEITIScode_full_parking_garage = 4101,
  SAEITIScode_all_parking_lots_full = 4102,
  SAEITIScode_no_parking_spaces_available = 4103,
  SAEITIScode_only_a_few_spaces_available = 4104,
  SAEITIScode_spaces_available = 4105,
  SAEITIScode_no_parking = 4106,
  SAEITIScode_parking_on_one_side_of_street_only = 4107,
  SAEITIScode_parking_on_both_sides_of_street = 4108,
  SAEITIScode_parallel_parking_only = 4109,
  SAEITIScode_parking_meters_not_available = 4110,
  SAEITIScode_use_of_parking_meters_restricted = 4111,
  SAEITIScode_event_parking = 4112,
  SAEITIScode_handicapped_parking = 4113,
  SAEITIScode_long_term_parking = 4114,
  SAEITIScode_overnight_parking = 4115,
  SAEITIScode_short_term_parking = 4116,
  SAEITIScode_parking_by_permit_only = 4117,
  SAEITIScode_emergency_parking_only = 4118,
  SAEITIScode_emergency_stopping_only = 4119,
  SAEITIScode_parking = 4120,
  SAEITIScode_stopping = 4121,
  SAEITIScode_standing = 4122,
  SAEITIScode_tow_away_zone = 4123,
  SAEITIScode_school_zone = 4124,
  SAEITIScode_speed_zone = 4125,
  SAEITIScode_loading_zone = 4126,
  SAEITIScode_state_law = 4127,
  SAEITIScode_van_accessible = 4128,
  SAEITIScode_special_parking_restrictions_lifted = 4222,
  SAEITIScode_no_parking_information_available = 4223,
  SAEITIScode_information_available_on_radio = 4353,
  SAEITIScode_information_available_on_TV = 4354,
  SAEITIScode_call_to_get_information = 4355,
  SAEITIScode_information_available_via_Internet = 4356,
  SAEITIScode_test_message = 4357,
  SAEITIScode_no_information_available = 4358,
  SAEITIScode_null_description = 4359,
  SAEITIScode_police_assistance = 4361,
  SAEITIScode_police_monitor_CB = 4362,
  SAEITIScode_emergency_notification = 4363,
  SAEITIScode_in_emergency_dial_911 = 4364,
  SAEITIScode_travel_Info_call_511 = 4365,
  SAEITIScode_car_pool_information = 4366,
  SAEITIScode_information_service_resumed = 4478,
  SAEITIScode_information_service_is_being_suspended = 4360,
  SAEITIScode_message_canceled = 4479,
  SAEITIScode_overcast = 4609,
  SAEITIScode_cloudy = 4610,
  SAEITIScode_mostly_cloudy = 4611,
  SAEITIScode_partly_cloudy = 4612,
  SAEITIScode_partly_sunny = 4613,
  SAEITIScode_mostly_sunny = 4614,
  SAEITIScode_sunny = 4615,
  SAEITIScode_fair_skies = 4616,
  SAEITIScode_clear_skies = 4617,
  SAEITIScode_mostly_clear = 4618,
  SAEITIScode_mostly_dry = 4619,
  SAEITIScode_dry = 4620,
  SAEITIScode_uV_index_very_high = 4621,
  SAEITIScode_uV_index_high = 4622,
  SAEITIScode_uV_index_moderate = 4623,
  SAEITIScode_uV_index_low = 4624,
  SAEITIScode_uV_index_very_low = 4625,
  SAEITIScode_barometric_pressure = 4626,
  SAEITIScode_ozone_alert = 4627,
  SAEITIScode_lighting_unknown = 4628,
  SAEITIScode_artificial_exterior_light = 4629,
  SAEITIScode_artificial_interior_light = 4630,
  SAEITIScode_darkness = 4631,
  SAEITIScode_dusk = 4632,
  SAEITIScode_dawn = 4633,
  SAEITIScode_moonlight = 4634,
  SAEITIScode_daylight = 4635,
  SAEITIScode_weather_forecast_withdrawn = 4735,
  SAEITIScode_severe_weather = 4865,
  SAEITIScode_blizzard = 4866,
  SAEITIScode_heavy_snow = 4867,
  SAEITIScode_snow = 4868,
  SAEITIScode_light_snow = 4869,
  SAEITIScode_snow_showers = 4870,
  SAEITIScode_winter_storm = 4871,
  SAEITIScode_ice_glaze = 4872,
  SAEITIScode_heavy_frost = 4873,
  SAEITIScode_frost = 4874,
  SAEITIScode_ice_storm = 4875,
  SAEITIScode_sleet = 4876,
  SAEITIScode_rain_and_snow_mixed = 4877,
  SAEITIScode_rain_changing_to_snow = 4878,
  SAEITIScode_damaging_hail = 4879,
  SAEITIScode_hail = 4880,
  SAEITIScode_thunderstorms = 4881,
  SAEITIScode_thundershowers = 4882,
  SAEITIScode_extremely_heavy_downpour = 4883,
  SAEITIScode_heavy_rain = 4884,
  SAEITIScode_rain = 4885,
  SAEITIScode_light_rain = 4886,
  SAEITIScode_drizzle = 4887,
  SAEITIScode_showers = 4888,
  SAEITIScode_dew = 4889,
  SAEITIScode_precipitation_cleared = 4991,
  SAEITIScode_tornado = 5121,
  SAEITIScode_hurricane = 5122,
  SAEITIScode_hurricane_force_winds = 5123,
  SAEITIScode_tropical_storm = 5124,
  SAEITIScode_gale_force_winds = 5125,
  SAEITIScode_storm_force_winds = 5126,
  SAEITIScode_strong_winds = 5127,
  SAEITIScode_moderate_winds = 5128,
  SAEITIScode_light_winds = 5129,
  SAEITIScode_calm = 5130,
  SAEITIScode_gusty_winds = 5131,
  SAEITIScode_crosswinds = 5132,
  SAEITIScode_windy = 5133,
  SAEITIScode_strong_winds_have_eased = 5246,
  SAEITIScode_strong_wind_forecast_withdrawn = 5247,
  SAEITIScode_dense_fog = 5377,
  SAEITIScode_fog = 5378,
  SAEITIScode_patchy_fog = 5379,
  SAEITIScode_freezing_fog = 5380,
  SAEITIScode_ice_fog = 5405,
  SAEITIScode_mist = 5381,
  SAEITIScode_haze = 5382,
  SAEITIScode_visibility_reduced = 5383,
  SAEITIScode_visibility_blocked = 5404,
  SAEITIScode_white_out = 5384,
  SAEITIScode_blowing_snow = 5385,
  SAEITIScode_smoke_hazard = 5386,
  SAEITIScode_spray_hazard = 5387,
  SAEITIScode_low_sun_glare = 5388,
  SAEITIScode_snow_glare = 5389,
  SAEITIScode_blowing_dust = 5390,
  SAEITIScode_blowing_sand = 5391,
  SAEITIScode_dust_storms = 5392,
  SAEITIScode_sandstorms = 5393,
  SAEITIScode_air_quality_good = 5394,
  SAEITIScode_air_quality_fair = 5395,
  SAEITIScode_air_quality_poor = 5396,
  SAEITIScode_air_quality_very_poor = 5397,
  SAEITIScode_severe_exhaust_pollution = 5398,
  SAEITIScode_smog_alert = 5399,
  SAEITIScode_pollen_count_high = 5400,
  SAEITIScode_pollen_count_medium = 5401,
  SAEITIScode_pollen_count_low = 5402,
  SAEITIScode_swarms_of_insects = 5403,
  SAEITIScode_fog_clearing = 5499,
  SAEITIScode_visibility_improved = 5500,
  SAEITIScode_fog_forecast_withdrawn = 5501,
  SAEITIScode_pollution_alert_ended = 5502,
  SAEITIScode_air_quality_improved = 5503,
  SAEITIScode_maximum_temperature = 5633,
  SAEITIScode_temperature = 5634,
  SAEITIScode_minimum_temperature = 5635,
  SAEITIScode_current_temperature = 5636,
  SAEITIScode_heat_index = 5637,
  SAEITIScode_extreme_heat = 5638,
  SAEITIScode_hot = 5639,
  SAEITIScode_hotter = 5640,
  SAEITIScode_heat = 5641,
  SAEITIScode_warmer = 5642,
  SAEITIScode_warm = 5643,
  SAEITIScode_mild = 5644,
  SAEITIScode_cool = 5645,
  SAEITIScode_cooler = 5646,
  SAEITIScode_cold = 5647,
  SAEITIScode_colder = 5648,
  SAEITIScode_very_cold = 5649,
  SAEITIScode_extreme_cold = 5650,
  SAEITIScode_wind_chill = 5651,
  SAEITIScode_dewpoint = 5652,
  SAEITIScode_relative_humidity = 5653,
  SAEITIScode_temperatures_close_to_the_seasonal_norm = 5758,
  SAEITIScode_less_extreme_temperatures = 5759,
  SAEITIScode_impassable = 5889,
  SAEITIScode_almost_impassable = 5890,
  SAEITIScode_passable_with_care = 5891,
  SAEITIScode_passable = 5892,
  SAEITIScode_surface_water_hazard = 5893,
  SAEITIScode_danger_of_hydroplaning = 5894,
  SAEITIScode_wet_pavement = 5895,
  SAEITIScode_treated_pavement = 5896,
  SAEITIScode_slippery = 5897,
  SAEITIScode_low_ground_clearance = 5938,
  SAEITIScode_at_grade_level_crossing = 5937,
  SAEITIScode_mud_on_roadway = 5898,
  SAEITIScode_leaves_on_roadway = 5899,
  SAEITIScode_loose_sand_on_roadway = 5900,
  SAEITIScode_loose_gravel = 5901,
  SAEITIScode_fuel_on_roadway = 5902,
  SAEITIScode_oil_on_roadway = 5903,
  SAEITIScode_road_surface_in_poor_condition = 5904,
  SAEITIScode_melting_tar = 5905,
  SAEITIScode_uneven_lanes = 5935,
  SAEITIScode_rough_road = 5931,
  SAEITIScode_rough_crossing = 5936,
  SAEITIScode_ice = 5906,
  SAEITIScode_icy_patches = 5907,
  SAEITIScode_black_ice = 5908,
  SAEITIScode_ice_pellets_on_roadway = 5909,
  SAEITIScode_ice_build_up = 5910,
  SAEITIScode_freezing_rain = 5911,
  SAEITIScode_wet_and_icy_roads = 5912,
  SAEITIScode_slush = 5914,
  SAEITIScode_melting_snow = 5913,
  SAEITIScode_frozen_slush = 5915,
  SAEITIScode_snow_on_roadway = 5916,
  SAEITIScode_packed_snow = 5917,
  SAEITIScode_packed_snow_patches = 5918,
  SAEITIScode_plowed_snow = 5919,
  SAEITIScode_wet_snow = 5920,
  SAEITIScode_fresh_snow = 5921,
  SAEITIScode_powder_snow = 5922,
  SAEITIScode_granular_snow = 5923,
  SAEITIScode_frozen_snow = 5924,
  SAEITIScode_crusted_snow = 5925,
  SAEITIScode_deep_snow = 5926,
  SAEITIScode_snow_drifts = 5927,
  SAEITIScode_drifting_snow = 5928,
  SAEITIScode_expected_snow_accumulation = 5929,
  SAEITIScode_current_snow_accumulation = 5930,
  SAEITIScode_sand = 5932,
  SAEITIScode_gravel = 5933,
  SAEITIScode_paved = 5934,
  SAEITIScode_dry_pavement = 6011,
  SAEITIScode_snow_cleared = 6012,
  SAEITIScode_pavement_conditions_improved = 6013,
  SAEITIScode_skid_hazard_reduced = 6014,
  SAEITIScode_pavement_conditions_cleared = 6015,
  SAEITIScode_winter_equipment_recommended = 6145,
  SAEITIScode_winter_equipment_required = 6146,
  SAEITIScode_snow_chains_recommended = 6147,
  SAEITIScode_snow_chains_required = 6148,
  SAEITIScode_snow_chains_prohibited = 6149,
  SAEITIScode_studded_tires_prohibited = 6150,
  SAEITIScode_snow_tires_recommended = 6151,
  SAEITIScode_snow_tires_required = 6152,
  SAEITIScode_four_wheel_drive_recommended = 6153,
  SAEITIScode_four_wheel_drive_required = 6154,
  SAEITIScode_snow_tires_or_chains_recommended = 6155,
  SAEITIScode_snow_tires_or_chains_required = 6156,
  SAEITIScode_winter_driving_requirements_lifted = 6271,
  SAEITIScode_driving_conditions_good = 6401,
  SAEITIScode_driving_conditions_fair = 6402,
  SAEITIScode_difficult_driving_conditions = 6403,
  SAEITIScode_very_difficult_driving_conditions = 6404,
  SAEITIScode_hazardous_driving_conditions = 6405,
  SAEITIScode_extremely_hazardous_driving_conditions = 6406,
  SAEITIScode_why_not_ride_share = 6657,
  SAEITIScode_is_this_your_no_ride_day = 6658,
  SAEITIScode_why_not_use_transit = 6659,
  SAEITIScode_why_not_park_and_ride = 6660,
  SAEITIScode_why_not_try_paratransit = 6661,
  SAEITIScode_why_not_travel_by_rail = 6662,
  SAEITIScode_why_not_use_the_subway = 6663,
  SAEITIScode_why_not_try_rapid_transit = 6664,
  SAEITIScode_why_not_travel_by_bus = 6665,
  SAEITIScode_your_parking_ticket_covers_the_return_ride = 6666,
  SAEITIScode_avoid_the_rush_hour = 6667,
  SAEITIScode_do_not_allow_unnecessary_gaps = 6668,
  SAEITIScode_follow_the_vehicle_in_front_smoothly = 6669,
  SAEITIScode_do_not_slow_down_unnecessarily = 6670,
  SAEITIScode_watch_for_muggers = 6671,
  SAEITIScode_watch_for_pickpockets = 6672,
  SAEITIScode_watch_for_thieves = 6673,
  SAEITIScode_sorry_for_any_delay = 6674,
  SAEITIScode_thank_you_for_your_understanding = 6675,
  SAEITIScode_we_appreciate_your_patience = 6676,
  SAEITIScode_we_are_grateful_for_your_cooperation = 6677,
  SAEITIScode_share_the_road = 6678,
  SAEITIScode_risk = 6913,
  SAEITIScode_watch = 6914,
  SAEITIScode_warning = 6915,
  SAEITIScode_alert = 6916,
  SAEITIScode_danger = 6917,
  SAEITIScode_danger_of_explosion = 6918,
  SAEITIScode_danger_of_fire = 6919,
  SAEITIScode_extra_police_patrols_in_operation = 6920,
  SAEITIScode_look_out_for_vehicles_stopped_under_bridges = 6921,
  SAEITIScode_increased_risk_of_accident = 6922,
  SAEITIScode_rescue_and_recovery_work_in_progress_at_sceneREMOVED = 6923,
  SAEITIScode_police_at_scene = 6924,
  SAEITIScode_emergency_vehicles_at_scene = 6925,
  SAEITIScode_traffic_being_directed_around_accident_area = 6926,
  SAEITIScode_police_directing_traffic = 6927,
  SAEITIScode_rescue_workers_directing_traffic = 6928,
  SAEITIScode_repairs_in_progress = 6929,
  SAEITIScode_pilot_car_in_operation = 6930,
  SAEITIScode_look_out_for_flagger = 6931,
  SAEITIScode_look_out_for_workers = 6952,
  SAEITIScode_police_checks_in_operation = 6932,
  SAEITIScode_truck_check_point = 6937,
  SAEITIScode_lockdown = 6935,
  SAEITIScode_security_check_point = 6936,
  SAEITIScode_single_occupancy_vehicle_check_point = 6938,
  SAEITIScode_mandatory_speed_limit_in_force = 6933,
  SAEITIScode_speed_limit_in_force_for_heavy_vehicles = 6934,
  SAEITIScode_behind_you = 6950,
  SAEITIScode_ride_with_traffic = 6953,
  SAEITIScode_prepare_to_evacuate_area = 6954,
  SAEITIScode_avoid = 6955,
  SAEITIScode_look = 6939,
  SAEITIScode_photo_enforced = 6940,
  SAEITIScode_traffic_signs = 6951,
  SAEITIScode_traffic_laws = 6941,
  SAEITIScode_use_low_gear = 6942,
  SAEITIScode_bridge_ices_before_road = 6943,
  SAEITIScode_speed_checked_by_radar = 6944,
  SAEITIScode_speed_checked_by_aircraft = 6945,
  SAEITIScode_fines = 6946,
  SAEITIScode_fines_higher = 6947,
  SAEITIScode_fines_doubled = 6948,
  SAEITIScode_fines_tripled = 6949,
  SAEITIScode_evacuation_canceled = 7033,
  SAEITIScode_warning_canceled = 7034,
  SAEITIScode_watch_canceled = 7035,
  SAEITIScode_alert_canceled = 7036,
  SAEITIScode_ended = 7037,
  SAEITIScode_cleared = 7038,
  SAEITIScode_canceled = 7039,
  SAEITIScode_drive_carefully = 7169,
  SAEITIScode_drive_with_extreme_caution = 7170,
  SAEITIScode_approach_with_care = 7171,
  SAEITIScode_keep_your_distance = 7172,
  SAEITIScode_increase_normal_following_distance = 7173,
  SAEITIScode_test_your_brakes = 7174,
  SAEITIScode_cross_intersection_with_care = 7175,
  SAEITIScode_pass_with_care = 7176,
  SAEITIScode_pass = 7200,
  SAEITIScode_use_low_beam_headlights = 7177,
  SAEITIScode_use_fog_lights = 7178,
  SAEITIScode_use_hazard_warning_lights = 7179,
  SAEITIScode_do_not_leave_your_vehicle = 7180,
  SAEITIScode_leave_your_vehicle_and_proceed_to_next_safe_place = 7181,
  SAEITIScode_turn_off_engine = 7182,
  SAEITIScode_close_all_windows_turn_off_heater_air_conditioner_and_vents = 7183,
  SAEITIScode_turn_off_air_conditioner_to_prevent_engine_overheating = 7184,
  SAEITIScode_turn_off_mobile_phones_and_two_way_radios = 7185,
  SAEITIScode_prepare_to_stop = 7186,
  SAEITIScode_be_prepared_to_stop = 7201,
  SAEITIScode_stop_at_next_rest_area = 7187,
  SAEITIScode_stop_at_next_safe_place = 7188,
  SAEITIScode_only_travel_if_absolutely_necessary = 7189,
  SAEITIScode_drive_to_another_service_area = 7190,
  SAEITIScode_use_through_traffic_lanes = 7191,
  SAEITIScode_use_local_traffic_lanes = 7192,
  SAEITIScode_use_left_hand_parallel_roadway = 7193,
  SAEITIScode_use_right_hand_parallel_roadway = 7194,
  SAEITIScode_use_heavy_vehicle_lane = 7195,
  SAEITIScode_observe_recommended_speed = 7196,
  SAEITIScode_signals_sequenced_for_speed = 7202,
  SAEITIScode_maintain_top_safe_speed = 7203,
  SAEITIScode_facing_traffic = 7197,
  SAEITIScode_push_button = 7198,
  SAEITIScode_to_cross_street = 7199,
  SAEITIScode_evacuate_area_voluntarily = 7204,
  SAEITIScode_shelter_in_place = 7205,
  SAEITIScode_keep_to_the_right = 7425,
  SAEITIScode_keep_to_the_left = 7426,
  SAEITIScode_use_right_lane = 7427,
  SAEITIScode_use_left_lane = 7428,
  SAEITIScode_stay_in_lane = 7450,
  SAEITIScode_merge = 7451,
  SAEITIScode_heavy_vehicles_use_right_lane = 7429,
  SAEITIScode_heavy_vehicles_use_left_lane = 7430,
  SAEITIScode_observe_signals = 7431,
  SAEITIScode_observe_signs = 7432,
  SAEITIScode_no_passing = 7433,
  SAEITIScode_no_smoking = 7434,
  SAEITIScode_no_open_flames = 7435,
  SAEITIScode_use_shoulder_as_lane = 7436,
  SAEITIScode_do_not_drive_on_the_shoulder = 7437,
  SAEITIScode_allow_emergency_vehicles_to_pass = 7438,
  SAEITIScode_clear_a_lane_for_emergency_vehicles = 7439,
  SAEITIScode_pull_over_to_the_edge_of_the_roadway = 7440,
  SAEITIScode_wait_for_escort_vehicle = 7441,
  SAEITIScode_in_emergency_wait_for_police_patrol = 7442,
  SAEITIScode_reduce_your_speed = 7443,
  SAEITIScode_observe_speed_limits = 7444,
  SAEITIScode_check_point = 7445,
  SAEITIScode_entry_requirements = 7446,
  SAEITIScode_insurance_requirements = 7447,
  SAEITIScode_firearms_requirements = 7448,
  SAEITIScode_pet_requirements = 7449,
  SAEITIScode_slower_traffic_keep_right = 7452,
  SAEITIScode_keep_off = 7453,
  SAEITIScode_evacuate_area_immediately = 7454,
  SAEITIScode_shoulder_travel_no_longer_allowed = 7547,
  SAEITIScode_above = 7681,
  SAEITIScode_below = 7682,
  SAEITIScode_in = 7683,
  SAEITIScode_around = 7684,
  SAEITIScode_after = 7685,
  SAEITIScode_before = 7686,
  SAEITIScode_at = 7687,
  SAEITIScode_on = 7688,
  SAEITIScode_near = 7689,
  SAEITIScode_from_the = 7690,
  SAEITIScode_terminal = 7691,
  SAEITIScode_falling_slowly = 7692,
  SAEITIScode_falling = 7693,
  SAEITIScode_falling_quickly = 7694,
  SAEITIScode_rising_slowly = 7695,
  SAEITIScode_rising = 7696,
  SAEITIScode_rising_quickly = 7697,
  SAEITIScode_steady = 7698,
  SAEITIScode_likely = 7699,
  SAEITIScode_changing_to = 7700,
  SAEITIScode_mostly = 7701,
  SAEITIScode_partly = 7702,
  SAEITIScode_minus = 7703,
  SAEITIScode_weather_ended = 7704,
  SAEITIScode_expected = 7705,
  SAEITIScode_low = 7706,
  SAEITIScode_mid = 7707,
  SAEITIScode_high = 7708,
  SAEITIScode_upper = 7709,
  SAEITIScode_middle = 7765,
  SAEITIScode_lower = 7764,
  SAEITIScode_unseasonably = 7710,
  SAEITIScode_reported = 7711,
  SAEITIScode_advice = 7712,
  SAEITIScode_due_to = 7713,
  SAEITIScode_proceed_to = 7714,
  SAEITIScode_transferred_to = 7715,
  SAEITIScode_use = 7716,
  SAEITIScode_affecting = 7717,
  SAEITIScode_blocking = 7718,
  SAEITIScode_connecting = 7719,
  SAEITIScode_finished = 7720,
  SAEITIScode_For = 7721,
  SAEITIScode_or = 7722,
  SAEITIScode_and = 7723,
  SAEITIScode_later = 7724,
  SAEITIScode_level = 7725,
  SAEITIScode_shortly = 7726,
  SAEITIScode_soon = 7727,
  SAEITIScode_service = 7728,
  SAEITIScode_graffiti = 7733,
  SAEITIScode_damaged = 7729,
  SAEITIScode_out_of_order = 7730,
  SAEITIScode_on_State_right_of_way = 7732,
  SAEITIScode_found_property = 7734,
  SAEITIScode_vandalism = 7731,
  SAEITIScode_major = 7766,
  SAEITIScode_minor = 7767,
  SAEITIScode_begin_time = 7735,
  SAEITIScode_added = 7736,
  SAEITIScode_end_time = 7737,
  SAEITIScode_no = 7738,
  SAEITIScode_do_not = 7739,
  SAEITIScode_block = 7740,
  SAEITIScode_except = 7741,
  SAEITIScode_day = 7742,
  SAEITIScode_night = 7743,
  SAEITIScode_any_time = 7744,
  SAEITIScode_has = 7745,
  SAEITIScode_must = 7757,
  SAEITIScode_may_have = 7746,
  SAEITIScode_may_exceed = 7759,
  SAEITIScode_only = 7747,
  SAEITIScode_lifted = 7748,
  SAEITIScode_empty = 7749,
  SAEITIScode_turning = 7750,
  SAEITIScode_u_turn = 7751,
  SAEITIScode_wait_for = 7752,
  SAEITIScode_when_flashing = 7753,
  SAEITIScode_duration = 7754,
  SAEITIScode_cross = 7755,
  SAEITIScode_when_wet = 7756,
  SAEITIScode_oncoming = 7758,
  SAEITIScode_to_request = 7760,
  SAEITIScode_exempt = 7761,
  SAEITIScode_skewed = 7762,
  SAEITIScode_when_children_are_present = 7763,
  SAEITIScode_on_bridges = 7937,
  SAEITIScode_in_tunnels = 7938,
  SAEITIScode_entering_or_leaving_tunnels = 7939,
  SAEITIScode_on_ramps = 7940,
  SAEITIScode_in_road_construction_area = 7941,
  SAEITIScode_around_a_curve = 7942,
  SAEITIScode_on_curve = 8026,
  SAEITIScode_on_tracks = 8009,
  SAEITIScode_in_street = 8025,
  SAEITIScode_shoulder = 8027,
  SAEITIScode_on_minor_roads = 7943,
  SAEITIScode_in_the_opposing_lanes = 7944,
  SAEITIScode_adjacent_to_roadway = 7945,
  SAEITIScode_across_tracks = 8024,
  SAEITIScode_on_bend = 7946,
  SAEITIScode_intersection = 8032,
  SAEITIScode_entire_intersection = 7947,
  SAEITIScode_in_the_median = 7948,
  SAEITIScode_moved_to_side_of_road = 7949,
  SAEITIScode_moved_to_shoulder = 7950,
  SAEITIScode_on_the_roadway = 7951,
  SAEITIScode_dip = 8010,
  SAEITIScode_traffic_circle = 8011,
  SAEITIScode_crossover = 8028,
  SAEITIScode_cross_road = 8029,
  SAEITIScode_side_road = 8030,
  SAEITIScode_to = 8014,
  SAEITIScode_by = 8015,
  SAEITIScode_through = 8016,
  SAEITIScode_area_of = 8017,
  SAEITIScode_under = 8018,
  SAEITIScode_over = 8019,
  SAEITIScode_from = 8020,
  SAEITIScode_approaching = 8021,
  SAEITIScode_entering_at = 8022,
  SAEITIScode_exiting_at = 8023,
  SAEITIScode_in_shaded_areas = 7952,
  SAEITIScode_in_low_lying_areas = 7953,
  SAEITIScode_in_the_downtown_area = 7954,
  SAEITIScode_in_the_inner_city_area = 7955,
  SAEITIScode_in_parts = 7956,
  SAEITIScode_in_some_places = 7957,
  SAEITIScode_in_the_ditch = 7958,
  SAEITIScode_in_the_valley = 7959,
  SAEITIScode_on_hill_top = 7960,
  SAEITIScode_near_the_foothills = 7961,
  SAEITIScode_at_high_altitudes = 7962,
  SAEITIScode_near_the_lake = 7963,
  SAEITIScode_near_the_shore = 7964,
  SAEITIScode_nearby_basin = 8008,
  SAEITIScode_over_the_crest_of_a_hill = 7965,
  SAEITIScode_other_than_on_the_roadway = 7966,
  SAEITIScode_near_the_beach = 7967,
  SAEITIScode_near_beach_access_point = 7968,
  SAEITIScode_mountain_pass = 8006,
  SAEITIScode_lower_level = 7969,
  SAEITIScode_upper_level = 7970,
  SAEITIScode_coast = 8034,
  SAEITIScode_airport = 7971,
  SAEITIScode_concourse = 7972,
  SAEITIScode_gate = 7973,
  SAEITIScode_baggage_claim = 7974,
  SAEITIScode_customs_point = 7975,
  SAEITIScode_reservation_center = 8007,
  SAEITIScode_station = 7976,
  SAEITIScode_platform = 7977,
  SAEITIScode_dock = 7978,
  SAEITIScode_depot = 7979,
  SAEITIScode_ev_charging_point = 7980,
  SAEITIScode_information_welcome_point = 7981,
  SAEITIScode_at_rest_area = 7982,
  SAEITIScode_at_service_area = 7983,
  SAEITIScode_at_weigh_station = 7984,
  SAEITIScode_roadside_park = 8033,
  SAEITIScode_picnic_areas = 7985,
  SAEITIScode_rest_area = 7986,
  SAEITIScode_service_stations = 7987,
  SAEITIScode_toilets = 7988,
  SAEITIScode_bus_stop = 8031,
  SAEITIScode_park_and_ride_lot = 8012,
  SAEITIScode_on_the_right = 7989,
  SAEITIScode_on_the_left = 7990,
  SAEITIScode_in_the_center = 7991,
  SAEITIScode_in_the_opposite_direction = 7992,
  SAEITIScode_cross_traffic = 7993,
  SAEITIScode_northbound_traffic = 7994,
  SAEITIScode_eastbound_traffic = 7995,
  SAEITIScode_southbound_traffic = 7996,
  SAEITIScode_westbound_traffic = 7997,
  SAEITIScode_north = 7998,
  SAEITIScode_south = 7999,
  SAEITIScode_east = 8000,
  SAEITIScode_west = 8001,
  SAEITIScode_northeast = 8002,
  SAEITIScode_northwest = 8003,
  SAEITIScode_southeast = 8004,
  SAEITIScode_southwest = 8005,
  SAEITIScode_all_roadways = 8193,
  SAEITIScode_through_lanes = 8194,
  SAEITIScode_left_lane = 8195,
  SAEITIScode_right_lane = 8196,
  SAEITIScode_center_lane = 8197,
  SAEITIScode_middle_lanes = 8198,
  SAEITIScode_middle_two_lanes = 8199,
  SAEITIScode_right_turning_lanes = 8200,
  SAEITIScode_left_turning_lanes = 8201,
  SAEITIScode_upper_deck_lanes = 8236,
  SAEITIScode_lower_deck_lanes = 8237,
  SAEITIScode_reversible_lanes = 8238,
  SAEITIScode_right_exit_lanes = 8239,
  SAEITIScode_left_exit_lanes = 8240,
  SAEITIScode_right_merging_lanes = 8241,
  SAEITIScode_left_merging_lanes = 8242,
  SAEITIScode_right_exit_ramp = 8202,
  SAEITIScode_right_second_exit_ramp = 8243,
  SAEITIScode_right_entrance_ramp = 8203,
  SAEITIScode_right_second_entrance_ramp = 8245,
  SAEITIScode_left_exit_ramp = 8204,
  SAEITIScode_left_second_exit_ramp = 8244,
  SAEITIScode_left_entrance_ramp = 8205,
  SAEITIScode_left_second_entrance_ramp = 8246,
  SAEITIScode_escape_ramp = 8234,
  SAEITIScode_hard_shoulder = 8206,
  SAEITIScode_soft_shoulder = 8207,
  SAEITIScode_right_shoulder = 8208,
  SAEITIScode_left_shoulder = 8209,
  SAEITIScode_median = 8252,
  SAEITIScode_sidewalk = 8251,
  SAEITIScode_highways = 8235,
  SAEITIScode_right_hand_parallel_lanes = 8210,
  SAEITIScode_left_hand_parallel_lanes = 8211,
  SAEITIScode_connecting_lanes = 8212,
  SAEITIScode_express_lanes = 8213,
  SAEITIScode_local_lanes = 8214,
  SAEITIScode_toll_lanes = 8215,
  SAEITIScode_electronic_toll_lanes = 8216,
  SAEITIScode_toll_plaza = 8217,
  SAEITIScode_inspection_lane = 8218,
  SAEITIScode_hOV_lanes = 8219,
  SAEITIScode_bus_lanes = 8220,
  SAEITIScode_carpool_lanes = 8221,
  SAEITIScode_truck_lanes = 8222,
  SAEITIScode_emergency_lanes = 8223,
  SAEITIScode_passing_lanes = 8224,
  SAEITIScode_climbing_lanes = 8225,
  SAEITIScode_slow_lane = 8226,
  SAEITIScode_service_road = 8227,
  SAEITIScode_cycle_lane = 8228,
  SAEITIScode_tracks = 8250,
  SAEITIScode_bridge = 8229,
  SAEITIScode_overpass = 8230,
  SAEITIScode_elevated_lanes = 8231,
  SAEITIScode_underpass = 8232,
  SAEITIScode_tunnel = 8233,
  SAEITIScode_all_exit_lanes = 8247,
  SAEITIScode_all_entry_lanes = 8248,
  SAEITIScode_either_shoulder = 8249,
  SAEITIScode_shoulder_work = 8253,
  SAEITIScode_detour_where_possible = 8449,
  SAEITIScode_no_detour_available = 8450,
  SAEITIScode_follow_signs = 8451,
  SAEITIScode_follow_detour_signs = 8452,
  SAEITIScode_follow_special_detour_markers = 8453,
  SAEITIScode_do_not_follow_detour_signs = 8454,
  SAEITIScode_detour_in_operation = 8455,
  SAEITIScode_follow_local_detour = 8456,
  SAEITIScode_compulsory_detour_in_operation = 8457,
  SAEITIScode_no_suitable_detour_available = 8458,
  SAEITIScode_detour_is_no_longer_recommended = 8459,
  SAEITIScode_local_drivers_are_recommended_to_avoid_the_area = 8460,
  SAEITIScode_trucks_are_recommended_to_avoid_the_area = 8461,
  SAEITIScode_consider_alternate_route = 8462,
  SAEITIScode_consider_alternate_parking = 8463,
  SAEITIScode_consider_alternate_destination = 8464,
  SAEITIScode_consider_alternate_area = 8465,
  SAEITIScode_snow_route = 8466,
  SAEITIScode_emergency_snow_route = 8467,
  SAEITIScode_evacuation_route = 8468,
  SAEITIScode_truck_route = 8469,
  SAEITIScode_hazardous_materials_route = 8470,
  SAEITIScode_detour = 8471,
  SAEITIScode_square_feet = 8705,
  SAEITIScode_square_meters = 8706,
  SAEITIScode_acres = 8707,
  SAEITIScode_hectares = 8708,
  SAEITIScode_inches = 8709,
  SAEITIScode_feet = 8710,
  SAEITIScode_mile = 8711,
  SAEITIScode_miles = 8712,
  SAEITIScode_nautical_miles = 8713,
  SAEITIScode_millimeters = 8714,
  SAEITIScode_meters = 8715,
  SAEITIScode_kilometer = 8716,
  SAEITIScode_kilometers = 8717,
  SAEITIScode_feet_per_second = 8718,
  SAEITIScode_meters_per_second = 8719,
  SAEITIScode_mPH = 8720,
  SAEITIScode_kPH = 8721,
  SAEITIScode_knots = 8722,
  SAEITIScode_elevation = 8766,
  SAEITIScode_aM = 8723,
  SAEITIScode_pM = 8724,
  SAEITIScode_holiday = 8726,
  SAEITIScode_seconds = 8727,
  SAEITIScode_minutes = 8728,
  SAEITIScode_hours = 8729,
  SAEITIScode_days = 8730,
  SAEITIScode_weeks = 8731,
  SAEITIScode_months = 8732,
  SAEITIScode_other_times = 8767,
  SAEITIScode_nSunday = 8758,
  SAEITIScode_nMonday = 8759,
  SAEITIScode_nTuesday = 8760,
  SAEITIScode_nWednesday = 8761,
  SAEITIScode_nThursday = 8762,
  SAEITIScode_nFriday = 8763,
  SAEITIScode_nSaturday = 8764,
  SAEITIScode_weekdays = 8765,
  SAEITIScode_weekends = 8725,
  SAEITIScode_degrees_Angle = 8733,
  SAEITIScode_degrees_Celsius = 8734,
  SAEITIScode_degrees_Fahrenheit = 8735,
  SAEITIScode_grams = 8736,
  SAEITIScode_kilograms = 8737,
  SAEITIScode_ounces = 8738,
  SAEITIScode_pounds = 8739,
  SAEITIScode_tons = 8740,
  SAEITIScode_fluid_ounces = 8741,
  SAEITIScode_gallons = 8742,
  SAEITIScode_milliliters = 8743,
  SAEITIScode_liters = 8744,
  SAEITIScode_kilograms_per_lane_mile = 8745,
  SAEITIScode_tons_per_lane_mile = 8746,
  SAEITIScode_dollar = 8747,
  SAEITIScode_percent = 8748,
  SAEITIScode_grade = 8757,
  SAEITIScode_time_delimiter = 8749,
  SAEITIScode_dollars = 8750,
  SAEITIScode_flight_number = 8751,
  SAEITIScode_person_people = 8752,
  SAEITIScode_response_plan = 8753,
  SAEITIScode_placard_type = 8754,
  SAEITIScode_placard_number = 8755,
  SAEITIScode_fM = 8756,
  SAEITIScode_travel = 8961,
  SAEITIScode_transit = 8962,
  SAEITIScode_bus = 8963,
  SAEITIScode_trolleybus = 8964,
  SAEITIScode_rail = 8965,
  SAEITIScode_commuter_rail = 8966,
  SAEITIScode_subway = 8967,
  SAEITIScode_rapid_transit = 8968,
  SAEITIScode_light_rail = 8969,
  SAEITIScode_streetcar = 8970,
  SAEITIScode_dial_a_ride = 8971,
  SAEITIScode_park_and_ride = 8972,
  SAEITIScode_shuttle = 8973,
  SAEITIScode_free_shuttle = 8974,
  SAEITIScode_airport_shuttle = 8975,
  SAEITIScode_taxies = 8976,
  SAEITIScode_ferry = 8977,
  SAEITIScode_passenger_ferry = 8978,
  SAEITIScode_vehicle_ferry = 8979,
  SAEITIScode_aerial_tramway = 8980,
  SAEITIScode_automated_guideway = 8981,
  SAEITIScode_cable_cars = 8982,
  SAEITIScode_monorail = 8983,
  SAEITIScode_air_travel = 8984,
  SAEITIScode_hitch_hitching = 8985,
  SAEITIScode_walk = 8986,
  SAEITIScode_all_vehicles = 9217,
  SAEITIScode_bicycles = 9218,
  SAEITIScode_motorcycles = 9219,
  SAEITIScode_cars = 9220,
  SAEITIScode_light_vehicles = 9221,
  SAEITIScode_cars_and_light_vehicles = 9222,
  SAEITIScode_cars_with_trailers = 9223,
  SAEITIScode_cars_with_recreational_trailers = 9224,
  SAEITIScode_vehicles_with_trailers = 9225,
  SAEITIScode_heavy_vehicles = 9226,
  SAEITIScode_trucks = 9227,
  SAEITIScode_buses = 9228,
  SAEITIScode_articulated_buses = 9229,
  SAEITIScode_school_buses = 9230,
  SAEITIScode_vehicles_with_semi_trailers = 9231,
  SAEITIScode_vehicles_with_double_trailers = 9232,
  SAEITIScode_high_profile_vehicles = 9233,
  SAEITIScode_wide_vehicles = 9234,
  SAEITIScode_long_vehicles = 9235,
  SAEITIScode_hazardous_loads = 9236,
  SAEITIScode_exceptional_loads = 9237,
  SAEITIScode_abnormal_loads = 9238,
  SAEITIScode_convoys = 9239,
  SAEITIScode_maintenance_vehicles = 9240,
  SAEITIScode_delivery_vehicles = 9241,
  SAEITIScode_vehicles_with_even_numbered_license_plates = 9242,
  SAEITIScode_vehicles_with_odd_numbered_license_plates = 9243,
  SAEITIScode_vehicles_with_parking_permits = 9244,
  SAEITIScode_vehicles_with_catalytic_converters = 9245,
  SAEITIScode_vehicles_without_catalytic_converters = 9246,
  SAEITIScode_gas_powered_vehicles = 9247,
  SAEITIScode_diesel_powered_vehicles = 9248,
  SAEITIScode_lPG_vehicles = 9249,
  SAEITIScode_military_convoys = 9250,
  SAEITIScode_military_vehicles = 9251,
  SAEITIScode_electric_powered_vehicles = 9252,
  SAEITIScode_hybrid_powered_vehicles = 9253,
  SAEITIScode_inherently_low_emission_vehicles = 9254,
  SAEITIScode_commercial_vehicles = 9255,
  SAEITIScode_runaway_vehicles = 9256,
  SAEITIScode_vehicles_with_lugs = 9257,
  SAEITIScode_motor_driven_cycles = 9258,
  SAEITIScode_recreational_vehicles = 9259,
  SAEITIScode_non_motorized_vehicles = 9260,
  SAEITIScode_traffic = 9261,
  SAEITIScode_through_traffic = 9473,
  SAEITIScode_holiday_traffic = 9474,
  SAEITIScode_residents = 9475,
  SAEITIScode_visitors = 9476,
  SAEITIScode_long_distance_traffic = 9477,
  SAEITIScode_local_traffic = 9478,
  SAEITIScode_regional_traffic = 9479,
  SAEITIScode_arrivals = 9480,
  SAEITIScode_departures = 9481,
  SAEITIScode_airline_travelers = 9482,
  SAEITIScode_commuter_airline_travelers = 9483,
  SAEITIScode_domestic_airline_travelers = 9484,
  SAEITIScode_international_airline_travelers = 9485,
  SAEITIScode_pedestrians = 9486,
  SAEITIScode_bicyclists = 9487,
  SAEITIScode_emergency_vehicle_units = 9729,
  SAEITIScode_federal_law_enforcement_units = 9730,
  SAEITIScode_state_police_units = 9731,
  SAEITIScode_county_police_units = 9732,
  SAEITIScode_local_police_units = 9733,
  SAEITIScode_ambulance_units = 9734,
  SAEITIScode_rescue_units = 9735,
  SAEITIScode_fire_units = 9736,
  SAEITIScode_hAZMAT_units = 9737,
  SAEITIScode_light_tow_unit = 9738,
  SAEITIScode_heavy_tow_unit = 9739,
  SAEITIScode_private_tow_units = 9743,
  SAEITIScode_freeway_service_patrols = 9740,
  SAEITIScode_transportation_response_units = 9741,
  SAEITIScode_private_contractor_response_units = 9742,
  SAEITIScode_ground_fire_suppression = 9985,
  SAEITIScode_heavy_ground_equipment = 9986,
  SAEITIScode_aircraft = 9988,
  SAEITIScode_marine_equipment = 9989,
  SAEITIScode_support_equipment = 9990,
  SAEITIScode_medical_rescue_unit = 9991,
  SAEITIScode_other = 9993,
  SAEITIScode_ground_fire_suppression_other = 9994,
  SAEITIScode_engine = 9995,
  SAEITIScode_truck_or_aerial = 9996,
  SAEITIScode_quint = 9997,
  SAEITIScode_tanker_pumper_combination = 9998,
  SAEITIScode_brush_truck = 10000,
  SAEITIScode_aircraft_rescue_firefighting = 10001,
  SAEITIScode_heavy_ground_equipment_other = 10004,
  SAEITIScode_dozer_or_plow = 10005,
  SAEITIScode_tractor = 10006,
  SAEITIScode_tanker_or_tender = 10008,
  SAEITIScode_aircraft_other = 10024,
  SAEITIScode_aircraft_fixed_wing_tanker = 10025,
  SAEITIScode_helitanker = 10026,
  SAEITIScode_helicopter = 10027,
  SAEITIScode_marine_equipment_other = 10034,
  SAEITIScode_fire_boat_with_pump = 10035,
  SAEITIScode_boat_no_pump = 10036,
  SAEITIScode_support_apparatus_other = 10044,
  SAEITIScode_breathing_apparatus_support = 10045,
  SAEITIScode_light_and_air_unit = 10046,
  SAEITIScode_medical_rescue_unit_other = 10054,
  SAEITIScode_rescue_unit = 10055,
  SAEITIScode_urban_search_rescue_unit = 10056,
  SAEITIScode_high_angle_rescue = 10057,
  SAEITIScode_crash_fire_rescue = 10058,
  SAEITIScode_bLS_unit = 10059,
  SAEITIScode_aLS_unit = 10060,
  SAEITIScode_mobile_command_post = 10075,
  SAEITIScode_chief_officer_car = 10076,
  SAEITIScode_hAZMAT_unit = 10077,
  SAEITIScode_type_i_hand_crew = 10078,
  SAEITIScode_type_ii_hand_crew = 10079,
  SAEITIScode_privately_owned_vehicle = 10083,
  SAEITIScode_other_apparatus_resource = 10084,
  SAEITIScode_ambulance = 10085,
  SAEITIScode_bomb_squad_van = 10086,
  SAEITIScode_combine_harvester = 10087,
  SAEITIScode_construction_vehicle = 10088,
  SAEITIScode_farm_tractor = 10089,
  SAEITIScode_grass_cutting_machines = 10090,
  SAEITIScode_hAZMAT_containment_tow = 10091,
  SAEITIScode_heavy_tow = 10092,
  SAEITIScode_light_tow = 10094,
  SAEITIScode_flatbed_tow = 10114,
  SAEITIScode_hedge_cutting_machines = 10093,
  SAEITIScode_mobile_crane = 10095,
  SAEITIScode_refuse_collection_vehicle = 10096,
  SAEITIScode_resurfacing_vehicle = 10097,
  SAEITIScode_road_sweeper = 10098,
  SAEITIScode_roadside_litter_collection_crews = 10099,
  SAEITIScode_survey_crews = 10115,
  SAEITIScode_salvage_vehicle = 10100,
  SAEITIScode_sand_truck = 10101,
  SAEITIScode_snowplow = 10102,
  SAEITIScode_steam_roller = 10103,
  SAEITIScode_swat_team_van = 10104,
  SAEITIScode_track_laying_vehicle = 10105,
  SAEITIScode_unknown_vehicle = 10106,
  SAEITIScode_white_lining_vehicle = 10107,
  SAEITIScode_dump_truck = 10108,
  SAEITIScode_supervisor_vehicle = 10109,
  SAEITIScode_snow_blower = 10110,
  SAEITIScode_rotary_snow_blower = 10111,
  SAEITIScode_road_grader = 10112,
  SAEITIScode_steam_truck = 10113,
  SAEITIScode_unknown_status = 10240,
  SAEITIScode_ready_for_use = 10241,
  SAEITIScode_working_normally = 10242,
  SAEITIScode_working_autonomously = 10243,
  SAEITIScode_working_incorrectly = 10244,
  SAEITIScode_not_working = 10245,
  SAEITIScode_normal_maintenance = 10246,
  SAEITIScode_in_route_to_use = 10247,
  SAEITIScode_returning_from_use = 10248,
  SAEITIScode_out_of_service = 10249,
  SAEITIScode_off_duty = 10250,
  SAEITIScode_on_patrol = 10251,
  SAEITIScode_on_call = 10252,
  SAEITIScode_on_break = 10253,
  SAEITIScode_mandatory_time_off = 10254,
  SAEITIScode_low_on_fuel = 10255,
  SAEITIScode_low_on_water = 10256,
  SAEITIScode_low_charge = 10257,
  SAEITIScode_missing = 10258,
  SAEITIScode_none = 10496,
  SAEITIScode_light_pole = 10497,
  SAEITIScode_utility_pole = 10498,
  SAEITIScode_gantry_way = 10499,
  SAEITIScode_sign_support = 10500,
  SAEITIScode_signal_pole = 10501,
  SAEITIScode_signage_public = 10502,
  SAEITIScode_signage_private = 10503,
  SAEITIScode_overhead_sign = 10568,
  SAEITIScode_ground_sign = 10569,
  SAEITIScode_cones = 10504,
  SAEITIScode_cones_post_type = 10505,
  SAEITIScode_cones_glue_post = 10506,
  SAEITIScode_cones_other = 10507,
  SAEITIScode_barriers = 10508,
  SAEITIScode_barrier_Aframe = 10509,
  SAEITIScode_barriers_heavy_duty = 10510,
  SAEITIScode_barricade_type_III = 10511,
  SAEITIScode_barricade_small = 10512,
  SAEITIScode_solid_barrier = 10565,
  SAEITIScode_moveable_barrier = 10566,
  SAEITIScode_barricade_lights = 10513,
  SAEITIScode_beacon = 10514,
  SAEITIScode_t_stand = 10515,
  SAEITIScode_a_stand = 10516,
  SAEITIScode_drums = 10517,
  SAEITIScode_sand_barrel = 10567,
  SAEITIScode_impact_attenuator = 10518,
  SAEITIScode_barricade_tape = 10519,
  SAEITIScode_safety_fence = 10520,
  SAEITIScode_temp_pavement_markings = 10521,
  SAEITIScode_speed_bumps = 10522,
  SAEITIScode_temp_curbs = 10523,
  SAEITIScode_parking_blocks = 10524,
  SAEITIScode_signboard_fixed = 10525,
  SAEITIScode_signboard_portable = 10526,
  SAEITIScode_stripe = 10572,
  SAEITIScode_island = 10573,
  SAEITIScode_har = 10527,
  SAEITIScode_har_AM = 10528,
  SAEITIScode_har_FM = 10529,
  SAEITIScode_har_DSRC = 10530,
  SAEITIScode_traffic_light = 10531,
  SAEITIScode_lane_control_signal = 10532,
  SAEITIScode_traffic_detector = 10533,
  SAEITIScode_vehicle_detector = 10534,
  SAEITIScode_system_alarm = 10535,
  SAEITIScode_arrow_board = 10536,
  SAEITIScode_fixed_VMS = 10537,
  SAEITIScode_mobile_VMS = 10538,
  SAEITIScode_ramp_control = 10539,
  SAEITIScode_gate_control = 10540,
  SAEITIScode_temporary_traffic_light = 10541,
  SAEITIScode_over_height_warning_system = 10542,
  SAEITIScode_over_weight_warning_system = 10543,
  SAEITIScode_emergency_telephones = 10544,
  SAEITIScode_railroad_crossing_equipment = 10545,
  SAEITIScode_tunnel_ventilation = 10546,
  SAEITIScode_ccTV = 10547,
  SAEITIScode_environmental_sensor = 10548,
  SAEITIScode_emergency_signal = 10570,
  SAEITIScode_countdown_pedestrian_sign = 10571,
  SAEITIScode_Switch = 10549,
  SAEITIScode_signal = 10550,
  SAEITIScode_third_rail = 10551,
  SAEITIScode_overhead_power = 10552,
  SAEITIScode_concrete_tie = 10553,
  SAEITIScode_wooden_tie = 10554,
  SAEITIScode_manhole_cover = 10559,
  SAEITIScode_culvert = 10560,
  SAEITIScode_escalator = 10555,
  SAEITIScode_elevator = 10556,
  SAEITIScode_snow_poles = 10561,
  SAEITIScode_track = 10557,
  SAEITIScode_guide_poles = 10562,
  SAEITIScode_drawbridge = 10558,
  SAEITIScode_expansion_joint = 10563,
  SAEITIScode_shifted_plate = 10564,
  SAEITIScode_unknown_transit_problem = 10753,
  SAEITIScode_sleeping_customer = 10754,
  SAEITIScode_assault_on_passenger = 10755,
  SAEITIScode_assault_on_employee = 10756,
  SAEITIScode_broken_seat = 10757,
  SAEITIScode_bus_alarm = 10758,
  SAEITIScode_crime_or_drug_deal = 10759,
  SAEITIScode_eating_on_board = 10760,
  SAEITIScode_equipment_problem_with_air_conditioning = 10761,
  SAEITIScode_equipment_problem_with_air_system = 10762,
  SAEITIScode_equipment_problem_with_brakes = 10763,
  SAEITIScode_equipment_problem_with_chassis_or_suspension = 10764,
  SAEITIScode_equipment_problem_with_cooling_system = 10765,
  SAEITIScode_equipment_problem_with_doors = 10766,
  SAEITIScode_equipment_problem_with_electrical = 10767,
  SAEITIScode_equipment_problem_with_engine = 10768,
  SAEITIScode_equipment_problem_with_exterior_or_body = 10769,
  SAEITIScode_equipment_problem_with_fare_collection = 10770,
  SAEITIScode_equipment_problem_with_fuel_or_exhaust = 10771,
  SAEITIScode_equipment_problem_with_horn = 10772,
  SAEITIScode_equipment_problem_with_interior = 10773,
  SAEITIScode_equipment_problem_with_liftkneeling = 10774,
  SAEITIScode_equipment_problem_with_lights = 10775,
  SAEITIScode_equipment_problem_with_lubrication = 10776,
  SAEITIScode_equipment_problem_with_radio_or_communication = 10777,
  SAEITIScode_equipment_problem_with_signs = 10778,
  SAEITIScode_equipment_problem_with_steering = 10779,
  SAEITIScode_equipment_problem_with_tires = 10780,
  SAEITIScode_equipment_problem_with_transmission = 10781,
  SAEITIScode_equipment_problem_with_unknown_alarm = 10782,
  SAEITIScode_equipment_problem_with_wipers = 10783,
  SAEITIScode_fare_dispute_expired_pass = 10784,
  SAEITIScode_fare_dispute_expired_transfer = 10785,
  SAEITIScode_fare_dispute_expired_upgrade = 10786,
  SAEITIScode_fare_dispute_other = 10787,
  SAEITIScode_fare_dispute_refuses_to_pay = 10788,
  SAEITIScode_lift_passenger_cycle_completed = 10789,
  SAEITIScode_lift_passenger_ready_to_alight = 10790,
  SAEITIScode_lift_passenger_ready_to_board = 10791,
  SAEITIScode_lost_article = 10792,
  SAEITIScode_objects_thrown = 10793,
  SAEITIScode_passenger_accident_alighting = 10794,
  SAEITIScode_passenger_accident_boarding = 10795,
  SAEITIScode_passenger_accident_fallen_on_board = 10796,
  SAEITIScode_passenger_load = 10797,
  SAEITIScode_passenger_accident_other = 10798,
  SAEITIScode_passenger_sick_or_injured = 10799,
  SAEITIScode_right_of_way = 10800,
  SAEITIScode_theft = 10801,
  SAEITIScode_theft_of_service = 10802,
  SAEITIScode_waiting_to_get_relief_for_schedule_break = 10803,
  SAEITIScode_waiting_to_get_relief_after_run_is_finished = 10804,
  SAEITIScode_waiting_to_provide_relief = 10805,
  SAEITIScode_unknown_object = 11009,
  SAEITIScode_tire = 11010,
  SAEITIScode_rim = 11011,
  SAEITIScode_retread = 11012,
  SAEITIScode_trash = 11013,
  SAEITIScode_cargo = 11014,
  SAEITIScode_diesel = 11015,
  SAEITIScode_gasoline = 11016,
  SAEITIScode_anti_freeze = 11017,
  SAEITIScode_propane_gas = 11061,
  SAEITIScode_alternative_fuel = 11060,
  SAEITIScode_seat_belts = 11018,
  SAEITIScode_litter_container = 11019,
  SAEITIScode_all_Terrain_vehicle = 11020,
  SAEITIScode_seaplane = 11021,
  SAEITIScode_chairlift = 11022,
  SAEITIScode_fishing_pier = 11023,
  SAEITIScode_telephone = 11025,
  SAEITIScode_railroad_cross_buck = 11024,
  SAEITIScode_horn = 11048,
  SAEITIScode_train = 11047,
  SAEITIScode_deer = 11049,
  SAEITIScode_horse = 11051,
  SAEITIScode_cattle = 11050,
  SAEITIScode_golf_cart = 11052,
  SAEITIScode_services = 11056,
  SAEITIScode_motorist_services = 11059,
  SAEITIScode_food_services = 11053,
  SAEITIScode_roadside_table = 11055,
  SAEITIScode_ambulance_staging_point = 11054,
  SAEITIScode_fallout = 11026,
  SAEITIScode_medical = 11027,
  SAEITIScode_chemical = 11028,
  SAEITIScode_welfare = 11029,
  SAEITIScode_decontamination = 11063,
  SAEITIScode_evacuation = 11030,
  SAEITIScode_registration = 11062,
  SAEITIScode_emergency = 11064,
  SAEITIScode_left_arrow_signal = 11031,
  SAEITIScode_ahead_arrow_signal = 11032,
  SAEITIScode_right_arrow_signal = 11033,
  SAEITIScode_green_light_signal = 11034,
  SAEITIScode_green_arrow_signal = 11035,
  SAEITIScode_yellow_light_signal = 11036,
  SAEITIScode_yellow_arrow_signal = 11037,
  SAEITIScode_red_light_signal = 11038,
  SAEITIScode_red_arrow_signal = 11039,
  SAEITIScode_extended_green_signal = 11040,
  SAEITIScode_advance_arrow_signal = 11041,
  SAEITIScode_pedestrian_Signal_Stop = 11042,
  SAEITIScode_pedestrian_Signal_Caution = 11043,
  SAEITIScode_pedestrian_Signal_Walk = 11044,
  SAEITIScode_pedestrian_Signal_Light = 11045,
  SAEITIScode_pedestrian_Signal_Time_Display = 11046,
  SAEITIScode_prohibit_None_Allowed_LU_LT_L45_S_R45_RT_RU = 11264,
  SAEITIScode_prohibit_RU_Allowed_LU_LT_L45_S_R45_RT = 11265,
  SAEITIScode_prohibit_RT_Allowed_LU_LT_L45_S_R45_RU = 11266,
  SAEITIScode_prohibit_RT_RU_Allowed_LU_LT_L45_S_R45 = 11267,
  SAEITIScode_prohibit_R45_Allowed_LU_LT_L45_S_RT_RU = 11268,
  SAEITIScode_prohibit_R45_RU_Allowed_LU_LT_L45_S_RT = 11269,
  SAEITIScode_prohibit_R45_RT_Allowed_LU_LT_L45_S_RU = 11270,
  SAEITIScode_prohibit_R45_RT_RU_Allowed_LU_LT_L45_S = 11271,
  SAEITIScode_prohibit_S_Allowed_LU_LT_L45_R45_RT_RU = 11272,
  SAEITIScode_prohibit_S_RU_Allowed_LU_LT_L45_R45_RT = 11273,
  SAEITIScode_prohibit_S_RT_Allowed_LU_LT_L45_R45_RU = 11274,
  SAEITIScode_prohibit_S_RT_RU_Allowed_LU_LT_L45_R45 = 11275,
  SAEITIScode_prohibit_S_R45_Allowed_LU_LT_L45_RT_RU = 11276,
  SAEITIScode_prohibit_S_R45_RU_Allowed_LU_LT_L45_RT = 11277,
  SAEITIScode_prohibit_S_R45_RT_Allowed_LU_LT_L45_RU = 11278,
  SAEITIScode_prohibit_S_R45_RT_RU_Allowed_LU_LT_L45 = 11279,
  SAEITIScode_prohibit_L45_Allowed_LU_LT_S_R45_RT_RU = 11280,
  SAEITIScode_prohibit_L45_RU_Allowed_LU_LT_S_R45_RT = 11281,
  SAEITIScode_prohibit_L45_RT_Allowed_LU_LT_S_R45_RU = 11282,
  SAEITIScode_prohibit_L45_RT_RU_Allowed_LU_LT_S_R45 = 11283,
  SAEITIScode_prohibit_L45_R45_Allowed_LU_LT_S_RT_RU = 11284,
  SAEITIScode_prohibit_L45_R45_RU_Allowed_LU_LT_S_RT = 11285,
  SAEITIScode_prohibit_L45_R45_RT_Allowed_LU_LT_S_RU = 11286,
  SAEITIScode_prohibit_L45_R45_RT_RU_Allowed_LU_LT_S = 11287,
  SAEITIScode_prohibit_L45_S_Allowed_LU_LT_R45_RT_RU = 11288,
  SAEITIScode_prohibit_L45_S_RU_Allowed_LU_LT_R45_RT = 11289,
  SAEITIScode_prohibit_L45_S_RT_Allowed_LU_LT_R45_RU = 11290,
  SAEITIScode_prohibit_L45_S_RT_RU_Allowed_LU_LT_R45 = 11291,
  SAEITIScode_prohibit_L45_S_R45_Allowed_LU_LT_RT_RU = 11292,
  SAEITIScode_prohibit_L45_S_R45_RU_Allowed_LU_LT_RT = 11293,
  SAEITIScode_prohibit_L45_S_R45_RT_Allowed_LU_LT_RU = 11294,
  SAEITIScode_prohibit_L45_S_R45_RT_RU_Allowed_LU_LT = 11295,
  SAEITIScode_prohibit_LT_Allowed_LU_L45_S_R45_RT_RU = 11296,
  SAEITIScode_prohibit_LT_RU_Allowed_LU_L45_S_R45_RT = 11297,
  SAEITIScode_prohibit_LT_RT_Allowed_LU_L45_S_R45_RU = 11298,
  SAEITIScode_prohibit_LT_RT_RU_Allowed_LU_L45_S_R45 = 11299,
  SAEITIScode_prohibit_LT_R45_Allowed_LU_L45_S_RT_RU = 11300,
  SAEITIScode_prohibit_LT_R45_RU_Allowed_LU_L45_S_RT = 11301,
  SAEITIScode_prohibit_LT_R45_RT_Allowed_LU_L45_S_RU = 11302,
  SAEITIScode_prohibit_LT_R45_RT_RU_Allowed_LU_L45_S = 11303,
  SAEITIScode_prohibit_LT_S_Allowed_LU_L45_R45_RT_RU = 11304,
  SAEITIScode_prohibit_LT_S_RU_Allowed_LU_L45_R45_RT = 11305,
  SAEITIScode_prohibit_LT_S_RT_Allowed_LU_L45_R45_RU = 11306,
  SAEITIScode_prohibit_LT_S_RT_RU_Allowed_LU_L45_R45 = 11307,
  SAEITIScode_prohibit_LT_S_R45_Allowed_LU_L45_RT_RU = 11308,
  SAEITIScode_prohibit_LT_S_R45_RU_Allowed_LU_L45_RT = 11309,
  SAEITIScode_prohibit_LT_S_R45_RT_Allowed_LU_L45_RU = 11310,
  SAEITIScode_prohibit_LT_S_R45_RT_RU_Allowed_LU_L45 = 11311,
  SAEITIScode_prohibit_LT_L45_Allowed_LU_S_R45_RT_RU = 11312,
  SAEITIScode_prohibit_LT_L45_RU_Allowed_LU_S_R45_RT = 11313,
  SAEITIScode_prohibit_LT_L45_RT_Allowed_LU_S_R45_RU = 11314,
  SAEITIScode_prohibit_LT_L45_RT_RU_Allowed_LU_S_R45 = 11315,
  SAEITIScode_prohibit_LT_L45_R45_Allowed_LU_S_RT_RU = 11316,
  SAEITIScode_prohibit_LT_L45_R45_RU_Allowed_LU_S_RT = 11317,
  SAEITIScode_prohibit_LT_L45_R45_RT_Allowed_LU_S_RU = 11318,
  SAEITIScode_prohibit_LT_L45_R45_RT_RU_Allowed_LU_S = 11319,
  SAEITIScode_prohibit_LT_L45_S_Allowed_LU_R45_RT_RU = 11320,
  SAEITIScode_prohibit_LT_L45_S_RU_Allowed_LU_R45_RT = 11321,
  SAEITIScode_prohibit_LT_L45_S_RT_Allowed_LU_R45_RU = 11322,
  SAEITIScode_prohibit_LT_L45_S_RT_RU_Allowed_LU_R45 = 11323,
  SAEITIScode_prohibit_LT_L45_S_R45_Allowed_LU_RT_RU = 11324,
  SAEITIScode_prohibit_LT_L45_S_R45_RU_Allowed_LU_RT = 11325,
  SAEITIScode_prohibit_LT_L45_S_R45_RT_Allowed_LU_RU = 11326,
  SAEITIScode_prohibit_LT_L45_S_R45_RT_RU_Allowed_LU = 11327,
  SAEITIScode_prohibit_LU_Allowed_LT_L45_S_R45_RT_RU = 11328,
  SAEITIScode_prohibit_LU_RU_Allowed_LT_L45_S_R45_RT = 11329,
  SAEITIScode_prohibit_LU_RT_Allowed_LT_L45_S_R45_RU = 11330,
  SAEITIScode_prohibit_LU_RT_RU_Allowed_LT_L45_S_R45 = 11331,
  SAEITIScode_prohibit_LU_R45_Allowed_LT_L45_S_RT_RU = 11332,
  SAEITIScode_prohibit_LU_R45_RU_Allowed_LT_L45_S_RT = 11333,
  SAEITIScode_prohibit_LU_R45_RT_Allowed_LT_L45_S_RU = 11334,
  SAEITIScode_prohibit_LU_R45_RT_RU_Allowed_LT_L45_S = 11335,
  SAEITIScode_prohibit_LU_S_Allowed_LT_L45_R45_RT_RU = 11336,
  SAEITIScode_prohibit_LU_S_RU_Allowed_LT_L45_R45_RT = 11337,
  SAEITIScode_prohibit_LU_S_RT_Allowed_LT_L45_R45_RU = 11338,
  SAEITIScode_prohibit_LU_S_RT_RU_Allowed_LT_L45_R45 = 11339,
  SAEITIScode_prohibit_LU_S_R45_Allowed_LT_L45_RT_RU = 11340,
  SAEITIScode_prohibit_LU_S_R45_RU_Allowed_LT_L45_RT = 11341,
  SAEITIScode_prohibit_LU_S_R45_RT_Allowed_LT_L45_RU = 11342,
  SAEITIScode_prohibit_LU_S_R45_RT_RU_Allowed_LT_L45 = 11343,
  SAEITIScode_prohibit_LU_L45_Allowed_LT_S_R45_RT_RU = 11344,
  SAEITIScode_prohibit_LU_L45_RU_Allowed_LT_S_R45_RT = 11345,
  SAEITIScode_prohibit_LU_L45_RT_Allowed_LT_S_R45_RU = 11346,
  SAEITIScode_prohibit_LU_L45_RT_RU_Allowed_LT_S_R45 = 11347,
  SAEITIScode_prohibit_LU_L45_R45_Allowed_LT_S_RT_RU = 11348,
  SAEITIScode_prohibit_LU_L45_R45_RU_Allowed_LT_S_RT = 11349,
  SAEITIScode_prohibit_LU_L45_R45_RT_Allowed_LT_S_RU = 11350,
  SAEITIScode_prohibit_LU_L45_R45_RT_RU_Allowed_LT_S = 11351,
  SAEITIScode_prohibit_LU_L45_S_Allowed_LT_R45_RT_RU = 11352,
  SAEITIScode_prohibit_LU_L45_S_RU_Allowed_LT_R45_RT = 11353,
  SAEITIScode_prohibit_LU_L45_S_RT_Allowed_LT_R45_RU = 11354,
  SAEITIScode_prohibit_LU_L45_S_RT_RU_Allowed_LT_R45 = 11355,
  SAEITIScode_prohibit_LU_L45_S_R45_Allowed_LT_RT_RU = 11356,
  SAEITIScode_prohibit_LU_L45_S_R45_RU_Allowed_LT_RT = 11357,
  SAEITIScode_prohibit_LU_L45_S_R45_RT_Allowed_LT_RU = 11358,
  SAEITIScode_prohibit_LU_L45_S_R45_RT_RU_Allowed_LT = 11359,
  SAEITIScode_prohibit_LU_LT_Allowed_L45_S_R45_RT_RU = 11360,
  SAEITIScode_prohibit_LU_LT_RU_Allowed_L45_S_R45_RT = 11361,
  SAEITIScode_prohibit_LU_LT_RT_Allowed_L45_S_R45_RU = 11362,
  SAEITIScode_prohibit_LU_LT_RT_RU_Allowed_L45_S_R45 = 11363,
  SAEITIScode_prohibit_LU_LT_R45_Allowed_L45_S_RT_RU = 11364,
  SAEITIScode_prohibit_LU_LT_R45_RU_Allowed_L45_S_RT = 11365,
  SAEITIScode_prohibit_LU_LT_R45_RT_Allowed_L45_S_RU = 11366,
  SAEITIScode_prohibit_LU_LT_R45_RT_RU_Allowed_L45_S = 11367,
  SAEITIScode_prohibit_LU_LT_S_Allowed_L45_R45_RT_RU = 11368,
  SAEITIScode_prohibit_LU_LT_S_RU_Allowed_L45_R45_RT = 11369,
  SAEITIScode_prohibit_LU_LT_S_RT_Allowed_L45_R45_RU = 11370,
  SAEITIScode_prohibit_LU_LT_S_RT_RU_Allowed_L45_R45 = 11371,
  SAEITIScode_prohibit_LU_LT_S_R45_Allowed_L45_RT_RU = 11372,
  SAEITIScode_prohibit_LU_LT_S_R45_RU_Allowed_L45_RT = 11373,
  SAEITIScode_prohibit_LU_LT_S_R45_RT_Allowed_L45_RU = 11374,
  SAEITIScode_prohibit_LU_LT_S_R45_RT_RU_Allowed_L45 = 11375,
  SAEITIScode_prohibit_LU_LT_L45_Allowed_S_R45_RT_RU = 11376,
  SAEITIScode_prohibit_LU_LT_L45_RU_Allowed_S_R45_RT = 11377,
  SAEITIScode_prohibit_LU_LT_L45_RT_Allowed_S_R45_RU = 11378,
  SAEITIScode_prohibit_LU_LT_L45_RT_RU_Allowed_S_R45 = 11379,
  SAEITIScode_prohibit_LU_LT_L45_R45_Allowed_S_RT_RU = 11380,
  SAEITIScode_prohibit_LU_LT_L45_R45_RU_Allowed_S_RT = 11381,
  SAEITIScode_prohibit_LU_LT_L45_R45_RT_Allowed_S_RU = 11382,
  SAEITIScode_prohibit_LU_LT_L45_R45_RT_RU_Allowed_S = 11383,
  SAEITIScode_prohibit_LU_LT_L45_S_Allowed_R45_RT_RU = 11384,
  SAEITIScode_prohibit_LU_LT_L45_S_RU_Allowed_R45_RT = 11385,
  SAEITIScode_prohibit_LU_LT_L45_S_RT_Allowed_R45_RU = 11386,
  SAEITIScode_prohibit_LU_LT_L45_S_RT_RU_Allowed_R45 = 11387,
  SAEITIScode_prohibit_LU_LT_L45_S_R45_Allowed_RT_RU = 11388,
  SAEITIScode_prohibit_LU_LT_L45_S_R45_RU_Allowed_RT = 11389,
  SAEITIScode_prohibit_LU_LT_L45_S_R45_RT_Allowed_RU = 11390,
  SAEITIScode_prohibit_LU_LT_L45_S_R45_RT_RU_Allowed_None = 11391,
  SAEITIScode_n1_16th = 11521,
  SAEITIScode_n1_10th = 11522,
  SAEITIScode_n1_8th = 11523,
  SAEITIScode_n1_4th = 11524,
  SAEITIScode_n1_3rd = 11525,
  SAEITIScode_n1_2 = 11526,
  SAEITIScode_n3_4 = 11527,
  SAEITIScode_n300 = 11531,
  SAEITIScode_n350 = 11532,
  SAEITIScode_n400 = 11533,
  SAEITIScode_n450 = 11534,
  SAEITIScode_n500 = 11535,
  SAEITIScode_n550 = 11536,
  SAEITIScode_n600 = 11537,
  SAEITIScode_n650 = 11538,
  SAEITIScode_n700 = 11539,
  SAEITIScode_n750 = 11540,
  SAEITIScode_n800 = 11541,
  SAEITIScode_n850 = 11542,
  SAEITIScode_n900 = 11543,
  SAEITIScode_n950 = 11544,
  SAEITIScode_n1000 = 11545,
  SAEITIScode_n1100 = 11546,
  SAEITIScode_n1200 = 11547,
  SAEITIScode_n1300 = 11548,
  SAEITIScode_n1400 = 11549,
  SAEITIScode_n1500 = 11550,
  SAEITIScode_n1600 = 11551,
  SAEITIScode_n1700 = 11552,
  SAEITIScode_n1800 = 11553,
  SAEITIScode_n1900 = 11554,
  SAEITIScode_n2000 = 11555,
  SAEITIScode_n2100 = 11556,
  SAEITIScode_n2200 = 11557,
  SAEITIScode_n2300 = 11558,
  SAEITIScode_n2400 = 11559,
  SAEITIScode_n2500 = 11560,
  SAEITIScode_n2600 = 11561,
  SAEITIScode_n2700 = 11562,
  SAEITIScode_n2800 = 11563,
  SAEITIScode_n2900 = 11564,
  SAEITIScode_n3000 = 11565,
  SAEITIScode_n3500 = 11566,
  SAEITIScode_n4000 = 11567,
  SAEITIScode_n4500 = 11568,
  SAEITIScode_n5000 = 11569,
  SAEITIScode_n5500 = 11570,
  SAEITIScode_n6000 = 11571,
  SAEITIScode_n6500 = 11572,
  SAEITIScode_n7000 = 11573,
  SAEITIScode_n7500 = 11574,
  SAEITIScode_n8000 = 11575,
  SAEITIScode_n8500 = 11576,
  SAEITIScode_n9000 = 11577,
  SAEITIScode_n9500 = 11578,
  SAEITIScode_n10000 = 11579,
  SAEITIScode_n11000 = 11580,
  SAEITIScode_n12000 = 11581,
  SAEITIScode_n13000 = 11582,
  SAEITIScode_n14000 = 11583,
  SAEITIScode_n15000 = 11584,
  SAEITIScode_n16000 = 11585,
  SAEITIScode_n17000 = 11586,
  SAEITIScode_n18000 = 11587,
  SAEITIScode_n19000 = 11588,
  SAEITIScode_n20000 = 11589,
  SAEITIScode_n21000 = 11590,
  SAEITIScode_n22000 = 11591,
  SAEITIScode_n23000 = 11592,
  SAEITIScode_n24000 = 11593,
  SAEITIScode_n25000 = 11594,
  SAEITIScode_n26000 = 11595,
  SAEITIScode_n27000 = 11596,
  SAEITIScode_n28000 = 11597,
  SAEITIScode_n29000 = 11598,
  SAEITIScode_n30000 = 11599,
  SAEITIScode_n35000 = 11600,
  SAEITIScode_n40000 = 11601,
  SAEITIScode_n45000 = 11602,
  SAEITIScode_n50000 = 11603,
  SAEITIScode_n55000 = 11604,
  SAEITIScode_n60000 = 11605,
  SAEITIScode_n65000 = 11606,
  SAEITIScode_n70000 = 11607,
  SAEITIScode_n75000 = 11608,
  SAEITIScode_n80000 = 11609,
  SAEITIScode_n85000 = 11610,
  SAEITIScode_n90000 = 11611,
  SAEITIScode_n95000 = 11612,
  SAEITIScode_n100000 = 11613,
  SAEITIScode_name_follows = 11777,
  SAEITIScode_freeway = 11778,
  SAEITIScode_us_Route = 11779,
  SAEITIScode_state_Route = 11780,
  SAEITIScode_interstate = 11781,
  SAEITIScode_business_Loop = 11782,
  SAEITIScode_spur = 11797,
  SAEITIScode_junction = 11798,
  SAEITIScode_alternative = 11783,
  SAEITIScode_county_Route = 11784,
  SAEITIScode_forest_Route = 11785,
  SAEITIScode_farm_to_Market_Route = 11786,
  SAEITIScode_eisenhower_Interstate_System = 11787,
  SAEITIScode_americas_Byways = 11788,
  SAEITIScode_national_Network_Route = 11789,
  SAEITIScode_scenic_Area = 11790,
  SAEITIScode_parking_Area = 11791,
  SAEITIScode_weight_Station = 11792,
  SAEITIScode_road = 11793,
  SAEITIScode_exit = 11794,
  SAEITIScode_historical_route = 11795,
  SAEITIScode_state_line = 11796,
  SAEITIScode_bicycle_route = 11799,
  SAEITIScode_bicycle_interstate_route = 11800,
  SAEITIScode_national_park = 11801,
  SAEITIScode_bear_viewing_area = 12033,
  SAEITIScode_deer_viewing_area = 12034,
  SAEITIScode_drinking_water = 12035,
  SAEITIScode_environmental_study_area = 12036,
  SAEITIScode_falling_rocks = 12037,
  SAEITIScode_firearms = 12038,
  SAEITIScode_leashed_pets = 12039,
  SAEITIScode_point_of_interest = 12040,
  SAEITIScode_smoking = 12041,
  SAEITIScode_dog = 12042,
  SAEITIScode_tent_camping = 12043,
  SAEITIScode_trailer_camping = 12044,
  SAEITIScode_first_aid = 12045,
  SAEITIScode_handicapped = 12046,
  SAEITIScode_mechanic = 12047,
  SAEITIScode_trailer_sanitary_station = 12048,
  SAEITIScode_viewing_area = 12049,
  SAEITIScode_scenic_overlook = 12095,
  SAEITIScode_campfire = 12050,
  SAEITIScode_locker = 12051,
  SAEITIScode_sleeping = 12052,
  SAEITIScode_trail = 12053,
  SAEITIScode_climbing = 12054,
  SAEITIScode_rock_climbing = 12055,
  SAEITIScode_hunting = 12056,
  SAEITIScode_playground = 12057,
  SAEITIScode_rock_collecting = 12058,
  SAEITIScode_spelunking = 12059,
  SAEITIScode_bicycle_trail = 12060,
  SAEITIScode_hiking_trail = 12061,
  SAEITIScode_horse_trail = 12062,
  SAEITIScode_trail_interpretive_auto = 12063,
  SAEITIScode_trail_interpretive_pedestrian = 12064,
  SAEITIScode_trail_road_for_4WD_vehicles = 12065,
  SAEITIScode_trail_for_trail_bikes = 12066,
  SAEITIScode_archer = 12067,
  SAEITIScode_hang_glider = 12068,
  SAEITIScode_boat_tours = 12069,
  SAEITIScode_canoeing = 12070,
  SAEITIScode_diving = 12071,
  SAEITIScode_scuba_diving = 12072,
  SAEITIScode_fishing = 12073,
  SAEITIScode_marine_recreation_area = 12074,
  SAEITIScode_motorboating = 12075,
  SAEITIScode_boat_ramp = 12076,
  SAEITIScode_rowboating = 12077,
  SAEITIScode_sailboating = 12078,
  SAEITIScode_water_skiing = 12079,
  SAEITIScode_surfing = 12080,
  SAEITIScode_swimming = 12081,
  SAEITIScode_wading = 12082,
  SAEITIScode_hand_launch = 12083,
  SAEITIScode_kayak = 12084,
  SAEITIScode_wind_surf = 12085,
  SAEITIScode_ice_skating = 12086,
  SAEITIScode_ski_jumping = 12087,
  SAEITIScode_bobbing = 12088,
  SAEITIScode_cross_country_skiing = 12089,
  SAEITIScode_downhill_skiing = 12090,
  SAEITIScode_sledding = 12091,
  SAEITIScode_snowmobiling = 12092,
  SAEITIScode_snowshoeing = 12093,
  SAEITIScode_winter_recreation_area = 12094,
  SAEITIScode_regulatory_sign = 12289,
  SAEITIScode_warning_sign = 12290,
  SAEITIScode_information_sign = 12291,
  SAEITIScode_construction_sign = 12292,
  SAEITIScode_guide_sign = 12293,
  SAEITIScode_stop = 12294,
  SAEITIScode_yield = 12295,
  SAEITIScode_caution = 12330,
  SAEITIScode_temporary = 12331,
  SAEITIScode_to_oncoming_traffic = 12296,
  SAEITIScode_four_way = 12297,
  SAEITIScode_all_way = 12298,
  SAEITIScode_one_way = 12329,
  SAEITIScode_zone = 12299,
  SAEITIScode_narrows = 12300,
  SAEITIScode_widens = 12301,
  SAEITIScode_reduced = 12302,
  SAEITIScode_combined = 12303,
  SAEITIScode_minimum = 12304,
  SAEITIScode_maximum = 12305,
  SAEITIScode_divided_road = 12306,
  SAEITIScode_double_arrow = 12307,
  SAEITIScode_dead_end = 12308,
  SAEITIScode_no_outlet = 12309,
  SAEITIScode_wrong_way = 12310,
  SAEITIScode_do_not_enter = 12314,
  SAEITIScode_nDetour = 12312,
  SAEITIScode_chevron = 12313,
  SAEITIScode_t_intersection_to_the_side = 12315,
  SAEITIScode_t_intersection_oncoming = 12316,
  SAEITIScode_y_intersection_to_the_side = 12317,
  SAEITIScode_y_intersection_oncoming = 12318,
  SAEITIScode_four_way_divided_highway_crossing = 12319,
  SAEITIScode_t_way_divided_highway_crossing = 12320,
  SAEITIScode_light_rail_divided_highway_crossing = 12321,
  SAEITIScode_light_rail_t_divided_highway_crossing = 12322,
  SAEITIScode_side_road_to_right = 12323,
  SAEITIScode_side_road_to_left = 12324,
  SAEITIScode_side_road_to_right_at_angle = 12325,
  SAEITIScode_side_road_to_left_at_angle = 12326,
  SAEITIScode_entering_roadway_merge = 12327,
  SAEITIScode_entering_roadway_added_lane = 12328,
  SAEITIScode_n1 = 12545,
  SAEITIScode_n2 = 12546,
  SAEITIScode_n3 = 12547,
  SAEITIScode_n4 = 12548,
  SAEITIScode_n5 = 12549,
  SAEITIScode_n6 = 12550,
  SAEITIScode_n7 = 12551,
  SAEITIScode_n8 = 12552,
  SAEITIScode_n9 = 12553,
  SAEITIScode_n10 = 12554,
  SAEITIScode_n11 = 12555,
  SAEITIScode_n12 = 12556,
  SAEITIScode_n13 = 12557,
  SAEITIScode_n14 = 12558,
  SAEITIScode_n15 = 12559,
  SAEITIScode_n16 = 12560,
  SAEITIScode_n17 = 12561,
  SAEITIScode_n18 = 12562,
  SAEITIScode_n19 = 12563,
  SAEITIScode_n20 = 12564,
  SAEITIScode_n21 = 12565,
  SAEITIScode_n22 = 12566,
  SAEITIScode_n23 = 12567,
  SAEITIScode_n24 = 12568,
  SAEITIScode_n25 = 12569,
  SAEITIScode_n26 = 12570,
  SAEITIScode_n27 = 12571,
  SAEITIScode_n28 = 12572,
  SAEITIScode_n29 = 12573,
  SAEITIScode_n30 = 12574,
  SAEITIScode_n31 = 12575,
  SAEITIScode_n32 = 12576,
  SAEITIScode_n33 = 12577,
  SAEITIScode_n34 = 12578,
  SAEITIScode_n35 = 12579,
  SAEITIScode_n36 = 12580,
  SAEITIScode_n37 = 12581,
  SAEITIScode_n38 = 12582,
  SAEITIScode_n39 = 12583,
  SAEITIScode_n40 = 12584,
  SAEITIScode_n41 = 12585,
  SAEITIScode_n42 = 12586,
  SAEITIScode_n43 = 12587,
  SAEITIScode_n44 = 12588,
  SAEITIScode_n45 = 12589,
  SAEITIScode_n46 = 12590,
  SAEITIScode_n47 = 12591,
  SAEITIScode_n48 = 12592,
  SAEITIScode_n49 = 12593,
  SAEITIScode_n50 = 12594,
  SAEITIScode_n51 = 12595,
  SAEITIScode_n52 = 12596,
  SAEITIScode_n53 = 12597,
  SAEITIScode_n54 = 12598,
  SAEITIScode_n55 = 12599,
  SAEITIScode_n56 = 12600,
  SAEITIScode_n57 = 12601,
  SAEITIScode_n58 = 12602,
  SAEITIScode_n59 = 12603,
  SAEITIScode_n60 = 12604,
  SAEITIScode_n61 = 12605,
  SAEITIScode_n62 = 12606,
  SAEITIScode_n63 = 12607,
  SAEITIScode_n64 = 12608,
  SAEITIScode_n65 = 12609,
  SAEITIScode_n66 = 12610,
  SAEITIScode_n67 = 12611,
  SAEITIScode_n68 = 12612,
  SAEITIScode_n69 = 12613,
  SAEITIScode_n70 = 12614,
  SAEITIScode_n71 = 12615,
  SAEITIScode_n72 = 12616,
  SAEITIScode_n73 = 12617,
  SAEITIScode_n74 = 12618,
  SAEITIScode_n75 = 12619,
  SAEITIScode_n76 = 12620,
  SAEITIScode_n77 = 12621,
  SAEITIScode_n78 = 12622,
  SAEITIScode_n79 = 12623,
  SAEITIScode_n80 = 12624,
  SAEITIScode_n81 = 12625,
  SAEITIScode_n82 = 12626,
  SAEITIScode_n83 = 12627,
  SAEITIScode_n84 = 12628,
  SAEITIScode_n85 = 12629,
  SAEITIScode_n86 = 12630,
  SAEITIScode_n87 = 12631,
  SAEITIScode_n88 = 12632,
  SAEITIScode_n89 = 12633,
  SAEITIScode_n90 = 12634,
  SAEITIScode_n91 = 12635,
  SAEITIScode_n92 = 12636,
  SAEITIScode_n93 = 12637,
  SAEITIScode_n94 = 12638,
  SAEITIScode_n95 = 12639,
  SAEITIScode_n96 = 12640,
  SAEITIScode_n97 = 12641,
  SAEITIScode_n98 = 12642,
  SAEITIScode_n99 = 12643,
  SAEITIScode_n100 = 12644,
  SAEITIScode_n101 = 12645,
  SAEITIScode_n102 = 12646,
  SAEITIScode_n103 = 12647,
  SAEITIScode_n104 = 12648,
  SAEITIScode_n105 = 12649,
  SAEITIScode_n106 = 12650,
  SAEITIScode_n107 = 12651,
  SAEITIScode_n108 = 12652,
  SAEITIScode_n109 = 12653,
  SAEITIScode_n110 = 12654,
  SAEITIScode_n111 = 12655,
  SAEITIScode_n112 = 12656,
  SAEITIScode_n113 = 12657,
  SAEITIScode_n114 = 12658,
  SAEITIScode_n115 = 12659,
  SAEITIScode_n116 = 12660,
  SAEITIScode_n117 = 12661,
  SAEITIScode_n118 = 12662,
  SAEITIScode_n119 = 12663,
  SAEITIScode_n120 = 12664,
  SAEITIScode_n121 = 12665,
  SAEITIScode_n122 = 12666,
  SAEITIScode_n123 = 12667,
  SAEITIScode_n124 = 12668,
  SAEITIScode_n125 = 12669,
  SAEITIScode_n126 = 12670,
  SAEITIScode_n127 = 12671,
  SAEITIScode_n128 = 12672,
  SAEITIScode_n129 = 12673,
  SAEITIScode_n130 = 12674,
  SAEITIScode_n131 = 12675,
  SAEITIScode_n132 = 12676,
  SAEITIScode_n133 = 12677,
  SAEITIScode_n134 = 12678,
  SAEITIScode_n135 = 12679,
  SAEITIScode_n136 = 12680,
  SAEITIScode_n137 = 12681,
  SAEITIScode_n138 = 12682,
  SAEITIScode_n139 = 12683,
  SAEITIScode_n140 = 12684,
  SAEITIScode_n141 = 12685,
  SAEITIScode_n142 = 12686,
  SAEITIScode_n143 = 12687,
  SAEITIScode_n144 = 12688,
  SAEITIScode_n145 = 12689,
  SAEITIScode_n146 = 12690,
  SAEITIScode_n147 = 12691,
  SAEITIScode_n148 = 12692,
  SAEITIScode_n149 = 12693,
  SAEITIScode_n150 = 12694,
  SAEITIScode_n151 = 12695,
  SAEITIScode_n152 = 12696,
  SAEITIScode_n153 = 12697,
  SAEITIScode_n154 = 12698,
  SAEITIScode_n155 = 12699,
  SAEITIScode_n156 = 12700,
  SAEITIScode_n157 = 12701,
  SAEITIScode_n158 = 12702,
  SAEITIScode_n159 = 12703,
  SAEITIScode_n160 = 12704,
  SAEITIScode_n161 = 12705,
  SAEITIScode_n162 = 12706,
  SAEITIScode_n163 = 12707,
  SAEITIScode_n164 = 12708,
  SAEITIScode_n165 = 12709,
  SAEITIScode_n166 = 12710,
  SAEITIScode_n167 = 12711,
  SAEITIScode_n168 = 12712,
  SAEITIScode_n169 = 12713,
  SAEITIScode_n170 = 12714,
  SAEITIScode_n171 = 12715,
  SAEITIScode_n172 = 12716,
  SAEITIScode_n173 = 12717,
  SAEITIScode_n174 = 12718,
  SAEITIScode_n175 = 12719,
  SAEITIScode_n176 = 12720,
  SAEITIScode_n177 = 12721,
  SAEITIScode_n178 = 12722,
  SAEITIScode_n179 = 12723,
  SAEITIScode_n180 = 12724,
  SAEITIScode_n181 = 12725,
  SAEITIScode_n182 = 12726,
  SAEITIScode_n183 = 12727,
  SAEITIScode_n184 = 12728,
  SAEITIScode_n185 = 12729,
  SAEITIScode_n186 = 12730,
  SAEITIScode_n187 = 12731,
  SAEITIScode_n188 = 12732,
  SAEITIScode_n189 = 12733,
  SAEITIScode_n190 = 12734,
  SAEITIScode_n191 = 12735,
  SAEITIScode_n192 = 12736,
  SAEITIScode_n193 = 12737,
  SAEITIScode_n194 = 12738,
  SAEITIScode_n195 = 12739,
  SAEITIScode_n196 = 12740,
  SAEITIScode_n197 = 12741,
  SAEITIScode_n198 = 12742,
  SAEITIScode_n199 = 12743,
  SAEITIScode_n200 = 12744,
  SAEITIScode_n201 = 12745,
  SAEITIScode_n202 = 12746,
  SAEITIScode_n203 = 12747,
  SAEITIScode_n204 = 12748,
  SAEITIScode_n205 = 12749,
  SAEITIScode_n206 = 12750,
  SAEITIScode_n207 = 12751,
  SAEITIScode_n208 = 12752,
  SAEITIScode_n209 = 12753,
  SAEITIScode_n210 = 12754,
  SAEITIScode_n211 = 12755,
  SAEITIScode_n212 = 12756,
  SAEITIScode_n213 = 12757,
  SAEITIScode_n214 = 12758,
  SAEITIScode_n215 = 12759,
  SAEITIScode_n216 = 12760,
  SAEITIScode_n217 = 12761,
  SAEITIScode_n218 = 12762,
  SAEITIScode_n219 = 12763,
  SAEITIScode_n220 = 12764,
  SAEITIScode_n221 = 12765,
  SAEITIScode_n222 = 12766,
  SAEITIScode_n223 = 12767,
  SAEITIScode_n224 = 12768,
  SAEITIScode_n225 = 12769,
  SAEITIScode_n226 = 12770,
  SAEITIScode_n227 = 12771,
  SAEITIScode_n228 = 12772,
  SAEITIScode_n229 = 12773,
  SAEITIScode_n230 = 12774,
  SAEITIScode_n231 = 12775,
  SAEITIScode_n232 = 12776,
  SAEITIScode_n233 = 12777,
  SAEITIScode_n234 = 12778,
  SAEITIScode_n235 = 12779,
  SAEITIScode_n236 = 12780,
  SAEITIScode_n237 = 12781,
  SAEITIScode_n238 = 12782,
  SAEITIScode_n239 = 12783,
  SAEITIScode_n240 = 12784,
  SAEITIScode_n241 = 12785,
  SAEITIScode_n242 = 12786,
  SAEITIScode_n243 = 12787,
  SAEITIScode_n244 = 12788,
  SAEITIScode_n245 = 12789,
  SAEITIScode_n246 = 12790,
  SAEITIScode_n247 = 12791,
  SAEITIScode_n248 = 12792,
  SAEITIScode_n249 = 12793,
  SAEITIScode_n250 = 12794,
  SAEITIScode_n251 = 12795,
  SAEITIScode_n252 = 12796,
  SAEITIScode_n253 = 12797,
  SAEITIScode_n254 = 12798,
  SAEITIScode_n255 = 12799,
  SAEITIScode_alabama = 12801,
  SAEITIScode_alaska = 12802,
  SAEITIScode_american_Samoa = 12803,
  SAEITIScode_arizona = 12804,
  SAEITIScode_arkansas = 12805,
  SAEITIScode_california = 12806,
  SAEITIScode_colorado = 12807,
  SAEITIScode_connecticut = 12808,
  SAEITIScode_delaware = 12809,
  SAEITIScode_district_of_Columbia = 12810,
  SAEITIScode_florida = 12811,
  SAEITIScode_georgia = 12812,
  SAEITIScode_guam = 12813,
  SAEITIScode_hawaii = 12814,
  SAEITIScode_idaho = 12815,
  SAEITIScode_illinois = 12816,
  SAEITIScode_indiana = 12817,
  SAEITIScode_iowa = 12818,
  SAEITIScode_kansas = 12819,
  SAEITIScode_kentucky = 12820,
  SAEITIScode_louisiana = 12821,
  SAEITIScode_maine = 12822,
  SAEITIScode_maryland = 12823,
  SAEITIScode_massachusetts = 12824,
  SAEITIScode_michigan = 12825,
  SAEITIScode_minnesota = 12826,
  SAEITIScode_mississippi = 12827,
  SAEITIScode_missouri = 12828,
  SAEITIScode_montana = 12829,
  SAEITIScode_nebraska = 12830,
  SAEITIScode_nevada = 12831,
  SAEITIScode_new_Hampshire = 12832,
  SAEITIScode_new_Jersey = 12833,
  SAEITIScode_new_Mexico = 12834,
  SAEITIScode_new_York = 12835,
  SAEITIScode_north_Carolina = 12836,
  SAEITIScode_north_Dakota = 12837,
  SAEITIScode_northern_Marianas_Islands = 12838,
  SAEITIScode_ohio = 12839,
  SAEITIScode_oklahoma = 12840,
  SAEITIScode_oregon = 12841,
  SAEITIScode_pennsylvania = 12842,
  SAEITIScode_puerto_rico = 12843,
  SAEITIScode_rhode_Island = 12844,
  SAEITIScode_south_Carolina = 12845,
  SAEITIScode_south_Dakota = 12846,
  SAEITIScode_tennessee = 12847,
  SAEITIScode_texas = 12848,
  SAEITIScode_utah = 12849,
  SAEITIScode_vermont = 12850,
  SAEITIScode_virginia = 12851,
  SAEITIScode_virgin_Islands = 12852,
  SAEITIScode_washington = 12853,
  SAEITIScode_west_Virginia = 12854,
  SAEITIScode_wisconsin = 12855,
  SAEITIScode_wyoming = 12856,
  SAEITIScode_rest_room = 13057,
  SAEITIScode_mens_rest_room = 13058,
  SAEITIScode_womens_rest_room = 13059,
  SAEITIScode_family_rest_room = 13060,
  SAEITIScode_dam = 13061,
  SAEITIScode_fish_hatchery = 13062,
  SAEITIScode_information = 13063,
  SAEITIScode_lighthouse = 13064,
  SAEITIScode_lookout_tower = 13065,
  SAEITIScode_ranger_station = 13066,
  SAEITIScode_grocery_store = 13068,
  SAEITIScode_lodging = 13069,
  SAEITIScode_post_office = 13070,
  SAEITIScode_picnic_shelter = 13072,
  SAEITIScode_group_camping = 13073,
  SAEITIScode_group_picnicking = 13074,
  SAEITIScode_n24_hour_pharmacy = 13075,
  SAEITIScode_kennel = 13076,
  SAEITIScode_laundry_facilities = 13077,
  SAEITIScode_shower_facilities = 13078,
  SAEITIScode_amphitheater = 13079,
  SAEITIScode_stable = 13080,
  SAEITIScode_hospital = 13081,
  SAEITIScode_emergency_medical_service_point = 13082,
  SAEITIScode_library = 13083,
  SAEITIScode_recycling_collection_center = 13084,
  SAEITIScode_school = 13085,
  SAEITIScode_alley = 13313,
  SAEITIScode_annex = 13314,
  SAEITIScode_arcade = 13315,
  SAEITIScode_avenue = 13316,
  SAEITIScode_bayoo = 13317,
  SAEITIScode_beach = 13318,
  SAEITIScode_bend = 13319,
  SAEITIScode_bluff = 13320,
  SAEITIScode_bottom = 13321,
  SAEITIScode_boulevard = 13322,
  SAEITIScode_branch = 13323,
  SAEITIScode_nBridge = 13324,
  SAEITIScode_brook = 13325,
  SAEITIScode_burg = 13326,
  SAEITIScode_bypass = 13327,
  SAEITIScode_camp = 13328,
  SAEITIScode_canyon = 13329,
  SAEITIScode_cape = 13330,
  SAEITIScode_causeway = 13331,
  SAEITIScode_nCenter = 13332,
  SAEITIScode_circle = 13333,
  SAEITIScode_cliff = 13334,
  SAEITIScode_club = 13335,
  SAEITIScode_common = 13336,
  SAEITIScode_corner = 13337,
  SAEITIScode_course = 13338,
  SAEITIScode_court = 13339,
  SAEITIScode_cove = 13340,
  SAEITIScode_creek = 13341,
  SAEITIScode_crescent = 13342,
  SAEITIScode_crest = 13343,
  SAEITIScode_nCrossing = 13344,
  SAEITIScode_crossroad = 13345,
  SAEITIScode_curve = 13346,
  SAEITIScode_dale = 13347,
  SAEITIScode_nDam = 13348,
  SAEITIScode_divide = 13349,
  SAEITIScode_drive = 13350,
  SAEITIScode_estate = 13351,
  SAEITIScode_expressway = 13352,
  SAEITIScode_extension = 13353,
  SAEITIScode_fall = 13354,
  SAEITIScode_nFerry = 13355,
  SAEITIScode_field = 13356,
  SAEITIScode_flat = 13357,
  SAEITIScode_ford = 13358,
  SAEITIScode_forest = 13359,
  SAEITIScode_forge = 13360,
  SAEITIScode_fork = 13361,
  SAEITIScode_fort = 13362,
  SAEITIScode_nFreeway = 13363,
  SAEITIScode_garden = 13364,
  SAEITIScode_gateway = 13365,
  SAEITIScode_glen = 13366,
  SAEITIScode_green = 13367,
  SAEITIScode_grove = 13368,
  SAEITIScode_harbor = 13369,
  SAEITIScode_haven = 13370,
  SAEITIScode_heights = 13371,
  SAEITIScode_highway = 13372,
  SAEITIScode_nHill = 13373,
  SAEITIScode_hollow = 13374,
  SAEITIScode_inlet = 13375,
  SAEITIScode_nIsland = 13376,
  SAEITIScode_isle = 13377,
  SAEITIScode_nJunction = 13378,
  SAEITIScode_key = 13379,
  SAEITIScode_knoll = 13380,
  SAEITIScode_lake = 13381,
  SAEITIScode_land = 13382,
  SAEITIScode_landing = 13383,
  SAEITIScode_nLane = 13384,
  SAEITIScode_light = 13385,
  SAEITIScode_loaf = 13386,
  SAEITIScode_lock = 13387,
  SAEITIScode_lodge = 13388,
  SAEITIScode_loop = 13389,
  SAEITIScode_mall = 13390,
  SAEITIScode_manor = 13391,
  SAEITIScode_meadow = 13392,
  SAEITIScode_mews = 13393,
  SAEITIScode_mill = 13394,
  SAEITIScode_mission = 13395,
  SAEITIScode_motorway = 13396,
  SAEITIScode_mount = 13397,
  SAEITIScode_mountain = 13398,
  SAEITIScode_neck = 13399,
  SAEITIScode_orchard = 13400,
  SAEITIScode_oval = 13401,
  SAEITIScode_nOverpass = 13402,
  SAEITIScode_park = 13403,
  SAEITIScode_parkway = 13404,
  SAEITIScode_nPass = 13405,
  SAEITIScode_passage = 13406,
  SAEITIScode_path = 13407,
  SAEITIScode_pike = 13408,
  SAEITIScode_pine = 13409,
  SAEITIScode_plains = 13410,
  SAEITIScode_plaza = 13411,
  SAEITIScode_point = 13412,
  SAEITIScode_port = 13413,
  SAEITIScode_prairie = 13414,
  SAEITIScode_radial = 13415,
  SAEITIScode_ramp = 13416,
  SAEITIScode_ranch = 13417,
  SAEITIScode_rapid = 13418,
  SAEITIScode_rest = 13419,
  SAEITIScode_ridge = 13420,
  SAEITIScode_river = 13421,
  SAEITIScode_nRoad = 13422,
  SAEITIScode_route = 13423,
  SAEITIScode_row = 13424,
  SAEITIScode_rue = 13425,
  SAEITIScode_run = 13426,
  SAEITIScode_shoal = 13427,
  SAEITIScode_shore = 13428,
  SAEITIScode_skyway = 13429,
  SAEITIScode_spring = 13430,
  SAEITIScode_nSpur = 13431,
  SAEITIScode_square = 13432,
  SAEITIScode_nStation = 13433,
  SAEITIScode_stravenue = 13434,
  SAEITIScode_stream = 13435,
  SAEITIScode_street = 13436,
  SAEITIScode_summit = 13437,
  SAEITIScode_terrace = 13438,
  SAEITIScode_throughway = 13439,
  SAEITIScode_trace = 13440,
  SAEITIScode_nTrack = 13441,
  SAEITIScode_trafficway = 13442,
  SAEITIScode_nTrail = 13443,
  SAEITIScode_nTunnel = 13444,
  SAEITIScode_turnpike = 13445,
  SAEITIScode_nUnderpass = 13446,
  SAEITIScode_Union = 13447,
  SAEITIScode_valley = 13448,
  SAEITIScode_viaduct = 13449,
  SAEITIScode_view = 13450,
  SAEITIScode_village = 13451,
  SAEITIScode_ville = 13452,
  SAEITIScode_vista = 13453,
  SAEITIScode_nWalk = 13454,
  SAEITIScode_wall = 13455,
  SAEITIScode_way = 13456,
  SAEITIScode_well = 13457,
  SAEITIScode_ahead = 13569,
  SAEITIScode_here = 13570,
  SAEITIScode_here_to = 13571,
  SAEITIScode_here_to_alley = 13572,
  SAEITIScode_here_to_corner = 13573,
  SAEITIScode_here_to_sign = 13574,
  SAEITIScode_between_signs = 13575,
  SAEITIScode_between = 13633,
  SAEITIScode_this_side_of_street = 13576,
  SAEITIScode_this_side_of_sign = 13577,
  SAEITIScode_right = 13579,
  SAEITIScode_left = 13580,
  SAEITIScode_begin_point = 13581,
  SAEITIScode_next = 13582,
  SAEITIScode_starting_start = 13611,
  SAEITIScode_ends_end = 13583,
  SAEITIScode_other_Side = 13584,
  SAEITIScode_crossing = 13585,
  SAEITIScode_crosswalks = 13586,
  SAEITIScode_center_strip = 13587,
  SAEITIScode_lane = 13588,
  SAEITIScode_shelter = 13634,
  SAEITIScode_center = 13635,
  SAEITIScode_hill = 13589,
  SAEITIScode_both_ways_left_and_right = 13590,
  SAEITIScode_both_ways_45_degree_angle_tilting_right = 13591,
  SAEITIScode_both_ways_45_degree_angle_tilting_left = 13592,
  SAEITIScode_both_directions_of_travel = 13593,
  SAEITIScode_left_arrow = 13610,
  SAEITIScode_left_turn = 13594,
  SAEITIScode_left_45_degree_arrow = 13595,
  SAEITIScode_left_45_degree_turn = 13596,
  SAEITIScode_ahead_and_to_the_left = 13597,
  SAEITIScode_ahead_and_to_the_left_at_a_45_degree_angle = 13598,
  SAEITIScode_right_arrow = 13609,
  SAEITIScode_right_turn = 13599,
  SAEITIScode_right_45_degree_arrow = 13600,
  SAEITIScode_right_45_degree_turn = 13601,
  SAEITIScode_ahead_and_to_the_right = 13602,
  SAEITIScode_ahead_and_to_the_right_at_a_45_degree_angle = 13603,
  SAEITIScode_downward_left_45_degree = 13604,
  SAEITIScode_downward_right_45_degree = 13605,
  SAEITIScode_downward_left_and_right_45_degree = 13606,
  SAEITIScode_reverse_turn_to_right = 13636,
  SAEITIScode_reverse_turn_to_left = 13637,
  SAEITIScode_reverse_curve_to_right = 13638,
  SAEITIScode_reverse_curve_to_left = 13639,
  SAEITIScode_two_lane_reverse_curve_to_right = 13623,
  SAEITIScode_two_lane_reverse_curve_to_left = 13624,
  SAEITIScode_three_lane_reverse_curve_to_right = 13625,
  SAEITIScode_three_lane_reverse_curve_to_left = 13626,
  SAEITIScode_winding_road_to_right = 13640,
  SAEITIScode_winding_road_to_left = 13641,
  SAEITIScode_chevron_right = 13613,
  SAEITIScode_chevron_left = 13614,
  SAEITIScode_right_turn_with_junction = 13615,
  SAEITIScode_left_turn_with_junction = 13616,
  SAEITIScode_hairpin_right = 13617,
  SAEITIScode_hairpin_left = 13618,
  SAEITIScode_truck_rollover_right = 13619,
  SAEITIScode_truck_rollover_left = 13620,
  SAEITIScode_n270_degree_turn_right = 13621,
  SAEITIScode_n270_degree_turn_left = 13622,
  SAEITIScode_double_reverse_curve_to_right = 13627,
  SAEITIScode_double_reverse_curve_to_left = 13628,
  SAEITIScode_two_lane_double_reverse_curve_to_right = 13629,
  SAEITIScode_two_lane_double_reverse_curve_to_left = 13630,
  SAEITIScode_three_lane_double_reverse_curve_to_right = 13631,
  SAEITIScode_three_lane_double_reverse_curve_to_left = 13632,
};

extern const ASN1CType asn1_type_SAEITIScode[];

typedef int SAELaneRoadway;

enum {
  SAELaneRoadway_all_roadways = 8193,
  SAELaneRoadway_through_lanes = 8194,
  SAELaneRoadway_left_lane = 8195,
  SAELaneRoadway_right_lane = 8196,
  SAELaneRoadway_center_lane = 8197,
  SAELaneRoadway_middle_lanes = 8198,
  SAELaneRoadway_middle_two_lanes = 8199,
  SAELaneRoadway_right_turning_lanes = 8200,
  SAELaneRoadway_left_turning_lanes = 8201,
  SAELaneRoadway_upper_deck_lanes = 8236,
  SAELaneRoadway_lower_deck_lanes = 8237,
  SAELaneRoadway_reversible_lanes = 8238,
  SAELaneRoadway_right_exit_lanes = 8239,
  SAELaneRoadway_left_exit_lanes = 8240,
  SAELaneRoadway_right_merging_lanes = 8241,
  SAELaneRoadway_left_merging_lanes = 8242,
  SAELaneRoadway_right_exit_ramp = 8202,
  SAELaneRoadway_right_second_exit_ramp = 8243,
  SAELaneRoadway_right_entrance_ramp = 8203,
  SAELaneRoadway_right_second_entrance_ramp = 8245,
  SAELaneRoadway_left_exit_ramp = 8204,
  SAELaneRoadway_left_second_exit_ramp = 8244,
  SAELaneRoadway_left_entrance_ramp = 8205,
  SAELaneRoadway_left_second_entrance_ramp = 8246,
  SAELaneRoadway_escape_ramp = 8234,
  SAELaneRoadway_hard_shoulder = 8206,
  SAELaneRoadway_soft_shoulder = 8207,
  SAELaneRoadway_right_shoulder = 8208,
  SAELaneRoadway_left_shoulder = 8209,
  SAELaneRoadway_median = 8252,
  SAELaneRoadway_sidewalk = 8251,
  SAELaneRoadway_highways = 8235,
  SAELaneRoadway_right_hand_parallel_lanes = 8210,
  SAELaneRoadway_left_hand_parallel_lanes = 8211,
  SAELaneRoadway_connecting_lanes = 8212,
  SAELaneRoadway_express_lanes = 8213,
  SAELaneRoadway_local_lanes = 8214,
  SAELaneRoadway_toll_lanes = 8215,
  SAELaneRoadway_electronic_toll_lanes = 8216,
  SAELaneRoadway_toll_plaza = 8217,
  SAELaneRoadway_inspection_lane = 8218,
  SAELaneRoadway_hOV_lanes = 8219,
  SAELaneRoadway_bus_lanes = 8220,
  SAELaneRoadway_carpool_lanes = 8221,
  SAELaneRoadway_truck_lanes = 8222,
  SAELaneRoadway_emergency_lanes = 8223,
  SAELaneRoadway_passing_lanes = 8224,
  SAELaneRoadway_climbing_lanes = 8225,
  SAELaneRoadway_slow_lane = 8226,
  SAELaneRoadway_service_road = 8227,
  SAELaneRoadway_cycle_lane = 8228,
  SAELaneRoadway_tracks = 8250,
  SAELaneRoadway_bridge = 8229,
  SAELaneRoadway_overpass = 8230,
  SAELaneRoadway_elevated_lanes = 8231,
  SAELaneRoadway_underpass = 8232,
  SAELaneRoadway_tunnel = 8233,
  SAELaneRoadway_all_exit_lanes = 8247,
  SAELaneRoadway_all_entry_lanes = 8248,
  SAELaneRoadway_either_shoulder = 8249,
  SAELaneRoadway_shoulder_work = 8253,
};

extern const ASN1CType asn1_type_SAELaneRoadway[];

typedef int SAELargeNumbers;

enum {
  SAELargeNumbers_n1_16th = 11521,
  SAELargeNumbers_n1_10th = 11522,
  SAELargeNumbers_n1_8th = 11523,
  SAELargeNumbers_n1_4th = 11524,
  SAELargeNumbers_n1_3rd = 11525,
  SAELargeNumbers_n1_2 = 11526,
  SAELargeNumbers_n3_4 = 11527,
  SAELargeNumbers_n300 = 11531,
  SAELargeNumbers_n350 = 11532,
  SAELargeNumbers_n400 = 11533,
  SAELargeNumbers_n450 = 11534,
  SAELargeNumbers_n500 = 11535,
  SAELargeNumbers_n550 = 11536,
  SAELargeNumbers_n600 = 11537,
  SAELargeNumbers_n650 = 11538,
  SAELargeNumbers_n700 = 11539,
  SAELargeNumbers_n750 = 11540,
  SAELargeNumbers_n800 = 11541,
  SAELargeNumbers_n850 = 11542,
  SAELargeNumbers_n900 = 11543,
  SAELargeNumbers_n950 = 11544,
  SAELargeNumbers_n1000 = 11545,
  SAELargeNumbers_n1100 = 11546,
  SAELargeNumbers_n1200 = 11547,
  SAELargeNumbers_n1300 = 11548,
  SAELargeNumbers_n1400 = 11549,
  SAELargeNumbers_n1500 = 11550,
  SAELargeNumbers_n1600 = 11551,
  SAELargeNumbers_n1700 = 11552,
  SAELargeNumbers_n1800 = 11553,
  SAELargeNumbers_n1900 = 11554,
  SAELargeNumbers_n2000 = 11555,
  SAELargeNumbers_n2100 = 11556,
  SAELargeNumbers_n2200 = 11557,
  SAELargeNumbers_n2300 = 11558,
  SAELargeNumbers_n2400 = 11559,
  SAELargeNumbers_n2500 = 11560,
  SAELargeNumbers_n2600 = 11561,
  SAELargeNumbers_n2700 = 11562,
  SAELargeNumbers_n2800 = 11563,
  SAELargeNumbers_n2900 = 11564,
  SAELargeNumbers_n3000 = 11565,
  SAELargeNumbers_n3500 = 11566,
  SAELargeNumbers_n4000 = 11567,
  SAELargeNumbers_n4500 = 11568,
  SAELargeNumbers_n5000 = 11569,
  SAELargeNumbers_n5500 = 11570,
  SAELargeNumbers_n6000 = 11571,
  SAELargeNumbers_n6500 = 11572,
  SAELargeNumbers_n7000 = 11573,
  SAELargeNumbers_n7500 = 11574,
  SAELargeNumbers_n8000 = 11575,
  SAELargeNumbers_n8500 = 11576,
  SAELargeNumbers_n9000 = 11577,
  SAELargeNumbers_n9500 = 11578,
  SAELargeNumbers_n10000 = 11579,
  SAELargeNumbers_n11000 = 11580,
  SAELargeNumbers_n12000 = 11581,
  SAELargeNumbers_n13000 = 11582,
  SAELargeNumbers_n14000 = 11583,
  SAELargeNumbers_n15000 = 11584,
  SAELargeNumbers_n16000 = 11585,
  SAELargeNumbers_n17000 = 11586,
  SAELargeNumbers_n18000 = 11587,
  SAELargeNumbers_n19000 = 11588,
  SAELargeNumbers_n20000 = 11589,
  SAELargeNumbers_n21000 = 11590,
  SAELargeNumbers_n22000 = 11591,
  SAELargeNumbers_n23000 = 11592,
  SAELargeNumbers_n24000 = 11593,
  SAELargeNumbers_n25000 = 11594,
  SAELargeNumbers_n26000 = 11595,
  SAELargeNumbers_n27000 = 11596,
  SAELargeNumbers_n28000 = 11597,
  SAELargeNumbers_n29000 = 11598,
  SAELargeNumbers_n30000 = 11599,
  SAELargeNumbers_n35000 = 11600,
  SAELargeNumbers_n40000 = 11601,
  SAELargeNumbers_n45000 = 11602,
  SAELargeNumbers_n50000 = 11603,
  SAELargeNumbers_n55000 = 11604,
  SAELargeNumbers_n60000 = 11605,
  SAELargeNumbers_n65000 = 11606,
  SAELargeNumbers_n70000 = 11607,
  SAELargeNumbers_n75000 = 11608,
  SAELargeNumbers_n80000 = 11609,
  SAELargeNumbers_n85000 = 11610,
  SAELargeNumbers_n90000 = 11611,
  SAELargeNumbers_n95000 = 11612,
  SAELargeNumbers_n100000 = 11613,
};

extern const ASN1CType asn1_type_SAELargeNumbers[];

typedef int SAEMobileSituation;

enum {
  SAEMobileSituation_abnormal_load = 2049,
  SAEMobileSituation_wide_load = 2050,
  SAEMobileSituation_long_load = 2051,
  SAEMobileSituation_slow_vehicle = 2052,
  SAEMobileSituation_farm_equipment = 2053,
  SAEMobileSituation_horse_drawn_vehicles = 2054,
  SAEMobileSituation_overheight_load = 2055,
  SAEMobileSituation_overweight_load = 2056,
  SAEMobileSituation_tracked_vehicle = 2057,
  SAEMobileSituation_vehicle_carrying_hazardous_materials = 2058,
  SAEMobileSituation_slow_moving_maintenance_vehicle = 2059,
  SAEMobileSituation_convoy = 2060,
  SAEMobileSituation_military_convoy = 2061,
  SAEMobileSituation_refugee_convoy = 2062,
  SAEMobileSituation_motorcade = 2063,
  SAEMobileSituation_mobile_situation_repositioning = 2064,
  SAEMobileSituation_winter_maintenance_vehicles = 2065,
  SAEMobileSituation_snowplows = 2066,
  SAEMobileSituation_slow_moving_maintenance_vehicle_warning_cleared = 2172,
  SAEMobileSituation_exceptional_load_warning_cleared = 2173,
  SAEMobileSituation_hazardous_load_warning_cleared = 2174,
  SAEMobileSituation_convoy_cleared = 2175,
};

extern const ASN1CType asn1_type_SAEMobileSituation[];

typedef int SAEMUTCDLocations;

enum {
  SAEMUTCDLocations_ahead = 13569,
  SAEMUTCDLocations_here = 13570,
  SAEMUTCDLocations_here_to = 13571,
  SAEMUTCDLocations_here_to_alley = 13572,
  SAEMUTCDLocations_here_to_corner = 13573,
  SAEMUTCDLocations_here_to_sign = 13574,
  SAEMUTCDLocations_between_signs = 13575,
  SAEMUTCDLocations_between = 13633,
  SAEMUTCDLocations_this_side_of_street = 13576,
  SAEMUTCDLocations_this_side_of_sign = 13577,
  SAEMUTCDLocations_right = 13579,
  SAEMUTCDLocations_left = 13580,
  SAEMUTCDLocations_begin_point = 13581,
  SAEMUTCDLocations_next = 13582,
  SAEMUTCDLocations_starting_start = 13611,
  SAEMUTCDLocations_ends_end = 13583,
  SAEMUTCDLocations_other_Side = 13584,
  SAEMUTCDLocations_crossing = 13585,
  SAEMUTCDLocations_crosswalks = 13586,
  SAEMUTCDLocations_center_strip = 13587,
  SAEMUTCDLocations_lane = 13588,
  SAEMUTCDLocations_shelter = 13634,
  SAEMUTCDLocations_center = 13635,
  SAEMUTCDLocations_hill = 13589,
  SAEMUTCDLocations_both_ways_left_and_right = 13590,
  SAEMUTCDLocations_both_ways_45_degree_angle_tilting_right = 13591,
  SAEMUTCDLocations_both_ways_45_degree_angle_tilting_left = 13592,
  SAEMUTCDLocations_both_directions_of_travel = 13593,
  SAEMUTCDLocations_left_arrow = 13610,
  SAEMUTCDLocations_left_turn = 13594,
  SAEMUTCDLocations_left_45_degree_arrow = 13595,
  SAEMUTCDLocations_left_45_degree_turn = 13596,
  SAEMUTCDLocations_ahead_and_to_the_left = 13597,
  SAEMUTCDLocations_ahead_and_to_the_left_at_a_45_degree_angle = 13598,
  SAEMUTCDLocations_right_arrow = 13609,
  SAEMUTCDLocations_right_turn = 13599,
  SAEMUTCDLocations_right_45_degree_arrow = 13600,
  SAEMUTCDLocations_right_45_degree_turn = 13601,
  SAEMUTCDLocations_ahead_and_to_the_right = 13602,
  SAEMUTCDLocations_ahead_and_to_the_right_at_a_45_degree_angle = 13603,
  SAEMUTCDLocations_downward_left_45_degree = 13604,
  SAEMUTCDLocations_downward_right_45_degree = 13605,
  SAEMUTCDLocations_downward_left_and_right_45_degree = 13606,
  SAEMUTCDLocations_reverse_turn_to_right = 13636,
  SAEMUTCDLocations_reverse_turn_to_left = 13637,
  SAEMUTCDLocations_reverse_curve_to_right = 13638,
  SAEMUTCDLocations_reverse_curve_to_left = 13639,
  SAEMUTCDLocations_two_lane_reverse_curve_to_right = 13623,
  SAEMUTCDLocations_two_lane_reverse_curve_to_left = 13624,
  SAEMUTCDLocations_three_lane_reverse_curve_to_right = 13625,
  SAEMUTCDLocations_three_lane_reverse_curve_to_left = 13626,
  SAEMUTCDLocations_winding_road_to_right = 13640,
  SAEMUTCDLocations_winding_road_to_left = 13641,
  SAEMUTCDLocations_chevron_right = 13613,
  SAEMUTCDLocations_chevron_left = 13614,
  SAEMUTCDLocations_right_turn_with_junction = 13615,
  SAEMUTCDLocations_left_turn_with_junction = 13616,
  SAEMUTCDLocations_hairpin_right = 13617,
  SAEMUTCDLocations_hairpin_left = 13618,
  SAEMUTCDLocations_truck_rollover_right = 13619,
  SAEMUTCDLocations_truck_rollover_left = 13620,
  SAEMUTCDLocations_n270_degree_turn_right = 13621,
  SAEMUTCDLocations_n270_degree_turn_left = 13622,
  SAEMUTCDLocations_double_reverse_curve_to_right = 13627,
  SAEMUTCDLocations_double_reverse_curve_to_left = 13628,
  SAEMUTCDLocations_two_lane_double_reverse_curve_to_right = 13629,
  SAEMUTCDLocations_two_lane_double_reverse_curve_to_left = 13630,
  SAEMUTCDLocations_three_lane_double_reverse_curve_to_right = 13631,
  SAEMUTCDLocations_three_lane_double_reverse_curve_to_left = 13632,
};

extern const ASN1CType asn1_type_SAEMUTCDLocations[];

typedef int SAENamedObjects;

enum {
  SAENamedObjects_name_follows = 11777,
  SAENamedObjects_freeway = 11778,
  SAENamedObjects_us_Route = 11779,
  SAENamedObjects_state_Route = 11780,
  SAENamedObjects_interstate = 11781,
  SAENamedObjects_business_Loop = 11782,
  SAENamedObjects_spur = 11797,
  SAENamedObjects_junction = 11798,
  SAENamedObjects_alternative = 11783,
  SAENamedObjects_county_Route = 11784,
  SAENamedObjects_forest_Route = 11785,
  SAENamedObjects_farm_to_Market_Route = 11786,
  SAENamedObjects_eisenhower_Interstate_System = 11787,
  SAENamedObjects_americas_Byways = 11788,
  SAENamedObjects_national_Network_Route = 11789,
  SAENamedObjects_scenic_Area = 11790,
  SAENamedObjects_parking_Area = 11791,
  SAENamedObjects_weight_Station = 11792,
  SAENamedObjects_road = 11793,
  SAENamedObjects_exit = 11794,
  SAENamedObjects_historical_route = 11795,
  SAENamedObjects_state_line = 11796,
  SAENamedObjects_bicycle_route = 11799,
  SAENamedObjects_bicycle_interstate_route = 11800,
  SAENamedObjects_national_park = 11801,
};

extern const ASN1CType asn1_type_SAENamedObjects[];

typedef int SAEObjects;

enum {
  SAEObjects_unknown_object = 11009,
  SAEObjects_tire = 11010,
  SAEObjects_rim = 11011,
  SAEObjects_retread = 11012,
  SAEObjects_trash = 11013,
  SAEObjects_cargo = 11014,
  SAEObjects_diesel = 11015,
  SAEObjects_gasoline = 11016,
  SAEObjects_anti_freeze = 11017,
  SAEObjects_propane_gas = 11061,
  SAEObjects_alternative_fuel = 11060,
  SAEObjects_seat_belts = 11018,
  SAEObjects_litter_container = 11019,
  SAEObjects_all_Terrain_vehicle = 11020,
  SAEObjects_seaplane = 11021,
  SAEObjects_chairlift = 11022,
  SAEObjects_fishing_pier = 11023,
  SAEObjects_telephone = 11025,
  SAEObjects_railroad_cross_buck = 11024,
  SAEObjects_horn = 11048,
  SAEObjects_train = 11047,
  SAEObjects_deer = 11049,
  SAEObjects_horse = 11051,
  SAEObjects_cattle = 11050,
  SAEObjects_golf_cart = 11052,
  SAEObjects_services = 11056,
  SAEObjects_motorist_services = 11059,
  SAEObjects_food_services = 11053,
  SAEObjects_roadside_table = 11055,
  SAEObjects_ambulance_staging_point = 11054,
  SAEObjects_fallout = 11026,
  SAEObjects_medical = 11027,
  SAEObjects_chemical = 11028,
  SAEObjects_welfare = 11029,
  SAEObjects_decontamination = 11063,
  SAEObjects_evacuation = 11030,
  SAEObjects_registration = 11062,
  SAEObjects_emergency = 11064,
  SAEObjects_left_arrow_signal = 11031,
  SAEObjects_ahead_arrow_signal = 11032,
  SAEObjects_right_arrow_signal = 11033,
  SAEObjects_green_light_signal = 11034,
  SAEObjects_green_arrow_signal = 11035,
  SAEObjects_yellow_light_signal = 11036,
  SAEObjects_yellow_arrow_signal = 11037,
  SAEObjects_red_light_signal = 11038,
  SAEObjects_red_arrow_signal = 11039,
  SAEObjects_extended_green_signal = 11040,
  SAEObjects_advance_arrow_signal = 11041,
  SAEObjects_pedestrian_Signal_Stop = 11042,
  SAEObjects_pedestrian_Signal_Caution = 11043,
  SAEObjects_pedestrian_Signal_Walk = 11044,
  SAEObjects_pedestrian_Signal_Light = 11045,
  SAEObjects_pedestrian_Signal_Time_Display = 11046,
};

extern const ASN1CType asn1_type_SAEObjects[];

typedef int SAEObstruction;

enum {
  SAEObstruction_obstruction_on_roadway = 1281,
  SAEObstruction_object_on_roadway = 1282,
  SAEObstruction_objects_falling_from_moving_vehicle = 1283,
  SAEObstruction_debris_on_roadway = 1284,
  SAEObstruction_storm_damage = 1285,
  SAEObstruction_people_on_roadway = 1286,
  SAEObstruction_bicyclists_on_roadway = 1287,
  SAEObstruction_sightseers_obstructing_access = 1288,
  SAEObstruction_large_numbers_of_visitors = 1289,
  SAEObstruction_animal_on_roadway = 1290,
  SAEObstruction_large_animal_on_roadway = 1291,
  SAEObstruction_herd_of_animals_on_roadway = 1292,
  SAEObstruction_animal_struck = 1293,
  SAEObstruction_advertising_signs = 1315,
  SAEObstruction_fallen_trees = 1294,
  SAEObstruction_over_turned_trees = 1311,
  SAEObstruction_tree_limbs = 1312,
  SAEObstruction_utility_pole_down = 1314,
  SAEObstruction_downed_power_lines = 1295,
  SAEObstruction_downed_cables = 1296,
  SAEObstruction_subsidence = 1297,
  SAEObstruction_road_surface_collapse = 1298,
  SAEObstruction_frost_jacking = 1317,
  SAEObstruction_frost_heave = 1316,
  SAEObstruction_pavement_buckled = 1299,
  SAEObstruction_pothole = 1300,
  SAEObstruction_flooding = 1301,
  SAEObstruction_broken_water_main = 1302,
  SAEObstruction_collapsed_sewer = 1303,
  SAEObstruction_wash_out = 1319,
  SAEObstruction_washboard = 1318,
  SAEObstruction_sewer_overflow = 1304,
  SAEObstruction_gas_leak = 1305,
  SAEObstruction_snowmelt = 1306,
  SAEObstruction_mudslide = 1307,
  SAEObstruction_avalanche = 1308,
  SAEObstruction_rockfall = 1309,
  SAEObstruction_landslide = 1310,
  SAEObstruction_clearance_work = 1406,
  SAEObstruction_obstruction_cleared = 1407,
};

extern const ASN1CType asn1_type_SAEObstruction[];

typedef int SAEParkingInformation;

enum {
  SAEParkingInformation_normal_parking_restrictions_lifted = 4097,
  SAEParkingInformation_parking_meter_restrictions_lifted = 4098,
  SAEParkingInformation_special_parking_restrictions_in_force = 4099,
  SAEParkingInformation_full_parking_lot = 4100,
  SAEParkingInformation_full_parking_garage = 4101,
  SAEParkingInformation_all_parking_lots_full = 4102,
  SAEParkingInformation_no_parking_spaces_available = 4103,
  SAEParkingInformation_only_a_few_spaces_available = 4104,
  SAEParkingInformation_spaces_available = 4105,
  SAEParkingInformation_no_parking = 4106,
  SAEParkingInformation_parking_on_one_side_of_street_only = 4107,
  SAEParkingInformation_parking_on_both_sides_of_street = 4108,
  SAEParkingInformation_parallel_parking_only = 4109,
  SAEParkingInformation_parking_meters_not_available = 4110,
  SAEParkingInformation_use_of_parking_meters_restricted = 4111,
  SAEParkingInformation_event_parking = 4112,
  SAEParkingInformation_handicapped_parking = 4113,
  SAEParkingInformation_long_term_parking = 4114,
  SAEParkingInformation_overnight_parking = 4115,
  SAEParkingInformation_short_term_parking = 4116,
  SAEParkingInformation_parking_by_permit_only = 4117,
  SAEParkingInformation_emergency_parking_only = 4118,
  SAEParkingInformation_emergency_stopping_only = 4119,
  SAEParkingInformation_parking = 4120,
  SAEParkingInformation_stopping = 4121,
  SAEParkingInformation_standing = 4122,
  SAEParkingInformation_tow_away_zone = 4123,
  SAEParkingInformation_school_zone = 4124,
  SAEParkingInformation_speed_zone = 4125,
  SAEParkingInformation_loading_zone = 4126,
  SAEParkingInformation_state_law = 4127,
  SAEParkingInformation_van_accessible = 4128,
  SAEParkingInformation_special_parking_restrictions_lifted = 4222,
  SAEParkingInformation_no_parking_information_available = 4223,
};

extern const ASN1CType asn1_type_SAEParkingInformation[];

typedef int SAEPavementConditions;

enum {
  SAEPavementConditions_impassable = 5889,
  SAEPavementConditions_almost_impassable = 5890,
  SAEPavementConditions_passable_with_care = 5891,
  SAEPavementConditions_passable = 5892,
  SAEPavementConditions_surface_water_hazard = 5893,
  SAEPavementConditions_danger_of_hydroplaning = 5894,
  SAEPavementConditions_wet_pavement = 5895,
  SAEPavementConditions_treated_pavement = 5896,
  SAEPavementConditions_slippery = 5897,
  SAEPavementConditions_low_ground_clearance = 5938,
  SAEPavementConditions_at_grade_level_crossing = 5937,
  SAEPavementConditions_mud_on_roadway = 5898,
  SAEPavementConditions_leaves_on_roadway = 5899,
  SAEPavementConditions_loose_sand_on_roadway = 5900,
  SAEPavementConditions_loose_gravel = 5901,
  SAEPavementConditions_fuel_on_roadway = 5902,
  SAEPavementConditions_oil_on_roadway = 5903,
  SAEPavementConditions_road_surface_in_poor_condition = 5904,
  SAEPavementConditions_melting_tar = 5905,
  SAEPavementConditions_uneven_lanes = 5935,
  SAEPavementConditions_rough_road = 5931,
  SAEPavementConditions_rough_crossing = 5936,
  SAEPavementConditions_ice = 5906,
  SAEPavementConditions_icy_patches = 5907,
  SAEPavementConditions_black_ice = 5908,
  SAEPavementConditions_ice_pellets_on_roadway = 5909,
  SAEPavementConditions_ice_build_up = 5910,
  SAEPavementConditions_freezing_rain = 5911,
  SAEPavementConditions_wet_and_icy_roads = 5912,
  SAEPavementConditions_slush = 5914,
  SAEPavementConditions_melting_snow = 5913,
  SAEPavementConditions_frozen_slush = 5915,
  SAEPavementConditions_snow_on_roadway = 5916,
  SAEPavementConditions_packed_snow = 5917,
  SAEPavementConditions_packed_snow_patches = 5918,
  SAEPavementConditions_plowed_snow = 5919,
  SAEPavementConditions_wet_snow = 5920,
  SAEPavementConditions_fresh_snow = 5921,
  SAEPavementConditions_powder_snow = 5922,
  SAEPavementConditions_granular_snow = 5923,
  SAEPavementConditions_frozen_snow = 5924,
  SAEPavementConditions_crusted_snow = 5925,
  SAEPavementConditions_deep_snow = 5926,
  SAEPavementConditions_snow_drifts = 5927,
  SAEPavementConditions_drifting_snow = 5928,
  SAEPavementConditions_expected_snow_accumulation = 5929,
  SAEPavementConditions_current_snow_accumulation = 5930,
  SAEPavementConditions_sand = 5932,
  SAEPavementConditions_gravel = 5933,
  SAEPavementConditions_paved = 5934,
  SAEPavementConditions_dry_pavement = 6011,
  SAEPavementConditions_snow_cleared = 6012,
  SAEPavementConditions_pavement_conditions_improved = 6013,
  SAEPavementConditions_skid_hazard_reduced = 6014,
  SAEPavementConditions_pavement_conditions_cleared = 6015,
};

extern const ASN1CType asn1_type_SAEPavementConditions[];

typedef int SAEPrecipitation;

enum {
  SAEPrecipitation_severe_weather = 4865,
  SAEPrecipitation_blizzard = 4866,
  SAEPrecipitation_heavy_snow = 4867,
  SAEPrecipitation_snow = 4868,
  SAEPrecipitation_light_snow = 4869,
  SAEPrecipitation_snow_showers = 4870,
  SAEPrecipitation_winter_storm = 4871,
  SAEPrecipitation_ice_glaze = 4872,
  SAEPrecipitation_heavy_frost = 4873,
  SAEPrecipitation_frost = 4874,
  SAEPrecipitation_ice_storm = 4875,
  SAEPrecipitation_sleet = 4876,
  SAEPrecipitation_rain_and_snow_mixed = 4877,
  SAEPrecipitation_rain_changing_to_snow = 4878,
  SAEPrecipitation_damaging_hail = 4879,
  SAEPrecipitation_hail = 4880,
  SAEPrecipitation_thunderstorms = 4881,
  SAEPrecipitation_thundershowers = 4882,
  SAEPrecipitation_extremely_heavy_downpour = 4883,
  SAEPrecipitation_heavy_rain = 4884,
  SAEPrecipitation_rain = 4885,
  SAEPrecipitation_light_rain = 4886,
  SAEPrecipitation_drizzle = 4887,
  SAEPrecipitation_showers = 4888,
  SAEPrecipitation_dew = 4889,
  SAEPrecipitation_precipitation_cleared = 4991,
};

extern const ASN1CType asn1_type_SAEPrecipitation[];

typedef int SAEQualifiers;

enum {
  SAEQualifiers_above = 7681,
  SAEQualifiers_below = 7682,
  SAEQualifiers_in = 7683,
  SAEQualifiers_around = 7684,
  SAEQualifiers_after = 7685,
  SAEQualifiers_before = 7686,
  SAEQualifiers_at = 7687,
  SAEQualifiers_on = 7688,
  SAEQualifiers_near = 7689,
  SAEQualifiers_from_the = 7690,
  SAEQualifiers_terminal = 7691,
  SAEQualifiers_falling_slowly = 7692,
  SAEQualifiers_falling = 7693,
  SAEQualifiers_falling_quickly = 7694,
  SAEQualifiers_rising_slowly = 7695,
  SAEQualifiers_rising = 7696,
  SAEQualifiers_rising_quickly = 7697,
  SAEQualifiers_steady = 7698,
  SAEQualifiers_likely = 7699,
  SAEQualifiers_changing_to = 7700,
  SAEQualifiers_mostly = 7701,
  SAEQualifiers_partly = 7702,
  SAEQualifiers_minus = 7703,
  SAEQualifiers_weather_ended = 7704,
  SAEQualifiers_expected = 7705,
  SAEQualifiers_low = 7706,
  SAEQualifiers_mid = 7707,
  SAEQualifiers_high = 7708,
  SAEQualifiers_upper = 7709,
  SAEQualifiers_middle = 7765,
  SAEQualifiers_lower = 7764,
  SAEQualifiers_unseasonably = 7710,
  SAEQualifiers_reported = 7711,
  SAEQualifiers_advice = 7712,
  SAEQualifiers_due_to = 7713,
  SAEQualifiers_proceed_to = 7714,
  SAEQualifiers_transferred_to = 7715,
  SAEQualifiers_use = 7716,
  SAEQualifiers_affecting = 7717,
  SAEQualifiers_blocking = 7718,
  SAEQualifiers_connecting = 7719,
  SAEQualifiers_finished = 7720,
  SAEQualifiers_For = 7721,
  SAEQualifiers_or = 7722,
  SAEQualifiers_and = 7723,
  SAEQualifiers_later = 7724,
  SAEQualifiers_level = 7725,
  SAEQualifiers_shortly = 7726,
  SAEQualifiers_soon = 7727,
  SAEQualifiers_service = 7728,
  SAEQualifiers_graffiti = 7733,
  SAEQualifiers_damaged = 7729,
  SAEQualifiers_out_of_order = 7730,
  SAEQualifiers_on_State_right_of_way = 7732,
  SAEQualifiers_found_property = 7734,
  SAEQualifiers_vandalism = 7731,
  SAEQualifiers_major = 7766,
  SAEQualifiers_minor = 7767,
  SAEQualifiers_begin_time = 7735,
  SAEQualifiers_added = 7736,
  SAEQualifiers_end_time = 7737,
  SAEQualifiers_no = 7738,
  SAEQualifiers_do_not = 7739,
  SAEQualifiers_block = 7740,
  SAEQualifiers_except = 7741,
  SAEQualifiers_day = 7742,
  SAEQualifiers_night = 7743,
  SAEQualifiers_any_time = 7744,
  SAEQualifiers_has = 7745,
  SAEQualifiers_must = 7757,
  SAEQualifiers_may_have = 7746,
  SAEQualifiers_may_exceed = 7759,
  SAEQualifiers_only = 7747,
  SAEQualifiers_lifted = 7748,
  SAEQualifiers_empty = 7749,
  SAEQualifiers_turning = 7750,
  SAEQualifiers_u_turn = 7751,
  SAEQualifiers_wait_for = 7752,
  SAEQualifiers_when_flashing = 7753,
  SAEQualifiers_duration = 7754,
  SAEQualifiers_cross = 7755,
  SAEQualifiers_when_wet = 7756,
  SAEQualifiers_oncoming = 7758,
  SAEQualifiers_to_request = 7760,
  SAEQualifiers_exempt = 7761,
  SAEQualifiers_skewed = 7762,
  SAEQualifiers_when_children_are_present = 7763,
};

extern const ASN1CType asn1_type_SAEQualifiers[];

typedef int SAERecreationalObjectsAndActivities;

enum {
  SAERecreationalObjectsAndActivities_bear_viewing_area = 12033,
  SAERecreationalObjectsAndActivities_deer_viewing_area = 12034,
  SAERecreationalObjectsAndActivities_drinking_water = 12035,
  SAERecreationalObjectsAndActivities_environmental_study_area = 12036,
  SAERecreationalObjectsAndActivities_falling_rocks = 12037,
  SAERecreationalObjectsAndActivities_firearms = 12038,
  SAERecreationalObjectsAndActivities_leashed_pets = 12039,
  SAERecreationalObjectsAndActivities_point_of_interest = 12040,
  SAERecreationalObjectsAndActivities_smoking = 12041,
  SAERecreationalObjectsAndActivities_dog = 12042,
  SAERecreationalObjectsAndActivities_tent_camping = 12043,
  SAERecreationalObjectsAndActivities_trailer_camping = 12044,
  SAERecreationalObjectsAndActivities_first_aid = 12045,
  SAERecreationalObjectsAndActivities_handicapped = 12046,
  SAERecreationalObjectsAndActivities_mechanic = 12047,
  SAERecreationalObjectsAndActivities_trailer_sanitary_station = 12048,
  SAERecreationalObjectsAndActivities_viewing_area = 12049,
  SAERecreationalObjectsAndActivities_scenic_overlook = 12095,
  SAERecreationalObjectsAndActivities_campfire = 12050,
  SAERecreationalObjectsAndActivities_locker = 12051,
  SAERecreationalObjectsAndActivities_sleeping = 12052,
  SAERecreationalObjectsAndActivities_trail = 12053,
  SAERecreationalObjectsAndActivities_climbing = 12054,
  SAERecreationalObjectsAndActivities_rock_climbing = 12055,
  SAERecreationalObjectsAndActivities_hunting = 12056,
  SAERecreationalObjectsAndActivities_playground = 12057,
  SAERecreationalObjectsAndActivities_rock_collecting = 12058,
  SAERecreationalObjectsAndActivities_spelunking = 12059,
  SAERecreationalObjectsAndActivities_bicycle_trail = 12060,
  SAERecreationalObjectsAndActivities_hiking_trail = 12061,
  SAERecreationalObjectsAndActivities_horse_trail = 12062,
  SAERecreationalObjectsAndActivities_trail_interpretive_auto = 12063,
  SAERecreationalObjectsAndActivities_trail_interpretive_pedestrian = 12064,
  SAERecreationalObjectsAndActivities_trail_road_for_4WD_vehicles = 12065,
  SAERecreationalObjectsAndActivities_trail_for_trail_bikes = 12066,
  SAERecreationalObjectsAndActivities_archer = 12067,
  SAERecreationalObjectsAndActivities_hang_glider = 12068,
  SAERecreationalObjectsAndActivities_boat_tours = 12069,
  SAERecreationalObjectsAndActivities_canoeing = 12070,
  SAERecreationalObjectsAndActivities_diving = 12071,
  SAERecreationalObjectsAndActivities_scuba_diving = 12072,
  SAERecreationalObjectsAndActivities_fishing = 12073,
  SAERecreationalObjectsAndActivities_marine_recreation_area = 12074,
  SAERecreationalObjectsAndActivities_motorboating = 12075,
  SAERecreationalObjectsAndActivities_boat_ramp = 12076,
  SAERecreationalObjectsAndActivities_rowboating = 12077,
  SAERecreationalObjectsAndActivities_sailboating = 12078,
  SAERecreationalObjectsAndActivities_water_skiing = 12079,
  SAERecreationalObjectsAndActivities_surfing = 12080,
  SAERecreationalObjectsAndActivities_swimming = 12081,
  SAERecreationalObjectsAndActivities_wading = 12082,
  SAERecreationalObjectsAndActivities_hand_launch = 12083,
  SAERecreationalObjectsAndActivities_kayak = 12084,
  SAERecreationalObjectsAndActivities_wind_surf = 12085,
  SAERecreationalObjectsAndActivities_ice_skating = 12086,
  SAERecreationalObjectsAndActivities_ski_jumping = 12087,
  SAERecreationalObjectsAndActivities_bobbing = 12088,
  SAERecreationalObjectsAndActivities_cross_country_skiing = 12089,
  SAERecreationalObjectsAndActivities_downhill_skiing = 12090,
  SAERecreationalObjectsAndActivities_sledding = 12091,
  SAERecreationalObjectsAndActivities_snowmobiling = 12092,
  SAERecreationalObjectsAndActivities_snowshoeing = 12093,
  SAERecreationalObjectsAndActivities_winter_recreation_area = 12094,
};

extern const ASN1CType asn1_type_SAERecreationalObjectsAndActivities[];

typedef int SAERegulatoryAndWarningSigns;

enum {
  SAERegulatoryAndWarningSigns_regulatory_sign = 12289,
  SAERegulatoryAndWarningSigns_warning_sign = 12290,
  SAERegulatoryAndWarningSigns_information_sign = 12291,
  SAERegulatoryAndWarningSigns_construction_sign = 12292,
  SAERegulatoryAndWarningSigns_guide_sign = 12293,
  SAERegulatoryAndWarningSigns_stop = 12294,
  SAERegulatoryAndWarningSigns_yield = 12295,
  SAERegulatoryAndWarningSigns_caution = 12330,
  SAERegulatoryAndWarningSigns_temporary = 12331,
  SAERegulatoryAndWarningSigns_to_oncoming_traffic = 12296,
  SAERegulatoryAndWarningSigns_four_way = 12297,
  SAERegulatoryAndWarningSigns_all_way = 12298,
  SAERegulatoryAndWarningSigns_one_way = 12329,
  SAERegulatoryAndWarningSigns_zone = 12299,
  SAERegulatoryAndWarningSigns_narrows = 12300,
  SAERegulatoryAndWarningSigns_widens = 12301,
  SAERegulatoryAndWarningSigns_reduced = 12302,
  SAERegulatoryAndWarningSigns_combined = 12303,
  SAERegulatoryAndWarningSigns_minimum = 12304,
  SAERegulatoryAndWarningSigns_maximum = 12305,
  SAERegulatoryAndWarningSigns_divided_road = 12306,
  SAERegulatoryAndWarningSigns_double_arrow = 12307,
  SAERegulatoryAndWarningSigns_dead_end = 12308,
  SAERegulatoryAndWarningSigns_no_outlet = 12309,
  SAERegulatoryAndWarningSigns_wrong_way = 12310,
  SAERegulatoryAndWarningSigns_do_not_enter = 12314,
  SAERegulatoryAndWarningSigns_nDetour = 12312,
  SAERegulatoryAndWarningSigns_chevron = 12313,
  SAERegulatoryAndWarningSigns_t_intersection_to_the_side = 12315,
  SAERegulatoryAndWarningSigns_t_intersection_oncoming = 12316,
  SAERegulatoryAndWarningSigns_y_intersection_to_the_side = 12317,
  SAERegulatoryAndWarningSigns_y_intersection_oncoming = 12318,
  SAERegulatoryAndWarningSigns_four_way_divided_highway_crossing = 12319,
  SAERegulatoryAndWarningSigns_t_way_divided_highway_crossing = 12320,
  SAERegulatoryAndWarningSigns_light_rail_divided_highway_crossing = 12321,
  SAERegulatoryAndWarningSigns_light_rail_t_divided_highway_crossing = 12322,
  SAERegulatoryAndWarningSigns_side_road_to_right = 12323,
  SAERegulatoryAndWarningSigns_side_road_to_left = 12324,
  SAERegulatoryAndWarningSigns_side_road_to_right_at_angle = 12325,
  SAERegulatoryAndWarningSigns_side_road_to_left_at_angle = 12326,
  SAERegulatoryAndWarningSigns_entering_roadway_merge = 12327,
  SAERegulatoryAndWarningSigns_entering_roadway_added_lane = 12328,
};

extern const ASN1CType asn1_type_SAERegulatoryAndWarningSigns[];

typedef int SAEResponderGroupAffected;

enum {
  SAEResponderGroupAffected_emergency_vehicle_units = 9729,
  SAEResponderGroupAffected_federal_law_enforcement_units = 9730,
  SAEResponderGroupAffected_state_police_units = 9731,
  SAEResponderGroupAffected_county_police_units = 9732,
  SAEResponderGroupAffected_local_police_units = 9733,
  SAEResponderGroupAffected_ambulance_units = 9734,
  SAEResponderGroupAffected_rescue_units = 9735,
  SAEResponderGroupAffected_fire_units = 9736,
  SAEResponderGroupAffected_hAZMAT_units = 9737,
  SAEResponderGroupAffected_light_tow_unit = 9738,
  SAEResponderGroupAffected_heavy_tow_unit = 9739,
  SAEResponderGroupAffected_private_tow_units = 9743,
  SAEResponderGroupAffected_freeway_service_patrols = 9740,
  SAEResponderGroupAffected_transportation_response_units = 9741,
  SAEResponderGroupAffected_private_contractor_response_units = 9742,
};

extern const ASN1CType asn1_type_SAEResponderGroupAffected[];

typedef int SAERestrictionClass;

enum {
  SAERestrictionClass_restrictions = 2561,
  SAERestrictionClass_ramp_restrictions = 2562,
  SAERestrictionClass_truck_restriction = 2563,
  SAERestrictionClass_speed_restriction = 2564,
  SAERestrictionClass_noise_restriction = 2565,
  SAERestrictionClass_traffic_regulations_have_been_changed = 2566,
  SAERestrictionClass_local_access_only = 2567,
  SAERestrictionClass_no_trailers = 2568,
  SAERestrictionClass_no_high_profile_vehicles = 2569,
  SAERestrictionClass_hazardous_materials_truck_restriction = 2570,
  SAERestrictionClass_no_through_traffic = 2571,
  SAERestrictionClass_no_motor_vehicles = 2572,
  SAERestrictionClass_width_limit = 2573,
  SAERestrictionClass_height_limit = 2574,
  SAERestrictionClass_length_limit = 2575,
  SAERestrictionClass_axle_load_limit = 2576,
  SAERestrictionClass_gross_weight_limit = 2577,
  SAERestrictionClass_axle_count_limit = 2578,
  SAERestrictionClass_carpool_lane_available = 2579,
  SAERestrictionClass_carpool_restrictions_changed = 2580,
  SAERestrictionClass_hOV_2_no_single_occupant_vehicles = 2581,
  SAERestrictionClass_hOV_3_no_vehicles_with_less_than_three_occupants = 2582,
  SAERestrictionClass_bus_lane_available_for_all_vehicles = 2583,
  SAERestrictionClass_truck_lane_available_for_all_vehicles = 2584,
  SAERestrictionClass_permits_call_in_basis = 2585,
  SAERestrictionClass_permits_temporarily_closed = 2586,
  SAERestrictionClass_permits_closed = 2587,
  SAERestrictionClass_road_use_permits_required = 2588,
  SAERestrictionClass_permits_open = 2675,
  SAERestrictionClass_restrictions_for_high_profile_vehicles_lifted = 2676,
  SAERestrictionClass_width_limit_lifted = 2677,
  SAERestrictionClass_height_limit_lifted = 2678,
  SAERestrictionClass_length_limit_lifted = 2679,
  SAERestrictionClass_axle_load_limit_lifted = 2680,
  SAERestrictionClass_weight_limit_lifted = 2681,
  SAERestrictionClass_axle_count_limit_lifted = 2682,
  SAERestrictionClass_carpool_restrictions_lifted = 2683,
  SAERestrictionClass_lane_restrictions_lifted = 2684,
  SAERestrictionClass_ramp_restrictions_lifted = 2685,
  SAERestrictionClass_motor_vehicle_restrictions_lifted = 2686,
  SAERestrictionClass_restrictions_lifted = 2687,
};

extern const ASN1CType asn1_type_SAERestrictionClass[];

typedef int SAERoadsideAssets;

enum {
  SAERoadsideAssets_none = 10496,
  SAERoadsideAssets_light_pole = 10497,
  SAERoadsideAssets_utility_pole = 10498,
  SAERoadsideAssets_gantry_way = 10499,
  SAERoadsideAssets_sign_support = 10500,
  SAERoadsideAssets_signal_pole = 10501,
  SAERoadsideAssets_signage_public = 10502,
  SAERoadsideAssets_signage_private = 10503,
  SAERoadsideAssets_overhead_sign = 10568,
  SAERoadsideAssets_ground_sign = 10569,
  SAERoadsideAssets_cones = 10504,
  SAERoadsideAssets_cones_post_type = 10505,
  SAERoadsideAssets_cones_glue_post = 10506,
  SAERoadsideAssets_cones_other = 10507,
  SAERoadsideAssets_barriers = 10508,
  SAERoadsideAssets_barrier_Aframe = 10509,
  SAERoadsideAssets_barriers_heavy_duty = 10510,
  SAERoadsideAssets_barricade_type_III = 10511,
  SAERoadsideAssets_barricade_small = 10512,
  SAERoadsideAssets_solid_barrier = 10565,
  SAERoadsideAssets_moveable_barrier = 10566,
  SAERoadsideAssets_barricade_lights = 10513,
  SAERoadsideAssets_beacon = 10514,
  SAERoadsideAssets_t_stand = 10515,
  SAERoadsideAssets_a_stand = 10516,
  SAERoadsideAssets_drums = 10517,
  SAERoadsideAssets_sand_barrel = 10567,
  SAERoadsideAssets_impact_attenuator = 10518,
  SAERoadsideAssets_barricade_tape = 10519,
  SAERoadsideAssets_safety_fence = 10520,
  SAERoadsideAssets_temp_pavement_markings = 10521,
  SAERoadsideAssets_speed_bumps = 10522,
  SAERoadsideAssets_temp_curbs = 10523,
  SAERoadsideAssets_parking_blocks = 10524,
  SAERoadsideAssets_signboard_fixed = 10525,
  SAERoadsideAssets_signboard_portable = 10526,
  SAERoadsideAssets_stripe = 10572,
  SAERoadsideAssets_island = 10573,
  SAERoadsideAssets_har = 10527,
  SAERoadsideAssets_har_AM = 10528,
  SAERoadsideAssets_har_FM = 10529,
  SAERoadsideAssets_har_DSRC = 10530,
  SAERoadsideAssets_traffic_light = 10531,
  SAERoadsideAssets_lane_control_signal = 10532,
  SAERoadsideAssets_traffic_detector = 10533,
  SAERoadsideAssets_vehicle_detector = 10534,
  SAERoadsideAssets_system_alarm = 10535,
  SAERoadsideAssets_arrow_board = 10536,
  SAERoadsideAssets_fixed_VMS = 10537,
  SAERoadsideAssets_mobile_VMS = 10538,
  SAERoadsideAssets_ramp_control = 10539,
  SAERoadsideAssets_gate_control = 10540,
  SAERoadsideAssets_temporary_traffic_light = 10541,
  SAERoadsideAssets_over_height_warning_system = 10542,
  SAERoadsideAssets_over_weight_warning_system = 10543,
  SAERoadsideAssets_emergency_telephones = 10544,
  SAERoadsideAssets_railroad_crossing_equipment = 10545,
  SAERoadsideAssets_tunnel_ventilation = 10546,
  SAERoadsideAssets_ccTV = 10547,
  SAERoadsideAssets_environmental_sensor = 10548,
  SAERoadsideAssets_emergency_signal = 10570,
  SAERoadsideAssets_countdown_pedestrian_sign = 10571,
  SAERoadsideAssets_Switch = 10549,
  SAERoadsideAssets_signal = 10550,
  SAERoadsideAssets_third_rail = 10551,
  SAERoadsideAssets_overhead_power = 10552,
  SAERoadsideAssets_concrete_tie = 10553,
  SAERoadsideAssets_wooden_tie = 10554,
  SAERoadsideAssets_manhole_cover = 10559,
  SAERoadsideAssets_culvert = 10560,
  SAERoadsideAssets_escalator = 10555,
  SAERoadsideAssets_elevator = 10556,
  SAERoadsideAssets_snow_poles = 10561,
  SAERoadsideAssets_track = 10557,
  SAERoadsideAssets_guide_poles = 10562,
  SAERoadsideAssets_drawbridge = 10558,
  SAERoadsideAssets_expansion_joint = 10563,
  SAERoadsideAssets_shifted_plate = 10564,
};

extern const ASN1CType asn1_type_SAERoadsideAssets[];

typedef int SAERoadwork;

enum {
  SAERoadwork_road_construction = 1025,
  SAERoadwork_major_road_construction = 1026,
  SAERoadwork_long_term_road_construction = 1027,
  SAERoadwork_construction_work = 1028,
  SAERoadwork_paving_operations = 1029,
  SAERoadwork_work_in_the_median = 1030,
  SAERoadwork_road_reconstruction = 1031,
  SAERoadwork_opposing_traffic = 1032,
  SAERoadwork_narrow_lanes = 1033,
  SAERoadwork_construction_traffic_merging = 1034,
  SAERoadwork_single_line_traffic_alternating_directions = 1035,
  SAERoadwork_road_maintenance_operations = 1036,
  SAERoadwork_road_marking_operations = 1037,
  SAERoadwork_road_widening = 1061,
  SAERoadwork_cracks = 1052,
  SAERoadwork_crack_REMOVE = 1058,
  SAERoadwork_bumps = 1053,
  SAERoadwork_drop_off = 1059,
  SAERoadwork_storm_drain = 1054,
  SAERoadwork_bridge_maintenance_operations = 1038,
  SAERoadwork_bridge_construction = 1039,
  SAERoadwork_bridge_demolition_work = 1040,
  SAERoadwork_seismic_retrofit = 1060,
  SAERoadwork_overgrown_grass = 1055,
  SAERoadwork_overgrown_brushshrubs = 1056,
  SAERoadwork_overgrown_trees = 1057,
  SAERoadwork_blasting = 1041,
  SAERoadwork_avalanche_control_activities = 1042,
  SAERoadwork_water_main_work = 1043,
  SAERoadwork_gas_main_work = 1044,
  SAERoadwork_work_on_underground_cables = 1045,
  SAERoadwork_work_on_underground_services = 1046,
  SAERoadwork_new_road_construction_layout = 1047,
  SAERoadwork_new_road_layout = 1048,
  SAERoadwork_temporary_lane_markings = 1049,
  SAERoadwork_temporary_traffic_lights = 1050,
  SAERoadwork_emergency_maintenance = 1051,
  SAERoadwork_utility_work = 1062,
  SAERoadwork_road_maintenance_cleared = 1146,
  SAERoadwork_normal_road_layout_restored = 1147,
  SAERoadwork_road_work_clearance_in_progress = 1148,
  SAERoadwork_road_construction_cleared = 1149,
  SAERoadwork_normal_traffic_lanes_restored = 1150,
  SAERoadwork_road_work_cleared = 1151,
};

extern const ASN1CType asn1_type_SAERoadwork[];

typedef int SAESmallNumbers;

enum {
  SAESmallNumbers_n1 = 12545,
  SAESmallNumbers_n2 = 12546,
  SAESmallNumbers_n3 = 12547,
  SAESmallNumbers_n4 = 12548,
  SAESmallNumbers_n5 = 12549,
  SAESmallNumbers_n6 = 12550,
  SAESmallNumbers_n7 = 12551,
  SAESmallNumbers_n8 = 12552,
  SAESmallNumbers_n9 = 12553,
  SAESmallNumbers_n10 = 12554,
  SAESmallNumbers_n11 = 12555,
  SAESmallNumbers_n12 = 12556,
  SAESmallNumbers_n13 = 12557,
  SAESmallNumbers_n14 = 12558,
  SAESmallNumbers_n15 = 12559,
  SAESmallNumbers_n16 = 12560,
  SAESmallNumbers_n17 = 12561,
  SAESmallNumbers_n18 = 12562,
  SAESmallNumbers_n19 = 12563,
  SAESmallNumbers_n20 = 12564,
  SAESmallNumbers_n21 = 12565,
  SAESmallNumbers_n22 = 12566,
  SAESmallNumbers_n23 = 12567,
  SAESmallNumbers_n24 = 12568,
  SAESmallNumbers_n25 = 12569,
  SAESmallNumbers_n26 = 12570,
  SAESmallNumbers_n27 = 12571,
  SAESmallNumbers_n28 = 12572,
  SAESmallNumbers_n29 = 12573,
  SAESmallNumbers_n30 = 12574,
  SAESmallNumbers_n31 = 12575,
  SAESmallNumbers_n32 = 12576,
  SAESmallNumbers_n33 = 12577,
  SAESmallNumbers_n34 = 12578,
  SAESmallNumbers_n35 = 12579,
  SAESmallNumbers_n36 = 12580,
  SAESmallNumbers_n37 = 12581,
  SAESmallNumbers_n38 = 12582,
  SAESmallNumbers_n39 = 12583,
  SAESmallNumbers_n40 = 12584,
  SAESmallNumbers_n41 = 12585,
  SAESmallNumbers_n42 = 12586,
  SAESmallNumbers_n43 = 12587,
  SAESmallNumbers_n44 = 12588,
  SAESmallNumbers_n45 = 12589,
  SAESmallNumbers_n46 = 12590,
  SAESmallNumbers_n47 = 12591,
  SAESmallNumbers_n48 = 12592,
  SAESmallNumbers_n49 = 12593,
  SAESmallNumbers_n50 = 12594,
  SAESmallNumbers_n51 = 12595,
  SAESmallNumbers_n52 = 12596,
  SAESmallNumbers_n53 = 12597,
  SAESmallNumbers_n54 = 12598,
  SAESmallNumbers_n55 = 12599,
  SAESmallNumbers_n56 = 12600,
  SAESmallNumbers_n57 = 12601,
  SAESmallNumbers_n58 = 12602,
  SAESmallNumbers_n59 = 12603,
  SAESmallNumbers_n60 = 12604,
  SAESmallNumbers_n61 = 12605,
  SAESmallNumbers_n62 = 12606,
  SAESmallNumbers_n63 = 12607,
  SAESmallNumbers_n64 = 12608,
  SAESmallNumbers_n65 = 12609,
  SAESmallNumbers_n66 = 12610,
  SAESmallNumbers_n67 = 12611,
  SAESmallNumbers_n68 = 12612,
  SAESmallNumbers_n69 = 12613,
  SAESmallNumbers_n70 = 12614,
  SAESmallNumbers_n71 = 12615,
  SAESmallNumbers_n72 = 12616,
  SAESmallNumbers_n73 = 12617,
  SAESmallNumbers_n74 = 12618,
  SAESmallNumbers_n75 = 12619,
  SAESmallNumbers_n76 = 12620,
  SAESmallNumbers_n77 = 12621,
  SAESmallNumbers_n78 = 12622,
  SAESmallNumbers_n79 = 12623,
  SAESmallNumbers_n80 = 12624,
  SAESmallNumbers_n81 = 12625,
  SAESmallNumbers_n82 = 12626,
  SAESmallNumbers_n83 = 12627,
  SAESmallNumbers_n84 = 12628,
  SAESmallNumbers_n85 = 12629,
  SAESmallNumbers_n86 = 12630,
  SAESmallNumbers_n87 = 12631,
  SAESmallNumbers_n88 = 12632,
  SAESmallNumbers_n89 = 12633,
  SAESmallNumbers_n90 = 12634,
  SAESmallNumbers_n91 = 12635,
  SAESmallNumbers_n92 = 12636,
  SAESmallNumbers_n93 = 12637,
  SAESmallNumbers_n94 = 12638,
  SAESmallNumbers_n95 = 12639,
  SAESmallNumbers_n96 = 12640,
  SAESmallNumbers_n97 = 12641,
  SAESmallNumbers_n98 = 12642,
  SAESmallNumbers_n99 = 12643,
  SAESmallNumbers_n100 = 12644,
  SAESmallNumbers_n101 = 12645,
  SAESmallNumbers_n102 = 12646,
  SAESmallNumbers_n103 = 12647,
  SAESmallNumbers_n104 = 12648,
  SAESmallNumbers_n105 = 12649,
  SAESmallNumbers_n106 = 12650,
  SAESmallNumbers_n107 = 12651,
  SAESmallNumbers_n108 = 12652,
  SAESmallNumbers_n109 = 12653,
  SAESmallNumbers_n110 = 12654,
  SAESmallNumbers_n111 = 12655,
  SAESmallNumbers_n112 = 12656,
  SAESmallNumbers_n113 = 12657,
  SAESmallNumbers_n114 = 12658,
  SAESmallNumbers_n115 = 12659,
  SAESmallNumbers_n116 = 12660,
  SAESmallNumbers_n117 = 12661,
  SAESmallNumbers_n118 = 12662,
  SAESmallNumbers_n119 = 12663,
  SAESmallNumbers_n120 = 12664,
  SAESmallNumbers_n121 = 12665,
  SAESmallNumbers_n122 = 12666,
  SAESmallNumbers_n123 = 12667,
  SAESmallNumbers_n124 = 12668,
  SAESmallNumbers_n125 = 12669,
  SAESmallNumbers_n126 = 12670,
  SAESmallNumbers_n127 = 12671,
  SAESmallNumbers_n128 = 12672,
  SAESmallNumbers_n129 = 12673,
  SAESmallNumbers_n130 = 12674,
  SAESmallNumbers_n131 = 12675,
  SAESmallNumbers_n132 = 12676,
  SAESmallNumbers_n133 = 12677,
  SAESmallNumbers_n134 = 12678,
  SAESmallNumbers_n135 = 12679,
  SAESmallNumbers_n136 = 12680,
  SAESmallNumbers_n137 = 12681,
  SAESmallNumbers_n138 = 12682,
  SAESmallNumbers_n139 = 12683,
  SAESmallNumbers_n140 = 12684,
  SAESmallNumbers_n141 = 12685,
  SAESmallNumbers_n142 = 12686,
  SAESmallNumbers_n143 = 12687,
  SAESmallNumbers_n144 = 12688,
  SAESmallNumbers_n145 = 12689,
  SAESmallNumbers_n146 = 12690,
  SAESmallNumbers_n147 = 12691,
  SAESmallNumbers_n148 = 12692,
  SAESmallNumbers_n149 = 12693,
  SAESmallNumbers_n150 = 12694,
  SAESmallNumbers_n151 = 12695,
  SAESmallNumbers_n152 = 12696,
  SAESmallNumbers_n153 = 12697,
  SAESmallNumbers_n154 = 12698,
  SAESmallNumbers_n155 = 12699,
  SAESmallNumbers_n156 = 12700,
  SAESmallNumbers_n157 = 12701,
  SAESmallNumbers_n158 = 12702,
  SAESmallNumbers_n159 = 12703,
  SAESmallNumbers_n160 = 12704,
  SAESmallNumbers_n161 = 12705,
  SAESmallNumbers_n162 = 12706,
  SAESmallNumbers_n163 = 12707,
  SAESmallNumbers_n164 = 12708,
  SAESmallNumbers_n165 = 12709,
  SAESmallNumbers_n166 = 12710,
  SAESmallNumbers_n167 = 12711,
  SAESmallNumbers_n168 = 12712,
  SAESmallNumbers_n169 = 12713,
  SAESmallNumbers_n170 = 12714,
  SAESmallNumbers_n171 = 12715,
  SAESmallNumbers_n172 = 12716,
  SAESmallNumbers_n173 = 12717,
  SAESmallNumbers_n174 = 12718,
  SAESmallNumbers_n175 = 12719,
  SAESmallNumbers_n176 = 12720,
  SAESmallNumbers_n177 = 12721,
  SAESmallNumbers_n178 = 12722,
  SAESmallNumbers_n179 = 12723,
  SAESmallNumbers_n180 = 12724,
  SAESmallNumbers_n181 = 12725,
  SAESmallNumbers_n182 = 12726,
  SAESmallNumbers_n183 = 12727,
  SAESmallNumbers_n184 = 12728,
  SAESmallNumbers_n185 = 12729,
  SAESmallNumbers_n186 = 12730,
  SAESmallNumbers_n187 = 12731,
  SAESmallNumbers_n188 = 12732,
  SAESmallNumbers_n189 = 12733,
  SAESmallNumbers_n190 = 12734,
  SAESmallNumbers_n191 = 12735,
  SAESmallNumbers_n192 = 12736,
  SAESmallNumbers_n193 = 12737,
  SAESmallNumbers_n194 = 12738,
  SAESmallNumbers_n195 = 12739,
  SAESmallNumbers_n196 = 12740,
  SAESmallNumbers_n197 = 12741,
  SAESmallNumbers_n198 = 12742,
  SAESmallNumbers_n199 = 12743,
  SAESmallNumbers_n200 = 12744,
  SAESmallNumbers_n201 = 12745,
  SAESmallNumbers_n202 = 12746,
  SAESmallNumbers_n203 = 12747,
  SAESmallNumbers_n204 = 12748,
  SAESmallNumbers_n205 = 12749,
  SAESmallNumbers_n206 = 12750,
  SAESmallNumbers_n207 = 12751,
  SAESmallNumbers_n208 = 12752,
  SAESmallNumbers_n209 = 12753,
  SAESmallNumbers_n210 = 12754,
  SAESmallNumbers_n211 = 12755,
  SAESmallNumbers_n212 = 12756,
  SAESmallNumbers_n213 = 12757,
  SAESmallNumbers_n214 = 12758,
  SAESmallNumbers_n215 = 12759,
  SAESmallNumbers_n216 = 12760,
  SAESmallNumbers_n217 = 12761,
  SAESmallNumbers_n218 = 12762,
  SAESmallNumbers_n219 = 12763,
  SAESmallNumbers_n220 = 12764,
  SAESmallNumbers_n221 = 12765,
  SAESmallNumbers_n222 = 12766,
  SAESmallNumbers_n223 = 12767,
  SAESmallNumbers_n224 = 12768,
  SAESmallNumbers_n225 = 12769,
  SAESmallNumbers_n226 = 12770,
  SAESmallNumbers_n227 = 12771,
  SAESmallNumbers_n228 = 12772,
  SAESmallNumbers_n229 = 12773,
  SAESmallNumbers_n230 = 12774,
  SAESmallNumbers_n231 = 12775,
  SAESmallNumbers_n232 = 12776,
  SAESmallNumbers_n233 = 12777,
  SAESmallNumbers_n234 = 12778,
  SAESmallNumbers_n235 = 12779,
  SAESmallNumbers_n236 = 12780,
  SAESmallNumbers_n237 = 12781,
  SAESmallNumbers_n238 = 12782,
  SAESmallNumbers_n239 = 12783,
  SAESmallNumbers_n240 = 12784,
  SAESmallNumbers_n241 = 12785,
  SAESmallNumbers_n242 = 12786,
  SAESmallNumbers_n243 = 12787,
  SAESmallNumbers_n244 = 12788,
  SAESmallNumbers_n245 = 12789,
  SAESmallNumbers_n246 = 12790,
  SAESmallNumbers_n247 = 12791,
  SAESmallNumbers_n248 = 12792,
  SAESmallNumbers_n249 = 12793,
  SAESmallNumbers_n250 = 12794,
  SAESmallNumbers_n251 = 12795,
  SAESmallNumbers_n252 = 12796,
  SAESmallNumbers_n253 = 12797,
  SAESmallNumbers_n254 = 12798,
  SAESmallNumbers_n255 = 12799,
};

extern const ASN1CType asn1_type_SAESmallNumbers[];

typedef int SAESpecialEvents;

enum {
  SAESpecialEvents_major_event = 3841,
  SAESpecialEvents_airshow = 3842,
  SAESpecialEvents_hot_air_ballooning = 3843,
  SAESpecialEvents_concert = 3844,
  SAESpecialEvents_state_occasion = 3845,
  SAESpecialEvents_vIP_visit = 3846,
  SAESpecialEvents_show = 3847,
  SAESpecialEvents_festival = 3848,
  SAESpecialEvents_exhibition = 3849,
  SAESpecialEvents_performing_arts = 3850,
  SAESpecialEvents_outdoor_market = 3851,
  SAESpecialEvents_fair = 3852,
  SAESpecialEvents_carnival = 3853,
  SAESpecialEvents_fireworks_display = 3854,
  SAESpecialEvents_trade_expo = 3855,
  SAESpecialEvents_movie_filming = 3856,
  SAESpecialEvents_presidential_visit = 3857,
  SAESpecialEvents_parade = 3858,
  SAESpecialEvents_procession = 3859,
  SAESpecialEvents_funeral_procession = 3860,
  SAESpecialEvents_crowd = 3861,
  SAESpecialEvents_holiday_traffic_crowds = 3862,
  SAESpecialEvents_event_ended = 3967,
};

extern const ASN1CType asn1_type_SAESpecialEvents[];

typedef int SAESportingEvents;

enum {
  SAESportingEvents_sports_event = 3585,
  SAESportingEvents_game = 3586,
  SAESportingEvents_tournament = 3587,
  SAESportingEvents_track_and_field_event = 3588,
  SAESportingEvents_baseball_game = 3589,
  SAESportingEvents_basketball_game = 3590,
  SAESportingEvents_boxing_match = 3591,
  SAESportingEvents_football_game = 3592,
  SAESportingEvents_soccer_game = 3593,
  SAESportingEvents_golf_tournament = 3594,
  SAESportingEvents_hockey_game = 3595,
  SAESportingEvents_tennis_tournament = 3596,
  SAESportingEvents_wrestling_match = 3597,
  SAESportingEvents_road_race = 3598,
  SAESportingEvents_automobile_race = 3599,
  SAESportingEvents_bicycle_race = 3600,
  SAESportingEvents_race_event = 3601,
  SAESportingEvents_marathon = 3602,
  SAESportingEvents_horse_show = 3603,
  SAESportingEvents_rodeo = 3604,
  SAESportingEvents_water_sports_event = 3605,
  SAESportingEvents_winter_sports_event = 3606,
  SAESportingEvents_skating_event = 3607,
  SAESportingEvents_dog_sled_race = 3608,
  SAESportingEvents_sporting_event_ended = 3711,
};

extern const ASN1CType asn1_type_SAESportingEvents[];

typedef int SAEStatesAndTerritories;

enum {
  SAEStatesAndTerritories_alabama = 12801,
  SAEStatesAndTerritories_alaska = 12802,
  SAEStatesAndTerritories_american_Samoa = 12803,
  SAEStatesAndTerritories_arizona = 12804,
  SAEStatesAndTerritories_arkansas = 12805,
  SAEStatesAndTerritories_california = 12806,
  SAEStatesAndTerritories_colorado = 12807,
  SAEStatesAndTerritories_connecticut = 12808,
  SAEStatesAndTerritories_delaware = 12809,
  SAEStatesAndTerritories_district_of_Columbia = 12810,
  SAEStatesAndTerritories_florida = 12811,
  SAEStatesAndTerritories_georgia = 12812,
  SAEStatesAndTerritories_guam = 12813,
  SAEStatesAndTerritories_hawaii = 12814,
  SAEStatesAndTerritories_idaho = 12815,
  SAEStatesAndTerritories_illinois = 12816,
  SAEStatesAndTerritories_indiana = 12817,
  SAEStatesAndTerritories_iowa = 12818,
  SAEStatesAndTerritories_kansas = 12819,
  SAEStatesAndTerritories_kentucky = 12820,
  SAEStatesAndTerritories_louisiana = 12821,
  SAEStatesAndTerritories_maine = 12822,
  SAEStatesAndTerritories_maryland = 12823,
  SAEStatesAndTerritories_massachusetts = 12824,
  SAEStatesAndTerritories_michigan = 12825,
  SAEStatesAndTerritories_minnesota = 12826,
  SAEStatesAndTerritories_mississippi = 12827,
  SAEStatesAndTerritories_missouri = 12828,
  SAEStatesAndTerritories_montana = 12829,
  SAEStatesAndTerritories_nebraska = 12830,
  SAEStatesAndTerritories_nevada = 12831,
  SAEStatesAndTerritories_new_Hampshire = 12832,
  SAEStatesAndTerritories_new_Jersey = 12833,
  SAEStatesAndTerritories_new_Mexico = 12834,
  SAEStatesAndTerritories_new_York = 12835,
  SAEStatesAndTerritories_north_Carolina = 12836,
  SAEStatesAndTerritories_north_Dakota = 12837,
  SAEStatesAndTerritories_northern_Marianas_Islands = 12838,
  SAEStatesAndTerritories_ohio = 12839,
  SAEStatesAndTerritories_oklahoma = 12840,
  SAEStatesAndTerritories_oregon = 12841,
  SAEStatesAndTerritories_pennsylvania = 12842,
  SAEStatesAndTerritories_puerto_rico = 12843,
  SAEStatesAndTerritories_rhode_Island = 12844,
  SAEStatesAndTerritories_south_Carolina = 12845,
  SAEStatesAndTerritories_south_Dakota = 12846,
  SAEStatesAndTerritories_tennessee = 12847,
  SAEStatesAndTerritories_texas = 12848,
  SAEStatesAndTerritories_utah = 12849,
  SAEStatesAndTerritories_vermont = 12850,
  SAEStatesAndTerritories_virginia = 12851,
  SAEStatesAndTerritories_virgin_Islands = 12852,
  SAEStatesAndTerritories_washington = 12853,
  SAEStatesAndTerritories_west_Virginia = 12854,
  SAEStatesAndTerritories_wisconsin = 12855,
  SAEStatesAndTerritories_wyoming = 12856,
};

extern const ASN1CType asn1_type_SAEStatesAndTerritories[];

typedef int SAEStreetSuffixes;

enum {
  SAEStreetSuffixes_alley = 13313,
  SAEStreetSuffixes_annex = 13314,
  SAEStreetSuffixes_arcade = 13315,
  SAEStreetSuffixes_avenue = 13316,
  SAEStreetSuffixes_bayoo = 13317,
  SAEStreetSuffixes_beach = 13318,
  SAEStreetSuffixes_bend = 13319,
  SAEStreetSuffixes_bluff = 13320,
  SAEStreetSuffixes_bottom = 13321,
  SAEStreetSuffixes_boulevard = 13322,
  SAEStreetSuffixes_branch = 13323,
  SAEStreetSuffixes_nBridge = 13324,
  SAEStreetSuffixes_brook = 13325,
  SAEStreetSuffixes_burg = 13326,
  SAEStreetSuffixes_bypass = 13327,
  SAEStreetSuffixes_camp = 13328,
  SAEStreetSuffixes_canyon = 13329,
  SAEStreetSuffixes_cape = 13330,
  SAEStreetSuffixes_causeway = 13331,
  SAEStreetSuffixes_nCenter = 13332,
  SAEStreetSuffixes_circle = 13333,
  SAEStreetSuffixes_cliff = 13334,
  SAEStreetSuffixes_club = 13335,
  SAEStreetSuffixes_common = 13336,
  SAEStreetSuffixes_corner = 13337,
  SAEStreetSuffixes_course = 13338,
  SAEStreetSuffixes_court = 13339,
  SAEStreetSuffixes_cove = 13340,
  SAEStreetSuffixes_creek = 13341,
  SAEStreetSuffixes_crescent = 13342,
  SAEStreetSuffixes_crest = 13343,
  SAEStreetSuffixes_nCrossing = 13344,
  SAEStreetSuffixes_crossroad = 13345,
  SAEStreetSuffixes_curve = 13346,
  SAEStreetSuffixes_dale = 13347,
  SAEStreetSuffixes_nDam = 13348,
  SAEStreetSuffixes_divide = 13349,
  SAEStreetSuffixes_drive = 13350,
  SAEStreetSuffixes_estate = 13351,
  SAEStreetSuffixes_expressway = 13352,
  SAEStreetSuffixes_extension = 13353,
  SAEStreetSuffixes_fall = 13354,
  SAEStreetSuffixes_nFerry = 13355,
  SAEStreetSuffixes_field = 13356,
  SAEStreetSuffixes_flat = 13357,
  SAEStreetSuffixes_ford = 13358,
  SAEStreetSuffixes_forest = 13359,
  SAEStreetSuffixes_forge = 13360,
  SAEStreetSuffixes_fork = 13361,
  SAEStreetSuffixes_fort = 13362,
  SAEStreetSuffixes_nFreeway = 13363,
  SAEStreetSuffixes_garden = 13364,
  SAEStreetSuffixes_gateway = 13365,
  SAEStreetSuffixes_glen = 13366,
  SAEStreetSuffixes_green = 13367,
  SAEStreetSuffixes_grove = 13368,
  SAEStreetSuffixes_harbor = 13369,
  SAEStreetSuffixes_haven = 13370,
  SAEStreetSuffixes_heights = 13371,
  SAEStreetSuffixes_highway = 13372,
  SAEStreetSuffixes_nHill = 13373,
  SAEStreetSuffixes_hollow = 13374,
  SAEStreetSuffixes_inlet = 13375,
  SAEStreetSuffixes_nIsland = 13376,
  SAEStreetSuffixes_isle = 13377,
  SAEStreetSuffixes_nJunction = 13378,
  SAEStreetSuffixes_key = 13379,
  SAEStreetSuffixes_knoll = 13380,
  SAEStreetSuffixes_lake = 13381,
  SAEStreetSuffixes_land = 13382,
  SAEStreetSuffixes_landing = 13383,
  SAEStreetSuffixes_nLane = 13384,
  SAEStreetSuffixes_light = 13385,
  SAEStreetSuffixes_loaf = 13386,
  SAEStreetSuffixes_lock = 13387,
  SAEStreetSuffixes_lodge = 13388,
  SAEStreetSuffixes_loop = 13389,
  SAEStreetSuffixes_mall = 13390,
  SAEStreetSuffixes_manor = 13391,
  SAEStreetSuffixes_meadow = 13392,
  SAEStreetSuffixes_mews = 13393,
  SAEStreetSuffixes_mill = 13394,
  SAEStreetSuffixes_mission = 13395,
  SAEStreetSuffixes_motorway = 13396,
  SAEStreetSuffixes_mount = 13397,
  SAEStreetSuffixes_mountain = 13398,
  SAEStreetSuffixes_neck = 13399,
  SAEStreetSuffixes_orchard = 13400,
  SAEStreetSuffixes_oval = 13401,
  SAEStreetSuffixes_nOverpass = 13402,
  SAEStreetSuffixes_park = 13403,
  SAEStreetSuffixes_parkway = 13404,
  SAEStreetSuffixes_nPass = 13405,
  SAEStreetSuffixes_passage = 13406,
  SAEStreetSuffixes_path = 13407,
  SAEStreetSuffixes_pike = 13408,
  SAEStreetSuffixes_pine = 13409,
  SAEStreetSuffixes_plains = 13410,
  SAEStreetSuffixes_plaza = 13411,
  SAEStreetSuffixes_point = 13412,
  SAEStreetSuffixes_port = 13413,
  SAEStreetSuffixes_prairie = 13414,
  SAEStreetSuffixes_radial = 13415,
  SAEStreetSuffixes_ramp = 13416,
  SAEStreetSuffixes_ranch = 13417,
  SAEStreetSuffixes_rapid = 13418,
  SAEStreetSuffixes_rest = 13419,
  SAEStreetSuffixes_ridge = 13420,
  SAEStreetSuffixes_river = 13421,
  SAEStreetSuffixes_nRoad = 13422,
  SAEStreetSuffixes_route = 13423,
  SAEStreetSuffixes_row = 13424,
  SAEStreetSuffixes_rue = 13425,
  SAEStreetSuffixes_run = 13426,
  SAEStreetSuffixes_shoal = 13427,
  SAEStreetSuffixes_shore = 13428,
  SAEStreetSuffixes_skyway = 13429,
  SAEStreetSuffixes_spring = 13430,
  SAEStreetSuffixes_nSpur = 13431,
  SAEStreetSuffixes_square = 13432,
  SAEStreetSuffixes_nStation = 13433,
  SAEStreetSuffixes_stravenue = 13434,
  SAEStreetSuffixes_stream = 13435,
  SAEStreetSuffixes_street = 13436,
  SAEStreetSuffixes_summit = 13437,
  SAEStreetSuffixes_terrace = 13438,
  SAEStreetSuffixes_throughway = 13439,
  SAEStreetSuffixes_trace = 13440,
  SAEStreetSuffixes_nTrack = 13441,
  SAEStreetSuffixes_trafficway = 13442,
  SAEStreetSuffixes_nTrail = 13443,
  SAEStreetSuffixes_nTunnel = 13444,
  SAEStreetSuffixes_turnpike = 13445,
  SAEStreetSuffixes_nUnderpass = 13446,
  SAEStreetSuffixes_Union = 13447,
  SAEStreetSuffixes_valley = 13448,
  SAEStreetSuffixes_viaduct = 13449,
  SAEStreetSuffixes_view = 13450,
  SAEStreetSuffixes_village = 13451,
  SAEStreetSuffixes_ville = 13452,
  SAEStreetSuffixes_vista = 13453,
  SAEStreetSuffixes_nWalk = 13454,
  SAEStreetSuffixes_wall = 13455,
  SAEStreetSuffixes_way = 13456,
  SAEStreetSuffixes_well = 13457,
};

extern const ASN1CType asn1_type_SAEStreetSuffixes[];

typedef int SAEStructures;

enum {
  SAEStructures_rest_room = 13057,
  SAEStructures_mens_rest_room = 13058,
  SAEStructures_womens_rest_room = 13059,
  SAEStructures_family_rest_room = 13060,
  SAEStructures_dam = 13061,
  SAEStructures_fish_hatchery = 13062,
  SAEStructures_information = 13063,
  SAEStructures_lighthouse = 13064,
  SAEStructures_lookout_tower = 13065,
  SAEStructures_ranger_station = 13066,
  SAEStructures_grocery_store = 13068,
  SAEStructures_lodging = 13069,
  SAEStructures_post_office = 13070,
  SAEStructures_picnic_shelter = 13072,
  SAEStructures_group_camping = 13073,
  SAEStructures_group_picnicking = 13074,
  SAEStructures_n24_hour_pharmacy = 13075,
  SAEStructures_kennel = 13076,
  SAEStructures_laundry_facilities = 13077,
  SAEStructures_shower_facilities = 13078,
  SAEStructures_amphitheater = 13079,
  SAEStructures_stable = 13080,
  SAEStructures_hospital = 13081,
  SAEStructures_emergency_medical_service_point = 13082,
  SAEStructures_library = 13083,
  SAEStructures_recycling_collection_center = 13084,
  SAEStructures_school = 13085,
};

extern const ASN1CType asn1_type_SAEStructures[];

typedef int SAESuggestionAdvice;

enum {
  SAESuggestionAdvice_why_not_ride_share = 6657,
  SAESuggestionAdvice_is_this_your_no_ride_day = 6658,
  SAESuggestionAdvice_why_not_use_transit = 6659,
  SAESuggestionAdvice_why_not_park_and_ride = 6660,
  SAESuggestionAdvice_why_not_try_paratransit = 6661,
  SAESuggestionAdvice_why_not_travel_by_rail = 6662,
  SAESuggestionAdvice_why_not_use_the_subway = 6663,
  SAESuggestionAdvice_why_not_try_rapid_transit = 6664,
  SAESuggestionAdvice_why_not_travel_by_bus = 6665,
  SAESuggestionAdvice_your_parking_ticket_covers_the_return_ride = 6666,
  SAESuggestionAdvice_avoid_the_rush_hour = 6667,
  SAESuggestionAdvice_do_not_allow_unnecessary_gaps = 6668,
  SAESuggestionAdvice_follow_the_vehicle_in_front_smoothly = 6669,
  SAESuggestionAdvice_do_not_slow_down_unnecessarily = 6670,
  SAESuggestionAdvice_watch_for_muggers = 6671,
  SAESuggestionAdvice_watch_for_pickpockets = 6672,
  SAESuggestionAdvice_watch_for_thieves = 6673,
  SAESuggestionAdvice_sorry_for_any_delay = 6674,
  SAESuggestionAdvice_thank_you_for_your_understanding = 6675,
  SAESuggestionAdvice_we_appreciate_your_patience = 6676,
  SAESuggestionAdvice_we_are_grateful_for_your_cooperation = 6677,
  SAESuggestionAdvice_share_the_road = 6678,
};

extern const ASN1CType asn1_type_SAESuggestionAdvice[];

typedef int SAETemperature;

enum {
  SAETemperature_maximum_temperature = 5633,
  SAETemperature_temperature = 5634,
  SAETemperature_minimum_temperature = 5635,
  SAETemperature_current_temperature = 5636,
  SAETemperature_heat_index = 5637,
  SAETemperature_extreme_heat = 5638,
  SAETemperature_hot = 5639,
  SAETemperature_hotter = 5640,
  SAETemperature_heat = 5641,
  SAETemperature_warmer = 5642,
  SAETemperature_warm = 5643,
  SAETemperature_mild = 5644,
  SAETemperature_cool = 5645,
  SAETemperature_cooler = 5646,
  SAETemperature_cold = 5647,
  SAETemperature_colder = 5648,
  SAETemperature_very_cold = 5649,
  SAETemperature_extreme_cold = 5650,
  SAETemperature_wind_chill = 5651,
  SAETemperature_dewpoint = 5652,
  SAETemperature_relative_humidity = 5653,
  SAETemperature_temperatures_close_to_the_seasonal_norm = 5758,
  SAETemperature_less_extreme_temperatures = 5759,
};

extern const ASN1CType asn1_type_SAETemperature[];

typedef int SAETrafficConditions;

enum {
  SAETrafficConditions_stopped_traffic = 257,
  SAETrafficConditions_stop_and_go_traffic = 258,
  SAETrafficConditions_slow_traffic = 259,
  SAETrafficConditions_heavy_traffic = 260,
  SAETrafficConditions_traffic_building = 261,
  SAETrafficConditions_long_queues = 262,
  SAETrafficConditions_traffic_congestion = 263,
  SAETrafficConditions_traffic_lighter_than_normal = 264,
  SAETrafficConditions_traffic_heavier_than_normal = 265,
  SAETrafficConditions_traffic_much_heavier_than_normal = 266,
  SAETrafficConditions_current_speed = 267,
  SAETrafficConditions_speed_limit = 268,
  SAETrafficConditions_travel_time = 269,
  SAETrafficConditions_merging_traffic = 272,
  SAETrafficConditions_contraflow = 273,
  SAETrafficConditions_contraflow_canceled = 378,
  SAETrafficConditions_traffic_flowing_freely = 379,
  SAETrafficConditions_traffic_easing = 380,
  SAETrafficConditions_traffic_returned_to_normal = 381,
  SAETrafficConditions_no_problems_to_report = 382,
  SAETrafficConditions_traffic_congestion_cleared = 383,
};

extern const ASN1CType asn1_type_SAETrafficConditions[];

typedef int SAETransitMode;

enum {
  SAETransitMode_travel = 8961,
  SAETransitMode_transit = 8962,
  SAETransitMode_bus = 8963,
  SAETransitMode_trolleybus = 8964,
  SAETransitMode_rail = 8965,
  SAETransitMode_commuter_rail = 8966,
  SAETransitMode_subway = 8967,
  SAETransitMode_rapid_transit = 8968,
  SAETransitMode_light_rail = 8969,
  SAETransitMode_streetcar = 8970,
  SAETransitMode_dial_a_ride = 8971,
  SAETransitMode_park_and_ride = 8972,
  SAETransitMode_shuttle = 8973,
  SAETransitMode_free_shuttle = 8974,
  SAETransitMode_airport_shuttle = 8975,
  SAETransitMode_taxies = 8976,
  SAETransitMode_ferry = 8977,
  SAETransitMode_passenger_ferry = 8978,
  SAETransitMode_vehicle_ferry = 8979,
  SAETransitMode_aerial_tramway = 8980,
  SAETransitMode_automated_guideway = 8981,
  SAETransitMode_cable_cars = 8982,
  SAETransitMode_monorail = 8983,
  SAETransitMode_air_travel = 8984,
  SAETransitMode_hitch_hitching = 8985,
  SAETransitMode_walk = 8986,
};

extern const ASN1CType asn1_type_SAETransitMode[];

typedef int SAETransitOperations;

enum {
  SAETransitOperations_unknown_transit_problem = 10753,
  SAETransitOperations_sleeping_customer = 10754,
  SAETransitOperations_assault_on_passenger = 10755,
  SAETransitOperations_assault_on_employee = 10756,
  SAETransitOperations_broken_seat = 10757,
  SAETransitOperations_bus_alarm = 10758,
  SAETransitOperations_crime_or_drug_deal = 10759,
  SAETransitOperations_eating_on_board = 10760,
  SAETransitOperations_equipment_problem_with_air_conditioning = 10761,
  SAETransitOperations_equipment_problem_with_air_system = 10762,
  SAETransitOperations_equipment_problem_with_brakes = 10763,
  SAETransitOperations_equipment_problem_with_chassis_or_suspension = 10764,
  SAETransitOperations_equipment_problem_with_cooling_system = 10765,
  SAETransitOperations_equipment_problem_with_doors = 10766,
  SAETransitOperations_equipment_problem_with_electrical = 10767,
  SAETransitOperations_equipment_problem_with_engine = 10768,
  SAETransitOperations_equipment_problem_with_exterior_or_body = 10769,
  SAETransitOperations_equipment_problem_with_fare_collection = 10770,
  SAETransitOperations_equipment_problem_with_fuel_or_exhaust = 10771,
  SAETransitOperations_equipment_problem_with_horn = 10772,
  SAETransitOperations_equipment_problem_with_interior = 10773,
  SAETransitOperations_equipment_problem_with_liftkneeling = 10774,
  SAETransitOperations_equipment_problem_with_lights = 10775,
  SAETransitOperations_equipment_problem_with_lubrication = 10776,
  SAETransitOperations_equipment_problem_with_radio_or_communication = 10777,
  SAETransitOperations_equipment_problem_with_signs = 10778,
  SAETransitOperations_equipment_problem_with_steering = 10779,
  SAETransitOperations_equipment_problem_with_tires = 10780,
  SAETransitOperations_equipment_problem_with_transmission = 10781,
  SAETransitOperations_equipment_problem_with_unknown_alarm = 10782,
  SAETransitOperations_equipment_problem_with_wipers = 10783,
  SAETransitOperations_fare_dispute_expired_pass = 10784,
  SAETransitOperations_fare_dispute_expired_transfer = 10785,
  SAETransitOperations_fare_dispute_expired_upgrade = 10786,
  SAETransitOperations_fare_dispute_other = 10787,
  SAETransitOperations_fare_dispute_refuses_to_pay = 10788,
  SAETransitOperations_lift_passenger_cycle_completed = 10789,
  SAETransitOperations_lift_passenger_ready_to_alight = 10790,
  SAETransitOperations_lift_passenger_ready_to_board = 10791,
  SAETransitOperations_lost_article = 10792,
  SAETransitOperations_objects_thrown = 10793,
  SAETransitOperations_passenger_accident_alighting = 10794,
  SAETransitOperations_passenger_accident_boarding = 10795,
  SAETransitOperations_passenger_accident_fallen_on_board = 10796,
  SAETransitOperations_passenger_load = 10797,
  SAETransitOperations_passenger_accident_other = 10798,
  SAETransitOperations_passenger_sick_or_injured = 10799,
  SAETransitOperations_right_of_way = 10800,
  SAETransitOperations_theft = 10801,
  SAETransitOperations_theft_of_service = 10802,
  SAETransitOperations_waiting_to_get_relief_for_schedule_break = 10803,
  SAETransitOperations_waiting_to_get_relief_after_run_is_finished = 10804,
  SAETransitOperations_waiting_to_provide_relief = 10805,
};

extern const ASN1CType asn1_type_SAETransitOperations[];

typedef int SAETravelerGroupAffected;

enum {
  SAETravelerGroupAffected_through_traffic = 9473,
  SAETravelerGroupAffected_holiday_traffic = 9474,
  SAETravelerGroupAffected_residents = 9475,
  SAETravelerGroupAffected_visitors = 9476,
  SAETravelerGroupAffected_long_distance_traffic = 9477,
  SAETravelerGroupAffected_local_traffic = 9478,
  SAETravelerGroupAffected_regional_traffic = 9479,
  SAETravelerGroupAffected_arrivals = 9480,
  SAETravelerGroupAffected_departures = 9481,
  SAETravelerGroupAffected_airline_travelers = 9482,
  SAETravelerGroupAffected_commuter_airline_travelers = 9483,
  SAETravelerGroupAffected_domestic_airline_travelers = 9484,
  SAETravelerGroupAffected_international_airline_travelers = 9485,
  SAETravelerGroupAffected_pedestrians = 9486,
  SAETravelerGroupAffected_bicyclists = 9487,
};

extern const ASN1CType asn1_type_SAETravelerGroupAffected[];

typedef int SAEUnits;

enum {
  SAEUnits_square_feet = 8705,
  SAEUnits_square_meters = 8706,
  SAEUnits_acres = 8707,
  SAEUnits_hectares = 8708,
  SAEUnits_inches = 8709,
  SAEUnits_feet = 8710,
  SAEUnits_mile = 8711,
  SAEUnits_miles = 8712,
  SAEUnits_nautical_miles = 8713,
  SAEUnits_millimeters = 8714,
  SAEUnits_meters = 8715,
  SAEUnits_kilometer = 8716,
  SAEUnits_kilometers = 8717,
  SAEUnits_feet_per_second = 8718,
  SAEUnits_meters_per_second = 8719,
  SAEUnits_mPH = 8720,
  SAEUnits_kPH = 8721,
  SAEUnits_knots = 8722,
  SAEUnits_elevation = 8766,
  SAEUnits_aM = 8723,
  SAEUnits_pM = 8724,
  SAEUnits_holiday = 8726,
  SAEUnits_seconds = 8727,
  SAEUnits_minutes = 8728,
  SAEUnits_hours = 8729,
  SAEUnits_days = 8730,
  SAEUnits_weeks = 8731,
  SAEUnits_months = 8732,
  SAEUnits_other_times = 8767,
  SAEUnits_nSunday = 8758,
  SAEUnits_nMonday = 8759,
  SAEUnits_nTuesday = 8760,
  SAEUnits_nWednesday = 8761,
  SAEUnits_nThursday = 8762,
  SAEUnits_nFriday = 8763,
  SAEUnits_nSaturday = 8764,
  SAEUnits_weekdays = 8765,
  SAEUnits_weekends = 8725,
  SAEUnits_degrees_Angle = 8733,
  SAEUnits_degrees_Celsius = 8734,
  SAEUnits_degrees_Fahrenheit = 8735,
  SAEUnits_grams = 8736,
  SAEUnits_kilograms = 8737,
  SAEUnits_ounces = 8738,
  SAEUnits_pounds = 8739,
  SAEUnits_tons = 8740,
  SAEUnits_fluid_ounces = 8741,
  SAEUnits_gallons = 8742,
  SAEUnits_milliliters = 8743,
  SAEUnits_liters = 8744,
  SAEUnits_kilograms_per_lane_mile = 8745,
  SAEUnits_tons_per_lane_mile = 8746,
  SAEUnits_dollar = 8747,
  SAEUnits_percent = 8748,
  SAEUnits_grade = 8757,
  SAEUnits_time_delimiter = 8749,
  SAEUnits_dollars = 8750,
  SAEUnits_flight_number = 8751,
  SAEUnits_person_people = 8752,
  SAEUnits_response_plan = 8753,
  SAEUnits_placard_type = 8754,
  SAEUnits_placard_number = 8755,
  SAEUnits_fM = 8756,
};

extern const ASN1CType asn1_type_SAEUnits[];

typedef int SAEUnusualDriving;

enum {
  SAEUnusualDriving_vehicle_traveling_wrong_way = 1793,
  SAEUnusualDriving_reckless_driver = 1794,
  SAEUnusualDriving_prohibited_vehicle_on_roadway = 1795,
  SAEUnusualDriving_emergency_vehicles_on_roadway = 1796,
  SAEUnusualDriving_high_speed_emergency_vehicles = 1797,
  SAEUnusualDriving_high_speed_chase = 1798,
  SAEUnusualDriving_dangerous_vehicle_warning_cleared = 1918,
  SAEUnusualDriving_emergency_vehicle_warning_cleared = 1919,
};

extern const ASN1CType asn1_type_SAEUnusualDriving[];

typedef int SAEValidManeuvers;

enum {
  SAEValidManeuvers_prohibit_None_Allowed_LU_LT_L45_S_R45_RT_RU = 11264,
  SAEValidManeuvers_prohibit_RU_Allowed_LU_LT_L45_S_R45_RT = 11265,
  SAEValidManeuvers_prohibit_RT_Allowed_LU_LT_L45_S_R45_RU = 11266,
  SAEValidManeuvers_prohibit_RT_RU_Allowed_LU_LT_L45_S_R45 = 11267,
  SAEValidManeuvers_prohibit_R45_Allowed_LU_LT_L45_S_RT_RU = 11268,
  SAEValidManeuvers_prohibit_R45_RU_Allowed_LU_LT_L45_S_RT = 11269,
  SAEValidManeuvers_prohibit_R45_RT_Allowed_LU_LT_L45_S_RU = 11270,
  SAEValidManeuvers_prohibit_R45_RT_RU_Allowed_LU_LT_L45_S = 11271,
  SAEValidManeuvers_prohibit_S_Allowed_LU_LT_L45_R45_RT_RU = 11272,
  SAEValidManeuvers_prohibit_S_RU_Allowed_LU_LT_L45_R45_RT = 11273,
  SAEValidManeuvers_prohibit_S_RT_Allowed_LU_LT_L45_R45_RU = 11274,
  SAEValidManeuvers_prohibit_S_RT_RU_Allowed_LU_LT_L45_R45 = 11275,
  SAEValidManeuvers_prohibit_S_R45_Allowed_LU_LT_L45_RT_RU = 11276,
  SAEValidManeuvers_prohibit_S_R45_RU_Allowed_LU_LT_L45_RT = 11277,
  SAEValidManeuvers_prohibit_S_R45_RT_Allowed_LU_LT_L45_RU = 11278,
  SAEValidManeuvers_prohibit_S_R45_RT_RU_Allowed_LU_LT_L45 = 11279,
  SAEValidManeuvers_prohibit_L45_Allowed_LU_LT_S_R45_RT_RU = 11280,
  SAEValidManeuvers_prohibit_L45_RU_Allowed_LU_LT_S_R45_RT = 11281,
  SAEValidManeuvers_prohibit_L45_RT_Allowed_LU_LT_S_R45_RU = 11282,
  SAEValidManeuvers_prohibit_L45_RT_RU_Allowed_LU_LT_S_R45 = 11283,
  SAEValidManeuvers_prohibit_L45_R45_Allowed_LU_LT_S_RT_RU = 11284,
  SAEValidManeuvers_prohibit_L45_R45_RU_Allowed_LU_LT_S_RT = 11285,
  SAEValidManeuvers_prohibit_L45_R45_RT_Allowed_LU_LT_S_RU = 11286,
  SAEValidManeuvers_prohibit_L45_R45_RT_RU_Allowed_LU_LT_S = 11287,
  SAEValidManeuvers_prohibit_L45_S_Allowed_LU_LT_R45_RT_RU = 11288,
  SAEValidManeuvers_prohibit_L45_S_RU_Allowed_LU_LT_R45_RT = 11289,
  SAEValidManeuvers_prohibit_L45_S_RT_Allowed_LU_LT_R45_RU = 11290,
  SAEValidManeuvers_prohibit_L45_S_RT_RU_Allowed_LU_LT_R45 = 11291,
  SAEValidManeuvers_prohibit_L45_S_R45_Allowed_LU_LT_RT_RU = 11292,
  SAEValidManeuvers_prohibit_L45_S_R45_RU_Allowed_LU_LT_RT = 11293,
  SAEValidManeuvers_prohibit_L45_S_R45_RT_Allowed_LU_LT_RU = 11294,
  SAEValidManeuvers_prohibit_L45_S_R45_RT_RU_Allowed_LU_LT = 11295,
  SAEValidManeuvers_prohibit_LT_Allowed_LU_L45_S_R45_RT_RU = 11296,
  SAEValidManeuvers_prohibit_LT_RU_Allowed_LU_L45_S_R45_RT = 11297,
  SAEValidManeuvers_prohibit_LT_RT_Allowed_LU_L45_S_R45_RU = 11298,
  SAEValidManeuvers_prohibit_LT_RT_RU_Allowed_LU_L45_S_R45 = 11299,
  SAEValidManeuvers_prohibit_LT_R45_Allowed_LU_L45_S_RT_RU = 11300,
  SAEValidManeuvers_prohibit_LT_R45_RU_Allowed_LU_L45_S_RT = 11301,
  SAEValidManeuvers_prohibit_LT_R45_RT_Allowed_LU_L45_S_RU = 11302,
  SAEValidManeuvers_prohibit_LT_R45_RT_RU_Allowed_LU_L45_S = 11303,
  SAEValidManeuvers_prohibit_LT_S_Allowed_LU_L45_R45_RT_RU = 11304,
  SAEValidManeuvers_prohibit_LT_S_RU_Allowed_LU_L45_R45_RT = 11305,
  SAEValidManeuvers_prohibit_LT_S_RT_Allowed_LU_L45_R45_RU = 11306,
  SAEValidManeuvers_prohibit_LT_S_RT_RU_Allowed_LU_L45_R45 = 11307,
  SAEValidManeuvers_prohibit_LT_S_R45_Allowed_LU_L45_RT_RU = 11308,
  SAEValidManeuvers_prohibit_LT_S_R45_RU_Allowed_LU_L45_RT = 11309,
  SAEValidManeuvers_prohibit_LT_S_R45_RT_Allowed_LU_L45_RU = 11310,
  SAEValidManeuvers_prohibit_LT_S_R45_RT_RU_Allowed_LU_L45 = 11311,
  SAEValidManeuvers_prohibit_LT_L45_Allowed_LU_S_R45_RT_RU = 11312,
  SAEValidManeuvers_prohibit_LT_L45_RU_Allowed_LU_S_R45_RT = 11313,
  SAEValidManeuvers_prohibit_LT_L45_RT_Allowed_LU_S_R45_RU = 11314,
  SAEValidManeuvers_prohibit_LT_L45_RT_RU_Allowed_LU_S_R45 = 11315,
  SAEValidManeuvers_prohibit_LT_L45_R45_Allowed_LU_S_RT_RU = 11316,
  SAEValidManeuvers_prohibit_LT_L45_R45_RU_Allowed_LU_S_RT = 11317,
  SAEValidManeuvers_prohibit_LT_L45_R45_RT_Allowed_LU_S_RU = 11318,
  SAEValidManeuvers_prohibit_LT_L45_R45_RT_RU_Allowed_LU_S = 11319,
  SAEValidManeuvers_prohibit_LT_L45_S_Allowed_LU_R45_RT_RU = 11320,
  SAEValidManeuvers_prohibit_LT_L45_S_RU_Allowed_LU_R45_RT = 11321,
  SAEValidManeuvers_prohibit_LT_L45_S_RT_Allowed_LU_R45_RU = 11322,
  SAEValidManeuvers_prohibit_LT_L45_S_RT_RU_Allowed_LU_R45 = 11323,
  SAEValidManeuvers_prohibit_LT_L45_S_R45_Allowed_LU_RT_RU = 11324,
  SAEValidManeuvers_prohibit_LT_L45_S_R45_RU_Allowed_LU_RT = 11325,
  SAEValidManeuvers_prohibit_LT_L45_S_R45_RT_Allowed_LU_RU = 11326,
  SAEValidManeuvers_prohibit_LT_L45_S_R45_RT_RU_Allowed_LU = 11327,
  SAEValidManeuvers_prohibit_LU_Allowed_LT_L45_S_R45_RT_RU = 11328,
  SAEValidManeuvers_prohibit_LU_RU_Allowed_LT_L45_S_R45_RT = 11329,
  SAEValidManeuvers_prohibit_LU_RT_Allowed_LT_L45_S_R45_RU = 11330,
  SAEValidManeuvers_prohibit_LU_RT_RU_Allowed_LT_L45_S_R45 = 11331,
  SAEValidManeuvers_prohibit_LU_R45_Allowed_LT_L45_S_RT_RU = 11332,
  SAEValidManeuvers_prohibit_LU_R45_RU_Allowed_LT_L45_S_RT = 11333,
  SAEValidManeuvers_prohibit_LU_R45_RT_Allowed_LT_L45_S_RU = 11334,
  SAEValidManeuvers_prohibit_LU_R45_RT_RU_Allowed_LT_L45_S = 11335,
  SAEValidManeuvers_prohibit_LU_S_Allowed_LT_L45_R45_RT_RU = 11336,
  SAEValidManeuvers_prohibit_LU_S_RU_Allowed_LT_L45_R45_RT = 11337,
  SAEValidManeuvers_prohibit_LU_S_RT_Allowed_LT_L45_R45_RU = 11338,
  SAEValidManeuvers_prohibit_LU_S_RT_RU_Allowed_LT_L45_R45 = 11339,
  SAEValidManeuvers_prohibit_LU_S_R45_Allowed_LT_L45_RT_RU = 11340,
  SAEValidManeuvers_prohibit_LU_S_R45_RU_Allowed_LT_L45_RT = 11341,
  SAEValidManeuvers_prohibit_LU_S_R45_RT_Allowed_LT_L45_RU = 11342,
  SAEValidManeuvers_prohibit_LU_S_R45_RT_RU_Allowed_LT_L45 = 11343,
  SAEValidManeuvers_prohibit_LU_L45_Allowed_LT_S_R45_RT_RU = 11344,
  SAEValidManeuvers_prohibit_LU_L45_RU_Allowed_LT_S_R45_RT = 11345,
  SAEValidManeuvers_prohibit_LU_L45_RT_Allowed_LT_S_R45_RU = 11346,
  SAEValidManeuvers_prohibit_LU_L45_RT_RU_Allowed_LT_S_R45 = 11347,
  SAEValidManeuvers_prohibit_LU_L45_R45_Allowed_LT_S_RT_RU = 11348,
  SAEValidManeuvers_prohibit_LU_L45_R45_RU_Allowed_LT_S_RT = 11349,
  SAEValidManeuvers_prohibit_LU_L45_R45_RT_Allowed_LT_S_RU = 11350,
  SAEValidManeuvers_prohibit_LU_L45_R45_RT_RU_Allowed_LT_S = 11351,
  SAEValidManeuvers_prohibit_LU_L45_S_Allowed_LT_R45_RT_RU = 11352,
  SAEValidManeuvers_prohibit_LU_L45_S_RU_Allowed_LT_R45_RT = 11353,
  SAEValidManeuvers_prohibit_LU_L45_S_RT_Allowed_LT_R45_RU = 11354,
  SAEValidManeuvers_prohibit_LU_L45_S_RT_RU_Allowed_LT_R45 = 11355,
  SAEValidManeuvers_prohibit_LU_L45_S_R45_Allowed_LT_RT_RU = 11356,
  SAEValidManeuvers_prohibit_LU_L45_S_R45_RU_Allowed_LT_RT = 11357,
  SAEValidManeuvers_prohibit_LU_L45_S_R45_RT_Allowed_LT_RU = 11358,
  SAEValidManeuvers_prohibit_LU_L45_S_R45_RT_RU_Allowed_LT = 11359,
  SAEValidManeuvers_prohibit_LU_LT_Allowed_L45_S_R45_RT_RU = 11360,
  SAEValidManeuvers_prohibit_LU_LT_RU_Allowed_L45_S_R45_RT = 11361,
  SAEValidManeuvers_prohibit_LU_LT_RT_Allowed_L45_S_R45_RU = 11362,
  SAEValidManeuvers_prohibit_LU_LT_RT_RU_Allowed_L45_S_R45 = 11363,
  SAEValidManeuvers_prohibit_LU_LT_R45_Allowed_L45_S_RT_RU = 11364,
  SAEValidManeuvers_prohibit_LU_LT_R45_RU_Allowed_L45_S_RT = 11365,
  SAEValidManeuvers_prohibit_LU_LT_R45_RT_Allowed_L45_S_RU = 11366,
  SAEValidManeuvers_prohibit_LU_LT_R45_RT_RU_Allowed_L45_S = 11367,
  SAEValidManeuvers_prohibit_LU_LT_S_Allowed_L45_R45_RT_RU = 11368,
  SAEValidManeuvers_prohibit_LU_LT_S_RU_Allowed_L45_R45_RT = 11369,
  SAEValidManeuvers_prohibit_LU_LT_S_RT_Allowed_L45_R45_RU = 11370,
  SAEValidManeuvers_prohibit_LU_LT_S_RT_RU_Allowed_L45_R45 = 11371,
  SAEValidManeuvers_prohibit_LU_LT_S_R45_Allowed_L45_RT_RU = 11372,
  SAEValidManeuvers_prohibit_LU_LT_S_R45_RU_Allowed_L45_RT = 11373,
  SAEValidManeuvers_prohibit_LU_LT_S_R45_RT_Allowed_L45_RU = 11374,
  SAEValidManeuvers_prohibit_LU_LT_S_R45_RT_RU_Allowed_L45 = 11375,
  SAEValidManeuvers_prohibit_LU_LT_L45_Allowed_S_R45_RT_RU = 11376,
  SAEValidManeuvers_prohibit_LU_LT_L45_RU_Allowed_S_R45_RT = 11377,
  SAEValidManeuvers_prohibit_LU_LT_L45_RT_Allowed_S_R45_RU = 11378,
  SAEValidManeuvers_prohibit_LU_LT_L45_RT_RU_Allowed_S_R45 = 11379,
  SAEValidManeuvers_prohibit_LU_LT_L45_R45_Allowed_S_RT_RU = 11380,
  SAEValidManeuvers_prohibit_LU_LT_L45_R45_RU_Allowed_S_RT = 11381,
  SAEValidManeuvers_prohibit_LU_LT_L45_R45_RT_Allowed_S_RU = 11382,
  SAEValidManeuvers_prohibit_LU_LT_L45_R45_RT_RU_Allowed_S = 11383,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_Allowed_R45_RT_RU = 11384,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_RU_Allowed_R45_RT = 11385,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_RT_Allowed_R45_RU = 11386,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_RT_RU_Allowed_R45 = 11387,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_R45_Allowed_RT_RU = 11388,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_R45_RU_Allowed_RT = 11389,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_R45_RT_Allowed_RU = 11390,
  SAEValidManeuvers_prohibit_LU_LT_L45_S_R45_RT_RU_Allowed_None = 11391,
};

extern const ASN1CType asn1_type_SAEValidManeuvers[];

typedef int SAEVehicleGroupAffected;

enum {
  SAEVehicleGroupAffected_all_vehicles = 9217,
  SAEVehicleGroupAffected_bicycles = 9218,
  SAEVehicleGroupAffected_motorcycles = 9219,
  SAEVehicleGroupAffected_cars = 9220,
  SAEVehicleGroupAffected_light_vehicles = 9221,
  SAEVehicleGroupAffected_cars_and_light_vehicles = 9222,
  SAEVehicleGroupAffected_cars_with_trailers = 9223,
  SAEVehicleGroupAffected_cars_with_recreational_trailers = 9224,
  SAEVehicleGroupAffected_vehicles_with_trailers = 9225,
  SAEVehicleGroupAffected_heavy_vehicles = 9226,
  SAEVehicleGroupAffected_trucks = 9227,
  SAEVehicleGroupAffected_buses = 9228,
  SAEVehicleGroupAffected_articulated_buses = 9229,
  SAEVehicleGroupAffected_school_buses = 9230,
  SAEVehicleGroupAffected_vehicles_with_semi_trailers = 9231,
  SAEVehicleGroupAffected_vehicles_with_double_trailers = 9232,
  SAEVehicleGroupAffected_high_profile_vehicles = 9233,
  SAEVehicleGroupAffected_wide_vehicles = 9234,
  SAEVehicleGroupAffected_long_vehicles = 9235,
  SAEVehicleGroupAffected_hazardous_loads = 9236,
  SAEVehicleGroupAffected_exceptional_loads = 9237,
  SAEVehicleGroupAffected_abnormal_loads = 9238,
  SAEVehicleGroupAffected_convoys = 9239,
  SAEVehicleGroupAffected_maintenance_vehicles = 9240,
  SAEVehicleGroupAffected_delivery_vehicles = 9241,
  SAEVehicleGroupAffected_vehicles_with_even_numbered_license_plates = 9242,
  SAEVehicleGroupAffected_vehicles_with_odd_numbered_license_plates = 9243,
  SAEVehicleGroupAffected_vehicles_with_parking_permits = 9244,
  SAEVehicleGroupAffected_vehicles_with_catalytic_converters = 9245,
  SAEVehicleGroupAffected_vehicles_without_catalytic_converters = 9246,
  SAEVehicleGroupAffected_gas_powered_vehicles = 9247,
  SAEVehicleGroupAffected_diesel_powered_vehicles = 9248,
  SAEVehicleGroupAffected_lPG_vehicles = 9249,
  SAEVehicleGroupAffected_military_convoys = 9250,
  SAEVehicleGroupAffected_military_vehicles = 9251,
  SAEVehicleGroupAffected_electric_powered_vehicles = 9252,
  SAEVehicleGroupAffected_hybrid_powered_vehicles = 9253,
  SAEVehicleGroupAffected_inherently_low_emission_vehicles = 9254,
  SAEVehicleGroupAffected_commercial_vehicles = 9255,
  SAEVehicleGroupAffected_runaway_vehicles = 9256,
  SAEVehicleGroupAffected_vehicles_with_lugs = 9257,
  SAEVehicleGroupAffected_motor_driven_cycles = 9258,
  SAEVehicleGroupAffected_recreational_vehicles = 9259,
  SAEVehicleGroupAffected_non_motorized_vehicles = 9260,
  SAEVehicleGroupAffected_traffic = 9261,
};

extern const ASN1CType asn1_type_SAEVehicleGroupAffected[];

typedef int SAEVisibilityAndAirQuality;

enum {
  SAEVisibilityAndAirQuality_dense_fog = 5377,
  SAEVisibilityAndAirQuality_fog = 5378,
  SAEVisibilityAndAirQuality_patchy_fog = 5379,
  SAEVisibilityAndAirQuality_freezing_fog = 5380,
  SAEVisibilityAndAirQuality_ice_fog = 5405,
  SAEVisibilityAndAirQuality_mist = 5381,
  SAEVisibilityAndAirQuality_haze = 5382,
  SAEVisibilityAndAirQuality_visibility_reduced = 5383,
  SAEVisibilityAndAirQuality_visibility_blocked = 5404,
  SAEVisibilityAndAirQuality_white_out = 5384,
  SAEVisibilityAndAirQuality_blowing_snow = 5385,
  SAEVisibilityAndAirQuality_smoke_hazard = 5386,
  SAEVisibilityAndAirQuality_spray_hazard = 5387,
  SAEVisibilityAndAirQuality_low_sun_glare = 5388,
  SAEVisibilityAndAirQuality_snow_glare = 5389,
  SAEVisibilityAndAirQuality_blowing_dust = 5390,
  SAEVisibilityAndAirQuality_blowing_sand = 5391,
  SAEVisibilityAndAirQuality_dust_storms = 5392,
  SAEVisibilityAndAirQuality_sandstorms = 5393,
  SAEVisibilityAndAirQuality_air_quality_good = 5394,
  SAEVisibilityAndAirQuality_air_quality_fair = 5395,
  SAEVisibilityAndAirQuality_air_quality_poor = 5396,
  SAEVisibilityAndAirQuality_air_quality_very_poor = 5397,
  SAEVisibilityAndAirQuality_severe_exhaust_pollution = 5398,
  SAEVisibilityAndAirQuality_smog_alert = 5399,
  SAEVisibilityAndAirQuality_pollen_count_high = 5400,
  SAEVisibilityAndAirQuality_pollen_count_medium = 5401,
  SAEVisibilityAndAirQuality_pollen_count_low = 5402,
  SAEVisibilityAndAirQuality_swarms_of_insects = 5403,
  SAEVisibilityAndAirQuality_fog_clearing = 5499,
  SAEVisibilityAndAirQuality_visibility_improved = 5500,
  SAEVisibilityAndAirQuality_fog_forecast_withdrawn = 5501,
  SAEVisibilityAndAirQuality_pollution_alert_ended = 5502,
  SAEVisibilityAndAirQuality_air_quality_improved = 5503,
};

extern const ASN1CType asn1_type_SAEVisibilityAndAirQuality[];

typedef int SAEWarningAdvice;

enum {
  SAEWarningAdvice_risk = 6913,
  SAEWarningAdvice_watch = 6914,
  SAEWarningAdvice_warning = 6915,
  SAEWarningAdvice_alert = 6916,
  SAEWarningAdvice_danger = 6917,
  SAEWarningAdvice_danger_of_explosion = 6918,
  SAEWarningAdvice_danger_of_fire = 6919,
  SAEWarningAdvice_extra_police_patrols_in_operation = 6920,
  SAEWarningAdvice_look_out_for_vehicles_stopped_under_bridges = 6921,
  SAEWarningAdvice_increased_risk_of_accident = 6922,
  SAEWarningAdvice_rescue_and_recovery_work_in_progress_at_sceneREMOVED = 6923,
  SAEWarningAdvice_police_at_scene = 6924,
  SAEWarningAdvice_emergency_vehicles_at_scene = 6925,
  SAEWarningAdvice_traffic_being_directed_around_accident_area = 6926,
  SAEWarningAdvice_police_directing_traffic = 6927,
  SAEWarningAdvice_rescue_workers_directing_traffic = 6928,
  SAEWarningAdvice_repairs_in_progress = 6929,
  SAEWarningAdvice_pilot_car_in_operation = 6930,
  SAEWarningAdvice_look_out_for_flagger = 6931,
  SAEWarningAdvice_look_out_for_workers = 6952,
  SAEWarningAdvice_police_checks_in_operation = 6932,
  SAEWarningAdvice_truck_check_point = 6937,
  SAEWarningAdvice_lockdown = 6935,
  SAEWarningAdvice_security_check_point = 6936,
  SAEWarningAdvice_single_occupancy_vehicle_check_point = 6938,
  SAEWarningAdvice_mandatory_speed_limit_in_force = 6933,
  SAEWarningAdvice_speed_limit_in_force_for_heavy_vehicles = 6934,
  SAEWarningAdvice_behind_you = 6950,
  SAEWarningAdvice_ride_with_traffic = 6953,
  SAEWarningAdvice_prepare_to_evacuate_area = 6954,
  SAEWarningAdvice_avoid = 6955,
  SAEWarningAdvice_look = 6939,
  SAEWarningAdvice_photo_enforced = 6940,
  SAEWarningAdvice_traffic_signs = 6951,
  SAEWarningAdvice_traffic_laws = 6941,
  SAEWarningAdvice_use_low_gear = 6942,
  SAEWarningAdvice_bridge_ices_before_road = 6943,
  SAEWarningAdvice_speed_checked_by_radar = 6944,
  SAEWarningAdvice_speed_checked_by_aircraft = 6945,
  SAEWarningAdvice_fines = 6946,
  SAEWarningAdvice_fines_higher = 6947,
  SAEWarningAdvice_fines_doubled = 6948,
  SAEWarningAdvice_fines_tripled = 6949,
  SAEWarningAdvice_evacuation_canceled = 7033,
  SAEWarningAdvice_warning_canceled = 7034,
  SAEWarningAdvice_watch_canceled = 7035,
  SAEWarningAdvice_alert_canceled = 7036,
  SAEWarningAdvice_ended = 7037,
  SAEWarningAdvice_cleared = 7038,
  SAEWarningAdvice_canceled = 7039,
};

extern const ASN1CType asn1_type_SAEWarningAdvice[];

typedef int SAEWeatherConditions;

enum {
  SAEWeatherConditions_overcast = 4609,
  SAEWeatherConditions_cloudy = 4610,
  SAEWeatherConditions_mostly_cloudy = 4611,
  SAEWeatherConditions_partly_cloudy = 4612,
  SAEWeatherConditions_partly_sunny = 4613,
  SAEWeatherConditions_mostly_sunny = 4614,
  SAEWeatherConditions_sunny = 4615,
  SAEWeatherConditions_fair_skies = 4616,
  SAEWeatherConditions_clear_skies = 4617,
  SAEWeatherConditions_mostly_clear = 4618,
  SAEWeatherConditions_mostly_dry = 4619,
  SAEWeatherConditions_dry = 4620,
  SAEWeatherConditions_uV_index_very_high = 4621,
  SAEWeatherConditions_uV_index_high = 4622,
  SAEWeatherConditions_uV_index_moderate = 4623,
  SAEWeatherConditions_uV_index_low = 4624,
  SAEWeatherConditions_uV_index_very_low = 4625,
  SAEWeatherConditions_barometric_pressure = 4626,
  SAEWeatherConditions_ozone_alert = 4627,
  SAEWeatherConditions_lighting_unknown = 4628,
  SAEWeatherConditions_artificial_exterior_light = 4629,
  SAEWeatherConditions_artificial_interior_light = 4630,
  SAEWeatherConditions_darkness = 4631,
  SAEWeatherConditions_dusk = 4632,
  SAEWeatherConditions_dawn = 4633,
  SAEWeatherConditions_moonlight = 4634,
  SAEWeatherConditions_daylight = 4635,
  SAEWeatherConditions_weather_forecast_withdrawn = 4735,
};

extern const ASN1CType asn1_type_SAEWeatherConditions[];

typedef int SAEWinds;

enum {
  SAEWinds_tornado = 5121,
  SAEWinds_hurricane = 5122,
  SAEWinds_hurricane_force_winds = 5123,
  SAEWinds_tropical_storm = 5124,
  SAEWinds_gale_force_winds = 5125,
  SAEWinds_storm_force_winds = 5126,
  SAEWinds_strong_winds = 5127,
  SAEWinds_moderate_winds = 5128,
  SAEWinds_light_winds = 5129,
  SAEWinds_calm = 5130,
  SAEWinds_gusty_winds = 5131,
  SAEWinds_crosswinds = 5132,
  SAEWinds_windy = 5133,
  SAEWinds_strong_winds_have_eased = 5246,
  SAEWinds_strong_wind_forecast_withdrawn = 5247,
};

extern const ASN1CType asn1_type_SAEWinds[];

typedef int SAEWinterDrivingIndex;

enum {
  SAEWinterDrivingIndex_driving_conditions_good = 6401,
  SAEWinterDrivingIndex_driving_conditions_fair = 6402,
  SAEWinterDrivingIndex_difficult_driving_conditions = 6403,
  SAEWinterDrivingIndex_very_difficult_driving_conditions = 6404,
  SAEWinterDrivingIndex_hazardous_driving_conditions = 6405,
  SAEWinterDrivingIndex_extremely_hazardous_driving_conditions = 6406,
};

extern const ASN1CType asn1_type_SAEWinterDrivingIndex[];

typedef int SAEWinterDrivingRestrictions;

enum {
  SAEWinterDrivingRestrictions_winter_equipment_recommended = 6145,
  SAEWinterDrivingRestrictions_winter_equipment_required = 6146,
  SAEWinterDrivingRestrictions_snow_chains_recommended = 6147,
  SAEWinterDrivingRestrictions_snow_chains_required = 6148,
  SAEWinterDrivingRestrictions_snow_chains_prohibited = 6149,
  SAEWinterDrivingRestrictions_studded_tires_prohibited = 6150,
  SAEWinterDrivingRestrictions_snow_tires_recommended = 6151,
  SAEWinterDrivingRestrictions_snow_tires_required = 6152,
  SAEWinterDrivingRestrictions_four_wheel_drive_recommended = 6153,
  SAEWinterDrivingRestrictions_four_wheel_drive_required = 6154,
  SAEWinterDrivingRestrictions_snow_tires_or_chains_recommended = 6155,
  SAEWinterDrivingRestrictions_snow_tires_or_chains_required = 6156,
  SAEWinterDrivingRestrictions_winter_driving_requirements_lifted = 6271,
};

extern const ASN1CType asn1_type_SAEWinterDrivingRestrictions[];

typedef enum {
  SAEITISEventType_trafficConditions,
  SAEITISEventType_accidentsAndIncidents,
  SAEITISEventType_closures,
  SAEITISEventType_roadwork,
  SAEITISEventType_obstruction,
  SAEITISEventType_delayStatusCancellation,
  SAEITISEventType_unusualDriving,
  SAEITISEventType_mobileSituation,
  SAEITISEventType_deviceStatus,
  SAEITISEventType_restrictionClass,
  SAEITISEventType_incidentResponseStatus,
  SAEITISEventType_disasters,
  SAEITISEventType_disturbances,
  SAEITISEventType_sportingEvents,
  SAEITISEventType_specialEvents,
  SAEITISEventType_parkingInformation,
  SAEITISEventType_systemInformation,
  SAEITISEventType_weatherConditions,
  SAEITISEventType_precipitation,
  SAEITISEventType_winds,
  SAEITISEventType_visibilityAndAirQuality,
  SAEITISEventType_temperature,
  SAEITISEventType_pavementConditions,
  SAEITISEventType_winterDrivingRestrictions,
  SAEITISEventType_winterDrivingIndex,
  SAEITISEventType_suggestionAdvice,
  SAEITISEventType_warningAdvice,
  SAEITISEventType_adviceInstructionsRecommendations,
  SAEITISEventType_adviceInstructionsMandatory,
  SAEITISEventType_laneRoadway,
  SAEITISEventType_alternateRoute,
  SAEITISEventType_transitMode,
  SAEITISEventType_vehicleGroupAffected,
  SAEITISEventType_travelerGroupAffected,
  SAEITISEventType_responderGroupAffected,
  SAEITISEventType_incidentResponseEquipment,
  SAEITISEventType_transitOperations,
  SAEITISEventType_regulatorySigns,
} SAEITISEventType_choice;

typedef struct SAEITISEventType {
  SAEITISEventType_choice choice;
  union {
    SAETrafficConditions trafficConditions;
    SAEAccidentsAndIncidents accidentsAndIncidents;
    SAEClosures closures;
    SAERoadwork roadwork;
    SAEObstruction obstruction;
    SAEDelayStatusCancellation delayStatusCancellation;
    SAEUnusualDriving unusualDriving;
    SAEMobileSituation mobileSituation;
    SAEDeviceStatus deviceStatus;
    SAERestrictionClass restrictionClass;
    SAEIncidentResponseStatus incidentResponseStatus;
    SAEDisasters disasters;
    SAEDisturbances disturbances;
    SAESportingEvents sportingEvents;
    SAESpecialEvents specialEvents;
    SAEParkingInformation parkingInformation;
    SAESystemInformation systemInformation;
    SAEWeatherConditions weatherConditions;
    SAEPrecipitation precipitation;
    SAEWinds winds;
    SAEVisibilityAndAirQuality visibilityAndAirQuality;
    SAETemperature temperature;
    SAEPavementConditions pavementConditions;
    SAEWinterDrivingRestrictions winterDrivingRestrictions;
    SAEWinterDrivingIndex winterDrivingIndex;
    SAESuggestionAdvice suggestionAdvice;
    SAEWarningAdvice warningAdvice;
    SAEAdviceInstructionsRecommendations adviceInstructionsRecommendations;
    SAEAdviceInstructionsMandatory adviceInstructionsMandatory;
    SAELaneRoadway laneRoadway;
    SAEAlternateRoute alternateRoute;
    SAETransitMode transitMode;
    SAEVehicleGroupAffected vehicleGroupAffected;
    SAETravelerGroupAffected travelerGroupAffected;
    SAEResponderGroupAffected responderGroupAffected;
    SAEIncidentResponseEquipment incidentResponseEquipment;
    SAETransitOperations transitOperations;
    SAERegulatoryAndWarningSigns regulatorySigns;
  } u;
} SAEITISEventType;

extern const ASN1CType asn1_type_SAEITISEventType[];

typedef enum {
  SAEITIScodeAndText_1_itis,
  SAEITIScodeAndText_1_text,
} SAEITIScodeAndText_1_choice;

typedef struct SAEITIScodeAndText_1 {
  SAEITIScodeAndText_1_choice choice;
  union {
    SAEITIScode itis;
    SAEITIStxt text;
  } u;
} SAEITIScodeAndText_1;

extern const ASN1CType asn1_type_SAEITIScodeAndText_1[];

typedef struct SAEITIScodeAndText_2 {
  SAEITIScodeAndText_1 item;
} SAEITIScodeAndText_2;


extern const ASN1CType asn1_type_SAEITIScodeAndText_2[];

typedef struct SAEITIScodeAndText {
  SAEITIScodeAndText_2 *tab;
  size_t count;
} SAEITIScodeAndText;

extern const ASN1CType asn1_type_SAEITIScodeAndText[];

typedef enum SAEITISGenericLocations {
  SAEITISGenericLocations_on_bridges,
  SAEITISGenericLocations_in_tunnels,
  SAEITISGenericLocations_entering_or_leaving_tunnels,
  SAEITISGenericLocations_on_ramps,
  SAEITISGenericLocations_in_road_construction_area,
  SAEITISGenericLocations_around_a_curve,
  SAEITISGenericLocations_on_curve,
  SAEITISGenericLocations_on_tracks,
  SAEITISGenericLocations_in_street,
  SAEITISGenericLocations_shoulder,
  SAEITISGenericLocations_on_minor_roads,
  SAEITISGenericLocations_in_the_opposing_lanes,
  SAEITISGenericLocations_adjacent_to_roadway,
  SAEITISGenericLocations_across_tracks,
  SAEITISGenericLocations_on_bend,
  SAEITISGenericLocations_intersection,
  SAEITISGenericLocations_entire_intersection,
  SAEITISGenericLocations_in_the_median,
  SAEITISGenericLocations_moved_to_side_of_road,
  SAEITISGenericLocations_moved_to_shoulder,
  SAEITISGenericLocations_on_the_roadway,
  SAEITISGenericLocations_dip,
  SAEITISGenericLocations_traffic_circle,
  SAEITISGenericLocations_crossover,
  SAEITISGenericLocations_cross_road,
  SAEITISGenericLocations_side_road,
  SAEITISGenericLocations_to,
  SAEITISGenericLocations_by,
  SAEITISGenericLocations_through,
  SAEITISGenericLocations_area_of,
  SAEITISGenericLocations_under,
  SAEITISGenericLocations_over,
  SAEITISGenericLocations_from,
  SAEITISGenericLocations_approaching,
  SAEITISGenericLocations_entering_at,
  SAEITISGenericLocations_exiting_at,
  SAEITISGenericLocations_in_shaded_areas,
  SAEITISGenericLocations_in_low_lying_areas,
  SAEITISGenericLocations_in_the_downtown_area,
  SAEITISGenericLocations_in_the_inner_city_area,
  SAEITISGenericLocations_in_parts,
  SAEITISGenericLocations_in_some_places,
  SAEITISGenericLocations_in_the_ditch,
  SAEITISGenericLocations_in_the_valley,
  SAEITISGenericLocations_on_hill_top,
  SAEITISGenericLocations_near_the_foothills,
  SAEITISGenericLocations_at_high_altitudes,
  SAEITISGenericLocations_near_the_lake,
  SAEITISGenericLocations_near_the_shore,
  SAEITISGenericLocations_nearby_basin,
  SAEITISGenericLocations_over_the_crest_of_a_hill,
  SAEITISGenericLocations_other_than_on_the_roadway,
  SAEITISGenericLocations_near_the_beach,
  SAEITISGenericLocations_near_beach_access_point,
  SAEITISGenericLocations_mountain_pass,
  SAEITISGenericLocations_lower_level,
  SAEITISGenericLocations_upper_level,
  SAEITISGenericLocations_airport,
  SAEITISGenericLocations_concourse,
  SAEITISGenericLocations_gate,
  SAEITISGenericLocations_baggage_claim,
  SAEITISGenericLocations_customs_point,
  SAEITISGenericLocations_reservation_center,
  SAEITISGenericLocations_station,
  SAEITISGenericLocations_platform,
  SAEITISGenericLocations_dock,
  SAEITISGenericLocations_depot,
  SAEITISGenericLocations_ev_charging_point,
  SAEITISGenericLocations_information_welcome_point,
  SAEITISGenericLocations_at_rest_area,
  SAEITISGenericLocations_at_service_area,
  SAEITISGenericLocations_at_weigh_station,
  SAEITISGenericLocations_roadside_park,
  SAEITISGenericLocations_picnic_areas,
  SAEITISGenericLocations_rest_area,
  SAEITISGenericLocations_service_stations,
  SAEITISGenericLocations_toilets,
  SAEITISGenericLocations_bus_stop,
  SAEITISGenericLocations_park_and_ride_lot,
  SAEITISGenericLocations_on_the_right,
  SAEITISGenericLocations_on_the_left,
  SAEITISGenericLocations_in_the_center,
  SAEITISGenericLocations_in_the_opposite_direction,
  SAEITISGenericLocations_cross_traffic,
  SAEITISGenericLocations_northbound_traffic,
  SAEITISGenericLocations_eastbound_traffic,
  SAEITISGenericLocations_southbound_traffic,
  SAEITISGenericLocations_westbound_traffic,
  SAEITISGenericLocations_north,
  SAEITISGenericLocations_south,
  SAEITISGenericLocations_east,
  SAEITISGenericLocations_west,
  SAEITISGenericLocations_northeast,
  SAEITISGenericLocations_northwest,
  SAEITISGenericLocations_southeast,
  SAEITISGenericLocations_southwest,
} SAEITISGenericLocations;

extern const ASN1CType asn1_type_SAEITISGenericLocations[];

typedef enum SAEITISIncidentResponseEquipment {
  SAEITISIncidentResponseEquipment_ground_fire_suppression,
  SAEITISIncidentResponseEquipment_heavy_ground_equipment,
  SAEITISIncidentResponseEquipment_aircraft,
  SAEITISIncidentResponseEquipment_marine_equipment,
  SAEITISIncidentResponseEquipment_support_equipment,
  SAEITISIncidentResponseEquipment_medical_rescue_unit,
  SAEITISIncidentResponseEquipment_other,
  SAEITISIncidentResponseEquipment_ground_fire_suppression_other,
  SAEITISIncidentResponseEquipment_engine,
  SAEITISIncidentResponseEquipment_truck_or_aerial,
  SAEITISIncidentResponseEquipment_quint,
  SAEITISIncidentResponseEquipment_tanker_pumper_combination,
  SAEITISIncidentResponseEquipment_brush_truck,
  SAEITISIncidentResponseEquipment_aircraft_rescue_firefighting,
  SAEITISIncidentResponseEquipment_heavy_ground_equipment_other,
  SAEITISIncidentResponseEquipment_dozer_or_plow,
  SAEITISIncidentResponseEquipment_tractor,
  SAEITISIncidentResponseEquipment_tanker_or_tender,
  SAEITISIncidentResponseEquipment_aircraft_other,
  SAEITISIncidentResponseEquipment_aircraft_fixed_wing_tanker,
  SAEITISIncidentResponseEquipment_helitanker,
  SAEITISIncidentResponseEquipment_helicopter,
  SAEITISIncidentResponseEquipment_marine_equipment_other,
  SAEITISIncidentResponseEquipment_fire_boat_with_pump,
  SAEITISIncidentResponseEquipment_boat_no_pump,
  SAEITISIncidentResponseEquipment_support_apparatus_other,
  SAEITISIncidentResponseEquipment_breathing_apparatus_support,
  SAEITISIncidentResponseEquipment_light_and_air_unit,
  SAEITISIncidentResponseEquipment_medical_rescue_unit_other,
  SAEITISIncidentResponseEquipment_rescue_unit,
  SAEITISIncidentResponseEquipment_urban_search_rescue_unit,
  SAEITISIncidentResponseEquipment_high_angle_rescue,
  SAEITISIncidentResponseEquipment_crash_fire_rescue,
  SAEITISIncidentResponseEquipment_bLS_unit,
  SAEITISIncidentResponseEquipment_aLS_unit,
  SAEITISIncidentResponseEquipment_mobile_command_post,
  SAEITISIncidentResponseEquipment_chief_officer_car,
  SAEITISIncidentResponseEquipment_hAZMAT_unit,
  SAEITISIncidentResponseEquipment_type_i_hand_crew,
  SAEITISIncidentResponseEquipment_type_ii_hand_crew,
  SAEITISIncidentResponseEquipment_privately_owned_vehicle,
  SAEITISIncidentResponseEquipment_other_apparatus_resource,
  SAEITISIncidentResponseEquipment_ambulance,
  SAEITISIncidentResponseEquipment_bomb_squad_van,
  SAEITISIncidentResponseEquipment_combine_harvester,
  SAEITISIncidentResponseEquipment_construction_vehicle,
  SAEITISIncidentResponseEquipment_farm_tractor,
  SAEITISIncidentResponseEquipment_grass_cutting_machines,
  SAEITISIncidentResponseEquipment_hAZMAT_containment_tow,
  SAEITISIncidentResponseEquipment_heavy_tow,
  SAEITISIncidentResponseEquipment_light_tow,
  SAEITISIncidentResponseEquipment_flatbed_tow,
  SAEITISIncidentResponseEquipment_hedge_cutting_machines,
  SAEITISIncidentResponseEquipment_mobile_crane,
  SAEITISIncidentResponseEquipment_refuse_collection_vehicle,
  SAEITISIncidentResponseEquipment_resurfacing_vehicle,
  SAEITISIncidentResponseEquipment_road_sweeper,
  SAEITISIncidentResponseEquipment_roadside_litter_collection_crews,
  SAEITISIncidentResponseEquipment_salvage_vehicle,
  SAEITISIncidentResponseEquipment_sand_truck,
  SAEITISIncidentResponseEquipment_snowplow,
  SAEITISIncidentResponseEquipment_steam_roller,
  SAEITISIncidentResponseEquipment_swat_team_van,
  SAEITISIncidentResponseEquipment_track_laying_vehicle,
  SAEITISIncidentResponseEquipment_unknown_vehicle,
  SAEITISIncidentResponseEquipment_white_lining_vehicle,
  SAEITISIncidentResponseEquipment_dump_truck,
  SAEITISIncidentResponseEquipment_supervisor_vehicle,
  SAEITISIncidentResponseEquipment_snow_blower,
  SAEITISIncidentResponseEquipment_rotary_snow_blower,
  SAEITISIncidentResponseEquipment_road_grader,
  SAEITISIncidentResponseEquipment_steam_truck,
} SAEITISIncidentResponseEquipment;

extern const ASN1CType asn1_type_SAEITISIncidentResponseEquipment[];

typedef ASN1String SAEITIStext;

extern const ASN1CType asn1_type_SAEITIStext[];

typedef enum SAEITISResponderGroupAffected {
  SAEITISResponderGroupAffected_emergency_vehicle_units,
  SAEITISResponderGroupAffected_federal_law_enforcement_units,
  SAEITISResponderGroupAffected_state_police_units,
  SAEITISResponderGroupAffected_county_police_units,
  SAEITISResponderGroupAffected_local_police_units,
  SAEITISResponderGroupAffected_ambulance_units,
  SAEITISResponderGroupAffected_rescue_units,
  SAEITISResponderGroupAffected_fire_units,
  SAEITISResponderGroupAffected_hAZMAT_units,
  SAEITISResponderGroupAffected_light_tow_unit,
  SAEITISResponderGroupAffected_heavy_tow_unit,
  SAEITISResponderGroupAffected_freeway_service_patrols,
  SAEITISResponderGroupAffected_transportation_response_units,
  SAEITISResponderGroupAffected_private_contractor_response_units,
} SAEITISResponderGroupAffected;

extern const ASN1CType asn1_type_SAEITISResponderGroupAffected[];

typedef enum SAEITISVehicleGroupAffected {
  SAEITISVehicleGroupAffected_all_vehicles,
  SAEITISVehicleGroupAffected_bicycles,
  SAEITISVehicleGroupAffected_motorcycles,
  SAEITISVehicleGroupAffected_cars,
  SAEITISVehicleGroupAffected_light_vehicles,
  SAEITISVehicleGroupAffected_cars_and_light_vehicles,
  SAEITISVehicleGroupAffected_cars_with_trailers,
  SAEITISVehicleGroupAffected_cars_with_recreational_trailers,
  SAEITISVehicleGroupAffected_vehicles_with_trailers,
  SAEITISVehicleGroupAffected_heavy_vehicles,
  SAEITISVehicleGroupAffected_trucks,
  SAEITISVehicleGroupAffected_buses,
  SAEITISVehicleGroupAffected_articulated_buses,
  SAEITISVehicleGroupAffected_school_buses,
  SAEITISVehicleGroupAffected_vehicles_with_semi_trailers,
  SAEITISVehicleGroupAffected_vehicles_with_double_trailers,
  SAEITISVehicleGroupAffected_high_profile_vehicles,
  SAEITISVehicleGroupAffected_wide_vehicles,
  SAEITISVehicleGroupAffected_long_vehicles,
  SAEITISVehicleGroupAffected_hazardous_loads,
  SAEITISVehicleGroupAffected_exceptional_loads,
  SAEITISVehicleGroupAffected_abnormal_loads,
  SAEITISVehicleGroupAffected_convoys,
  SAEITISVehicleGroupAffected_maintenance_vehicles,
  SAEITISVehicleGroupAffected_delivery_vehicles,
  SAEITISVehicleGroupAffected_vehicles_with_even_numbered_license_plates,
  SAEITISVehicleGroupAffected_vehicles_with_odd_numbered_license_plates,
  SAEITISVehicleGroupAffected_vehicles_with_parking_permits,
  SAEITISVehicleGroupAffected_vehicles_with_catalytic_converters,
  SAEITISVehicleGroupAffected_vehicles_without_catalytic_converters,
  SAEITISVehicleGroupAffected_gas_powered_vehicles,
  SAEITISVehicleGroupAffected_diesel_powered_vehicles,
  SAEITISVehicleGroupAffected_lPG_vehicles,
  SAEITISVehicleGroupAffected_military_convoys,
  SAEITISVehicleGroupAffected_military_vehicles,
} SAEITISVehicleGroupAffected;

extern const ASN1CType asn1_type_SAEITISVehicleGroupAffected[];

typedef int SAEITIScodes;

extern const ASN1CType asn1_type_SAEITIScodes[];

typedef enum {
  SAEITIScodesAndText_1_itis,
  SAEITIScodesAndText_1_text,
} SAEITIScodesAndText_1_choice;

typedef struct SAEITIScodesAndText_1 {
  SAEITIScodesAndText_1_choice choice;
  union {
    SAEITIScodes itis;
    SAEITIStext text;
  } u;
} SAEITIScodesAndText_1;

extern const ASN1CType asn1_type_SAEITIScodesAndText_1[];

typedef struct SAEITIScodesAndText_2 {
  SAEITIScodesAndText_1 item;
} SAEITIScodesAndText_2;


extern const ASN1CType asn1_type_SAEITIScodesAndText_2[];

typedef struct SAEITIScodesAndText {
  SAEITIScodesAndText_2 *tab;
  size_t count;
} SAEITIScodesAndText;

extern const ASN1CType asn1_type_SAEITIScodesAndText[];

typedef int SAERegionId;

extern const ASN1CType asn1_type_SAERegionId[];

typedef struct SAEREG_EXT_ID_AND_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Type;
} SAEREG_EXT_ID_AND_TYPE;


extern const ASN1CType asn1_type_SAEREG_EXT_ID_AND_TYPE[];

typedef int SAEAcceleration;

extern const ASN1CType asn1_type_SAEAcceleration[];

typedef int SAEVerticalAcceleration;

extern const ASN1CType asn1_type_SAEVerticalAcceleration[];

typedef int SAEYawRate;

extern const ASN1CType asn1_type_SAEYawRate[];

typedef struct SAEAccelerationSet4Way {
  SAEAcceleration Long;
  SAEAcceleration lat;
  SAEVerticalAcceleration vert;
  SAEYawRate yaw;
} SAEAccelerationSet4Way;


extern const ASN1CType asn1_type_SAEAccelerationSet4Way[];

typedef int SAEOffset_B12;

extern const ASN1CType asn1_type_SAEOffset_B12[];

typedef int SAEOffset_B09;

extern const ASN1CType asn1_type_SAEOffset_B09[];

typedef int SAEOffset_B10;

extern const ASN1CType asn1_type_SAEOffset_B10[];

typedef struct SAEAntennaOffsetSet {
  SAEOffset_B12 antOffsetX;
  SAEOffset_B09 antOffsetY;
  SAEOffset_B10 antOffsetZ;
} SAEAntennaOffsetSet;


extern const ASN1CType asn1_type_SAEAntennaOffsetSet[];

typedef ASN1BitString SAEBrakeAppliedStatus;

extern const ASN1CType asn1_type_SAEBrakeAppliedStatus[];

typedef enum SAETractionControlStatus {
  SAETractionControlStatus_unavailable,
  SAETractionControlStatus_off,
  SAETractionControlStatus_on,
  SAETractionControlStatus_engaged,
} SAETractionControlStatus;

extern const ASN1CType asn1_type_SAETractionControlStatus[];

typedef enum SAEAntiLockBrakeStatus {
  SAEAntiLockBrakeStatus_unavailable,
  SAEAntiLockBrakeStatus_off,
  SAEAntiLockBrakeStatus_on,
  SAEAntiLockBrakeStatus_engaged,
} SAEAntiLockBrakeStatus;

extern const ASN1CType asn1_type_SAEAntiLockBrakeStatus[];

typedef enum SAEStabilityControlStatus {
  SAEStabilityControlStatus_unavailable,
  SAEStabilityControlStatus_off,
  SAEStabilityControlStatus_on,
  SAEStabilityControlStatus_engaged,
} SAEStabilityControlStatus;

extern const ASN1CType asn1_type_SAEStabilityControlStatus[];

typedef enum SAEBrakeBoostApplied {
  SAEBrakeBoostApplied_unavailable,
  SAEBrakeBoostApplied_off,
  SAEBrakeBoostApplied_on,
} SAEBrakeBoostApplied;

extern const ASN1CType asn1_type_SAEBrakeBoostApplied[];

typedef enum SAEAuxiliaryBrakeStatus {
  SAEAuxiliaryBrakeStatus_unavailable,
  SAEAuxiliaryBrakeStatus_off,
  SAEAuxiliaryBrakeStatus_on,
  SAEAuxiliaryBrakeStatus_reserved,
} SAEAuxiliaryBrakeStatus;

extern const ASN1CType asn1_type_SAEAuxiliaryBrakeStatus[];

typedef struct SAEBrakeSystemStatus {
  SAEBrakeAppliedStatus wheelBrakes;
  SAETractionControlStatus traction;
  SAEAntiLockBrakeStatus abs;
  SAEStabilityControlStatus scs;
  SAEBrakeBoostApplied brakeBoost;
  SAEAuxiliaryBrakeStatus auxBrakes;
} SAEBrakeSystemStatus;


extern const ASN1CType asn1_type_SAEBrakeSystemStatus[];

typedef int SAEMsgCount;

extern const ASN1CType asn1_type_SAEMsgCount[];

typedef ASN1String SAETemporaryID;

extern const ASN1CType asn1_type_SAETemporaryID[];

typedef int SAEDSecond;

extern const ASN1CType asn1_type_SAEDSecond[];

typedef int SAELatitude;

extern const ASN1CType asn1_type_SAELatitude[];

typedef int SAELongitude;

extern const ASN1CType asn1_type_SAELongitude[];

typedef int SAEElevation;

extern const ASN1CType asn1_type_SAEElevation[];

typedef int SAESemiMajorAxisAccuracy;

extern const ASN1CType asn1_type_SAESemiMajorAxisAccuracy[];

typedef int SAESemiMinorAxisAccuracy;

extern const ASN1CType asn1_type_SAESemiMinorAxisAccuracy[];

typedef int SAESemiMajorAxisOrientation;

extern const ASN1CType asn1_type_SAESemiMajorAxisOrientation[];

typedef struct SAEPositionalAccuracy {
  SAESemiMajorAxisAccuracy semiMajor;
  SAESemiMinorAxisAccuracy semiMinor;
  SAESemiMajorAxisOrientation orientation;
} SAEPositionalAccuracy;


extern const ASN1CType asn1_type_SAEPositionalAccuracy[];

typedef enum SAETransmissionState {
  SAETransmissionState_neutral,
  SAETransmissionState_park,
  SAETransmissionState_forwardGears,
  SAETransmissionState_reverseGears,
  SAETransmissionState_reserved1,
  SAETransmissionState_reserved2,
  SAETransmissionState_reserved3,
  SAETransmissionState_unavailable,
} SAETransmissionState;

extern const ASN1CType asn1_type_SAETransmissionState[];

typedef int SAESpeed;

extern const ASN1CType asn1_type_SAESpeed[];

typedef int SAEHeading;

extern const ASN1CType asn1_type_SAEHeading[];

typedef int SAESteeringWheelAngle;

extern const ASN1CType asn1_type_SAESteeringWheelAngle[];

typedef int SAEVehicleWidth;

extern const ASN1CType asn1_type_SAEVehicleWidth[];

typedef int SAEVehicleLength;

extern const ASN1CType asn1_type_SAEVehicleLength[];

typedef struct SAEVehicleSize {
  SAEVehicleWidth width;
  SAEVehicleLength length;
} SAEVehicleSize;


extern const ASN1CType asn1_type_SAEVehicleSize[];

typedef struct SAEBSMcoreData {
  SAEMsgCount msgCnt;
  SAETemporaryID id;
  SAEDSecond secMark;
  SAELatitude lat;
  SAELongitude Long;
  SAEElevation elev;
  SAEPositionalAccuracy accuracy;
  SAETransmissionState transmission;
  SAESpeed speed;
  SAEHeading heading;
  SAESteeringWheelAngle angle;
  SAEAccelerationSet4Way accelSet;
  SAEBrakeSystemStatus brakes;
  SAEVehicleSize size;
} SAEBSMcoreData;


extern const ASN1CType asn1_type_SAEBSMcoreData[];

typedef int SAEBumperHeight;

extern const ASN1CType asn1_type_SAEBumperHeight[];

typedef struct SAEBumperHeights {
  SAEBumperHeight front;
  SAEBumperHeight rear;
} SAEBumperHeights;


extern const ASN1CType asn1_type_SAEBumperHeights[];

typedef int SAELaneID;

extern const ASN1CType asn1_type_SAELaneID[];

typedef int SAEDrivenLineOffsetSm;

extern const ASN1CType asn1_type_SAEDrivenLineOffsetSm[];

typedef int SAEDrivenLineOffsetLg;

extern const ASN1CType asn1_type_SAEDrivenLineOffsetLg[];

typedef enum {
  SAEComputedLane_1_small,
  SAEComputedLane_1_large,
} SAEComputedLane_1_choice;

typedef struct SAEComputedLane_1 {
  SAEComputedLane_1_choice choice;
  union {
    SAEDrivenLineOffsetSm small;
    SAEDrivenLineOffsetLg large;
  } u;
} SAEComputedLane_1;

extern const ASN1CType asn1_type_SAEComputedLane_1[];

typedef enum {
  SAEComputedLane_2_small,
  SAEComputedLane_2_large,
} SAEComputedLane_2_choice;

typedef struct SAEComputedLane_2 {
  SAEComputedLane_2_choice choice;
  union {
    SAEDrivenLineOffsetSm small;
    SAEDrivenLineOffsetLg large;
  } u;
} SAEComputedLane_2;

extern const ASN1CType asn1_type_SAEComputedLane_2[];

typedef int SAEAngle;

extern const ASN1CType asn1_type_SAEAngle[];

typedef int SAEScale_B12;

extern const ASN1CType asn1_type_SAEScale_B12[];

typedef struct SAERegionalExtension_1 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_1;


extern const ASN1CType asn1_type_SAERegionalExtension_1[];

typedef struct SAEComputedLane_3 {
  SAERegionalExtension_1 *tab;
  size_t count;
} SAEComputedLane_3;

extern const ASN1CType asn1_type_SAEComputedLane_3[];

typedef struct SAEComputedLane {
  SAELaneID referenceLaneId;
  SAEComputedLane_1 offsetXaxis;
  SAEComputedLane_2 offsetYaxis;
  BOOL rotateXY_option;
  SAEAngle rotateXY;
  BOOL scaleXaxis_option;
  SAEScale_B12 scaleXaxis;
  BOOL scaleYaxis_option;
  SAEScale_B12 scaleYaxis;
  BOOL regional_option;
  SAEComputedLane_3 regional;
} SAEComputedLane;


extern const ASN1CType asn1_type_SAEComputedLane[];

typedef int SAEDYear;

extern const ASN1CType asn1_type_SAEDYear[];

typedef int SAEDMonth;

extern const ASN1CType asn1_type_SAEDMonth[];

typedef int SAEDDay;

extern const ASN1CType asn1_type_SAEDDay[];

typedef struct SAEDDate {
  SAEDYear year;
  SAEDMonth month;
  SAEDDay day;
} SAEDDate;


extern const ASN1CType asn1_type_SAEDDate[];

typedef int SAEDHour;

extern const ASN1CType asn1_type_SAEDHour[];

typedef int SAEDMinute;

extern const ASN1CType asn1_type_SAEDMinute[];

typedef int SAEDOffset;

extern const ASN1CType asn1_type_SAEDOffset[];

typedef struct SAEDDateTime {
  BOOL year_option;
  SAEDYear year;
  BOOL month_option;
  SAEDMonth month;
  BOOL day_option;
  SAEDDay day;
  BOOL hour_option;
  SAEDHour hour;
  BOOL minute_option;
  SAEDMinute minute;
  BOOL second_option;
  SAEDSecond second;
  BOOL offset_option;
  SAEDOffset offset;
} SAEDDateTime;


extern const ASN1CType asn1_type_SAEDDateTime[];

typedef struct SAEDFullTime {
  SAEDYear year;
  SAEDMonth month;
  SAEDDay day;
  SAEDHour hour;
  SAEDMinute minute;
} SAEDFullTime;


extern const ASN1CType asn1_type_SAEDFullTime[];

typedef struct SAEDMonthDay {
  SAEDMonth month;
  SAEDDay day;
} SAEDMonthDay;


extern const ASN1CType asn1_type_SAEDMonthDay[];

typedef struct SAEDTime {
  SAEDHour hour;
  SAEDMinute minute;
  SAEDSecond second;
  BOOL offset_option;
  SAEDOffset offset;
} SAEDTime;


extern const ASN1CType asn1_type_SAEDTime[];

typedef struct SAEDYearMonth {
  SAEDYear year;
  SAEDMonth month;
} SAEDYearMonth;


extern const ASN1CType asn1_type_SAEDYearMonth[];

typedef int SAESSPindex;

extern const ASN1CType asn1_type_SAESSPindex[];

typedef enum SAESirenInUse {
  SAESirenInUse_unavailable,
  SAESirenInUse_notInUse,
  SAESirenInUse_inUse,
  SAESirenInUse_reserved,
} SAESirenInUse;

extern const ASN1CType asn1_type_SAESirenInUse[];

typedef enum SAELightbarInUse {
  SAELightbarInUse_unavailable,
  SAELightbarInUse_notInUse,
  SAELightbarInUse_inUse,
  SAELightbarInUse_yellowCautionLights,
  SAELightbarInUse_schooldBusLights,
  SAELightbarInUse_arrowSignsActive,
  SAELightbarInUse_slowMovingVehicle,
  SAELightbarInUse_freqStops,
} SAELightbarInUse;

extern const ASN1CType asn1_type_SAELightbarInUse[];

typedef enum SAEMultiVehicleResponse {
  SAEMultiVehicleResponse_unavailable,
  SAEMultiVehicleResponse_singleVehicle,
  SAEMultiVehicleResponse_multiVehicle,
  SAEMultiVehicleResponse_reserved,
} SAEMultiVehicleResponse;

extern const ASN1CType asn1_type_SAEMultiVehicleResponse[];

typedef ASN1BitString SAEPrivilegedEventFlags;

extern const ASN1CType asn1_type_SAEPrivilegedEventFlags[];

typedef struct SAEPrivilegedEvents {
  SAESSPindex doNotUse;
  SAEPrivilegedEventFlags event;
} SAEPrivilegedEvents;


extern const ASN1CType asn1_type_SAEPrivilegedEvents[];

typedef enum SAEResponseType {
  SAEResponseType_notInUseOrNotEquipped,
  SAEResponseType_emergency,
  SAEResponseType_nonEmergency,
  SAEResponseType_pursuit,
  SAEResponseType_stationary,
  SAEResponseType_slowMoving,
  SAEResponseType_stopAndGoMovement,
} SAEResponseType;

extern const ASN1CType asn1_type_SAEResponseType[];

typedef struct SAEEmergencyDetails {
  SAESSPindex doNotUse;
  SAESirenInUse sirenUse;
  SAELightbarInUse lightsUse;
  SAEMultiVehicleResponse multi;
  BOOL events_option;
  SAEPrivilegedEvents events;
  BOOL responseType_option;
  SAEResponseType responseType;
} SAEEmergencyDetails;


extern const ASN1CType asn1_type_SAEEmergencyDetails[];

typedef int SAEVelocity;

extern const ASN1CType asn1_type_SAEVelocity[];

typedef struct SAETransmissionAndSpeed {
  SAETransmissionState transmisson;
  SAEVelocity speed;
} SAETransmissionAndSpeed;


extern const ASN1CType asn1_type_SAETransmissionAndSpeed[];

typedef enum SAETimeConfidence {
  SAETimeConfidence_unavailable,
  SAETimeConfidence_time_100_000,
  SAETimeConfidence_time_050_000,
  SAETimeConfidence_time_020_000,
  SAETimeConfidence_time_010_000,
  SAETimeConfidence_time_002_000,
  SAETimeConfidence_time_001_000,
  SAETimeConfidence_time_000_500,
  SAETimeConfidence_time_000_200,
  SAETimeConfidence_time_000_100,
  SAETimeConfidence_time_000_050,
  SAETimeConfidence_time_000_020,
  SAETimeConfidence_time_000_010,
  SAETimeConfidence_time_000_005,
  SAETimeConfidence_time_000_002,
  SAETimeConfidence_time_000_001,
  SAETimeConfidence_time_000_000_5,
  SAETimeConfidence_time_000_000_2,
  SAETimeConfidence_time_000_000_1,
  SAETimeConfidence_time_000_000_05,
  SAETimeConfidence_time_000_000_02,
  SAETimeConfidence_time_000_000_01,
  SAETimeConfidence_time_000_000_005,
  SAETimeConfidence_time_000_000_002,
  SAETimeConfidence_time_000_000_001,
  SAETimeConfidence_time_000_000_000_5,
  SAETimeConfidence_time_000_000_000_2,
  SAETimeConfidence_time_000_000_000_1,
  SAETimeConfidence_time_000_000_000_05,
  SAETimeConfidence_time_000_000_000_02,
  SAETimeConfidence_time_000_000_000_01,
  SAETimeConfidence_time_000_000_000_005,
  SAETimeConfidence_time_000_000_000_002,
  SAETimeConfidence_time_000_000_000_001,
  SAETimeConfidence_time_000_000_000_000_5,
  SAETimeConfidence_time_000_000_000_000_2,
  SAETimeConfidence_time_000_000_000_000_1,
  SAETimeConfidence_time_000_000_000_000_05,
  SAETimeConfidence_time_000_000_000_000_02,
  SAETimeConfidence_time_000_000_000_000_01,
} SAETimeConfidence;

extern const ASN1CType asn1_type_SAETimeConfidence[];

typedef enum SAEPositionConfidence {
  SAEPositionConfidence_unavailable,
  SAEPositionConfidence_a500m,
  SAEPositionConfidence_a200m,
  SAEPositionConfidence_a100m,
  SAEPositionConfidence_a50m,
  SAEPositionConfidence_a20m,
  SAEPositionConfidence_a10m,
  SAEPositionConfidence_a5m,
  SAEPositionConfidence_a2m,
  SAEPositionConfidence_a1m,
  SAEPositionConfidence_a50cm,
  SAEPositionConfidence_a20cm,
  SAEPositionConfidence_a10cm,
  SAEPositionConfidence_a5cm,
  SAEPositionConfidence_a2cm,
  SAEPositionConfidence_a1cm,
} SAEPositionConfidence;

extern const ASN1CType asn1_type_SAEPositionConfidence[];

typedef enum SAEElevationConfidence {
  SAEElevationConfidence_unavailable,
  SAEElevationConfidence_elev_500_00,
  SAEElevationConfidence_elev_200_00,
  SAEElevationConfidence_elev_100_00,
  SAEElevationConfidence_elev_050_00,
  SAEElevationConfidence_elev_020_00,
  SAEElevationConfidence_elev_010_00,
  SAEElevationConfidence_elev_005_00,
  SAEElevationConfidence_elev_002_00,
  SAEElevationConfidence_elev_001_00,
  SAEElevationConfidence_elev_000_50,
  SAEElevationConfidence_elev_000_20,
  SAEElevationConfidence_elev_000_10,
  SAEElevationConfidence_elev_000_05,
  SAEElevationConfidence_elev_000_02,
  SAEElevationConfidence_elev_000_01,
} SAEElevationConfidence;

extern const ASN1CType asn1_type_SAEElevationConfidence[];

typedef struct SAEPositionConfidenceSet {
  SAEPositionConfidence pos;
  SAEElevationConfidence elevation;
} SAEPositionConfidenceSet;


extern const ASN1CType asn1_type_SAEPositionConfidenceSet[];

typedef enum SAEHeadingConfidence {
  SAEHeadingConfidence_unavailable,
  SAEHeadingConfidence_prec10deg,
  SAEHeadingConfidence_prec05deg,
  SAEHeadingConfidence_prec01deg,
  SAEHeadingConfidence_prec0_1deg,
  SAEHeadingConfidence_prec0_05deg,
  SAEHeadingConfidence_prec0_01deg,
  SAEHeadingConfidence_prec0_0125deg,
} SAEHeadingConfidence;

extern const ASN1CType asn1_type_SAEHeadingConfidence[];

typedef enum SAESpeedConfidence {
  SAESpeedConfidence_unavailable,
  SAESpeedConfidence_prec100ms,
  SAESpeedConfidence_prec10ms,
  SAESpeedConfidence_prec5ms,
  SAESpeedConfidence_prec1ms,
  SAESpeedConfidence_prec0_1ms,
  SAESpeedConfidence_prec0_05ms,
  SAESpeedConfidence_prec0_01ms,
} SAESpeedConfidence;

extern const ASN1CType asn1_type_SAESpeedConfidence[];

typedef enum SAEThrottleConfidence {
  SAEThrottleConfidence_unavailable,
  SAEThrottleConfidence_prec10percent,
  SAEThrottleConfidence_prec1percent,
  SAEThrottleConfidence_prec0_5percent,
} SAEThrottleConfidence;

extern const ASN1CType asn1_type_SAEThrottleConfidence[];

typedef struct SAESpeedandHeadingandThrottleConfidence {
  SAEHeadingConfidence heading;
  SAESpeedConfidence speed;
  SAEThrottleConfidence throttle;
} SAESpeedandHeadingandThrottleConfidence;


extern const ASN1CType asn1_type_SAESpeedandHeadingandThrottleConfidence[];

typedef struct SAEFullPositionVector {
  BOOL utcTime_option;
  SAEDDateTime utcTime;
  SAELongitude Long;
  SAELatitude lat;
  BOOL elevation_option;
  SAEElevation elevation;
  BOOL heading_option;
  SAEHeading heading;
  BOOL speed_option;
  SAETransmissionAndSpeed speed;
  BOOL posAccuracy_option;
  SAEPositionalAccuracy posAccuracy;
  BOOL timeConfidence_option;
  SAETimeConfidence timeConfidence;
  BOOL posConfidence_option;
  SAEPositionConfidenceSet posConfidence;
  BOOL speedConfidence_option;
  SAESpeedandHeadingandThrottleConfidence speedConfidence;
} SAEFullPositionVector;


extern const ASN1CType asn1_type_SAEFullPositionVector[];

typedef int SAEMinuteOfTheYear;

extern const ASN1CType asn1_type_SAEMinuteOfTheYear[];

typedef struct SAEHeader {
  BOOL year_option;
  SAEDYear year;
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL secMark_option;
  SAEDSecond secMark;
  BOOL msgIssueRevision_option;
  SAEMsgCount msgIssueRevision;
} SAEHeader;


extern const ASN1CType asn1_type_SAEHeader[];

typedef int SAEApproachID;

extern const ASN1CType asn1_type_SAEApproachID[];

typedef int SAELaneConnectionID;

extern const ASN1CType asn1_type_SAELaneConnectionID[];

typedef enum {
  SAEIntersectionAccessPoint_lane,
  SAEIntersectionAccessPoint_approach,
  SAEIntersectionAccessPoint_connection,
} SAEIntersectionAccessPoint_choice;

typedef struct SAEIntersectionAccessPoint {
  SAEIntersectionAccessPoint_choice choice;
  union {
    SAELaneID lane;
    SAEApproachID approach;
    SAELaneConnectionID connection;
  } u;
} SAEIntersectionAccessPoint;

extern const ASN1CType asn1_type_SAEIntersectionAccessPoint[];

typedef int SAERoadRegulatorID;

extern const ASN1CType asn1_type_SAERoadRegulatorID[];

typedef int SAEIntersectionID;

extern const ASN1CType asn1_type_SAEIntersectionID[];

typedef struct SAEIntersectionReferenceID {
  BOOL region_option;
  SAERoadRegulatorID region;
  SAEIntersectionID id;
} SAEIntersectionReferenceID;


extern const ASN1CType asn1_type_SAEIntersectionReferenceID[];

typedef int SAEDeltaAngle;

extern const ASN1CType asn1_type_SAEDeltaAngle[];

typedef int SAERoadwayCrownAngle;

extern const ASN1CType asn1_type_SAERoadwayCrownAngle[];

typedef int SAEMergeDivergeNodeAngle;

extern const ASN1CType asn1_type_SAEMergeDivergeNodeAngle[];

typedef enum SAESpeedLimitType {
  SAESpeedLimitType_unknown,
  SAESpeedLimitType_maxSpeedInSchoolZone,
  SAESpeedLimitType_maxSpeedInSchoolZoneWhenChildrenArePresent,
  SAESpeedLimitType_maxSpeedInConstructionZone,
  SAESpeedLimitType_vehicleMinSpeed,
  SAESpeedLimitType_vehicleMaxSpeed,
  SAESpeedLimitType_vehicleNightMaxSpeed,
  SAESpeedLimitType_truckMinSpeed,
  SAESpeedLimitType_truckMaxSpeed,
  SAESpeedLimitType_truckNightMaxSpeed,
  SAESpeedLimitType_vehiclesWithTrailersMinSpeed,
  SAESpeedLimitType_vehiclesWithTrailersMaxSpeed,
  SAESpeedLimitType_vehiclesWithTrailersNightMaxSpeed,
} SAESpeedLimitType;

extern const ASN1CType asn1_type_SAESpeedLimitType[];

typedef struct SAERegulatorySpeedLimit {
  SAESpeedLimitType type;
  SAEVelocity speed;
} SAERegulatorySpeedLimit;


extern const ASN1CType asn1_type_SAERegulatorySpeedLimit[];

typedef struct SAESpeedLimitList {
  SAERegulatorySpeedLimit *tab;
  size_t count;
} SAESpeedLimitList;

extern const ASN1CType asn1_type_SAESpeedLimitList[];

typedef struct SAERegionalExtension_2 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_2;


extern const ASN1CType asn1_type_SAERegionalExtension_2[];

typedef struct SAELaneDataAttribute_1 {
  SAERegionalExtension_2 *tab;
  size_t count;
} SAELaneDataAttribute_1;

extern const ASN1CType asn1_type_SAELaneDataAttribute_1[];

typedef enum {
  SAELaneDataAttribute_pathEndPointAngle,
  SAELaneDataAttribute_laneCrownPointCenter,
  SAELaneDataAttribute_laneCrownPointLeft,
  SAELaneDataAttribute_laneCrownPointRight,
  SAELaneDataAttribute_laneAngle,
  SAELaneDataAttribute_speedLimits,
  SAELaneDataAttribute_regional,
} SAELaneDataAttribute_choice;

typedef struct SAELaneDataAttribute {
  SAELaneDataAttribute_choice choice;
  union {
    SAEDeltaAngle pathEndPointAngle;
    SAERoadwayCrownAngle laneCrownPointCenter;
    SAERoadwayCrownAngle laneCrownPointLeft;
    SAERoadwayCrownAngle laneCrownPointRight;
    SAEMergeDivergeNodeAngle laneAngle;
    SAESpeedLimitList speedLimits;
    SAELaneDataAttribute_1 regional;
  } u;
} SAELaneDataAttribute;

extern const ASN1CType asn1_type_SAELaneDataAttribute[];

typedef struct SAELaneDataAttributeList {
  SAELaneDataAttribute *tab;
  size_t count;
} SAELaneDataAttributeList;

extern const ASN1CType asn1_type_SAELaneDataAttributeList[];

typedef struct SAENode_LLmD_64b {
  SAELongitude lon;
  SAELatitude lat;
} SAENode_LLmD_64b;


extern const ASN1CType asn1_type_SAENode_LLmD_64b[];

typedef struct SAENode_XY_20b {
  SAEOffset_B10 x;
  SAEOffset_B10 y;
} SAENode_XY_20b;


extern const ASN1CType asn1_type_SAENode_XY_20b[];

typedef int SAEOffset_B11;

extern const ASN1CType asn1_type_SAEOffset_B11[];

typedef struct SAENode_XY_22b {
  SAEOffset_B11 x;
  SAEOffset_B11 y;
} SAENode_XY_22b;


extern const ASN1CType asn1_type_SAENode_XY_22b[];

typedef struct SAENode_XY_24b {
  SAEOffset_B12 x;
  SAEOffset_B12 y;
} SAENode_XY_24b;


extern const ASN1CType asn1_type_SAENode_XY_24b[];

typedef int SAEOffset_B13;

extern const ASN1CType asn1_type_SAEOffset_B13[];

typedef struct SAENode_XY_26b {
  SAEOffset_B13 x;
  SAEOffset_B13 y;
} SAENode_XY_26b;


extern const ASN1CType asn1_type_SAENode_XY_26b[];

typedef int SAEOffset_B14;

extern const ASN1CType asn1_type_SAEOffset_B14[];

typedef struct SAENode_XY_28b {
  SAEOffset_B14 x;
  SAEOffset_B14 y;
} SAENode_XY_28b;


extern const ASN1CType asn1_type_SAENode_XY_28b[];

typedef int SAEOffset_B16;

extern const ASN1CType asn1_type_SAEOffset_B16[];

typedef struct SAENode_XY_32b {
  SAEOffset_B16 x;
  SAEOffset_B16 y;
} SAENode_XY_32b;


extern const ASN1CType asn1_type_SAENode_XY_32b[];

typedef enum SAENodeAttributeXY {
  SAENodeAttributeXY_reserved,
  SAENodeAttributeXY_stopLine,
  SAENodeAttributeXY_roundedCapStyleA,
  SAENodeAttributeXY_roundedCapStyleB,
  SAENodeAttributeXY_mergePoint,
  SAENodeAttributeXY_divergePoint,
  SAENodeAttributeXY_downstreamStopLine,
  SAENodeAttributeXY_downstreamStartNode,
  SAENodeAttributeXY_closedToTraffic,
  SAENodeAttributeXY_safeIsland,
  SAENodeAttributeXY_curbPresentAtStepOff,
  SAENodeAttributeXY_hydrantPresent,
} SAENodeAttributeXY;

extern const ASN1CType asn1_type_SAENodeAttributeXY[];

typedef struct SAENodeAttributeXYList {
  SAENodeAttributeXY *tab;
  size_t count;
} SAENodeAttributeXYList;

extern const ASN1CType asn1_type_SAENodeAttributeXYList[];

typedef enum SAESegmentAttributeXY {
  SAESegmentAttributeXY_reserved,
  SAESegmentAttributeXY_doNotBlock,
  SAESegmentAttributeXY_whiteLine,
  SAESegmentAttributeXY_mergingLaneLeft,
  SAESegmentAttributeXY_mergingLaneRight,
  SAESegmentAttributeXY_curbOnLeft,
  SAESegmentAttributeXY_curbOnRight,
  SAESegmentAttributeXY_loadingzoneOnLeft,
  SAESegmentAttributeXY_loadingzoneOnRight,
  SAESegmentAttributeXY_turnOutPointOnLeft,
  SAESegmentAttributeXY_turnOutPointOnRight,
  SAESegmentAttributeXY_adjacentParkingOnLeft,
  SAESegmentAttributeXY_adjacentParkingOnRight,
  SAESegmentAttributeXY_adjacentBikeLaneOnLeft,
  SAESegmentAttributeXY_adjacentBikeLaneOnRight,
  SAESegmentAttributeXY_sharedBikeLane,
  SAESegmentAttributeXY_bikeBoxInFront,
  SAESegmentAttributeXY_transitStopOnLeft,
  SAESegmentAttributeXY_transitStopOnRight,
  SAESegmentAttributeXY_transitStopInLane,
  SAESegmentAttributeXY_sharedWithTrackedVehicle,
  SAESegmentAttributeXY_safeIsland,
  SAESegmentAttributeXY_lowCurbsPresent,
  SAESegmentAttributeXY_rumbleStripPresent,
  SAESegmentAttributeXY_audibleSignalingPresent,
  SAESegmentAttributeXY_adaptiveTimingPresent,
  SAESegmentAttributeXY_rfSignalRequestPresent,
  SAESegmentAttributeXY_partialCurbIntrusion,
  SAESegmentAttributeXY_taperToLeft,
  SAESegmentAttributeXY_taperToRight,
  SAESegmentAttributeXY_taperToCenterLine,
  SAESegmentAttributeXY_parallelParking,
  SAESegmentAttributeXY_headInParking,
  SAESegmentAttributeXY_freeParking,
  SAESegmentAttributeXY_timeRestrictionsOnParking,
  SAESegmentAttributeXY_costToPark,
  SAESegmentAttributeXY_midBlockCurbPresent,
  SAESegmentAttributeXY_unEvenPavementPresent,
} SAESegmentAttributeXY;

extern const ASN1CType asn1_type_SAESegmentAttributeXY[];

typedef struct SAESegmentAttributeXYList {
  SAESegmentAttributeXY *tab;
  size_t count;
} SAESegmentAttributeXYList;

extern const ASN1CType asn1_type_SAESegmentAttributeXYList[];

typedef struct SAERegionalExtension_3 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_3;


extern const ASN1CType asn1_type_SAERegionalExtension_3[];

typedef struct SAENodeAttributeSetXY_1 {
  SAERegionalExtension_3 *tab;
  size_t count;
} SAENodeAttributeSetXY_1;

extern const ASN1CType asn1_type_SAENodeAttributeSetXY_1[];

typedef struct SAENodeAttributeSetXY {
  BOOL localNode_option;
  SAENodeAttributeXYList localNode;
  BOOL disabled_option;
  SAESegmentAttributeXYList disabled;
  BOOL enabled_option;
  SAESegmentAttributeXYList enabled;
  BOOL data_option;
  SAELaneDataAttributeList data;
  BOOL dWidth_option;
  SAEOffset_B10 dWidth;
  BOOL dElevation_option;
  SAEOffset_B10 dElevation;
  BOOL regional_option;
  SAENodeAttributeSetXY_1 regional;
} SAENodeAttributeSetXY;


extern const ASN1CType asn1_type_SAENodeAttributeSetXY[];

typedef struct SAERegionalExtension_4 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_4;


extern const ASN1CType asn1_type_SAERegionalExtension_4[];

typedef enum {
  SAENodeOffsetPointXY_node_XY1,
  SAENodeOffsetPointXY_node_XY2,
  SAENodeOffsetPointXY_node_XY3,
  SAENodeOffsetPointXY_node_XY4,
  SAENodeOffsetPointXY_node_XY5,
  SAENodeOffsetPointXY_node_XY6,
  SAENodeOffsetPointXY_node_LatLon,
  SAENodeOffsetPointXY_regional,
} SAENodeOffsetPointXY_choice;

typedef struct SAENodeOffsetPointXY {
  SAENodeOffsetPointXY_choice choice;
  union {
    SAENode_XY_20b node_XY1;
    SAENode_XY_22b node_XY2;
    SAENode_XY_24b node_XY3;
    SAENode_XY_26b node_XY4;
    SAENode_XY_28b node_XY5;
    SAENode_XY_32b node_XY6;
    SAENode_LLmD_64b node_LatLon;
    SAERegionalExtension_4 regional;
  } u;
} SAENodeOffsetPointXY;

extern const ASN1CType asn1_type_SAENodeOffsetPointXY[];

typedef struct SAENodeXY {
  SAENodeOffsetPointXY delta;
  BOOL attributes_option;
  SAENodeAttributeSetXY attributes;
} SAENodeXY;


extern const ASN1CType asn1_type_SAENodeXY[];

typedef struct SAENodeSetXY {
  SAENodeXY *tab;
  size_t count;
} SAENodeSetXY;

extern const ASN1CType asn1_type_SAENodeSetXY[];

typedef enum {
  SAENodeListXY_nodes,
  SAENodeListXY_computed,
} SAENodeListXY_choice;

typedef struct SAENodeListXY {
  SAENodeListXY_choice choice;
  union {
    SAENodeSetXY nodes;
    SAEComputedLane computed;
  } u;
} SAENodeListXY;

extern const ASN1CType asn1_type_SAENodeListXY[];

typedef ASN1BitString SAEGNSSstatus;

extern const ASN1CType asn1_type_SAEGNSSstatus[];

typedef int SAEOffsetLL_B18;

extern const ASN1CType asn1_type_SAEOffsetLL_B18[];

typedef int SAEVertOffset_B12;

extern const ASN1CType asn1_type_SAEVertOffset_B12[];

typedef int SAETimeOffset;

extern const ASN1CType asn1_type_SAETimeOffset[];

typedef int SAECoarseHeading;

extern const ASN1CType asn1_type_SAECoarseHeading[];

typedef struct SAEPathHistoryPoint {
  SAEOffsetLL_B18 latOffset;
  SAEOffsetLL_B18 lonOffset;
  SAEVertOffset_B12 elevationOffset;
  SAETimeOffset timeOffset;
  BOOL speed_option;
  SAESpeed speed;
  BOOL posAccuracy_option;
  SAEPositionalAccuracy posAccuracy;
  BOOL heading_option;
  SAECoarseHeading heading;
} SAEPathHistoryPoint;


extern const ASN1CType asn1_type_SAEPathHistoryPoint[];

typedef struct SAEPathHistoryPointList {
  SAEPathHistoryPoint *tab;
  size_t count;
} SAEPathHistoryPointList;

extern const ASN1CType asn1_type_SAEPathHistoryPointList[];

typedef struct SAEPathHistory {
  BOOL initialPosition_option;
  SAEFullPositionVector initialPosition;
  BOOL currGNSSstatus_option;
  SAEGNSSstatus currGNSSstatus;
  SAEPathHistoryPointList crumbData;
} SAEPathHistory;


extern const ASN1CType asn1_type_SAEPathHistory[];

typedef int SAERadiusOfCurvature;

extern const ASN1CType asn1_type_SAERadiusOfCurvature[];

typedef int SAEConfidence;

extern const ASN1CType asn1_type_SAEConfidence[];

typedef struct SAEPathPrediction {
  SAERadiusOfCurvature radiusOfCurve;
  SAEConfidence confidence;
} SAEPathPrediction;


extern const ASN1CType asn1_type_SAEPathPrediction[];

typedef struct SAERegionalExtension_5 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_5;


extern const ASN1CType asn1_type_SAERegionalExtension_5[];

typedef struct SAEPosition3D_1 {
  SAERegionalExtension_5 *tab;
  size_t count;
} SAEPosition3D_1;

extern const ASN1CType asn1_type_SAEPosition3D_1[];

typedef struct SAEPosition3D {
  SAELatitude lat;
  SAELongitude Long;
  BOOL elevation_option;
  SAEElevation elevation;
  BOOL regional_option;
  SAEPosition3D_1 regional;
} SAEPosition3D;


extern const ASN1CType asn1_type_SAEPosition3D[];

typedef enum SAEBasicVehicleRole {
  SAEBasicVehicleRole_basicVehicle,
  SAEBasicVehicleRole_publicTransport,
  SAEBasicVehicleRole_specialTransport,
  SAEBasicVehicleRole_dangerousGoods,
  SAEBasicVehicleRole_roadWork,
  SAEBasicVehicleRole_roadRescue,
  SAEBasicVehicleRole_emergency,
  SAEBasicVehicleRole_safetyCar,
  SAEBasicVehicleRole_none_unknown,
  SAEBasicVehicleRole_truck,
  SAEBasicVehicleRole_motorcycle,
  SAEBasicVehicleRole_roadSideSource,
  SAEBasicVehicleRole_police,
  SAEBasicVehicleRole_fire,
  SAEBasicVehicleRole_ambulance,
  SAEBasicVehicleRole_dot,
  SAEBasicVehicleRole_transit,
  SAEBasicVehicleRole_slowMoving,
  SAEBasicVehicleRole_stopNgo,
  SAEBasicVehicleRole_cyclist,
  SAEBasicVehicleRole_pedestrian,
  SAEBasicVehicleRole_nonMotorized,
  SAEBasicVehicleRole_military,
} SAEBasicVehicleRole;

extern const ASN1CType asn1_type_SAEBasicVehicleRole[];

typedef enum SAERequestSubRole {
  SAERequestSubRole_requestSubRoleUnKnown,
  SAERequestSubRole_requestSubRole1,
  SAERequestSubRole_requestSubRole2,
  SAERequestSubRole_requestSubRole3,
  SAERequestSubRole_requestSubRole4,
  SAERequestSubRole_requestSubRole5,
  SAERequestSubRole_requestSubRole6,
  SAERequestSubRole_requestSubRole7,
  SAERequestSubRole_requestSubRole8,
  SAERequestSubRole_requestSubRole9,
  SAERequestSubRole_requestSubRole10,
  SAERequestSubRole_requestSubRole11,
  SAERequestSubRole_requestSubRole12,
  SAERequestSubRole_requestSubRole13,
  SAERequestSubRole_requestSubRole14,
  SAERequestSubRole_requestSubRoleReserved,
} SAERequestSubRole;

extern const ASN1CType asn1_type_SAERequestSubRole[];

typedef enum SAERequestImportanceLevel {
  SAERequestImportanceLevel_requestImportanceLevelUnKnown,
  SAERequestImportanceLevel_requestImportanceLevel1,
  SAERequestImportanceLevel_requestImportanceLevel2,
  SAERequestImportanceLevel_requestImportanceLevel3,
  SAERequestImportanceLevel_requestImportanceLevel4,
  SAERequestImportanceLevel_requestImportanceLevel5,
  SAERequestImportanceLevel_requestImportanceLevel6,
  SAERequestImportanceLevel_requestImportanceLevel7,
  SAERequestImportanceLevel_requestImportanceLevel8,
  SAERequestImportanceLevel_requestImportanceLevel9,
  SAERequestImportanceLevel_requestImportanceLevel10,
  SAERequestImportanceLevel_requestImportanceLevel11,
  SAERequestImportanceLevel_requestImportanceLevel12,
  SAERequestImportanceLevel_requestImportanceLevel13,
  SAERequestImportanceLevel_requestImportanceLevel14,
  SAERequestImportanceLevel_requestImportanceReserved,
} SAERequestImportanceLevel;

extern const ASN1CType asn1_type_SAERequestImportanceLevel[];

typedef int SAEIso3833VehicleType;

extern const ASN1CType asn1_type_SAEIso3833VehicleType[];

typedef enum SAEVehicleType {
  SAEVehicleType_none,
  SAEVehicleType_unknown,
  SAEVehicleType_special,
  SAEVehicleType_moto,
  SAEVehicleType_car,
  SAEVehicleType_carOther,
  SAEVehicleType_bus,
  SAEVehicleType_axleCnt2,
  SAEVehicleType_axleCnt3,
  SAEVehicleType_axleCnt4,
  SAEVehicleType_axleCnt4Trailer,
  SAEVehicleType_axleCnt5Trailer,
  SAEVehicleType_axleCnt6Trailer,
  SAEVehicleType_axleCnt5MultiTrailer,
  SAEVehicleType_axleCnt6MultiTrailer,
  SAEVehicleType_axleCnt7MultiTrailer,
} SAEVehicleType;

extern const ASN1CType asn1_type_SAEVehicleType[];

typedef struct SAERegionalExtension_6 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_6;


extern const ASN1CType asn1_type_SAERegionalExtension_6[];

typedef struct SAERequestorType {
  SAEBasicVehicleRole role;
  BOOL subrole_option;
  SAERequestSubRole subrole;
  BOOL request_option;
  SAERequestImportanceLevel request;
  BOOL iso3883_option;
  SAEIso3833VehicleType iso3883;
  BOOL hpmsType_option;
  SAEVehicleType hpmsType;
  BOOL regional_option;
  SAERegionalExtension_6 regional;
} SAERequestorType;


extern const ASN1CType asn1_type_SAERequestorType[];

typedef int SAERoadSegmentID;

extern const ASN1CType asn1_type_SAERoadSegmentID[];

typedef struct SAERoadSegmentReferenceID {
  BOOL region_option;
  SAERoadRegulatorID region;
  SAERoadSegmentID id;
} SAERoadSegmentReferenceID;


extern const ASN1CType asn1_type_SAERoadSegmentReferenceID[];

typedef struct SAERTCMheader {
  SAEGNSSstatus status;
  SAEAntennaOffsetSet offsetSet;
} SAERTCMheader;


extern const ASN1CType asn1_type_SAERTCMheader[];

typedef ASN1String SAERTCMmessage;

extern const ASN1CType asn1_type_SAERTCMmessage[];

typedef struct SAERTCMmessageList {
  SAERTCMmessage *tab;
  size_t count;
} SAERTCMmessageList;

extern const ASN1CType asn1_type_SAERTCMmessageList[];

typedef struct SAESchoolBusJ2945Slash1C {
  BOOL flashingAmberLights;
  BOOL flashingRedLights;
  BOOL studentsCrossingFront_option;
  BOOL studentsCrossingFront;
  BOOL studentsCrossingBehind_option;
  BOOL studentsCrossingBehind;
  BOOL studentsLoading_option;
  BOOL studentsLoading;
  BOOL studentsUnloading_option;
  BOOL studentsUnloading;
  BOOL wheelchairLiftInUse_option;
  BOOL wheelchairLiftInUse;
  BOOL emergencyExitOpen_option;
  BOOL emergencyExitOpen;
  BOOL emergencyRequestMedical_option;
  BOOL emergencyRequestMedical;
  BOOL emergencyRequestFire_option;
  BOOL emergencyRequestFire;
  BOOL emergencyRequestPolice_option;
  BOOL emergencyRequestPolice;
} SAESchoolBusJ2945Slash1C;


extern const ASN1CType asn1_type_SAESchoolBusJ2945Slash1C[];

typedef int SAEVehicleHeight;

extern const ASN1CType asn1_type_SAEVehicleHeight[];

typedef int SAETrailerWeight;

extern const ASN1CType asn1_type_SAETrailerWeight[];

typedef BOOL SAEPivotingAllowed;

extern const ASN1CType asn1_type_SAEPivotingAllowed[];

typedef struct SAEPivotPointDescription {
  SAEOffset_B11 pivotOffset;
  SAEAngle pivotAngle;
  SAEPivotingAllowed pivots;
} SAEPivotPointDescription;


extern const ASN1CType asn1_type_SAEPivotPointDescription[];

typedef struct SAEAxles {
  int totalAxles;
  BOOL frontAxles_option;
  int frontAxles;
  BOOL rearAxles_option;
  int rearAxles;
} SAEAxles;


extern const ASN1CType asn1_type_SAEAxles[];

typedef struct SAETrailerUnitDescJ2945Slash1B {
  SAEVehicleWidth width;
  SAEVehicleLength length;
  BOOL height_option;
  SAEVehicleHeight height;
  BOOL weight_option;
  SAETrailerWeight weight;
  SAEPivotPointDescription frontPivot;
  BOOL rearPivot_option;
  SAEPivotPointDescription rearPivot;
  BOOL bumpers_option;
  SAEBumperHeights bumpers;
  BOOL axles_option;
  SAEAxles axles;
} SAETrailerUnitDescJ2945Slash1B;


extern const ASN1CType asn1_type_SAETrailerUnitDescJ2945Slash1B[];

typedef struct SAETrailersJ2945Slash1B {
  SAETrailerUnitDescJ2945Slash1B *tab;
  size_t count;
} SAETrailersJ2945Slash1B;

extern const ASN1CType asn1_type_SAETrailersJ2945Slash1B[];

typedef int SAEBasicVehicleClass;

extern const ASN1CType asn1_type_SAEBasicVehicleClass[];

typedef int SAEFuelType;

extern const ASN1CType asn1_type_SAEFuelType[];

typedef struct SAERegionalExtension_7 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_7;


extern const ASN1CType asn1_type_SAERegionalExtension_7[];

typedef struct SAEVehicleClassification_1 {
  SAERegionalExtension_7 *tab;
  size_t count;
} SAEVehicleClassification_1;

extern const ASN1CType asn1_type_SAEVehicleClassification_1[];

typedef struct SAEVehicleClassification {
  BOOL keyType_option;
  SAEBasicVehicleClass keyType;
  BOOL role_option;
  SAEBasicVehicleRole role;
  BOOL iso3883_option;
  SAEIso3833VehicleType iso3883;
  BOOL hpmsType_option;
  SAEVehicleType hpmsType;
  BOOL vehicleType_option;
  SAEITISVehicleGroupAffected vehicleType;
  BOOL responseEquip_option;
  SAEITISIncidentResponseEquipment responseEquip;
  BOOL responderType_option;
  SAEITISResponderGroupAffected responderType;
  BOOL fuelType_option;
  SAEFuelType fuelType;
  BOOL regional_option;
  SAEVehicleClassification_1 regional;
} SAEVehicleClassification;


extern const ASN1CType asn1_type_SAEVehicleClassification[];

typedef unsigned int SAEStationID;

extern const ASN1CType asn1_type_SAEStationID[];

typedef enum {
  SAEVehicleID_entityID,
  SAEVehicleID_stationID,
} SAEVehicleID_choice;

typedef struct SAEVehicleID {
  SAEVehicleID_choice choice;
  union {
    SAETemporaryID entityID;
    SAEStationID stationID;
  } u;
} SAEVehicleID;

extern const ASN1CType asn1_type_SAEVehicleID[];

typedef ASN1BitString SAEVehicleEventFlags;

extern const ASN1CType asn1_type_SAEVehicleEventFlags[];

typedef ASN1BitString SAEExteriorLights;

extern const ASN1CType asn1_type_SAEExteriorLights[];

typedef struct SAEVehicleSafetyExtensions {
  BOOL events_option;
  SAEVehicleEventFlags events;
  BOOL pathHistory_option;
  SAEPathHistory pathHistory;
  BOOL pathPrediction_option;
  SAEPathPrediction pathPrediction;
  BOOL lights_option;
  SAEExteriorLights lights;
  BOOL timestamp_option;
  SAEDDateTime timestamp;
  BOOL height_option;
  SAEVehicleHeight height;
} SAEVehicleSafetyExtensions;


extern const ASN1CType asn1_type_SAEVehicleSafetyExtensions[];

typedef int SAEVertOffset_B07;

extern const ASN1CType asn1_type_SAEVertOffset_B07[];

typedef int SAEVertOffset_B08;

extern const ASN1CType asn1_type_SAEVertOffset_B08[];

typedef int SAEVertOffset_B09;

extern const ASN1CType asn1_type_SAEVertOffset_B09[];

typedef int SAEVertOffset_B10;

extern const ASN1CType asn1_type_SAEVertOffset_B10[];

typedef int SAEVertOffset_B11;

extern const ASN1CType asn1_type_SAEVertOffset_B11[];

typedef struct SAERegionalExtension_8 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_8;


extern const ASN1CType asn1_type_SAERegionalExtension_8[];

typedef enum {
  SAEVerticalOffset_offset1,
  SAEVerticalOffset_offset2,
  SAEVerticalOffset_offset3,
  SAEVerticalOffset_offset4,
  SAEVerticalOffset_offset5,
  SAEVerticalOffset_offset6,
  SAEVerticalOffset_elevation,
  SAEVerticalOffset_regional,
} SAEVerticalOffset_choice;

typedef struct SAEVerticalOffset {
  SAEVerticalOffset_choice choice;
  union {
    SAEVertOffset_B07 offset1;
    SAEVertOffset_B08 offset2;
    SAEVertOffset_B09 offset3;
    SAEVertOffset_B10 offset4;
    SAEVertOffset_B11 offset5;
    SAEVertOffset_B12 offset6;
    SAEElevation elevation;
    SAERegionalExtension_8 regional;
  } u;
} SAEVerticalOffset;

extern const ASN1CType asn1_type_SAEVerticalOffset[];

typedef enum SAEWiperStatus {
  SAEWiperStatus_unavailable,
  SAEWiperStatus_off,
  SAEWiperStatus_intermittent,
  SAEWiperStatus_low,
  SAEWiperStatus_high,
  SAEWiperStatus_washerInUse,
  SAEWiperStatus_automaticPresent,
} SAEWiperStatus;

extern const ASN1CType asn1_type_SAEWiperStatus[];

typedef int SAEWiperRate;

extern const ASN1CType asn1_type_SAEWiperRate[];

typedef struct SAEWiperSet {
  SAEWiperStatus statusFront;
  SAEWiperRate rateFront;
  BOOL statusRear_option;
  SAEWiperStatus statusRear;
  BOOL rateRear_option;
  SAEWiperRate rateRear;
} SAEWiperSet;


extern const ASN1CType asn1_type_SAEWiperSet[];

typedef int SAEAmbientAirPressure;

extern const ASN1CType asn1_type_SAEAmbientAirPressure[];

typedef int SAEAmbientAirTemperature;

extern const ASN1CType asn1_type_SAEAmbientAirTemperature[];

typedef ASN1String SAECodeWord;

extern const ASN1CType asn1_type_SAECodeWord[];

typedef int SAECoefficientOfFriction;

extern const ASN1CType asn1_type_SAECoefficientOfFriction[];

typedef int SAECount;

extern const ASN1CType asn1_type_SAECount[];

typedef ASN1String SAEDescriptiveName;

extern const ASN1CType asn1_type_SAEDescriptiveName[];

typedef int SAEDuration;

extern const ASN1CType asn1_type_SAEDuration[];

typedef enum SAEExtent {
  SAEExtent_useInstantlyOnly,
  SAEExtent_useFor3meters,
  SAEExtent_useFor10meters,
  SAEExtent_useFor50meters,
  SAEExtent_useFor100meters,
  SAEExtent_useFor500meters,
  SAEExtent_useFor1000meters,
  SAEExtent_useFor5000meters,
  SAEExtent_useFor10000meters,
  SAEExtent_useFor50000meters,
  SAEExtent_useFor100000meters,
  SAEExtent_useFor500000meters,
  SAEExtent_useFor1000000meters,
  SAEExtent_useFor5000000meters,
  SAEExtent_useFor10000000meters,
  SAEExtent_forever,
} SAEExtent;

extern const ASN1CType asn1_type_SAEExtent[];

typedef enum SAEPortlandCementType {
  SAEPortlandCementType_newSharp,
  SAEPortlandCementType_traveled,
  SAEPortlandCementType_trafficPolished,
} SAEPortlandCementType;

extern const ASN1CType asn1_type_SAEPortlandCementType[];

typedef struct SAEPortlandCement {
  SAEPortlandCementType type;
} SAEPortlandCement;


extern const ASN1CType asn1_type_SAEPortlandCement[];

typedef enum SAEAsphaltOrTarType {
  SAEAsphaltOrTarType_newSharp,
  SAEAsphaltOrTarType_traveled,
  SAEAsphaltOrTarType_trafficPolished,
  SAEAsphaltOrTarType_excessTar,
} SAEAsphaltOrTarType;

extern const ASN1CType asn1_type_SAEAsphaltOrTarType[];

typedef struct SAEAsphaltOrTar {
  SAEAsphaltOrTarType type;
} SAEAsphaltOrTar;


extern const ASN1CType asn1_type_SAEAsphaltOrTar[];

typedef enum SAEGravelType {
  SAEGravelType_packedOiled,
  SAEGravelType_loose,
} SAEGravelType;

extern const ASN1CType asn1_type_SAEGravelType[];

typedef struct SAEGravel {
  SAEGravelType type;
} SAEGravel;


extern const ASN1CType asn1_type_SAEGravel[];

typedef enum SAEGrassType {
  SAEGrassType_lessThan30Mph,
} SAEGrassType;

extern const ASN1CType asn1_type_SAEGrassType[];

typedef struct SAEGrass {
  SAEGrassType type;
} SAEGrass;


extern const ASN1CType asn1_type_SAEGrass[];

typedef enum SAECindersType {
  SAECindersType_packed,
} SAECindersType;

extern const ASN1CType asn1_type_SAECindersType[];

typedef struct SAECinders {
  SAECindersType type;
} SAECinders;


extern const ASN1CType asn1_type_SAECinders[];

typedef enum SAERockType {
  SAERockType_crushed,
} SAERockType;

extern const ASN1CType asn1_type_SAERockType[];

typedef struct SAERock {
  SAERockType type;
} SAERock;


extern const ASN1CType asn1_type_SAERock[];

typedef enum SAEIceType {
  SAEIceType_smooth,
} SAEIceType;

extern const ASN1CType asn1_type_SAEIceType[];

typedef struct SAEIce {
  SAEIceType type;
} SAEIce;


extern const ASN1CType asn1_type_SAEIce[];

typedef enum SAESnowType {
  SAESnowType_packed,
  SAESnowType_loose,
} SAESnowType;

extern const ASN1CType asn1_type_SAESnowType[];

typedef struct SAESnow {
  SAESnowType type;
} SAESnow;


extern const ASN1CType asn1_type_SAESnow[];

typedef enum {
  SAEDescriptionOfRoadSurface_portlandCement,
  SAEDescriptionOfRoadSurface_asphaltOrTar,
  SAEDescriptionOfRoadSurface_gravel,
  SAEDescriptionOfRoadSurface_grass,
  SAEDescriptionOfRoadSurface_cinders,
  SAEDescriptionOfRoadSurface_rock,
  SAEDescriptionOfRoadSurface_ice,
  SAEDescriptionOfRoadSurface_snow,
} SAEDescriptionOfRoadSurface_choice;

typedef struct SAEDescriptionOfRoadSurface {
  SAEDescriptionOfRoadSurface_choice choice;
  union {
    SAEPortlandCement portlandCement;
    SAEAsphaltOrTar asphaltOrTar;
    SAEGravel gravel;
    SAEGrass grass;
    SAECinders cinders;
    SAERock rock;
    SAEIce ice;
    SAESnow snow;
  } u;
} SAEDescriptionOfRoadSurface;

extern const ASN1CType asn1_type_SAEDescriptionOfRoadSurface[];

typedef enum SAERoadSurfaceCondition {
  SAERoadSurfaceCondition_dry,
  SAERoadSurfaceCondition_wet,
} SAERoadSurfaceCondition;

extern const ASN1CType asn1_type_SAERoadSurfaceCondition[];

typedef int SAEMeanVariation;

extern const ASN1CType asn1_type_SAEMeanVariation[];

typedef int SAEVariationStdDev;

extern const ASN1CType asn1_type_SAEVariationStdDev[];

typedef struct SAERoadRoughness {
  SAEMeanVariation meanVerticalVariation;
  BOOL verticalVariationStdDev_option;
  SAEVariationStdDev verticalVariationStdDev;
  BOOL meanHorizontalVariation_option;
  SAEMeanVariation meanHorizontalVariation;
  BOOL horizontalVariationStdDev_option;
  SAEVariationStdDev horizontalVariationStdDev;
} SAERoadRoughness;


extern const ASN1CType asn1_type_SAERoadRoughness[];

typedef struct SAEFrictionInformation {
  SAEDescriptionOfRoadSurface roadSurfaceDescription;
  BOOL dryOrWet_option;
  SAERoadSurfaceCondition dryOrWet;
  BOOL roadRoughness_option;
  SAERoadRoughness roadRoughness;
} SAEFrictionInformation;


extern const ASN1CType asn1_type_SAEFrictionInformation[];

typedef ASN1String SAEFurtherInfoID;

extern const ASN1CType asn1_type_SAEFurtherInfoID[];

typedef int SAEGrossSpeed;

extern const ASN1CType asn1_type_SAEGrossSpeed[];

typedef ASN1BitString SAEHeadingSlice;

extern const ASN1CType asn1_type_SAEHeadingSlice[];

typedef int SAELaneWidth;

extern const ASN1CType asn1_type_SAELaneWidth[];

typedef enum SAELocation_quality {
  SAELocation_quality_loc_qual_bt1m,
  SAELocation_quality_loc_qual_bt5m,
  SAELocation_quality_loc_qual_bt12m,
  SAELocation_quality_loc_qual_bt50m,
  SAELocation_quality_loc_qual_bt125m,
  SAELocation_quality_loc_qual_bt500m,
  SAELocation_quality_loc_qual_bt1250m,
  SAELocation_quality_loc_qual_unknown,
} SAELocation_quality;

extern const ASN1CType asn1_type_SAELocation_quality[];

typedef enum SAELocation_tech {
  SAELocation_tech_loc_tech_unknown,
  SAELocation_tech_loc_tech_GNSS,
  SAELocation_tech_loc_tech_DGPS,
  SAELocation_tech_loc_tech_RTK,
  SAELocation_tech_loc_tech_PPP,
  SAELocation_tech_loc_tech_drGPS,
  SAELocation_tech_loc_tech_drDGPS,
  SAELocation_tech_loc_tech_dr,
  SAELocation_tech_loc_tech_nav,
  SAELocation_tech_loc_tech_fault,
} SAELocation_tech;

extern const ASN1CType asn1_type_SAELocation_tech[];

typedef ASN1String SAEMessageBLOB;

extern const ASN1CType asn1_type_SAEMessageBLOB[];

typedef int SAEObstacleDistance;

extern const ASN1CType asn1_type_SAEObstacleDistance[];

typedef ASN1String SAEPayloadData;

extern const ASN1CType asn1_type_SAEPayloadData[];

typedef enum SAEPrioritizationResponseStatus {
  SAEPrioritizationResponseStatus_unknown,
  SAEPrioritizationResponseStatus_requested,
  SAEPrioritizationResponseStatus_processing,
  SAEPrioritizationResponseStatus_watchOtherTraffic,
  SAEPrioritizationResponseStatus_granted,
  SAEPrioritizationResponseStatus_rejected,
  SAEPrioritizationResponseStatus_maxPresence,
  SAEPrioritizationResponseStatus_reserviceLocked,
} SAEPrioritizationResponseStatus;

extern const ASN1CType asn1_type_SAEPrioritizationResponseStatus[];

typedef ASN1String SAEPriority;

extern const ASN1CType asn1_type_SAEPriority[];

typedef int SAERequestID;

extern const ASN1CType asn1_type_SAERequestID[];

typedef int SAERestrictionClassID;

extern const ASN1CType asn1_type_SAERestrictionClassID[];

typedef ASN1ObjectIdentifier SAEFullRoadAuthorityID;

extern const ASN1CType asn1_type_SAEFullRoadAuthorityID[];

typedef ASN1RelativeOID SAERelativeRoadAuthorityID;

extern const ASN1CType asn1_type_SAERelativeRoadAuthorityID[];

typedef enum {
  SAERoadAuthorityID_fullRdAuthID,
  SAERoadAuthorityID_relRdAuthID,
} SAERoadAuthorityID_choice;

typedef struct SAERoadAuthorityID {
  SAERoadAuthorityID_choice choice;
  union {
    SAEFullRoadAuthorityID fullRdAuthID;
    SAERelativeRoadAuthorityID relRdAuthID;
  } u;
} SAERoadAuthorityID;

extern const ASN1CType asn1_type_SAERoadAuthorityID[];

typedef int SAESignalGroupID;

extern const ASN1CType asn1_type_SAESignalGroupID[];

typedef ASN1String SAESignalReqScheme;

extern const ASN1CType asn1_type_SAESignalReqScheme[];

typedef ASN1BitString SAETransitStatus;

extern const ASN1CType asn1_type_SAETransitStatus[];

typedef ASN1String SAEURL_Link;

extern const ASN1CType asn1_type_SAEURL_Link[];

typedef int SAEVehicleMass;

extern const ASN1CType asn1_type_SAEVehicleMass[];

typedef ASN1BitString SAEVerticalAccelerationThreshold;

extern const ASN1CType asn1_type_SAEVerticalAccelerationThreshold[];

typedef int SAEPartII_Id;

extern const ASN1CType asn1_type_SAEPartII_Id[];

typedef struct SAEPartIIcontent_1 {
  SAEPartII_Id partII_Id;
  ASN1OpenType partII_Value;
} SAEPartIIcontent_1;


extern const ASN1CType asn1_type_SAEPartIIcontent_1[];

typedef struct SAEBasicSafetyMessage_1 {
  SAEPartIIcontent_1 *tab;
  size_t count;
} SAEBasicSafetyMessage_1;

extern const ASN1CType asn1_type_SAEBasicSafetyMessage_1[];

typedef struct SAERegionalExtension_9 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_9;


extern const ASN1CType asn1_type_SAERegionalExtension_9[];

typedef struct SAEBasicSafetyMessage_2 {
  SAERegionalExtension_9 *tab;
  size_t count;
} SAEBasicSafetyMessage_2;

extern const ASN1CType asn1_type_SAEBasicSafetyMessage_2[];

typedef struct SAEBasicSafetyMessage {
  SAEBSMcoreData coreData;
  BOOL partII_option;
  SAEBasicSafetyMessage_1 partII;
  BOOL regional_option;
  SAEBasicSafetyMessage_2 regional;
} SAEBasicSafetyMessage;


extern const ASN1CType asn1_type_SAEBasicSafetyMessage[];

typedef struct SAEPARTII_EXT_ID_AND_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Type;
} SAEPARTII_EXT_ID_AND_TYPE;


extern const ASN1CType asn1_type_SAEPARTII_EXT_ID_AND_TYPE[];

typedef struct SAEEventDescription_1 {
  SAEITIScodes *tab;
  size_t count;
} SAEEventDescription_1;

extern const ASN1CType asn1_type_SAEEventDescription_1[];

typedef struct SAERegionalExtension_10 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_10;


extern const ASN1CType asn1_type_SAERegionalExtension_10[];

typedef struct SAEEventDescription_2 {
  SAERegionalExtension_10 *tab;
  size_t count;
} SAEEventDescription_2;

extern const ASN1CType asn1_type_SAEEventDescription_2[];

typedef struct SAEEventDescription {
  SAEITIScodes typeEvent;
  BOOL description_option;
  SAEEventDescription_1 description;
  BOOL priority_option;
  SAEPriority priority;
  BOOL heading_option;
  SAEHeadingSlice heading;
  BOOL extent_option;
  SAEExtent extent;
  BOOL regional_option;
  SAEEventDescription_2 regional;
} SAEEventDescription;


extern const ASN1CType asn1_type_SAEEventDescription[];

typedef BOOL SAEIsDolly;

extern const ASN1CType asn1_type_SAEIsDolly[];

typedef int SAETrailerMass;

extern const ASN1CType asn1_type_SAETrailerMass[];

typedef struct SAETrailerHistoryPoint {
  SAEAngle pivotAngle;
  SAETimeOffset timeOffset;
  SAENode_XY_24b positionOffset;
  BOOL elevationOffset_option;
  SAEVertOffset_B07 elevationOffset;
  BOOL heading_option;
  SAECoarseHeading heading;
} SAETrailerHistoryPoint;


extern const ASN1CType asn1_type_SAETrailerHistoryPoint[];

typedef struct SAETrailerHistoryPointList {
  SAETrailerHistoryPoint *tab;
  size_t count;
} SAETrailerHistoryPointList;

extern const ASN1CType asn1_type_SAETrailerHistoryPointList[];

typedef struct SAETrailerUnitDescription {
  SAEIsDolly isDolly;
  SAEVehicleWidth width;
  SAEVehicleLength length;
  BOOL height_option;
  SAEVehicleHeight height;
  BOOL mass_option;
  SAETrailerMass mass;
  BOOL bumperHeights_option;
  SAEBumperHeights bumperHeights;
  BOOL centerOfGravity_option;
  SAEVehicleHeight centerOfGravity;
  SAEPivotPointDescription frontPivot;
  BOOL rearPivot_option;
  SAEPivotPointDescription rearPivot;
  BOOL rearWheelOffset_option;
  SAEOffset_B12 rearWheelOffset;
  SAENode_XY_24b positionOffset;
  BOOL elevationOffset_option;
  SAEVertOffset_B07 elevationOffset;
  BOOL crumbData_option;
  SAETrailerHistoryPointList crumbData;
} SAETrailerUnitDescription;


extern const ASN1CType asn1_type_SAETrailerUnitDescription[];

typedef struct SAETrailerUnitDescriptionList {
  SAETrailerUnitDescription *tab;
  size_t count;
} SAETrailerUnitDescriptionList;

extern const ASN1CType asn1_type_SAETrailerUnitDescriptionList[];

typedef struct SAETrailerData {
  SAESSPindex doNotUse;
  SAEPivotPointDescription connection;
  SAETrailerUnitDescriptionList units;
} SAETrailerData;


extern const ASN1CType asn1_type_SAETrailerData[];

typedef struct SAESpecialVehicleExtensions {
  BOOL vehicleAlerts_option;
  SAEEmergencyDetails vehicleAlerts;
  BOOL description_option;
  SAEEventDescription description;
  BOOL doNotUse_option;
  SAETrailerData doNotUse;
} SAESpecialVehicleExtensions;


extern const ASN1CType asn1_type_SAESpecialVehicleExtensions[];

typedef struct SAEVehicleData {
  BOOL height_option;
  SAEVehicleHeight height;
  BOOL bumpers_option;
  SAEBumperHeights bumpers;
  BOOL mass_option;
  SAEVehicleMass mass;
  BOOL doNotUse_option;
  SAETrailerWeight doNotUse;
  BOOL trailerPresent_option;
  BOOL trailerPresent;
  BOOL pivotPoint_option;
  SAEPivotPointDescription pivotPoint;
  BOOL axles_option;
  SAEAxles axles;
  BOOL leanAngle_option;
  int leanAngle;
} SAEVehicleData;


extern const ASN1CType asn1_type_SAEVehicleData[];

typedef enum SAEEssPrecipYesNo {
  SAEEssPrecipYesNo_precip,
  SAEEssPrecipYesNo_noPrecip,
  SAEEssPrecipYesNo_error,
} SAEEssPrecipYesNo;

extern const ASN1CType asn1_type_SAEEssPrecipYesNo[];

typedef int SAEEssPrecipRate;

extern const ASN1CType asn1_type_SAEEssPrecipRate[];

typedef enum SAEEssPrecipSituation {
  SAEEssPrecipSituation_other,
  SAEEssPrecipSituation_unknown,
  SAEEssPrecipSituation_noPrecipitation,
  SAEEssPrecipSituation_unidentifiedSlight,
  SAEEssPrecipSituation_unidentifiedModerate,
  SAEEssPrecipSituation_unidentifiedHeavy,
  SAEEssPrecipSituation_snowSlight,
  SAEEssPrecipSituation_snowModerate,
  SAEEssPrecipSituation_snowHeavy,
  SAEEssPrecipSituation_rainSlight,
  SAEEssPrecipSituation_rainModerate,
  SAEEssPrecipSituation_rainHeavy,
  SAEEssPrecipSituation_frozenPrecipitationSlight,
  SAEEssPrecipSituation_frozenPrecipitationModerate,
  SAEEssPrecipSituation_frozenPrecipitationHeavy,
} SAEEssPrecipSituation;

extern const ASN1CType asn1_type_SAEEssPrecipSituation[];

typedef int SAEEssSolarRadiation;

extern const ASN1CType asn1_type_SAEEssSolarRadiation[];

typedef int SAEEssMobileFriction;

extern const ASN1CType asn1_type_SAEEssMobileFriction[];

typedef struct SAEWeatherReport {
  SAEEssPrecipYesNo isRaining;
  BOOL rainRate_option;
  SAEEssPrecipRate rainRate;
  BOOL precipSituation_option;
  SAEEssPrecipSituation precipSituation;
  BOOL solarRadiation_option;
  SAEEssSolarRadiation solarRadiation;
  BOOL friction_option;
  SAEEssMobileFriction friction;
  BOOL roadFriction_option;
  SAECoefficientOfFriction roadFriction;
} SAEWeatherReport;


extern const ASN1CType asn1_type_SAEWeatherReport[];

typedef struct SAEWeatherProbe {
  BOOL airTemp_option;
  SAEAmbientAirTemperature airTemp;
  BOOL airPressure_option;
  SAEAmbientAirPressure airPressure;
  BOOL rainRates_option;
  SAEWiperSet rainRates;
} SAEWeatherProbe;


extern const ASN1CType asn1_type_SAEWeatherProbe[];

typedef SAEAngle SAEObstacleDirection;

extern const ASN1CType asn1_type_SAEObstacleDirection[];

typedef int SAEITIScodes_2;

extern const ASN1CType asn1_type_SAEITIScodes_2[];

typedef struct SAEObstacleDetection {
  SAEObstacleDistance obDist;
  SAEObstacleDirection obDirect;
  BOOL description_option;
  SAEITIScodes_2 description;
  BOOL locationDetails_option;
  SAEITISGenericLocations locationDetails;
  SAEDDateTime dateTime;
  BOOL vertEvent_option;
  SAEVerticalAccelerationThreshold vertEvent;
} SAEObstacleDetection;


extern const ASN1CType asn1_type_SAEObstacleDetection[];

typedef int SAEITIScodes_1;

extern const ASN1CType asn1_type_SAEITIScodes_1[];

typedef struct SAEDisabledVehicle {
  SAEITIScodes_1 statusDetails;
  BOOL locationDetails_option;
  SAEITISGenericLocations locationDetails;
} SAEDisabledVehicle;


extern const ASN1CType asn1_type_SAEDisabledVehicle[];

typedef SAEGrossSpeed SAESpeedProfileMeasurement;

#define asn1_type_SAESpeedProfileMeasurement asn1_type_SAEGrossSpeed

typedef struct SAESpeedProfileMeasurementList {
  SAESpeedProfileMeasurement *tab;
  size_t count;
} SAESpeedProfileMeasurementList;

extern const ASN1CType asn1_type_SAESpeedProfileMeasurementList[];

typedef struct SAESpeedProfile {
  SAESpeedProfileMeasurementList speedReports;
} SAESpeedProfile;


extern const ASN1CType asn1_type_SAESpeedProfile[];

typedef struct SAERTCMPackage {
  BOOL rtcmHeader_option;
  SAERTCMheader rtcmHeader;
  SAERTCMmessageList msgs;
} SAERTCMPackage;


extern const ASN1CType asn1_type_SAERTCMPackage[];

typedef struct SAERegionalExtension_11 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_11;


extern const ASN1CType asn1_type_SAERegionalExtension_11[];

typedef struct SAESupplementalVehicleExtensions_1 {
  SAERegionalExtension_11 *tab;
  size_t count;
} SAESupplementalVehicleExtensions_1;

extern const ASN1CType asn1_type_SAESupplementalVehicleExtensions_1[];

typedef enum SAERptVehicleClass {
  SAERptVehicleClass_motorcycles,
  SAERptVehicleClass_passengerCars,
  SAERptVehicleClass_other2axle4tireSingleUnitVehs,
  SAERptVehicleClass_buses,
  SAERptVehicleClass_twoAxle6TireSingleUnitTrucks,
  SAERptVehicleClass_threeAxleSingleUnitTrucks,
  SAERptVehicleClass_fourOrMoreAxleSingleUnitTrucks,
  SAERptVehicleClass_fourOrFewerAxleSingleTrailerTrucks,
  SAERptVehicleClass_fiveAxleSingleTrailerTrucks,
  SAERptVehicleClass_sixOrMoreAxleSingleTrailerTrucks,
  SAERptVehicleClass_fiveOrFewerAxleMultiTrailerTrucks,
  SAERptVehicleClass_sixAxleMultiTrailerTrucks,
  SAERptVehicleClass_sevenOrMoreAxleMultiTrailerTrucks,
} SAERptVehicleClass;

extern const ASN1CType asn1_type_SAERptVehicleClass[];

typedef struct SAESupplementalVehicleExtensions {
  BOOL classification_option;
  SAEBasicVehicleClass classification;
  BOOL classDetails_option;
  SAEVehicleClassification classDetails;
  BOOL vehicleData_option;
  SAEVehicleData vehicleData;
  BOOL doNotUse1_option;
  SAEWeatherReport doNotUse1;
  BOOL doNotUse2_option;
  SAEWeatherProbe doNotUse2;
  BOOL doNotUse3_option;
  SAEObstacleDetection doNotUse3;
  BOOL status_option;
  SAEDisabledVehicle status;
  BOOL doNotUse4_option;
  SAESpeedProfile doNotUse4;
  BOOL doNotUse5_option;
  SAERTCMPackage doNotUse5;
  BOOL regional_option;
  SAESupplementalVehicleExtensions_1 regional;
  BOOL fhwaVehicleClass_option;
  SAERptVehicleClass fhwaVehicleClass;
  BOOL trailers_option;
  SAETrailersJ2945Slash1B trailers;
  BOOL schoolBus_option;
  SAESchoolBusJ2945Slash1C schoolBus;
} SAESupplementalVehicleExtensions;


extern const ASN1CType asn1_type_SAESupplementalVehicleExtensions[];

typedef enum SAERequestedItem {
  SAERequestedItem_reserved,
  SAERequestedItem_itemA,
  SAERequestedItem_itemB,
  SAERequestedItem_itemC,
  SAERequestedItem_itemD,
  SAERequestedItem_itemE,
  SAERequestedItem_itemF,
  SAERequestedItem_itemG,
  SAERequestedItem_itemI,
  SAERequestedItem_itemJ,
  SAERequestedItem_itemK,
  SAERequestedItem_itemL,
  SAERequestedItem_itemM,
  SAERequestedItem_itemN,
  SAERequestedItem_itemO,
  SAERequestedItem_itemP,
  SAERequestedItem_itemQ,
} SAERequestedItem;

extern const ASN1CType asn1_type_SAERequestedItem[];

typedef struct SAERequestedItemList {
  SAERequestedItem *tab;
  size_t count;
} SAERequestedItemList;

extern const ASN1CType asn1_type_SAERequestedItemList[];

typedef struct SAERegionalExtension_12 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_12;


extern const ASN1CType asn1_type_SAERegionalExtension_12[];

typedef struct SAECommonSafetyRequest_1 {
  SAERegionalExtension_12 *tab;
  size_t count;
} SAECommonSafetyRequest_1;

extern const ASN1CType asn1_type_SAECommonSafetyRequest_1[];

typedef struct SAECommonSafetyRequest {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL msgCnt_option;
  SAEMsgCount msgCnt;
  BOOL id_option;
  SAETemporaryID id;
  SAERequestedItemList requests;
  BOOL regional_option;
  SAECommonSafetyRequest_1 regional;
} SAECommonSafetyRequest;


extern const ASN1CType asn1_type_SAECommonSafetyRequest[];

typedef struct SAERoadSideAlert_1 {
  SAEITIScodes *tab;
  size_t count;
} SAERoadSideAlert_1;

extern const ASN1CType asn1_type_SAERoadSideAlert_1[];

typedef struct SAERegionalExtension_26 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_26;


extern const ASN1CType asn1_type_SAERegionalExtension_26[];

typedef struct SAERoadSideAlert_2 {
  SAERegionalExtension_26 *tab;
  size_t count;
} SAERoadSideAlert_2;

extern const ASN1CType asn1_type_SAERoadSideAlert_2[];

typedef struct SAERoadSideAlert {
  SAEMsgCount msgCnt;
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  SAEITIScodes typeEvent;
  BOOL description_option;
  SAERoadSideAlert_1 description;
  BOOL priority_option;
  SAEPriority priority;
  BOOL heading_option;
  SAEHeadingSlice heading;
  BOOL extent_option;
  SAEExtent extent;
  BOOL position_option;
  SAEFullPositionVector position;
  BOOL furtherInfoID_option;
  SAEFurtherInfoID furtherInfoID;
  BOOL regional_option;
  SAERoadSideAlert_2 regional;
} SAERoadSideAlert;


extern const ASN1CType asn1_type_SAERoadSideAlert[];

typedef struct SAERegionalExtension_13 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_13;


extern const ASN1CType asn1_type_SAERegionalExtension_13[];

typedef struct SAEEmergencyVehicleAlert_1 {
  SAERegionalExtension_13 *tab;
  size_t count;
} SAEEmergencyVehicleAlert_1;

extern const ASN1CType asn1_type_SAEEmergencyVehicleAlert_1[];

typedef struct SAEEmergencyVehicleAlert {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL id_option;
  SAETemporaryID id;
  SAERoadSideAlert rsaMsg;
  BOOL responseType_option;
  SAEResponseType responseType;
  BOOL details_option;
  SAEEmergencyDetails details;
  BOOL mass_option;
  SAEVehicleMass mass;
  BOOL basicType_option;
  SAEVehicleType basicType;
  BOOL vehicleType_option;
  SAEITISVehicleGroupAffected vehicleType;
  BOOL responseEquip_option;
  SAEITISIncidentResponseEquipment responseEquip;
  BOOL responderType_option;
  SAEITISResponderGroupAffected responderType;
  BOOL regional_option;
  SAEEmergencyVehicleAlert_1 regional;
} SAEEmergencyVehicleAlert;


extern const ASN1CType asn1_type_SAEEmergencyVehicleAlert[];

typedef enum {
  SAEApproachOrLane_approach,
  SAEApproachOrLane_lane,
} SAEApproachOrLane_choice;

typedef struct SAEApproachOrLane {
  SAEApproachOrLane_choice choice;
  union {
    SAEApproachID approach;
    SAELaneID lane;
  } u;
} SAEApproachOrLane;

extern const ASN1CType asn1_type_SAEApproachOrLane[];

typedef struct SAERegionalExtension_14 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_14;


extern const ASN1CType asn1_type_SAERegionalExtension_14[];

typedef struct SAEIntersectionCollision_1 {
  SAERegionalExtension_14 *tab;
  size_t count;
} SAEIntersectionCollision_1;

extern const ASN1CType asn1_type_SAEIntersectionCollision_1[];

typedef struct SAEIntersectionCollision {
  SAEMsgCount msgCnt;
  SAETemporaryID id;
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL partOne_option;
  SAEBSMcoreData partOne;
  BOOL path_option;
  SAEPathHistory path;
  BOOL pathPrediction_option;
  SAEPathPrediction pathPrediction;
  SAEIntersectionReferenceID intersectionID;
  SAEApproachOrLane laneNumber;
  SAEVehicleEventFlags eventFlag;
  BOOL regional_option;
  SAEIntersectionCollision_1 regional;
} SAEIntersectionCollision;


extern const ASN1CType asn1_type_SAEIntersectionCollision[];

typedef enum SAELayerType {
  SAELayerType_none,
  SAELayerType_mixedContent,
  SAELayerType_generalMapData,
  SAELayerType_intersectionData,
  SAELayerType_curveData,
  SAELayerType_roadwaySectionData,
  SAELayerType_parkingAreaData,
  SAELayerType_sharedLaneData,
} SAELayerType;

extern const ASN1CType asn1_type_SAELayerType[];

typedef int SAELayerID;

extern const ASN1CType asn1_type_SAELayerID[];

typedef ASN1BitString SAELaneDirection;

extern const ASN1CType asn1_type_SAELaneDirection[];

typedef ASN1BitString SAELaneSharing;

extern const ASN1CType asn1_type_SAELaneSharing[];

typedef ASN1BitString SAELaneAttributes_Vehicle;

extern const ASN1CType asn1_type_SAELaneAttributes_Vehicle[];

typedef ASN1BitString SAELaneAttributes_Crosswalk;

extern const ASN1CType asn1_type_SAELaneAttributes_Crosswalk[];

typedef ASN1BitString SAELaneAttributes_Bike;

extern const ASN1CType asn1_type_SAELaneAttributes_Bike[];

typedef ASN1BitString SAELaneAttributes_Sidewalk;

extern const ASN1CType asn1_type_SAELaneAttributes_Sidewalk[];

typedef ASN1BitString SAELaneAttributes_Barrier;

extern const ASN1CType asn1_type_SAELaneAttributes_Barrier[];

typedef ASN1BitString SAELaneAttributes_Striping;

extern const ASN1CType asn1_type_SAELaneAttributes_Striping[];

typedef ASN1BitString SAELaneAttributes_TrackedVehicle;

extern const ASN1CType asn1_type_SAELaneAttributes_TrackedVehicle[];

typedef ASN1BitString SAELaneAttributes_Parking;

extern const ASN1CType asn1_type_SAELaneAttributes_Parking[];

typedef enum {
  SAELaneTypeAttributes_vehicle,
  SAELaneTypeAttributes_crosswalk,
  SAELaneTypeAttributes_bikeLane,
  SAELaneTypeAttributes_sidewalk,
  SAELaneTypeAttributes_median,
  SAELaneTypeAttributes_striping,
  SAELaneTypeAttributes_trackedVehicle,
  SAELaneTypeAttributes_parking,
} SAELaneTypeAttributes_choice;

typedef struct SAELaneTypeAttributes {
  SAELaneTypeAttributes_choice choice;
  union {
    SAELaneAttributes_Vehicle vehicle;
    SAELaneAttributes_Crosswalk crosswalk;
    SAELaneAttributes_Bike bikeLane;
    SAELaneAttributes_Sidewalk sidewalk;
    SAELaneAttributes_Barrier median;
    SAELaneAttributes_Striping striping;
    SAELaneAttributes_TrackedVehicle trackedVehicle;
    SAELaneAttributes_Parking parking;
  } u;
} SAELaneTypeAttributes;

extern const ASN1CType asn1_type_SAELaneTypeAttributes[];

typedef struct SAERegionalExtension_18 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_18;


extern const ASN1CType asn1_type_SAERegionalExtension_18[];

typedef struct SAELaneAttributes {
  SAELaneDirection directionalUse;
  SAELaneSharing sharedWith;
  SAELaneTypeAttributes laneType;
  BOOL regional_option;
  SAERegionalExtension_18 regional;
} SAELaneAttributes;


extern const ASN1CType asn1_type_SAELaneAttributes[];

typedef ASN1BitString SAEAllowedManeuvers;

extern const ASN1CType asn1_type_SAEAllowedManeuvers[];

typedef struct SAEConnectingLane {
  SAELaneID lane;
  BOOL maneuver_option;
  SAEAllowedManeuvers maneuver;
} SAEConnectingLane;


extern const ASN1CType asn1_type_SAEConnectingLane[];

typedef struct SAEConnection {
  SAEConnectingLane connectingLane;
  BOOL remoteIntersection_option;
  SAEIntersectionReferenceID remoteIntersection;
  BOOL signalGroup_option;
  SAESignalGroupID signalGroup;
  BOOL userClass_option;
  SAERestrictionClassID userClass;
  BOOL connectionID_option;
  SAELaneConnectionID connectionID;
} SAEConnection;


extern const ASN1CType asn1_type_SAEConnection[];

typedef struct SAEConnectsToList {
  SAEConnection *tab;
  size_t count;
} SAEConnectsToList;

extern const ASN1CType asn1_type_SAEConnectsToList[];

typedef struct SAEOverlayLaneList {
  SAELaneID *tab;
  size_t count;
} SAEOverlayLaneList;

extern const ASN1CType asn1_type_SAEOverlayLaneList[];

typedef struct SAERegionalExtension_16 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_16;


extern const ASN1CType asn1_type_SAERegionalExtension_16[];

typedef struct SAEGenericLane_1 {
  SAERegionalExtension_16 *tab;
  size_t count;
} SAEGenericLane_1;

extern const ASN1CType asn1_type_SAEGenericLane_1[];

typedef struct SAEGenericLane {
  SAELaneID laneID;
  BOOL name_option;
  SAEDescriptiveName name;
  BOOL ingressApproach_option;
  SAEApproachID ingressApproach;
  BOOL egressApproach_option;
  SAEApproachID egressApproach;
  SAELaneAttributes laneAttributes;
  BOOL maneuvers_option;
  SAEAllowedManeuvers maneuvers;
  SAENodeListXY nodeList;
  BOOL connectsTo_option;
  SAEConnectsToList connectsTo;
  BOOL overlays_option;
  SAEOverlayLaneList overlays;
  BOOL regional_option;
  SAEGenericLane_1 regional;
} SAEGenericLane;


extern const ASN1CType asn1_type_SAEGenericLane[];

typedef struct SAELaneList {
  SAEGenericLane *tab;
  size_t count;
} SAELaneList;

extern const ASN1CType asn1_type_SAELaneList[];

typedef struct SAERegionalExtension_19 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_19;


extern const ASN1CType asn1_type_SAERegionalExtension_19[];

typedef struct SAESignalControlZone {
  SAERegionalExtension_19 zone;
} SAESignalControlZone;


extern const ASN1CType asn1_type_SAESignalControlZone[];

typedef struct SAEPreemptPriorityList {
  SAESignalControlZone *tab;
  size_t count;
} SAEPreemptPriorityList;

extern const ASN1CType asn1_type_SAEPreemptPriorityList[];

typedef struct SAERegionalExtension_17 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_17;


extern const ASN1CType asn1_type_SAERegionalExtension_17[];

typedef struct SAEIntersectionGeometry_1 {
  SAERegionalExtension_17 *tab;
  size_t count;
} SAEIntersectionGeometry_1;

extern const ASN1CType asn1_type_SAEIntersectionGeometry_1[];

typedef struct SAEIntersectionGeometry {
  BOOL name_option;
  SAEDescriptiveName name;
  SAEIntersectionReferenceID id;
  SAEMsgCount revision;
  SAEPosition3D refPoint;
  BOOL laneWidth_option;
  SAELaneWidth laneWidth;
  BOOL speedLimits_option;
  SAESpeedLimitList speedLimits;
  SAELaneList laneSet;
  BOOL preemptPriorityData_option;
  SAEPreemptPriorityList preemptPriorityData;
  BOOL regional_option;
  SAEIntersectionGeometry_1 regional;
  BOOL roadAuthorityID_option;
  SAERoadAuthorityID roadAuthorityID;
} SAEIntersectionGeometry;


extern const ASN1CType asn1_type_SAEIntersectionGeometry[];

typedef struct SAEIntersectionGeometryList {
  SAEIntersectionGeometry *tab;
  size_t count;
} SAEIntersectionGeometryList;

extern const ASN1CType asn1_type_SAEIntersectionGeometryList[];

typedef struct SAERoadLaneSetList {
  SAEGenericLane *tab;
  size_t count;
} SAERoadLaneSetList;

extern const ASN1CType asn1_type_SAERoadLaneSetList[];

typedef struct SAERegionalExtension_21 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_21;


extern const ASN1CType asn1_type_SAERegionalExtension_21[];

typedef struct SAERoadSegment_1 {
  SAERegionalExtension_21 *tab;
  size_t count;
} SAERoadSegment_1;

extern const ASN1CType asn1_type_SAERoadSegment_1[];

typedef struct SAERoadSegment {
  BOOL name_option;
  SAEDescriptiveName name;
  SAERoadSegmentReferenceID id;
  SAEMsgCount revision;
  SAEPosition3D refPoint;
  BOOL laneWidth_option;
  SAELaneWidth laneWidth;
  BOOL speedLimits_option;
  SAESpeedLimitList speedLimits;
  SAERoadLaneSetList roadLaneSet;
  BOOL regional_option;
  SAERoadSegment_1 regional;
} SAERoadSegment;


extern const ASN1CType asn1_type_SAERoadSegment[];

typedef struct SAERoadSegmentList {
  SAERoadSegment *tab;
  size_t count;
} SAERoadSegmentList;

extern const ASN1CType asn1_type_SAERoadSegmentList[];

typedef struct SAEDataParameters {
  BOOL processMethod_option;
  ASN1String processMethod;
  BOOL processAgency_option;
  ASN1String processAgency;
  BOOL lastCheckedDate_option;
  ASN1String lastCheckedDate;
  BOOL geoidUsed_option;
  ASN1String geoidUsed;
} SAEDataParameters;


extern const ASN1CType asn1_type_SAEDataParameters[];

typedef enum SAERestrictionAppliesTo {
  SAERestrictionAppliesTo_none,
  SAERestrictionAppliesTo_equippedTransit,
  SAERestrictionAppliesTo_equippedTaxis,
  SAERestrictionAppliesTo_equippedOther,
  SAERestrictionAppliesTo_emissionCompliant,
  SAERestrictionAppliesTo_equippedBicycle,
  SAERestrictionAppliesTo_weightCompliant,
  SAERestrictionAppliesTo_heightCompliant,
  SAERestrictionAppliesTo_pedestrians,
  SAERestrictionAppliesTo_slowMovingPersons,
  SAERestrictionAppliesTo_wheelchairUsers,
  SAERestrictionAppliesTo_visualDisabilities,
  SAERestrictionAppliesTo_audioDisabilities,
  SAERestrictionAppliesTo_otherUnknownDisabilities,
} SAERestrictionAppliesTo;

extern const ASN1CType asn1_type_SAERestrictionAppliesTo[];

typedef struct SAERegionalExtension_20 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_20;


extern const ASN1CType asn1_type_SAERegionalExtension_20[];

typedef struct SAERestrictionUserType_1 {
  SAERegionalExtension_20 *tab;
  size_t count;
} SAERestrictionUserType_1;

extern const ASN1CType asn1_type_SAERestrictionUserType_1[];

typedef enum {
  SAERestrictionUserType_basicType,
  SAERestrictionUserType_regional,
} SAERestrictionUserType_choice;

typedef struct SAERestrictionUserType {
  SAERestrictionUserType_choice choice;
  union {
    SAERestrictionAppliesTo basicType;
    SAERestrictionUserType_1 regional;
  } u;
} SAERestrictionUserType;

extern const ASN1CType asn1_type_SAERestrictionUserType[];

typedef struct SAERestrictionUserTypeList {
  SAERestrictionUserType *tab;
  size_t count;
} SAERestrictionUserTypeList;

extern const ASN1CType asn1_type_SAERestrictionUserTypeList[];

typedef struct SAERestrictionClassAssignment {
  SAERestrictionClassID id;
  SAERestrictionUserTypeList users;
} SAERestrictionClassAssignment;


extern const ASN1CType asn1_type_SAERestrictionClassAssignment[];

typedef struct SAERestrictionClassList {
  SAERestrictionClassAssignment *tab;
  size_t count;
} SAERestrictionClassList;

extern const ASN1CType asn1_type_SAERestrictionClassList[];

typedef struct SAERegionalExtension_15 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_15;


extern const ASN1CType asn1_type_SAERegionalExtension_15[];

typedef struct SAEMapData_1 {
  SAERegionalExtension_15 *tab;
  size_t count;
} SAEMapData_1;

extern const ASN1CType asn1_type_SAEMapData_1[];

typedef struct SAEMapData {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  SAEMsgCount msgIssueRevision;
  BOOL layerType_option;
  SAELayerType layerType;
  BOOL layerID_option;
  SAELayerID layerID;
  BOOL intersections_option;
  SAEIntersectionGeometryList intersections;
  BOOL roadSegments_option;
  SAERoadSegmentList roadSegments;
  BOOL dataParameters_option;
  SAEDataParameters dataParameters;
  BOOL restrictionList_option;
  SAERestrictionClassList restrictionList;
  BOOL regional_option;
  SAEMapData_1 regional;
} SAEMapData;


extern const ASN1CType asn1_type_SAEMapData[];

typedef enum SAENMEA_Revision {
  SAENMEA_Revision_unknown,
  SAENMEA_Revision_reserved,
  SAENMEA_Revision_rev1,
  SAENMEA_Revision_rev2,
  SAENMEA_Revision_rev3,
  SAENMEA_Revision_rev4,
  SAENMEA_Revision_rev5,
} SAENMEA_Revision;

extern const ASN1CType asn1_type_SAENMEA_Revision[];

typedef int SAENMEA_MsgType;

extern const ASN1CType asn1_type_SAENMEA_MsgType[];

typedef int SAEObjectCount;

extern const ASN1CType asn1_type_SAEObjectCount[];

typedef ASN1String SAENMEA_Payload;

extern const ASN1CType asn1_type_SAENMEA_Payload[];

typedef struct SAERegionalExtension_22 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_22;


extern const ASN1CType asn1_type_SAERegionalExtension_22[];

typedef struct SAENMEAcorrections_1 {
  SAERegionalExtension_22 *tab;
  size_t count;
} SAENMEAcorrections_1;

extern const ASN1CType asn1_type_SAENMEAcorrections_1[];

typedef struct SAENMEAcorrections {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL rev_option;
  SAENMEA_Revision rev;
  BOOL msg_option;
  SAENMEA_MsgType msg;
  BOOL wdCount_option;
  SAEObjectCount wdCount;
  SAENMEA_Payload payload;
  BOOL regional_option;
  SAENMEAcorrections_1 regional;
} SAENMEAcorrections;


extern const ASN1CType asn1_type_SAENMEAcorrections[];

typedef enum SAEPersonalDeviceUserType {
  SAEPersonalDeviceUserType_unavailable,
  SAEPersonalDeviceUserType_aPEDESTRIAN,
  SAEPersonalDeviceUserType_aPEDALCYCLIST,
  SAEPersonalDeviceUserType_aPUBLICSAFETYWORKER,
  SAEPersonalDeviceUserType_anANIMAL,
} SAEPersonalDeviceUserType;

extern const ASN1CType asn1_type_SAEPersonalDeviceUserType[];

typedef enum SAEHumanPropelledType {
  SAEHumanPropelledType_unavailable,
  SAEHumanPropelledType_otherTypes,
  SAEHumanPropelledType_onFoot,
  SAEHumanPropelledType_skateboard,
  SAEHumanPropelledType_pushOrKickScooter,
  SAEHumanPropelledType_wheelchair,
} SAEHumanPropelledType;

extern const ASN1CType asn1_type_SAEHumanPropelledType[];

typedef enum SAEAnimalPropelledType {
  SAEAnimalPropelledType_unavailable,
  SAEAnimalPropelledType_otherTypes,
  SAEAnimalPropelledType_animalMounted,
  SAEAnimalPropelledType_animalDrawnCarriage,
} SAEAnimalPropelledType;

extern const ASN1CType asn1_type_SAEAnimalPropelledType[];

typedef enum SAEMotorizedPropelledType {
  SAEMotorizedPropelledType_unavailable,
  SAEMotorizedPropelledType_otherTypes,
  SAEMotorizedPropelledType_wheelChair,
  SAEMotorizedPropelledType_bicycle,
  SAEMotorizedPropelledType_scooter,
  SAEMotorizedPropelledType_selfBalancingDevice,
} SAEMotorizedPropelledType;

extern const ASN1CType asn1_type_SAEMotorizedPropelledType[];

typedef enum {
  SAEPropelledInformation_human,
  SAEPropelledInformation_animal,
  SAEPropelledInformation_motor,
} SAEPropelledInformation_choice;

typedef struct SAEPropelledInformation {
  SAEPropelledInformation_choice choice;
  union {
    SAEHumanPropelledType human;
    SAEAnimalPropelledType animal;
    SAEMotorizedPropelledType motor;
  } u;
} SAEPropelledInformation;

extern const ASN1CType asn1_type_SAEPropelledInformation[];

typedef ASN1BitString SAEPersonalDeviceUsageState;

extern const ASN1CType asn1_type_SAEPersonalDeviceUsageState[];

typedef BOOL SAEPersonalCrossingRequest;

extern const ASN1CType asn1_type_SAEPersonalCrossingRequest[];

typedef BOOL SAEPersonalCrossingInProgress;

extern const ASN1CType asn1_type_SAEPersonalCrossingInProgress[];

typedef enum SAENumberOfParticipantsInCluster {
  SAENumberOfParticipantsInCluster_unavailable,
  SAENumberOfParticipantsInCluster_small,
  SAENumberOfParticipantsInCluster_medium,
  SAENumberOfParticipantsInCluster_large,
} SAENumberOfParticipantsInCluster;

extern const ASN1CType asn1_type_SAENumberOfParticipantsInCluster[];

typedef int SAEPersonalClusterRadius;

extern const ASN1CType asn1_type_SAEPersonalClusterRadius[];

typedef enum SAEPublicSafetyEventResponderWorkerType {
  SAEPublicSafetyEventResponderWorkerType_unavailable,
  SAEPublicSafetyEventResponderWorkerType_towOperater,
  SAEPublicSafetyEventResponderWorkerType_fireAndEMSWorker,
  SAEPublicSafetyEventResponderWorkerType_aDOTWorker,
  SAEPublicSafetyEventResponderWorkerType_lawEnforcement,
  SAEPublicSafetyEventResponderWorkerType_hazmatResponder,
  SAEPublicSafetyEventResponderWorkerType_animalControlWorker,
  SAEPublicSafetyEventResponderWorkerType_otherPersonnel,
} SAEPublicSafetyEventResponderWorkerType;

extern const ASN1CType asn1_type_SAEPublicSafetyEventResponderWorkerType[];

typedef ASN1BitString SAEPublicSafetyAndRoadWorkerActivity;

extern const ASN1CType asn1_type_SAEPublicSafetyAndRoadWorkerActivity[];

typedef ASN1BitString SAEPublicSafetyDirectingTrafficSubType;

extern const ASN1CType asn1_type_SAEPublicSafetyDirectingTrafficSubType[];

typedef ASN1BitString SAEPersonalAssistive;

extern const ASN1CType asn1_type_SAEPersonalAssistive[];

typedef ASN1BitString SAEUserSizeAndBehaviour;

extern const ASN1CType asn1_type_SAEUserSizeAndBehaviour[];

typedef enum SAEAttachment {
  SAEAttachment_unavailable,
  SAEAttachment_stroller,
  SAEAttachment_bicycleTrailer,
  SAEAttachment_cart,
  SAEAttachment_wheelchair,
  SAEAttachment_otherWalkAssistAttachments,
  SAEAttachment_pet,
} SAEAttachment;

extern const ASN1CType asn1_type_SAEAttachment[];

typedef int SAEAttachmentRadius;

extern const ASN1CType asn1_type_SAEAttachmentRadius[];

typedef enum SAEAnimalType {
  SAEAnimalType_unavailable,
  SAEAnimalType_serviceUse,
  SAEAnimalType_pet,
  SAEAnimalType_farm,
} SAEAnimalType;

extern const ASN1CType asn1_type_SAEAnimalType[];

typedef struct SAERegionalExtension_23 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_23;


extern const ASN1CType asn1_type_SAERegionalExtension_23[];

typedef struct SAEPersonalSafetyMessage_1 {
  SAERegionalExtension_23 *tab;
  size_t count;
} SAEPersonalSafetyMessage_1;

extern const ASN1CType asn1_type_SAEPersonalSafetyMessage_1[];

typedef struct SAEPersonalSafetyMessage {
  SAEPersonalDeviceUserType basicType;
  SAEDSecond secMark;
  SAEMsgCount msgCnt;
  SAETemporaryID id;
  SAEPosition3D position;
  SAEPositionalAccuracy accuracy;
  SAEVelocity speed;
  SAEHeading heading;
  BOOL accelSet_option;
  SAEAccelerationSet4Way accelSet;
  BOOL pathHistory_option;
  SAEPathHistory pathHistory;
  BOOL pathPrediction_option;
  SAEPathPrediction pathPrediction;
  BOOL propulsion_option;
  SAEPropelledInformation propulsion;
  BOOL useState_option;
  SAEPersonalDeviceUsageState useState;
  BOOL crossRequest_option;
  SAEPersonalCrossingRequest crossRequest;
  BOOL crossState_option;
  SAEPersonalCrossingInProgress crossState;
  BOOL clusterSize_option;
  SAENumberOfParticipantsInCluster clusterSize;
  BOOL clusterRadius_option;
  SAEPersonalClusterRadius clusterRadius;
  BOOL eventResponderType_option;
  SAEPublicSafetyEventResponderWorkerType eventResponderType;
  BOOL activityType_option;
  SAEPublicSafetyAndRoadWorkerActivity activityType;
  BOOL activitySubType_option;
  SAEPublicSafetyDirectingTrafficSubType activitySubType;
  BOOL assistType_option;
  SAEPersonalAssistive assistType;
  BOOL sizing_option;
  SAEUserSizeAndBehaviour sizing;
  BOOL attachment_option;
  SAEAttachment attachment;
  BOOL attachmentRadius_option;
  SAEAttachmentRadius attachmentRadius;
  BOOL animalType_option;
  SAEAnimalType animalType;
  BOOL regional_option;
  SAEPersonalSafetyMessage_1 regional;
} SAEPersonalSafetyMessage;


extern const ASN1CType asn1_type_SAEPersonalSafetyMessage[];

typedef struct SAESample {
  int sampleStart;
  int sampleEnd;
} SAESample;


extern const ASN1CType asn1_type_SAESample[];

typedef int SAETermTime;

extern const ASN1CType asn1_type_SAETermTime[];

typedef int SAETermDistance;

extern const ASN1CType asn1_type_SAETermDistance[];

typedef enum {
  SAEProbeDataManagement_1_termtime,
  SAEProbeDataManagement_1_termDistance,
} SAEProbeDataManagement_1_choice;

typedef struct SAEProbeDataManagement_1 {
  SAEProbeDataManagement_1_choice choice;
  union {
    SAETermTime termtime;
    SAETermDistance termDistance;
  } u;
} SAEProbeDataManagement_1;

extern const ASN1CType asn1_type_SAEProbeDataManagement_1[];

typedef int SAESecondOfTime;

extern const ASN1CType asn1_type_SAESecondOfTime[];

typedef struct SAESnapshotTime {
  SAEGrossSpeed speed1;
  SAESecondOfTime time1;
  SAEGrossSpeed speed2;
  SAESecondOfTime time2;
} SAESnapshotTime;


extern const ASN1CType asn1_type_SAESnapshotTime[];

typedef int SAEGrossDistance;

extern const ASN1CType asn1_type_SAEGrossDistance[];

typedef struct SAESnapshotDistance {
  SAEGrossDistance distance1;
  SAEGrossSpeed speed1;
  SAEGrossDistance distance2;
  SAEGrossSpeed speed2;
} SAESnapshotDistance;


extern const ASN1CType asn1_type_SAESnapshotDistance[];

typedef enum {
  SAEProbeDataManagement_2_snapshotTime,
  SAEProbeDataManagement_2_snapshotDistance,
} SAEProbeDataManagement_2_choice;

typedef struct SAEProbeDataManagement_2 {
  SAEProbeDataManagement_2_choice choice;
  union {
    SAESnapshotTime snapshotTime;
    SAESnapshotDistance snapshotDistance;
  } u;
} SAEProbeDataManagement_2;

extern const ASN1CType asn1_type_SAEProbeDataManagement_2[];

typedef enum SAEVehicleStatusDeviceTypeTag {
  SAEVehicleStatusDeviceTypeTag_unknown,
  SAEVehicleStatusDeviceTypeTag_lights,
  SAEVehicleStatusDeviceTypeTag_wipers,
  SAEVehicleStatusDeviceTypeTag_brakes,
  SAEVehicleStatusDeviceTypeTag_stab,
  SAEVehicleStatusDeviceTypeTag_trac,
  SAEVehicleStatusDeviceTypeTag_abs,
  SAEVehicleStatusDeviceTypeTag_sunS,
  SAEVehicleStatusDeviceTypeTag_rainS,
  SAEVehicleStatusDeviceTypeTag_airTemp,
  SAEVehicleStatusDeviceTypeTag_steering,
  SAEVehicleStatusDeviceTypeTag_vertAccelThres,
  SAEVehicleStatusDeviceTypeTag_vertAccel,
  SAEVehicleStatusDeviceTypeTag_hozAccelLong,
  SAEVehicleStatusDeviceTypeTag_hozAccelLat,
  SAEVehicleStatusDeviceTypeTag_hozAccelCon,
  SAEVehicleStatusDeviceTypeTag_accel4way,
  SAEVehicleStatusDeviceTypeTag_confidenceSet,
  SAEVehicleStatusDeviceTypeTag_obDist,
  SAEVehicleStatusDeviceTypeTag_obDirect,
  SAEVehicleStatusDeviceTypeTag_yaw,
  SAEVehicleStatusDeviceTypeTag_yawRateCon,
  SAEVehicleStatusDeviceTypeTag_dateTime,
  SAEVehicleStatusDeviceTypeTag_fullPos,
  SAEVehicleStatusDeviceTypeTag_position2D,
  SAEVehicleStatusDeviceTypeTag_position3D,
  SAEVehicleStatusDeviceTypeTag_vehicle,
  SAEVehicleStatusDeviceTypeTag_speedHeadC,
  SAEVehicleStatusDeviceTypeTag_speedC,
} SAEVehicleStatusDeviceTypeTag;

extern const ASN1CType asn1_type_SAEVehicleStatusDeviceTypeTag[];

typedef struct SAEVehicleStatusRequest {
  SAEVehicleStatusDeviceTypeTag dataType;
  BOOL subType_option;
  int subType;
  BOOL sendOnLessThenValue_option;
  int sendOnLessThenValue;
  BOOL sendOnMoreThenValue_option;
  int sendOnMoreThenValue;
  BOOL sendAll_option;
  BOOL sendAll;
} SAEVehicleStatusRequest;


extern const ASN1CType asn1_type_SAEVehicleStatusRequest[];

typedef struct SAEVehicleStatusRequestList {
  SAEVehicleStatusRequest *tab;
  size_t count;
} SAEVehicleStatusRequestList;

extern const ASN1CType asn1_type_SAEVehicleStatusRequestList[];

typedef struct SAERegionalExtension_24 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_24;


extern const ASN1CType asn1_type_SAERegionalExtension_24[];

typedef struct SAEProbeDataManagement_3 {
  SAERegionalExtension_24 *tab;
  size_t count;
} SAEProbeDataManagement_3;

extern const ASN1CType asn1_type_SAEProbeDataManagement_3[];

typedef struct SAEProbeDataManagement {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  SAESample sample;
  SAEHeadingSlice directions;
  SAEProbeDataManagement_1 term;
  SAEProbeDataManagement_2 snapshot;
  SAESecondOfTime txInterval;
  BOOL dataElements_option;
  SAEVehicleStatusRequestList dataElements;
  BOOL regional_option;
  SAEProbeDataManagement_3 regional;
} SAEProbeDataManagement;


extern const ASN1CType asn1_type_SAEProbeDataManagement[];

typedef int SAEProbeSegmentNumber;

extern const ASN1CType asn1_type_SAEProbeSegmentNumber[];

typedef ASN1String SAEVINstring;

extern const ASN1CType asn1_type_SAEVINstring[];

typedef enum {
  SAEVehicleIdent_1_vGroup,
  SAEVehicleIdent_1_rGroup,
  SAEVehicleIdent_1_rEquip,
} SAEVehicleIdent_1_choice;

typedef struct SAEVehicleIdent_1 {
  SAEVehicleIdent_1_choice choice;
  union {
    SAEITISVehicleGroupAffected vGroup;
    SAEITISResponderGroupAffected rGroup;
    SAEITISIncidentResponseEquipment rEquip;
  } u;
} SAEVehicleIdent_1;

extern const ASN1CType asn1_type_SAEVehicleIdent_1[];

typedef struct SAEVehicleIdent {
  BOOL name_option;
  SAEDescriptiveName name;
  BOOL vin_option;
  SAEVINstring vin;
  BOOL ownerCode_option;
  ASN1String ownerCode;
  BOOL id_option;
  SAEVehicleID id;
  BOOL vehicleType_option;
  SAEVehicleType vehicleType;
  BOOL vehicleClass_option;
  SAEVehicleIdent_1 vehicleClass;
} SAEVehicleIdent;


extern const ASN1CType asn1_type_SAEVehicleIdent[];

typedef enum SAEBrakeAppliedPressure {
  SAEBrakeAppliedPressure_unavailable,
  SAEBrakeAppliedPressure_minPressure,
  SAEBrakeAppliedPressure_bkLvl_2,
  SAEBrakeAppliedPressure_bkLvl_3,
  SAEBrakeAppliedPressure_bkLvl_4,
  SAEBrakeAppliedPressure_bkLvl_5,
  SAEBrakeAppliedPressure_bkLvl_6,
  SAEBrakeAppliedPressure_bkLvl_7,
  SAEBrakeAppliedPressure_bkLvl_8,
  SAEBrakeAppliedPressure_bkLvl_9,
  SAEBrakeAppliedPressure_bkLvl_10,
  SAEBrakeAppliedPressure_bkLvl_11,
  SAEBrakeAppliedPressure_bkLvl_12,
  SAEBrakeAppliedPressure_bkLvl_13,
  SAEBrakeAppliedPressure_bkLvl_14,
  SAEBrakeAppliedPressure_maxPressure,
} SAEBrakeAppliedPressure;

extern const ASN1CType asn1_type_SAEBrakeAppliedPressure[];

typedef int SAESunSensor;

extern const ASN1CType asn1_type_SAESunSensor[];

typedef enum SAERainSensor {
  SAERainSensor_none,
  SAERainSensor_lightMist,
  SAERainSensor_heavyMist,
  SAERainSensor_lightRainOrDrizzle,
  SAERainSensor_rain,
  SAERainSensor_moderateRain,
  SAERainSensor_heavyRain,
  SAERainSensor_heavyDownpour,
} SAERainSensor;

extern const ASN1CType asn1_type_SAERainSensor[];

typedef enum SAESteeringWheelAngleConfidence {
  SAESteeringWheelAngleConfidence_unavailable,
  SAESteeringWheelAngleConfidence_prec2deg,
  SAESteeringWheelAngleConfidence_prec1deg,
  SAESteeringWheelAngleConfidence_prec0_02deg,
} SAESteeringWheelAngleConfidence;

extern const ASN1CType asn1_type_SAESteeringWheelAngleConfidence[];

typedef int SAESteeringWheelAngleRateOfChange;

extern const ASN1CType asn1_type_SAESteeringWheelAngleRateOfChange[];

typedef int SAEDrivingWheelAngle;

extern const ASN1CType asn1_type_SAEDrivingWheelAngle[];

typedef struct SAEVehicleStatus_1 {
  SAESteeringWheelAngle angle;
  BOOL confidence_option;
  SAESteeringWheelAngleConfidence confidence;
  BOOL rate_option;
  SAESteeringWheelAngleRateOfChange rate;
  BOOL wheels_option;
  SAEDrivingWheelAngle wheels;
} SAEVehicleStatus_1;


extern const ASN1CType asn1_type_SAEVehicleStatus_1[];

typedef enum SAEYawRateConfidence {
  SAEYawRateConfidence_unavailable,
  SAEYawRateConfidence_degSec_100_00,
  SAEYawRateConfidence_degSec_010_00,
  SAEYawRateConfidence_degSec_005_00,
  SAEYawRateConfidence_degSec_001_00,
  SAEYawRateConfidence_degSec_000_10,
  SAEYawRateConfidence_degSec_000_05,
  SAEYawRateConfidence_degSec_000_01,
} SAEYawRateConfidence;

extern const ASN1CType asn1_type_SAEYawRateConfidence[];

typedef enum SAEAccelerationConfidence {
  SAEAccelerationConfidence_unavailable,
  SAEAccelerationConfidence_accl_100_00,
  SAEAccelerationConfidence_accl_010_00,
  SAEAccelerationConfidence_accl_005_00,
  SAEAccelerationConfidence_accl_001_00,
  SAEAccelerationConfidence_accl_000_10,
  SAEAccelerationConfidence_accl_000_05,
  SAEAccelerationConfidence_accl_000_01,
} SAEAccelerationConfidence;

extern const ASN1CType asn1_type_SAEAccelerationConfidence[];

typedef struct SAEAccelSteerYawRateConfidence {
  SAEYawRateConfidence yawRate;
  SAEAccelerationConfidence acceleration;
  SAESteeringWheelAngleConfidence steeringWheelAngle;
} SAEAccelSteerYawRateConfidence;


extern const ASN1CType asn1_type_SAEAccelSteerYawRateConfidence[];

typedef struct SAEConfidenceSet {
  BOOL accelConfidence_option;
  SAEAccelSteerYawRateConfidence accelConfidence;
  BOOL speedConfidence_option;
  SAESpeedandHeadingandThrottleConfidence speedConfidence;
  BOOL timeConfidence_option;
  SAETimeConfidence timeConfidence;
  BOOL posConfidence_option;
  SAEPositionConfidenceSet posConfidence;
  BOOL steerConfidence_option;
  SAESteeringWheelAngleConfidence steerConfidence;
  BOOL headingConfidence_option;
  SAEHeadingConfidence headingConfidence;
  BOOL throttleConfidence_option;
  SAEThrottleConfidence throttleConfidence;
} SAEConfidenceSet;


extern const ASN1CType asn1_type_SAEConfidenceSet[];

typedef struct SAEVehicleStatus_2 {
  BOOL accel4way_option;
  SAEAccelerationSet4Way accel4way;
  BOOL vertAccelThres_option;
  SAEVerticalAccelerationThreshold vertAccelThres;
  BOOL yawRateCon_option;
  SAEYawRateConfidence yawRateCon;
  BOOL hozAccelCon_option;
  SAEAccelerationConfidence hozAccelCon;
  BOOL confidenceSet_option;
  SAEConfidenceSet confidenceSet;
} SAEVehicleStatus_2;


extern const ASN1CType asn1_type_SAEVehicleStatus_2[];

typedef struct SAEVehicleStatus_3 {
  SAEObstacleDistance obDist;
  SAEAngle obDirect;
  SAEDDateTime dateTime;
} SAEVehicleStatus_3;


extern const ASN1CType asn1_type_SAEVehicleStatus_3[];

typedef int SAEThrottlePosition;

extern const ASN1CType asn1_type_SAEThrottlePosition[];

typedef struct SAEVehicleStatus_4 {
  SAEVehicleHeight height;
  SAEBumperHeights bumpers;
  SAEVehicleMass mass;
  SAETrailerWeight trailerWeight;
  SAEVehicleType type;
} SAEVehicleStatus_4;


extern const ASN1CType asn1_type_SAEVehicleStatus_4[];

typedef int SAETireLocation;

extern const ASN1CType asn1_type_SAETireLocation[];

typedef int SAETirePressure;

extern const ASN1CType asn1_type_SAETirePressure[];

typedef int SAETireTemp;

extern const ASN1CType asn1_type_SAETireTemp[];

typedef enum SAEWheelSensorStatus {
  SAEWheelSensorStatus_off,
  SAEWheelSensorStatus_on,
  SAEWheelSensorStatus_notDefined,
  SAEWheelSensorStatus_notSupported,
} SAEWheelSensorStatus;

extern const ASN1CType asn1_type_SAEWheelSensorStatus[];

typedef enum SAEWheelEndElectFault {
  SAEWheelEndElectFault_isOk,
  SAEWheelEndElectFault_isNotDefined,
  SAEWheelEndElectFault_isError,
  SAEWheelEndElectFault_isNotSupported,
} SAEWheelEndElectFault;

extern const ASN1CType asn1_type_SAEWheelEndElectFault[];

typedef int SAETireLeakageRate;

extern const ASN1CType asn1_type_SAETireLeakageRate[];

typedef enum SAETirePressureThresholdDetection {
  SAETirePressureThresholdDetection_noData,
  SAETirePressureThresholdDetection_overPressure,
  SAETirePressureThresholdDetection_noWarningPressure,
  SAETirePressureThresholdDetection_underPressure,
  SAETirePressureThresholdDetection_extremeUnderPressure,
  SAETirePressureThresholdDetection_undefined,
  SAETirePressureThresholdDetection_errorIndicator,
  SAETirePressureThresholdDetection_notAvailable,
} SAETirePressureThresholdDetection;

extern const ASN1CType asn1_type_SAETirePressureThresholdDetection[];

typedef struct SAETireData {
  BOOL location_option;
  SAETireLocation location;
  BOOL pressure_option;
  SAETirePressure pressure;
  BOOL temp_option;
  SAETireTemp temp;
  BOOL wheelSensorStatus_option;
  SAEWheelSensorStatus wheelSensorStatus;
  BOOL wheelEndElectFault_option;
  SAEWheelEndElectFault wheelEndElectFault;
  BOOL leakageRate_option;
  SAETireLeakageRate leakageRate;
  BOOL detection_option;
  SAETirePressureThresholdDetection detection;
} SAETireData;


extern const ASN1CType asn1_type_SAETireData[];

typedef struct SAETireDataList {
  SAETireData *tab;
  size_t count;
} SAETireDataList;

extern const ASN1CType asn1_type_SAETireDataList[];

typedef int SAEAxleLocation;

extern const ASN1CType asn1_type_SAEAxleLocation[];

typedef int SAEAxleWeight;

extern const ASN1CType asn1_type_SAEAxleWeight[];

typedef struct SAEAxleWeightSet {
  BOOL location_option;
  SAEAxleLocation location;
  BOOL weight_option;
  SAEAxleWeight weight;
} SAEAxleWeightSet;


extern const ASN1CType asn1_type_SAEAxleWeightSet[];

typedef struct SAEAxleWeightList {
  SAEAxleWeightSet *tab;
  size_t count;
} SAEAxleWeightList;

extern const ASN1CType asn1_type_SAEAxleWeightList[];

typedef int SAECargoWeight;

extern const ASN1CType asn1_type_SAECargoWeight[];

typedef int SAESteeringAxleTemperature;

extern const ASN1CType asn1_type_SAESteeringAxleTemperature[];

typedef int SAEDriveAxleLocation;

extern const ASN1CType asn1_type_SAEDriveAxleLocation[];

typedef int SAEDriveAxleLiftAirPressure;

extern const ASN1CType asn1_type_SAEDriveAxleLiftAirPressure[];

typedef int SAEDriveAxleTemperature;

extern const ASN1CType asn1_type_SAEDriveAxleTemperature[];

typedef int SAEDriveAxleLubePressure;

extern const ASN1CType asn1_type_SAEDriveAxleLubePressure[];

typedef int SAESteeringAxleLubePressure;

extern const ASN1CType asn1_type_SAESteeringAxleLubePressure[];

typedef struct SAEJ1939data {
  BOOL tires_option;
  SAETireDataList tires;
  BOOL axles_option;
  SAEAxleWeightList axles;
  BOOL trailerWeight_option;
  SAETrailerWeight trailerWeight;
  BOOL cargoWeight_option;
  SAECargoWeight cargoWeight;
  BOOL steeringAxleTemperature_option;
  SAESteeringAxleTemperature steeringAxleTemperature;
  BOOL driveAxleLocation_option;
  SAEDriveAxleLocation driveAxleLocation;
  BOOL driveAxleLiftAirPressure_option;
  SAEDriveAxleLiftAirPressure driveAxleLiftAirPressure;
  BOOL driveAxleTemperature_option;
  SAEDriveAxleTemperature driveAxleTemperature;
  BOOL driveAxleLubePressure_option;
  SAEDriveAxleLubePressure driveAxleLubePressure;
  BOOL steeringAxleLubePressure_option;
  SAESteeringAxleLubePressure steeringAxleLubePressure;
} SAEJ1939data;


extern const ASN1CType asn1_type_SAEJ1939data[];

typedef struct SAEVehicleStatus_5 {
  SAEEssPrecipYesNo isRaining;
  BOOL rainRate_option;
  SAEEssPrecipRate rainRate;
  BOOL precipSituation_option;
  SAEEssPrecipSituation precipSituation;
  BOOL solarRadiation_option;
  SAEEssSolarRadiation solarRadiation;
  BOOL friction_option;
  SAEEssMobileFriction friction;
} SAEVehicleStatus_5;


extern const ASN1CType asn1_type_SAEVehicleStatus_5[];

typedef struct SAEVehicleStatus {
  BOOL lights_option;
  SAEExteriorLights lights;
  BOOL lightBar_option;
  SAELightbarInUse lightBar;
  BOOL wipers_option;
  SAEWiperSet wipers;
  BOOL brakeStatus_option;
  SAEBrakeSystemStatus brakeStatus;
  BOOL brakePressure_option;
  SAEBrakeAppliedPressure brakePressure;
  BOOL roadFriction_option;
  SAECoefficientOfFriction roadFriction;
  BOOL sunData_option;
  SAESunSensor sunData;
  BOOL rainData_option;
  SAERainSensor rainData;
  BOOL airTemp_option;
  SAEAmbientAirTemperature airTemp;
  BOOL airPres_option;
  SAEAmbientAirPressure airPres;
  BOOL steering_option;
  SAEVehicleStatus_1 steering;
  BOOL accelSets_option;
  SAEVehicleStatus_2 accelSets;
  BOOL object_option;
  SAEVehicleStatus_3 object;
  BOOL fullPos_option;
  SAEFullPositionVector fullPos;
  BOOL throttlePos_option;
  SAEThrottlePosition throttlePos;
  BOOL speedHeadC_option;
  SAESpeedandHeadingandThrottleConfidence speedHeadC;
  BOOL speedC_option;
  SAESpeedConfidence speedC;
  BOOL vehicleData_option;
  SAEVehicleStatus_4 vehicleData;
  BOOL vehicleIdent_option;
  SAEVehicleIdent vehicleIdent;
  BOOL j1939data_option;
  SAEJ1939data j1939data;
  BOOL weatherReport_option;
  SAEVehicleStatus_5 weatherReport;
  BOOL gnssStatus_option;
  SAEGNSSstatus gnssStatus;
} SAEVehicleStatus;


extern const ASN1CType asn1_type_SAEVehicleStatus[];

typedef struct SAESnapshot {
  SAEFullPositionVector thePosition;
  BOOL safetyExt_option;
  SAEVehicleSafetyExtensions safetyExt;
  BOOL dataSet_option;
  SAEVehicleStatus dataSet;
} SAESnapshot;


extern const ASN1CType asn1_type_SAESnapshot[];

typedef struct SAEProbeVehicleData_1 {
  SAESnapshot *tab;
  size_t count;
} SAEProbeVehicleData_1;

extern const ASN1CType asn1_type_SAEProbeVehicleData_1[];

typedef struct SAERegionalExtension_25 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_25;


extern const ASN1CType asn1_type_SAERegionalExtension_25[];

typedef struct SAEProbeVehicleData_2 {
  SAERegionalExtension_25 *tab;
  size_t count;
} SAEProbeVehicleData_2;

extern const ASN1CType asn1_type_SAEProbeVehicleData_2[];

typedef struct SAEProbeVehicleData {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL segNum_option;
  SAEProbeSegmentNumber segNum;
  BOOL probeID_option;
  SAEVehicleIdent probeID;
  SAEFullPositionVector startVector;
  SAEVehicleClassification vehicleType;
  SAEProbeVehicleData_1 snapshots;
  BOOL regional_option;
  SAEProbeVehicleData_2 regional;
} SAEProbeVehicleData;


extern const ASN1CType asn1_type_SAEProbeVehicleData[];

typedef struct SAEVehicleToLanePosition {
  SAEStationID stationID;
  SAELaneID laneID;
} SAEVehicleToLanePosition;


extern const ASN1CType asn1_type_SAEVehicleToLanePosition[];

typedef struct SAEVehicleToLanePositionList {
  SAEVehicleToLanePosition *tab;
  size_t count;
} SAEVehicleToLanePositionList;

extern const ASN1CType asn1_type_SAEVehicleToLanePositionList[];

typedef struct SAEConnectionManeuverAssist_addGrpC {
  SAEVehicleToLanePositionList vehicleToLanePositions;
  BOOL rsuDistanceFromAnchor_option;
  SAENodeOffsetPointXY rsuDistanceFromAnchor;
} SAEConnectionManeuverAssist_addGrpC;


extern const ASN1CType asn1_type_SAEConnectionManeuverAssist_addGrpC[];

typedef struct SAEPrioritizationResponse {
  SAEStationID stationID;
  SAEPrioritizationResponseStatus priorState;
  SAESignalGroupID signalGroup;
} SAEPrioritizationResponse;


extern const ASN1CType asn1_type_SAEPrioritizationResponse[];

typedef struct SAEPrioritizationResponseList {
  SAEPrioritizationResponse *tab;
  size_t count;
} SAEPrioritizationResponseList;

extern const ASN1CType asn1_type_SAEPrioritizationResponseList[];

typedef struct SAEIntersectionState_addGrpC {
  BOOL activePrioritizations_option;
  SAEPrioritizationResponseList activePrioritizations;
} SAEIntersectionState_addGrpC;


extern const ASN1CType asn1_type_SAEIntersectionState_addGrpC[];

typedef struct SAELaneDataAttribute_addGrpB {
  uint8_t dummy_field;
} SAELaneDataAttribute_addGrpB;


extern const ASN1CType asn1_type_SAELaneDataAttribute_addGrpB[];

typedef int SAETimeRemaining;

extern const ASN1CType asn1_type_SAETimeRemaining[];

typedef int SAEMinTimetoChange;

extern const ASN1CType asn1_type_SAEMinTimetoChange[];

typedef int SAEMaxTimetoChange;

extern const ASN1CType asn1_type_SAEMaxTimetoChange[];

typedef int SAETimeIntervalConfidence;

extern const ASN1CType asn1_type_SAETimeIntervalConfidence[];

typedef struct SAEMovementEvent_addGrpB {
  BOOL startTime_option;
  SAETimeRemaining startTime;
  SAEMinTimetoChange minEndTime;
  BOOL maxEndTime_option;
  SAEMaxTimetoChange maxEndTime;
  BOOL likelyTime_option;
  SAETimeRemaining likelyTime;
  BOOL confidence_option;
  SAETimeIntervalConfidence confidence;
  BOOL nextTime_option;
  SAETimeRemaining nextTime;
} SAEMovementEvent_addGrpB;


extern const ASN1CType asn1_type_SAEMovementEvent_addGrpB[];

typedef int SAELongitudeDMS;

extern const ASN1CType asn1_type_SAELongitudeDMS[];

typedef int SAELatitudeDMS;

extern const ASN1CType asn1_type_SAELatitudeDMS[];

typedef struct SAENode_LLdms_48b {
  SAELongitudeDMS lon;
  SAELatitudeDMS lat;
} SAENode_LLdms_48b;


extern const ASN1CType asn1_type_SAENode_LLdms_48b[];

typedef int SAEDegreesLong;

extern const ASN1CType asn1_type_SAEDegreesLong[];

typedef int SAEMinutesAngle;

extern const ASN1CType asn1_type_SAEMinutesAngle[];

typedef int SAESecondsAngle;

extern const ASN1CType asn1_type_SAESecondsAngle[];

typedef struct SAELongitudeDMS2 {
  SAEDegreesLong d;
  SAEMinutesAngle m;
  SAESecondsAngle s;
} SAELongitudeDMS2;


extern const ASN1CType asn1_type_SAELongitudeDMS2[];

typedef int SAEDegreesLat;

extern const ASN1CType asn1_type_SAEDegreesLat[];

typedef struct SAELatitudeDMS2 {
  SAEDegreesLat d;
  SAEMinutesAngle m;
  SAESecondsAngle s;
} SAELatitudeDMS2;


extern const ASN1CType asn1_type_SAELatitudeDMS2[];

typedef struct SAENode_LLdms_80b {
  SAELongitudeDMS2 lon;
  SAELatitudeDMS2 lat;
} SAENode_LLdms_80b;


extern const ASN1CType asn1_type_SAENode_LLdms_80b[];

typedef enum {
  SAENodeOffsetPointXY_addGrpB_posA,
  SAENodeOffsetPointXY_addGrpB_posB,
} SAENodeOffsetPointXY_addGrpB_choice;

typedef struct SAENodeOffsetPointXY_addGrpB {
  SAENodeOffsetPointXY_addGrpB_choice choice;
  union {
    SAENode_LLdms_48b posA;
    SAENode_LLdms_80b posB;
  } u;
} SAENodeOffsetPointXY_addGrpB;

extern const ASN1CType asn1_type_SAENodeOffsetPointXY_addGrpB[];

typedef int SAEGrpBElevation;

extern const ASN1CType asn1_type_SAEGrpBElevation[];

typedef struct SAEPosition3D_addGrpB {
  SAELatitudeDMS2 latitude;
  SAELongitudeDMS2 longitude;
  SAEGrpBElevation elevation;
} SAEPosition3D_addGrpB;


extern const ASN1CType asn1_type_SAEPosition3D_addGrpB[];

typedef int SAEAltitudeValue;

extern const ASN1CType asn1_type_SAEAltitudeValue[];

typedef enum SAEAltitudeConfidence {
  SAEAltitudeConfidence_alt_000_01,
  SAEAltitudeConfidence_alt_000_02,
  SAEAltitudeConfidence_alt_000_05,
  SAEAltitudeConfidence_alt_000_10,
  SAEAltitudeConfidence_alt_000_20,
  SAEAltitudeConfidence_alt_000_50,
  SAEAltitudeConfidence_alt_001_00,
  SAEAltitudeConfidence_alt_002_00,
  SAEAltitudeConfidence_alt_005_00,
  SAEAltitudeConfidence_alt_010_00,
  SAEAltitudeConfidence_alt_020_00,
  SAEAltitudeConfidence_alt_050_00,
  SAEAltitudeConfidence_alt_100_00,
  SAEAltitudeConfidence_alt_200_00,
  SAEAltitudeConfidence_outOfRange,
  SAEAltitudeConfidence_unavailable,
} SAEAltitudeConfidence;

extern const ASN1CType asn1_type_SAEAltitudeConfidence[];

typedef struct SAEAltitude {
  SAEAltitudeValue value;
  SAEAltitudeConfidence confidence;
} SAEAltitude;


extern const ASN1CType asn1_type_SAEAltitude[];

typedef struct SAEPosition3D_addGrpC {
  SAEAltitude altitude;
} SAEPosition3D_addGrpC;


extern const ASN1CType asn1_type_SAEPosition3D_addGrpC[];

typedef enum SAEEmissionType {
  SAEEmissionType_typeA,
  SAEEmissionType_typeB,
  SAEEmissionType_typeC,
  SAEEmissionType_typeD,
  SAEEmissionType_typeE,
} SAEEmissionType;

extern const ASN1CType asn1_type_SAEEmissionType[];

typedef struct SAERestrictionUserType_addGrpC {
  BOOL emission_option;
  SAEEmissionType emission;
} SAERestrictionUserType_addGrpC;


extern const ASN1CType asn1_type_SAERestrictionUserType_addGrpC[];

typedef struct SAESignalHeadLocation {
  SAENodeOffsetPointXY node;
  SAESignalGroupID signalGroupID;
} SAESignalHeadLocation;


extern const ASN1CType asn1_type_SAESignalHeadLocation[];

typedef struct SAESignalHeadLocationList {
  SAESignalHeadLocation *tab;
  size_t count;
} SAESignalHeadLocationList;

extern const ASN1CType asn1_type_SAESignalHeadLocationList[];

typedef struct SAEMapData_addGrpC {
  BOOL signalHeadLocations_option;
  SAESignalHeadLocationList signalHeadLocations;
} SAEMapData_addGrpC;


extern const ASN1CType asn1_type_SAEMapData_addGrpC[];

typedef int SAEGrpBAngle;

extern const ASN1CType asn1_type_SAEGrpBAngle[];

typedef int SAEDay;

extern const ASN1CType asn1_type_SAEDay[];

typedef enum SAEDayOfWeek {
  SAEDayOfWeek_unknown,
  SAEDayOfWeek_monday,
  SAEDayOfWeek_tuesday,
  SAEDayOfWeek_wednesday,
  SAEDayOfWeek_thursday,
  SAEDayOfWeek_friday,
  SAEDayOfWeek_saturday,
  SAEDayOfWeek_sunday,
} SAEDayOfWeek;

extern const ASN1CType asn1_type_SAEDayOfWeek[];

typedef enum SAEHoliday {
  SAEHoliday_weekday,
  SAEHoliday_holiday,
} SAEHoliday;

extern const ASN1CType asn1_type_SAEHoliday[];

typedef int SAEHour;

extern const ASN1CType asn1_type_SAEHour[];

typedef int SAEMinute;

extern const ASN1CType asn1_type_SAEMinute[];

typedef int SAEMonth;

extern const ASN1CType asn1_type_SAEMonth[];

typedef int SAEGrpBMsgCount;

extern const ASN1CType asn1_type_SAEGrpBMsgCount[];

typedef int SAESecond;

extern const ASN1CType asn1_type_SAESecond[];

typedef enum SAESummerTime {
  SAESummerTime_notInSummerTime,
  SAESummerTime_inSummerTime,
} SAESummerTime;

extern const ASN1CType asn1_type_SAESummerTime[];

typedef int SAETenthSecond;

extern const ASN1CType asn1_type_SAETenthSecond[];

typedef int SAEYear;

extern const ASN1CType asn1_type_SAEYear[];

typedef struct SAEGrpBTimeMark {
  SAEYear year;
  SAEMonth month;
  SAEDay day;
  SAESummerTime summerTime;
  SAEHoliday holiday;
  SAEDayOfWeek dayofWeek;
  SAEHour hour;
  SAEMinute minute;
  SAESecond second;
  SAETenthSecond tenthSecond;
} SAEGrpBTimeMark;


extern const ASN1CType asn1_type_SAEGrpBTimeMark[];

typedef enum SAERTCM_Revision {
  SAERTCM_Revision_unknown,
  SAERTCM_Revision_rtcmRev2,
  SAERTCM_Revision_rtcmRev3,
  SAERTCM_Revision_reserved,
} SAERTCM_Revision;

extern const ASN1CType asn1_type_SAERTCM_Revision[];

typedef struct SAERegionalExtension_27 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_27;


extern const ASN1CType asn1_type_SAERegionalExtension_27[];

typedef struct SAERTCMcorrections_1 {
  SAERegionalExtension_27 *tab;
  size_t count;
} SAERTCMcorrections_1;

extern const ASN1CType asn1_type_SAERTCMcorrections_1[];

typedef struct SAERTCMcorrections {
  SAEMsgCount msgCnt;
  SAERTCM_Revision rev;
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL anchorPoint_option;
  SAEFullPositionVector anchorPoint;
  BOOL rtcmHeader_option;
  SAERTCMheader rtcmHeader;
  SAERTCMmessageList msgs;
  BOOL regional_option;
  SAERTCMcorrections_1 regional;
} SAERTCMcorrections;


extern const ASN1CType asn1_type_SAERTCMcorrections[];

typedef ASN1Null SAESignalControlAndPrioritizationRequest;

extern const ASN1CType asn1_type_SAESignalControlAndPrioritizationRequest[];

typedef ASN1Null SAESignalControlAndPrioritizationStatus;

extern const ASN1CType asn1_type_SAESignalControlAndPrioritizationStatus[];

typedef enum SAEPriorityRequestType {
  SAEPriorityRequestType_priorityRequestTypeReserved,
  SAEPriorityRequestType_priorityRequest,
  SAEPriorityRequestType_priorityRequestUpdate,
  SAEPriorityRequestType_priorityCancellation,
} SAEPriorityRequestType;

extern const ASN1CType asn1_type_SAEPriorityRequestType[];

typedef struct SAERegionalExtension_31 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_31;


extern const ASN1CType asn1_type_SAERegionalExtension_31[];

typedef struct SAESignalRequest_1 {
  SAERegionalExtension_31 *tab;
  size_t count;
} SAESignalRequest_1;

extern const ASN1CType asn1_type_SAESignalRequest_1[];

typedef struct SAESignalRequest {
  SAEIntersectionReferenceID id;
  SAERequestID requestID;
  SAEPriorityRequestType requestType;
  SAEIntersectionAccessPoint inBoundLane;
  BOOL outBoundLane_option;
  SAEIntersectionAccessPoint outBoundLane;
  BOOL regional_option;
  SAESignalRequest_1 regional;
} SAESignalRequest;


extern const ASN1CType asn1_type_SAESignalRequest[];

typedef struct SAERegionalExtension_30 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_30;


extern const ASN1CType asn1_type_SAERegionalExtension_30[];

typedef struct SAESignalRequestPackage_1 {
  SAERegionalExtension_30 *tab;
  size_t count;
} SAESignalRequestPackage_1;

extern const ASN1CType asn1_type_SAESignalRequestPackage_1[];

typedef struct SAESignalRequestPackage {
  SAESignalRequest request;
  BOOL minute_option;
  SAEMinuteOfTheYear minute;
  BOOL second_option;
  SAEDSecond second;
  BOOL duration_option;
  SAEDSecond duration;
  BOOL regional_option;
  SAESignalRequestPackage_1 regional;
} SAESignalRequestPackage;


extern const ASN1CType asn1_type_SAESignalRequestPackage[];

typedef struct SAESignalRequestList {
  SAESignalRequestPackage *tab;
  size_t count;
} SAESignalRequestList;

extern const ASN1CType asn1_type_SAESignalRequestList[];

typedef struct SAERequestorPositionVector {
  SAEPosition3D position;
  BOOL heading_option;
  SAEAngle heading;
  BOOL speed_option;
  SAETransmissionAndSpeed speed;
} SAERequestorPositionVector;


extern const ASN1CType asn1_type_SAERequestorPositionVector[];

typedef ASN1BitString SAETransitVehicleStatus;

extern const ASN1CType asn1_type_SAETransitVehicleStatus[];

typedef enum SAETransitVehicleOccupancy {
  SAETransitVehicleOccupancy_occupancyUnknown,
  SAETransitVehicleOccupancy_occupancyEmpty,
  SAETransitVehicleOccupancy_occupancyVeryLow,
  SAETransitVehicleOccupancy_occupancyLow,
  SAETransitVehicleOccupancy_occupancyMed,
  SAETransitVehicleOccupancy_occupancyHigh,
  SAETransitVehicleOccupancy_occupancyNearlyFull,
  SAETransitVehicleOccupancy_occupancyFull,
} SAETransitVehicleOccupancy;

extern const ASN1CType asn1_type_SAETransitVehicleOccupancy[];

typedef int SAEDeltaTime;

extern const ASN1CType asn1_type_SAEDeltaTime[];

typedef struct SAERegionalExtension_29 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_29;


extern const ASN1CType asn1_type_SAERegionalExtension_29[];

typedef struct SAERequestorDescription_1 {
  SAERegionalExtension_29 *tab;
  size_t count;
} SAERequestorDescription_1;

extern const ASN1CType asn1_type_SAERequestorDescription_1[];

typedef struct SAERequestorDescription {
  SAEVehicleID id;
  BOOL type_option;
  SAERequestorType type;
  BOOL position_option;
  SAERequestorPositionVector position;
  BOOL name_option;
  SAEDescriptiveName name;
  BOOL routeName_option;
  SAEDescriptiveName routeName;
  BOOL transitStatus_option;
  SAETransitVehicleStatus transitStatus;
  BOOL transitOccupancy_option;
  SAETransitVehicleOccupancy transitOccupancy;
  BOOL transitSchedule_option;
  SAEDeltaTime transitSchedule;
  BOOL regional_option;
  SAERequestorDescription_1 regional;
} SAERequestorDescription;


extern const ASN1CType asn1_type_SAERequestorDescription[];

typedef struct SAERegionalExtension_28 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_28;


extern const ASN1CType asn1_type_SAERegionalExtension_28[];

typedef struct SAESignalRequestMessage_1 {
  SAERegionalExtension_28 *tab;
  size_t count;
} SAESignalRequestMessage_1;

extern const ASN1CType asn1_type_SAESignalRequestMessage_1[];

typedef struct SAESignalRequestMessage {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  SAEDSecond second;
  BOOL sequenceNumber_option;
  SAEMsgCount sequenceNumber;
  BOOL requests_option;
  SAESignalRequestList requests;
  SAERequestorDescription requestor;
  BOOL regional_option;
  SAESignalRequestMessage_1 regional;
} SAESignalRequestMessage;


extern const ASN1CType asn1_type_SAESignalRequestMessage[];

typedef struct SAESignalRequesterInfo {
  SAEVehicleID id;
  SAERequestID request;
  SAEMsgCount sequenceNumber;
  BOOL role_option;
  SAEBasicVehicleRole role;
  BOOL typeData_option;
  SAERequestorType typeData;
} SAESignalRequesterInfo;


extern const ASN1CType asn1_type_SAESignalRequesterInfo[];

typedef struct SAERegionalExtension_33 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_33;


extern const ASN1CType asn1_type_SAERegionalExtension_33[];

typedef struct SAESignalStatusPackage_1 {
  SAERegionalExtension_33 *tab;
  size_t count;
} SAESignalStatusPackage_1;

extern const ASN1CType asn1_type_SAESignalStatusPackage_1[];

typedef struct SAESignalStatusPackage {
  BOOL requester_option;
  SAESignalRequesterInfo requester;
  SAEIntersectionAccessPoint inboundOn;
  BOOL outboundOn_option;
  SAEIntersectionAccessPoint outboundOn;
  BOOL minute_option;
  SAEMinuteOfTheYear minute;
  BOOL second_option;
  SAEDSecond second;
  BOOL duration_option;
  SAEDSecond duration;
  SAEPrioritizationResponseStatus status;
  BOOL regional_option;
  SAESignalStatusPackage_1 regional;
} SAESignalStatusPackage;


extern const ASN1CType asn1_type_SAESignalStatusPackage[];

typedef struct SAESignalStatusPackageList {
  SAESignalStatusPackage *tab;
  size_t count;
} SAESignalStatusPackageList;

extern const ASN1CType asn1_type_SAESignalStatusPackageList[];

typedef struct SAERegionalExtension_34 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_34;


extern const ASN1CType asn1_type_SAERegionalExtension_34[];

typedef struct SAESignalStatus_1 {
  SAERegionalExtension_34 *tab;
  size_t count;
} SAESignalStatus_1;

extern const ASN1CType asn1_type_SAESignalStatus_1[];

typedef struct SAESignalStatus {
  SAEMsgCount sequenceNumber;
  SAEIntersectionReferenceID id;
  SAESignalStatusPackageList sigStatus;
  BOOL regional_option;
  SAESignalStatus_1 regional;
} SAESignalStatus;


extern const ASN1CType asn1_type_SAESignalStatus[];

typedef struct SAESignalStatusList {
  SAESignalStatus *tab;
  size_t count;
} SAESignalStatusList;

extern const ASN1CType asn1_type_SAESignalStatusList[];

typedef struct SAERegionalExtension_32 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_32;


extern const ASN1CType asn1_type_SAERegionalExtension_32[];

typedef struct SAESignalStatusMessage_1 {
  SAERegionalExtension_32 *tab;
  size_t count;
} SAESignalStatusMessage_1;

extern const ASN1CType asn1_type_SAESignalStatusMessage_1[];

typedef struct SAESignalStatusMessage {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  SAEDSecond second;
  BOOL sequenceNumber_option;
  SAEMsgCount sequenceNumber;
  SAESignalStatusList status;
  BOOL regional_option;
  SAESignalStatusMessage_1 regional;
} SAESignalStatusMessage;


extern const ASN1CType asn1_type_SAESignalStatusMessage[];

typedef ASN1BitString SAEIntersectionStatusObject;

extern const ASN1CType asn1_type_SAEIntersectionStatusObject[];

typedef struct SAEEnabledLaneList {
  SAELaneID *tab;
  size_t count;
} SAEEnabledLaneList;

extern const ASN1CType asn1_type_SAEEnabledLaneList[];

typedef enum SAEMovementPhaseState {
  SAEMovementPhaseState_unavailable,
  SAEMovementPhaseState_dark,
  SAEMovementPhaseState_stop_Then_Proceed,
  SAEMovementPhaseState_stop_And_Remain,
  SAEMovementPhaseState_pre_Movement,
  SAEMovementPhaseState_permissive_Movement_Allowed,
  SAEMovementPhaseState_protected_Movement_Allowed,
  SAEMovementPhaseState_permissive_clearance,
  SAEMovementPhaseState_protected_clearance,
  SAEMovementPhaseState_caution_Conflicting_Traffic,
} SAEMovementPhaseState;

extern const ASN1CType asn1_type_SAEMovementPhaseState[];

typedef int SAETimeMark;

extern const ASN1CType asn1_type_SAETimeMark[];

typedef struct SAETimeChangeDetails {
  BOOL startTime_option;
  SAETimeMark startTime;
  SAETimeMark minEndTime;
  BOOL maxEndTime_option;
  SAETimeMark maxEndTime;
  BOOL likelyTime_option;
  SAETimeMark likelyTime;
  BOOL confidence_option;
  SAETimeIntervalConfidence confidence;
  BOOL nextTime_option;
  SAETimeMark nextTime;
} SAETimeChangeDetails;


extern const ASN1CType asn1_type_SAETimeChangeDetails[];

typedef enum SAEAdvisorySpeedType {
  SAEAdvisorySpeedType_none,
  SAEAdvisorySpeedType_greenwave,
  SAEAdvisorySpeedType_ecoDrive,
  SAEAdvisorySpeedType_transit,
} SAEAdvisorySpeedType;

extern const ASN1CType asn1_type_SAEAdvisorySpeedType[];

typedef int SAESpeedAdvice;

extern const ASN1CType asn1_type_SAESpeedAdvice[];

typedef int SAEZoneLength;

extern const ASN1CType asn1_type_SAEZoneLength[];

typedef struct SAERegionalExtension_36 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_36;


extern const ASN1CType asn1_type_SAERegionalExtension_36[];

typedef struct SAEAdvisorySpeed_1 {
  SAERegionalExtension_36 *tab;
  size_t count;
} SAEAdvisorySpeed_1;

extern const ASN1CType asn1_type_SAEAdvisorySpeed_1[];

typedef struct SAEAdvisorySpeed {
  SAEAdvisorySpeedType type;
  BOOL speed_option;
  SAESpeedAdvice speed;
  BOOL confidence_option;
  SAESpeedConfidence confidence;
  BOOL distance_option;
  SAEZoneLength distance;
  BOOL Class_option;
  SAERestrictionClassID Class;
  BOOL regional_option;
  SAEAdvisorySpeed_1 regional;
} SAEAdvisorySpeed;


extern const ASN1CType asn1_type_SAEAdvisorySpeed[];

typedef struct SAEAdvisorySpeedList {
  SAEAdvisorySpeed *tab;
  size_t count;
} SAEAdvisorySpeedList;

extern const ASN1CType asn1_type_SAEAdvisorySpeedList[];

typedef struct SAERegionalExtension_39 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_39;


extern const ASN1CType asn1_type_SAERegionalExtension_39[];

typedef struct SAEMovementEvent_1 {
  SAERegionalExtension_39 *tab;
  size_t count;
} SAEMovementEvent_1;

extern const ASN1CType asn1_type_SAEMovementEvent_1[];

typedef struct SAEMovementEvent {
  SAEMovementPhaseState eventState;
  BOOL timing_option;
  SAETimeChangeDetails timing;
  BOOL speeds_option;
  SAEAdvisorySpeedList speeds;
  BOOL regional_option;
  SAEMovementEvent_1 regional;
} SAEMovementEvent;


extern const ASN1CType asn1_type_SAEMovementEvent[];

typedef struct SAEMovementEventList {
  SAEMovementEvent *tab;
  size_t count;
} SAEMovementEventList;

extern const ASN1CType asn1_type_SAEMovementEventList[];

typedef BOOL SAEWaitOnStopline;

extern const ASN1CType asn1_type_SAEWaitOnStopline[];

typedef BOOL SAEPedestrianBicycleDetect;

extern const ASN1CType asn1_type_SAEPedestrianBicycleDetect[];

typedef struct SAERegionalExtension_37 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_37;


extern const ASN1CType asn1_type_SAERegionalExtension_37[];

typedef struct SAEConnectionManeuverAssist_1 {
  SAERegionalExtension_37 *tab;
  size_t count;
} SAEConnectionManeuverAssist_1;

extern const ASN1CType asn1_type_SAEConnectionManeuverAssist_1[];

typedef struct SAEConnectionManeuverAssist {
  SAELaneConnectionID connectionID;
  BOOL queueLength_option;
  SAEZoneLength queueLength;
  BOOL availableStorageLength_option;
  SAEZoneLength availableStorageLength;
  BOOL waitOnStop_option;
  SAEWaitOnStopline waitOnStop;
  BOOL pedBicycleDetect_option;
  SAEPedestrianBicycleDetect pedBicycleDetect;
  BOOL regional_option;
  SAEConnectionManeuverAssist_1 regional;
} SAEConnectionManeuverAssist;


extern const ASN1CType asn1_type_SAEConnectionManeuverAssist[];

typedef struct SAEManeuverAssistList {
  SAEConnectionManeuverAssist *tab;
  size_t count;
} SAEManeuverAssistList;

extern const ASN1CType asn1_type_SAEManeuverAssistList[];

typedef struct SAERegionalExtension_40 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_40;


extern const ASN1CType asn1_type_SAERegionalExtension_40[];

typedef struct SAEMovementState_1 {
  SAERegionalExtension_40 *tab;
  size_t count;
} SAEMovementState_1;

extern const ASN1CType asn1_type_SAEMovementState_1[];

typedef struct SAEMovementState {
  BOOL movementName_option;
  SAEDescriptiveName movementName;
  SAESignalGroupID signalGroup;
  SAEMovementEventList state_time_speed;
  BOOL maneuverAssistList_option;
  SAEManeuverAssistList maneuverAssistList;
  BOOL regional_option;
  SAEMovementState_1 regional;
} SAEMovementState;


extern const ASN1CType asn1_type_SAEMovementState[];

typedef struct SAEMovementList {
  SAEMovementState *tab;
  size_t count;
} SAEMovementList;

extern const ASN1CType asn1_type_SAEMovementList[];

typedef struct SAERegionalExtension_38 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_38;


extern const ASN1CType asn1_type_SAERegionalExtension_38[];

typedef struct SAEIntersectionState_1 {
  SAERegionalExtension_38 *tab;
  size_t count;
} SAEIntersectionState_1;

extern const ASN1CType asn1_type_SAEIntersectionState_1[];

typedef struct SAEIntersectionState {
  BOOL name_option;
  SAEDescriptiveName name;
  SAEIntersectionReferenceID id;
  SAEMsgCount revision;
  SAEIntersectionStatusObject status;
  BOOL moy_option;
  SAEMinuteOfTheYear moy;
  BOOL timeStamp_option;
  SAEDSecond timeStamp;
  BOOL enabledLanes_option;
  SAEEnabledLaneList enabledLanes;
  SAEMovementList states;
  BOOL maneuverAssistList_option;
  SAEManeuverAssistList maneuverAssistList;
  BOOL regional_option;
  SAEIntersectionState_1 regional;
  BOOL roadAuthorityID_option;
  SAERoadAuthorityID roadAuthorityID;
} SAEIntersectionState;


extern const ASN1CType asn1_type_SAEIntersectionState[];

typedef struct SAEIntersectionStateList {
  SAEIntersectionState *tab;
  size_t count;
} SAEIntersectionStateList;

extern const ASN1CType asn1_type_SAEIntersectionStateList[];

typedef struct SAERegionalExtension_35 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_35;


extern const ASN1CType asn1_type_SAERegionalExtension_35[];

typedef struct SAESPAT_1 {
  SAERegionalExtension_35 *tab;
  size_t count;
} SAESPAT_1;

extern const ASN1CType asn1_type_SAESPAT_1[];

typedef struct SAESPAT {
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL name_option;
  SAEDescriptiveName name;
  SAEIntersectionStateList intersections;
  BOOL regional_option;
  SAESPAT_1 regional;
} SAESPAT;


extern const ASN1CType asn1_type_SAESPAT[];

typedef enum {
  SAETrafficLightID_id,
  SAETrafficLightID_oid,
} SAETrafficLightID_choice;

typedef struct SAETrafficLightID {
  SAETrafficLightID_choice choice;
  union {
    ASN1Integer id;
    ASN1ObjectIdentifier oid;
  } u;
} SAETrafficLightID;

extern const ASN1CType asn1_type_SAETrafficLightID[];

typedef ASN1BitString SAETrafficLightOperationStatus;

extern const ASN1CType asn1_type_SAETrafficLightOperationStatus[];

typedef ASN1BitString SAETrafficLightControllerStatus;

extern const ASN1CType asn1_type_SAETrafficLightControllerStatus[];

typedef int SAETimeInSecond_B16;

extern const ASN1CType asn1_type_SAETimeInSecond_B16[];

typedef enum SAETrafficLightType {
  SAETrafficLightType_reserved,
  SAETrafficLightType_straight,
  SAETrafficLightType_left_turn,
  SAETrafficLightType_pedestrian,
  SAETrafficLightType_bicycle,
  SAETrafficLightType_right_turn,
  SAETrafficLightType_bus,
  SAETrafficLightType_u_turn,
} SAETrafficLightType;

extern const ASN1CType asn1_type_SAETrafficLightType[];

typedef enum SAEConsecutiveTrafficLight {
  SAEConsecutiveTrafficLight_none,
  SAEConsecutiveTrafficLight_first,
  SAEConsecutiveTrafficLight_second,
} SAEConsecutiveTrafficLight;

extern const ASN1CType asn1_type_SAEConsecutiveTrafficLight[];

typedef enum SAETrafficLightIntervalType {
  SAETrafficLightIntervalType_Static,
  SAETrafficLightIntervalType_variable,
} SAETrafficLightIntervalType;

extern const ASN1CType asn1_type_SAETrafficLightIntervalType[];

typedef BOOL SAEPedestrianCall;

extern const ASN1CType asn1_type_SAEPedestrianCall[];

typedef BOOL SAEActuatedInterval;

extern const ASN1CType asn1_type_SAEActuatedInterval[];

typedef enum SAEPermissiveNonProtected {
  SAEPermissiveNonProtected_none,
  SAEPermissiveNonProtected_permissive,
} SAEPermissiveNonProtected;

extern const ASN1CType asn1_type_SAEPermissiveNonProtected[];

typedef enum SAETrafficLightingStatus {
  SAETrafficLightingStatus_off,
  SAETrafficLightingStatus_red_on,
  SAETrafficLightingStatus_yellow_on,
  SAETrafficLightingStatus_green_on,
  SAETrafficLightingStatus_red_blinking,
  SAETrafficLightingStatus_yellow_blinking,
  SAETrafficLightingStatus_green_blinking,
} SAETrafficLightingStatus;

extern const ASN1CType asn1_type_SAETrafficLightingStatus[];

typedef int SAETimeInSecond_B8;

extern const ASN1CType asn1_type_SAETimeInSecond_B8[];

typedef int SAETrafficLightDirectionCode;

extern const ASN1CType asn1_type_SAETrafficLightDirectionCode[];

typedef BOOL SAEReservedBit;

extern const ASN1CType asn1_type_SAEReservedBit[];

typedef struct SAETrafficLightStatus {
  SAETrafficLightType trafficLightType;
  SAEConsecutiveTrafficLight consecutiveTrafficLight;
  SAETrafficLightIntervalType trafficLightIntervalType;
  SAEPedestrianCall pedestrianCall;
  SAEActuatedInterval actuatedinterval;
  SAEPermissiveNonProtected permissiveNonProtected;
  SAETrafficLightingStatus lightingStatus;
  SAETimeInSecond_B8 maxIntervalLength;
  SAETimeInSecond_B8 remainingTime;
  SAETrafficLightDirectionCode directionCode;
  SAEReservedBit reserved;
} SAETrafficLightStatus;


extern const ASN1CType asn1_type_SAETrafficLightStatus[];

typedef struct SAETrafficLightStatusList {
  SAETrafficLightStatus *tab;
  size_t count;
} SAETrafficLightStatusList;

extern const ASN1CType asn1_type_SAETrafficLightStatusList[];

typedef struct SAETrafficLightStatusMessage {
  SAETrafficLightID trafficLightID;
  BOOL Long_option;
  SAELongitude Long;
  BOOL lat_option;
  SAELatitude lat;
  SAETrafficLightOperationStatus operationStatus;
  SAETrafficLightControllerStatus controllerStatus;
  SAETimeInSecond_B16 cyclecounter;
  SAETimeInSecond_B16 cycletime;
  SAEDDateTime currentTime;
  SAETrafficLightStatusList trafficLightStatus;
} SAETrafficLightStatusMessage;


extern const ASN1CType asn1_type_SAETrafficLightStatusMessage[];

typedef ASN1String SAEUniqueMSGID;

extern const ASN1CType asn1_type_SAEUniqueMSGID[];

typedef ASN1String SAEURL_Base;

extern const ASN1CType asn1_type_SAEURL_Base[];

typedef enum SAETravelerInfoType {
  SAETravelerInfoType_unknown,
  SAETravelerInfoType_advisory,
  SAETravelerInfoType_roadSignage,
  SAETravelerInfoType_commercialSignage,
} SAETravelerInfoType;

extern const ASN1CType asn1_type_SAETravelerInfoType[];

typedef enum SAEMUTCDCode {
  SAEMUTCDCode_none,
  SAEMUTCDCode_regulatory,
  SAEMUTCDCode_warning,
  SAEMUTCDCode_maintenance,
  SAEMUTCDCode_motoristService,
  SAEMUTCDCode_guide,
  SAEMUTCDCode_rec,
} SAEMUTCDCode;

extern const ASN1CType asn1_type_SAEMUTCDCode[];

typedef ASN1String SAEMsgCRC;

extern const ASN1CType asn1_type_SAEMsgCRC[];

typedef struct SAERoadSignID {
  SAEPosition3D position;
  SAEHeadingSlice viewAngle;
  BOOL mutcdCode_option;
  SAEMUTCDCode mutcdCode;
  BOOL crc_option;
  SAEMsgCRC crc;
} SAERoadSignID;


extern const ASN1CType asn1_type_SAERoadSignID[];

typedef enum {
  SAETravelerDataFrame_1_furtherInfoID,
  SAETravelerDataFrame_1_roadSignID,
} SAETravelerDataFrame_1_choice;

typedef struct SAETravelerDataFrame_1 {
  SAETravelerDataFrame_1_choice choice;
  union {
    SAEFurtherInfoID furtherInfoID;
    SAERoadSignID roadSignID;
  } u;
} SAETravelerDataFrame_1;

extern const ASN1CType asn1_type_SAETravelerDataFrame_1[];

typedef int SAEMinutesDuration;

extern const ASN1CType asn1_type_SAEMinutesDuration[];

typedef int SAESignPriority;

extern const ASN1CType asn1_type_SAESignPriority[];

typedef enum SAEDirectionOfUse {
  SAEDirectionOfUse_unavailable,
  SAEDirectionOfUse_forward,
  SAEDirectionOfUse_reverse,
  SAEDirectionOfUse_both,
} SAEDirectionOfUse;

extern const ASN1CType asn1_type_SAEDirectionOfUse[];

typedef int SAEZoom;

extern const ASN1CType asn1_type_SAEZoom[];

typedef int SAEOffsetLL_B12;

extern const ASN1CType asn1_type_SAEOffsetLL_B12[];

typedef struct SAENode_LL_24B {
  SAEOffsetLL_B12 lon;
  SAEOffsetLL_B12 lat;
} SAENode_LL_24B;


extern const ASN1CType asn1_type_SAENode_LL_24B[];

typedef int SAEOffsetLL_B14;

extern const ASN1CType asn1_type_SAEOffsetLL_B14[];

typedef struct SAENode_LL_28B {
  SAEOffsetLL_B14 lon;
  SAEOffsetLL_B14 lat;
} SAENode_LL_28B;


extern const ASN1CType asn1_type_SAENode_LL_28B[];

typedef int SAEOffsetLL_B16;

extern const ASN1CType asn1_type_SAEOffsetLL_B16[];

typedef struct SAENode_LL_32B {
  SAEOffsetLL_B16 lon;
  SAEOffsetLL_B16 lat;
} SAENode_LL_32B;


extern const ASN1CType asn1_type_SAENode_LL_32B[];

typedef struct SAENode_LL_36B {
  SAEOffsetLL_B18 lon;
  SAEOffsetLL_B18 lat;
} SAENode_LL_36B;


extern const ASN1CType asn1_type_SAENode_LL_36B[];

typedef int SAEOffsetLL_B22;

extern const ASN1CType asn1_type_SAEOffsetLL_B22[];

typedef struct SAENode_LL_44B {
  SAEOffsetLL_B22 lon;
  SAEOffsetLL_B22 lat;
} SAENode_LL_44B;


extern const ASN1CType asn1_type_SAENode_LL_44B[];

typedef int SAEOffsetLL_B24;

extern const ASN1CType asn1_type_SAEOffsetLL_B24[];

typedef struct SAENode_LL_48B {
  SAEOffsetLL_B24 lon;
  SAEOffsetLL_B24 lat;
} SAENode_LL_48B;


extern const ASN1CType asn1_type_SAENode_LL_48B[];

typedef struct SAERegionalExtension_45 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_45;


extern const ASN1CType asn1_type_SAERegionalExtension_45[];

typedef enum {
  SAENodeOffsetPointLL_node_LL1,
  SAENodeOffsetPointLL_node_LL2,
  SAENodeOffsetPointLL_node_LL3,
  SAENodeOffsetPointLL_node_LL4,
  SAENodeOffsetPointLL_node_LL5,
  SAENodeOffsetPointLL_node_LL6,
  SAENodeOffsetPointLL_node_LatLon,
  SAENodeOffsetPointLL_regional,
} SAENodeOffsetPointLL_choice;

typedef struct SAENodeOffsetPointLL {
  SAENodeOffsetPointLL_choice choice;
  union {
    SAENode_LL_24B node_LL1;
    SAENode_LL_28B node_LL2;
    SAENode_LL_32B node_LL3;
    SAENode_LL_36B node_LL4;
    SAENode_LL_44B node_LL5;
    SAENode_LL_48B node_LL6;
    SAENode_LLmD_64b node_LatLon;
    SAERegionalExtension_45 regional;
  } u;
} SAENodeOffsetPointLL;

extern const ASN1CType asn1_type_SAENodeOffsetPointLL[];

typedef enum SAENodeAttributeLL {
  SAENodeAttributeLL_reserved,
  SAENodeAttributeLL_stopLine,
  SAENodeAttributeLL_roundedCapStyleA,
  SAENodeAttributeLL_roundedCapStyleB,
  SAENodeAttributeLL_mergePoint,
  SAENodeAttributeLL_divergePoint,
  SAENodeAttributeLL_downstreamStopLine,
  SAENodeAttributeLL_downstreamStartNode,
  SAENodeAttributeLL_closedToTraffic,
  SAENodeAttributeLL_safeIsland,
  SAENodeAttributeLL_curbPresentAtStepOff,
  SAENodeAttributeLL_hydrantPresent,
} SAENodeAttributeLL;

extern const ASN1CType asn1_type_SAENodeAttributeLL[];

typedef struct SAENodeAttributeLLList {
  SAENodeAttributeLL *tab;
  size_t count;
} SAENodeAttributeLLList;

extern const ASN1CType asn1_type_SAENodeAttributeLLList[];

typedef enum SAESegmentAttributeLL {
  SAESegmentAttributeLL_reserved,
  SAESegmentAttributeLL_doNotBlock,
  SAESegmentAttributeLL_whiteLine,
  SAESegmentAttributeLL_mergingLaneLeft,
  SAESegmentAttributeLL_mergingLaneRight,
  SAESegmentAttributeLL_curbOnLeft,
  SAESegmentAttributeLL_curbOnRight,
  SAESegmentAttributeLL_loadingzoneOnLeft,
  SAESegmentAttributeLL_loadingzoneOnRight,
  SAESegmentAttributeLL_turnOutPointOnLeft,
  SAESegmentAttributeLL_turnOutPointOnRight,
  SAESegmentAttributeLL_adjacentParkingOnLeft,
  SAESegmentAttributeLL_adjacentParkingOnRight,
  SAESegmentAttributeLL_adjacentBikeLaneOnLeft,
  SAESegmentAttributeLL_adjacentBikeLaneOnRight,
  SAESegmentAttributeLL_sharedBikeLane,
  SAESegmentAttributeLL_bikeBoxInFront,
  SAESegmentAttributeLL_transitStopOnLeft,
  SAESegmentAttributeLL_transitStopOnRight,
  SAESegmentAttributeLL_transitStopInLane,
  SAESegmentAttributeLL_sharedWithTrackedVehicle,
  SAESegmentAttributeLL_safeIsland,
  SAESegmentAttributeLL_lowCurbsPresent,
  SAESegmentAttributeLL_rumbleStripPresent,
  SAESegmentAttributeLL_audibleSignalingPresent,
  SAESegmentAttributeLL_adaptiveTimingPresent,
  SAESegmentAttributeLL_rfSignalRequestPresent,
  SAESegmentAttributeLL_partialCurbIntrusion,
  SAESegmentAttributeLL_taperToLeft,
  SAESegmentAttributeLL_taperToRight,
  SAESegmentAttributeLL_taperToCenterLine,
  SAESegmentAttributeLL_parallelParking,
  SAESegmentAttributeLL_headInParking,
  SAESegmentAttributeLL_freeParking,
  SAESegmentAttributeLL_timeRestrictionsOnParking,
  SAESegmentAttributeLL_costToPark,
  SAESegmentAttributeLL_midBlockCurbPresent,
  SAESegmentAttributeLL_unEvenPavementPresent,
} SAESegmentAttributeLL;

extern const ASN1CType asn1_type_SAESegmentAttributeLL[];

typedef struct SAESegmentAttributeLLList {
  SAESegmentAttributeLL *tab;
  size_t count;
} SAESegmentAttributeLLList;

extern const ASN1CType asn1_type_SAESegmentAttributeLLList[];

typedef struct SAERegionalExtension_44 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_44;


extern const ASN1CType asn1_type_SAERegionalExtension_44[];

typedef struct SAENodeAttributeSetLL_1 {
  SAERegionalExtension_44 *tab;
  size_t count;
} SAENodeAttributeSetLL_1;

extern const ASN1CType asn1_type_SAENodeAttributeSetLL_1[];

typedef struct SAENodeAttributeSetLL {
  BOOL localNode_option;
  SAENodeAttributeLLList localNode;
  BOOL disabled_option;
  SAESegmentAttributeLLList disabled;
  BOOL enabled_option;
  SAESegmentAttributeLLList enabled;
  BOOL data_option;
  SAELaneDataAttributeList data;
  BOOL dWidth_option;
  SAEOffset_B10 dWidth;
  BOOL dElevation_option;
  SAEOffset_B10 dElevation;
  BOOL regional_option;
  SAENodeAttributeSetLL_1 regional;
} SAENodeAttributeSetLL;


extern const ASN1CType asn1_type_SAENodeAttributeSetLL[];

typedef struct SAENodeLL {
  SAENodeOffsetPointLL delta;
  BOOL attributes_option;
  SAENodeAttributeSetLL attributes;
} SAENodeLL;


extern const ASN1CType asn1_type_SAENodeLL[];

typedef struct SAENodeSetLL {
  SAENodeLL *tab;
  size_t count;
} SAENodeSetLL;

extern const ASN1CType asn1_type_SAENodeSetLL[];

typedef enum {
  SAENodeListLL_nodes,
} SAENodeListLL_choice;

typedef struct SAENodeListLL {
  SAENodeListLL_choice choice;
  union {
    SAENodeSetLL nodes;
  } u;
} SAENodeListLL;

extern const ASN1CType asn1_type_SAENodeListLL[];

typedef enum {
  SAEOffsetSystem_1_xy,
  SAEOffsetSystem_1_ll,
} SAEOffsetSystem_1_choice;

typedef struct SAEOffsetSystem_1 {
  SAEOffsetSystem_1_choice choice;
  union {
    SAENodeListXY xy;
    SAENodeListLL ll;
  } u;
} SAEOffsetSystem_1;

extern const ASN1CType asn1_type_SAEOffsetSystem_1[];

typedef struct SAEOffsetSystem {
  BOOL scale_option;
  SAEZoom scale;
  SAEOffsetSystem_1 offset;
} SAEOffsetSystem;


extern const ASN1CType asn1_type_SAEOffsetSystem[];

typedef int SAERadius_B12;

extern const ASN1CType asn1_type_SAERadius_B12[];

typedef enum SAEDistanceUnits {
  SAEDistanceUnits_centimeter,
  SAEDistanceUnits_cm2_5,
  SAEDistanceUnits_decimeter,
  SAEDistanceUnits_meter,
  SAEDistanceUnits_kilometer,
  SAEDistanceUnits_foot,
  SAEDistanceUnits_yard,
  SAEDistanceUnits_mile,
} SAEDistanceUnits;

extern const ASN1CType asn1_type_SAEDistanceUnits[];

typedef struct SAECircle {
  SAEPosition3D center;
  SAERadius_B12 radius;
  SAEDistanceUnits units;
} SAECircle;


extern const ASN1CType asn1_type_SAECircle[];

typedef struct SAERegionalExtension_43 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_43;


extern const ASN1CType asn1_type_SAERegionalExtension_43[];

typedef struct SAEGeometricProjection_1 {
  SAERegionalExtension_43 *tab;
  size_t count;
} SAEGeometricProjection_1;

extern const ASN1CType asn1_type_SAEGeometricProjection_1[];

typedef struct SAEGeometricProjection {
  SAEHeadingSlice direction;
  BOOL extent_option;
  SAEExtent extent;
  BOOL laneWidth_option;
  SAELaneWidth laneWidth;
  SAECircle circle;
  BOOL regional_option;
  SAEGeometricProjection_1 regional;
} SAEGeometricProjection;


extern const ASN1CType asn1_type_SAEGeometricProjection[];

typedef struct SAEShapePointSet {
  BOOL anchor_option;
  SAEPosition3D anchor;
  BOOL laneWidth_option;
  SAELaneWidth laneWidth;
  BOOL directionality_option;
  SAEDirectionOfUse directionality;
  SAENodeListXY nodeList;
} SAEShapePointSet;


extern const ASN1CType asn1_type_SAEShapePointSet[];

typedef struct SAERegionOffsets {
  SAEOffsetLL_B16 xOffset;
  SAEOffsetLL_B16 yOffset;
  BOOL zOffset_option;
  SAEOffsetLL_B16 zOffset;
} SAERegionOffsets;


extern const ASN1CType asn1_type_SAERegionOffsets[];

typedef struct SAERegionList {
  SAERegionOffsets *tab;
  size_t count;
} SAERegionList;

extern const ASN1CType asn1_type_SAERegionList[];

typedef struct SAERegionPointSet {
  BOOL anchor_option;
  SAEPosition3D anchor;
  BOOL scale_option;
  SAEZoom scale;
  SAERegionList nodeList;
} SAERegionPointSet;


extern const ASN1CType asn1_type_SAERegionPointSet[];

typedef enum {
  SAEValidRegion_1_shapePointSet,
  SAEValidRegion_1_circle,
  SAEValidRegion_1_regionPointSet,
} SAEValidRegion_1_choice;

typedef struct SAEValidRegion_1 {
  SAEValidRegion_1_choice choice;
  union {
    SAEShapePointSet shapePointSet;
    SAECircle circle;
    SAERegionPointSet regionPointSet;
  } u;
} SAEValidRegion_1;

extern const ASN1CType asn1_type_SAEValidRegion_1[];

typedef struct SAEValidRegion {
  SAEHeadingSlice direction;
  BOOL extent_option;
  SAEExtent extent;
  SAEValidRegion_1 area;
} SAEValidRegion;


extern const ASN1CType asn1_type_SAEValidRegion[];

typedef enum {
  SAEGeographicalPath_1_path,
  SAEGeographicalPath_1_geometry,
  SAEGeographicalPath_1_oldRegion,
} SAEGeographicalPath_1_choice;

typedef struct SAEGeographicalPath_1 {
  SAEGeographicalPath_1_choice choice;
  union {
    SAEOffsetSystem path;
    SAEGeometricProjection geometry;
    SAEValidRegion oldRegion;
  } u;
} SAEGeographicalPath_1;

extern const ASN1CType asn1_type_SAEGeographicalPath_1[];

typedef struct SAERegionalExtension_42 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_42;


extern const ASN1CType asn1_type_SAERegionalExtension_42[];

typedef struct SAEGeographicalPath_2 {
  SAERegionalExtension_42 *tab;
  size_t count;
} SAEGeographicalPath_2;

extern const ASN1CType asn1_type_SAEGeographicalPath_2[];

typedef struct SAEGeographicalPath {
  BOOL name_option;
  SAEDescriptiveName name;
  BOOL id_option;
  SAERoadSegmentReferenceID id;
  BOOL anchor_option;
  SAEPosition3D anchor;
  BOOL laneWidth_option;
  SAELaneWidth laneWidth;
  BOOL directionality_option;
  SAEDirectionOfUse directionality;
  BOOL closedPath_option;
  BOOL closedPath;
  BOOL direction_option;
  SAEHeadingSlice direction;
  BOOL description_option;
  SAEGeographicalPath_1 description;
  BOOL regional_option;
  SAEGeographicalPath_2 regional;
} SAEGeographicalPath;


extern const ASN1CType asn1_type_SAEGeographicalPath[];

typedef struct SAETravelerDataFrame_2 {
  SAEGeographicalPath *tab;
  size_t count;
} SAETravelerDataFrame_2;

extern const ASN1CType asn1_type_SAETravelerDataFrame_2[];

typedef ASN1String SAEITIStextPhrase;

extern const ASN1CType asn1_type_SAEITIStextPhrase[];

typedef enum {
  SAEWorkZone_1_itis,
  SAEWorkZone_1_text,
} SAEWorkZone_1_choice;

typedef struct SAEWorkZone_1 {
  SAEWorkZone_1_choice choice;
  union {
    SAEITIScodes itis;
    SAEITIStextPhrase text;
  } u;
} SAEWorkZone_1;

extern const ASN1CType asn1_type_SAEWorkZone_1[];

typedef struct SAEWorkZone_2 {
  SAEWorkZone_1 item;
} SAEWorkZone_2;


extern const ASN1CType asn1_type_SAEWorkZone_2[];

typedef struct SAEWorkZone {
  SAEWorkZone_2 *tab;
  size_t count;
} SAEWorkZone;

extern const ASN1CType asn1_type_SAEWorkZone[];

typedef enum {
  SAEGenericSignage_1_itis,
  SAEGenericSignage_1_text,
} SAEGenericSignage_1_choice;

typedef struct SAEGenericSignage_1 {
  SAEGenericSignage_1_choice choice;
  union {
    SAEITIScodes itis;
    SAEITIStextPhrase text;
  } u;
} SAEGenericSignage_1;

extern const ASN1CType asn1_type_SAEGenericSignage_1[];

typedef struct SAEGenericSignage_2 {
  SAEGenericSignage_1 item;
} SAEGenericSignage_2;


extern const ASN1CType asn1_type_SAEGenericSignage_2[];

typedef struct SAEGenericSignage {
  SAEGenericSignage_2 *tab;
  size_t count;
} SAEGenericSignage;

extern const ASN1CType asn1_type_SAEGenericSignage[];

typedef enum {
  SAESpeedLimit_1_itis,
  SAESpeedLimit_1_text,
} SAESpeedLimit_1_choice;

typedef struct SAESpeedLimit_1 {
  SAESpeedLimit_1_choice choice;
  union {
    SAEITIScodes itis;
    SAEITIStextPhrase text;
  } u;
} SAESpeedLimit_1;

extern const ASN1CType asn1_type_SAESpeedLimit_1[];

typedef struct SAESpeedLimit_2 {
  SAESpeedLimit_1 item;
} SAESpeedLimit_2;


extern const ASN1CType asn1_type_SAESpeedLimit_2[];

typedef struct SAESpeedLimit {
  SAESpeedLimit_2 *tab;
  size_t count;
} SAESpeedLimit;

extern const ASN1CType asn1_type_SAESpeedLimit[];

typedef enum {
  SAEExitService_1_itis,
  SAEExitService_1_text,
} SAEExitService_1_choice;

typedef struct SAEExitService_1 {
  SAEExitService_1_choice choice;
  union {
    SAEITIScodes itis;
    SAEITIStextPhrase text;
  } u;
} SAEExitService_1;

extern const ASN1CType asn1_type_SAEExitService_1[];

typedef struct SAEExitService_2 {
  SAEExitService_1 item;
} SAEExitService_2;


extern const ASN1CType asn1_type_SAEExitService_2[];

typedef struct SAEExitService {
  SAEExitService_2 *tab;
  size_t count;
} SAEExitService;

extern const ASN1CType asn1_type_SAEExitService[];

typedef enum {
  SAETravelerDataFrame_3_advisory,
  SAETravelerDataFrame_3_workZone,
  SAETravelerDataFrame_3_genericSign,
  SAETravelerDataFrame_3_speedLimit,
  SAETravelerDataFrame_3_exitService,
} SAETravelerDataFrame_3_choice;

typedef struct SAETravelerDataFrame_3 {
  SAETravelerDataFrame_3_choice choice;
  union {
    SAEITIScodesAndText advisory;
    SAEWorkZone workZone;
    SAEGenericSignage genericSign;
    SAESpeedLimit speedLimit;
    SAEExitService exitService;
  } u;
} SAETravelerDataFrame_3;

extern const ASN1CType asn1_type_SAETravelerDataFrame_3[];

typedef ASN1String SAEURL_Short;

extern const ASN1CType asn1_type_SAEURL_Short[];

typedef enum {
  SAETravelerDataFrameNewPartIIIContent_frictionInfo,
} SAETravelerDataFrameNewPartIIIContent_choice;

typedef struct SAETravelerDataFrameNewPartIIIContent {
  SAETravelerDataFrameNewPartIIIContent_choice choice;
  union {
    SAEFrictionInformation frictionInfo;
  } u;
} SAETravelerDataFrameNewPartIIIContent;

extern const ASN1CType asn1_type_SAETravelerDataFrameNewPartIIIContent[];

typedef struct SAETravelerDataFrame {
  SAESSPindex doNotUse1;
  SAETravelerInfoType frameType;
  SAETravelerDataFrame_1 msgId;
  BOOL startYear_option;
  SAEDYear startYear;
  SAEMinuteOfTheYear startTime;
  SAEMinutesDuration durationTime;
  SAESignPriority priority;
  SAESSPindex doNotUse2;
  SAETravelerDataFrame_2 regions;
  SAESSPindex doNotUse3;
  SAESSPindex doNotUse4;
  SAETravelerDataFrame_3 content;
  BOOL url_option;
  SAEURL_Short url;
  BOOL contentNew_option;
  SAETravelerDataFrameNewPartIIIContent contentNew;
} SAETravelerDataFrame;


extern const ASN1CType asn1_type_SAETravelerDataFrame[];

typedef struct SAETravelerDataFrameList {
  SAETravelerDataFrame *tab;
  size_t count;
} SAETravelerDataFrameList;

extern const ASN1CType asn1_type_SAETravelerDataFrameList[];

typedef struct SAERegionalExtension_41 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_41;


extern const ASN1CType asn1_type_SAERegionalExtension_41[];

typedef struct SAETravelerInformation_1 {
  SAERegionalExtension_41 *tab;
  size_t count;
} SAETravelerInformation_1;

extern const ASN1CType asn1_type_SAETravelerInformation_1[];

typedef struct SAETravelerInformation {
  SAEMsgCount msgCnt;
  BOOL timeStamp_option;
  SAEMinuteOfTheYear timeStamp;
  BOOL packetID_option;
  SAEUniqueMSGID packetID;
  BOOL urlB_option;
  SAEURL_Base urlB;
  SAETravelerDataFrameList dataFrames;
  BOOL regional_option;
  SAETravelerInformation_1 regional;
} SAETravelerInformation;


extern const ASN1CType asn1_type_SAETravelerInformation[];

typedef ASN1Null SAETrafficSignalPhaseAndTiming;

extern const ASN1CType asn1_type_SAETrafficSignalPhaseAndTiming[];

typedef struct SAERegionalExtension_46 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_46;


extern const ASN1CType asn1_type_SAERegionalExtension_46[];

typedef struct SAETestMessage00 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_46 regional;
} SAETestMessage00;


extern const ASN1CType asn1_type_SAETestMessage00[];

typedef struct SAERegionalExtension_47 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_47;


extern const ASN1CType asn1_type_SAERegionalExtension_47[];

typedef struct SAETestMessage01 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_47 regional;
} SAETestMessage01;


extern const ASN1CType asn1_type_SAETestMessage01[];

typedef struct SAERegionalExtension_48 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_48;


extern const ASN1CType asn1_type_SAERegionalExtension_48[];

typedef struct SAETestMessage02 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_48 regional;
} SAETestMessage02;


extern const ASN1CType asn1_type_SAETestMessage02[];

typedef struct SAERegionalExtension_49 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_49;


extern const ASN1CType asn1_type_SAERegionalExtension_49[];

typedef struct SAETestMessage03 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_49 regional;
} SAETestMessage03;


extern const ASN1CType asn1_type_SAETestMessage03[];

typedef struct SAERegionalExtension_50 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_50;


extern const ASN1CType asn1_type_SAERegionalExtension_50[];

typedef struct SAETestMessage04 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_50 regional;
} SAETestMessage04;


extern const ASN1CType asn1_type_SAETestMessage04[];

typedef struct SAERegionalExtension_51 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_51;


extern const ASN1CType asn1_type_SAERegionalExtension_51[];

typedef struct SAETestMessage05 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_51 regional;
} SAETestMessage05;


extern const ASN1CType asn1_type_SAETestMessage05[];

typedef struct SAERegionalExtension_52 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_52;


extern const ASN1CType asn1_type_SAERegionalExtension_52[];

typedef struct SAETestMessage06 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_52 regional;
} SAETestMessage06;


extern const ASN1CType asn1_type_SAETestMessage06[];

typedef struct SAERegionalExtension_53 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_53;


extern const ASN1CType asn1_type_SAERegionalExtension_53[];

typedef struct SAETestMessage07 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_53 regional;
} SAETestMessage07;


extern const ASN1CType asn1_type_SAETestMessage07[];

typedef struct SAERegionalExtension_54 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_54;


extern const ASN1CType asn1_type_SAERegionalExtension_54[];

typedef struct SAETestMessage08 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_54 regional;
} SAETestMessage08;


extern const ASN1CType asn1_type_SAETestMessage08[];

typedef struct SAERegionalExtension_55 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_55;


extern const ASN1CType asn1_type_SAERegionalExtension_55[];

typedef struct SAETestMessage09 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_55 regional;
} SAETestMessage09;


extern const ASN1CType asn1_type_SAETestMessage09[];

typedef struct SAERegionalExtension_56 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_56;


extern const ASN1CType asn1_type_SAERegionalExtension_56[];

typedef struct SAETestMessage10 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_56 regional;
} SAETestMessage10;


extern const ASN1CType asn1_type_SAETestMessage10[];

typedef struct SAERegionalExtension_57 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_57;


extern const ASN1CType asn1_type_SAERegionalExtension_57[];

typedef struct SAETestMessage11 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_57 regional;
} SAETestMessage11;


extern const ASN1CType asn1_type_SAETestMessage11[];

typedef struct SAERegionalExtension_58 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_58;


extern const ASN1CType asn1_type_SAERegionalExtension_58[];

typedef struct SAETestMessage12 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_58 regional;
} SAETestMessage12;


extern const ASN1CType asn1_type_SAETestMessage12[];

typedef struct SAERegionalExtension_59 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_59;


extern const ASN1CType asn1_type_SAERegionalExtension_59[];

typedef struct SAETestMessage13 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_59 regional;
} SAETestMessage13;


extern const ASN1CType asn1_type_SAETestMessage13[];

typedef struct SAERegionalExtension_60 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_60;


extern const ASN1CType asn1_type_SAERegionalExtension_60[];

typedef struct SAETestMessage14 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_60 regional;
} SAETestMessage14;


extern const ASN1CType asn1_type_SAETestMessage14[];

typedef struct SAERegionalExtension_61 {
  SAERegionId regionId;
  ASN1OpenType regExtValue;
} SAERegionalExtension_61;


extern const ASN1CType asn1_type_SAERegionalExtension_61[];

typedef struct SAETestMessage15 {
  BOOL header_option;
  SAEHeader header;
  BOOL regional_option;
  SAERegionalExtension_61 regional;
} SAETestMessage15;


extern const ASN1CType asn1_type_SAETestMessage15[];

typedef int SAENTCIPEssAirTemperature;

extern const ASN1CType asn1_type_SAENTCIPEssAirTemperature[];

typedef int SAETemperatureMeasurementStdDev;

extern const ASN1CType asn1_type_SAETemperatureMeasurementStdDev[];

typedef int SAENTCIPEssTemperatureSensorHeight;

extern const ASN1CType asn1_type_SAENTCIPEssTemperatureSensorHeight[];

typedef struct SAENtcipAirTemperature {
  SAENTCIPEssAirTemperature temperature;
  BOOL measurementStdDev_option;
  SAETemperatureMeasurementStdDev measurementStdDev;
  BOOL tempSensorHeight_option;
  SAENTCIPEssTemperatureSensorHeight tempSensorHeight;
} SAENtcipAirTemperature;


extern const ASN1CType asn1_type_SAENtcipAirTemperature[];

typedef int SAENTCIPEssPressureSensorAtmosphericPressure;

extern const ASN1CType asn1_type_SAENTCIPEssPressureSensorAtmosphericPressure[];

typedef int SAEAtmosPressureMeasurementStdDev;

extern const ASN1CType asn1_type_SAEAtmosPressureMeasurementStdDev[];

typedef struct SAENtcipAtmosphericPressure {
  SAENTCIPEssPressureSensorAtmosphericPressure pressure;
  BOOL measurementStdDev_option;
  SAEAtmosPressureMeasurementStdDev measurementStdDev;
} SAENtcipAtmosphericPressure;


extern const ASN1CType asn1_type_SAENtcipAtmosphericPressure[];

typedef int SAENTCIPWindSensorAvgSpeed;

extern const ASN1CType asn1_type_SAENTCIPWindSensorAvgSpeed[];

typedef int SAENTCIPWindSensorAvgDirection;

extern const ASN1CType asn1_type_SAENTCIPWindSensorAvgDirection[];

typedef int SAENTCIPWindSensorSpotSpeed;

extern const ASN1CType asn1_type_SAENTCIPWindSensorSpotSpeed[];

typedef int SAENTCIPWindSensorSpotDirection;

extern const ASN1CType asn1_type_SAENTCIPWindSensorSpotDirection[];

typedef int SAENTCIPWindSensorGustSpeed;

extern const ASN1CType asn1_type_SAENTCIPWindSensorGustSpeed[];

typedef int SAENTCIPWindSensorGustDirection;

extern const ASN1CType asn1_type_SAENTCIPWindSensorGustDirection[];

typedef struct SAENtcipWind {
  BOOL avgSpeed_option;
  SAENTCIPWindSensorAvgSpeed avgSpeed;
  BOOL avgDirection_option;
  SAENTCIPWindSensorAvgDirection avgDirection;
  BOOL currentSpeed_option;
  SAENTCIPWindSensorSpotSpeed currentSpeed;
  BOOL curDirection_option;
  SAENTCIPWindSensorSpotDirection curDirection;
  BOOL gustSpeed_option;
  SAENTCIPWindSensorGustSpeed gustSpeed;
  BOOL gustDirection_option;
  SAENTCIPWindSensorGustDirection gustDirection;
} SAENtcipWind;


extern const ASN1CType asn1_type_SAENtcipWind[];

typedef int SAENTCIPHumiditySensorRelativeHumidity;

extern const ASN1CType asn1_type_SAENTCIPHumiditySensorRelativeHumidity[];

typedef enum SAEDataSourceInfo {
  SAEDataSourceInfo_measured,
  SAEDataSourceInfo_derived,
} SAEDataSourceInfo;

extern const ASN1CType asn1_type_SAEDataSourceInfo[];

typedef struct SAENtcipRelativeHumidity {
  SAENTCIPHumiditySensorRelativeHumidity relHumidity;
  BOOL source_option;
  SAEDataSourceInfo source;
} SAENtcipRelativeHumidity;


extern const ASN1CType asn1_type_SAENtcipRelativeHumidity[];

typedef int SAENTCIPEssDewpointTemp;

extern const ASN1CType asn1_type_SAENTCIPEssDewpointTemp[];

typedef int SAEDewPointTempMeasurementStdDev;

extern const ASN1CType asn1_type_SAEDewPointTempMeasurementStdDev[];

typedef struct SAENtcipDewPoint {
  SAENTCIPEssDewpointTemp dewTemp;
  BOOL source_option;
  SAEDataSourceInfo source;
  BOOL measurementStdDev_option;
  SAEDewPointTempMeasurementStdDev measurementStdDev;
} SAENtcipDewPoint;


extern const ASN1CType asn1_type_SAENtcipDewPoint[];

typedef int SAENTCIPEssSurfaceTemperature;

extern const ASN1CType asn1_type_SAENTCIPEssSurfaceTemperature[];

typedef int SAESurfaceTempMeasurementStdDev;

extern const ASN1CType asn1_type_SAESurfaceTempMeasurementStdDev[];

typedef enum SAENTCIPPavementSensorSurfaceCondition {
  SAENTCIPPavementSensorSurfaceCondition_other,
  SAENTCIPPavementSensorSurfaceCondition_error,
  SAENTCIPPavementSensorSurfaceCondition_dry,
  SAENTCIPPavementSensorSurfaceCondition_moist,
  SAENTCIPPavementSensorSurfaceCondition_chemicallyMoist,
  SAENTCIPPavementSensorSurfaceCondition_wet,
  SAENTCIPPavementSensorSurfaceCondition_chemicallyWet,
  SAENTCIPPavementSensorSurfaceCondition_standingWater,
  SAENTCIPPavementSensorSurfaceCondition_frost,
  SAENTCIPPavementSensorSurfaceCondition_slush,
  SAENTCIPPavementSensorSurfaceCondition_snow,
  SAENTCIPPavementSensorSurfaceCondition_ice,
  SAENTCIPPavementSensorSurfaceCondition_noReport,
} SAENTCIPPavementSensorSurfaceCondition;

extern const ASN1CType asn1_type_SAENTCIPPavementSensorSurfaceCondition[];

typedef int SAENTCIPEssSurfaceIceOrWaterDepth;

extern const ASN1CType asn1_type_SAENTCIPEssSurfaceIceOrWaterDepth[];

typedef struct SAENtcipPavement {
  BOOL surfaceTemp_option;
  SAENTCIPEssSurfaceTemperature surfaceTemp;
  BOOL tempStdDev_option;
  SAESurfaceTempMeasurementStdDev tempStdDev;
  BOOL condition_option;
  SAENTCIPPavementSensorSurfaceCondition condition;
  BOOL moistureDepth_option;
  SAENTCIPEssSurfaceIceOrWaterDepth moistureDepth;
  BOOL roadRoughness_option;
  SAERoadRoughness roadRoughness;
} SAENtcipPavement;


extern const ASN1CType asn1_type_SAENtcipPavement[];

typedef int SAENTCIPEssVisibility;

extern const ASN1CType asn1_type_SAENTCIPEssVisibility[];

typedef struct SAENtcipVisibility {
  SAENTCIPEssVisibility visibility;
} SAENtcipVisibility;


extern const ASN1CType asn1_type_SAENtcipVisibility[];

typedef enum SAENTCIPEssVisibilitySituation {
  SAENTCIPEssVisibilitySituation_other,
  SAENTCIPEssVisibilitySituation_unknown,
  SAENTCIPEssVisibilitySituation_clear,
  SAENTCIPEssVisibilitySituation_fogNotPatchy,
  SAENTCIPEssVisibilitySituation_patchyFog,
  SAENTCIPEssVisibilitySituation_blowingSnow,
  SAENTCIPEssVisibilitySituation_smoke,
  SAENTCIPEssVisibilitySituation_seaSpray,
  SAENTCIPEssVisibilitySituation_vehicleSpray,
  SAENTCIPEssVisibilitySituation_blowingDustOrSand,
  SAENTCIPEssVisibilitySituation_sunGlare,
  SAENTCIPEssVisibilitySituation_swarmsOfInsects,
} SAENTCIPEssVisibilitySituation;

extern const ASN1CType asn1_type_SAENTCIPEssVisibilitySituation[];

typedef struct SAENtcipVisibilitySituation {
  SAENTCIPEssVisibilitySituation situation;
} SAENtcipVisibilitySituation;


extern const ASN1CType asn1_type_SAENtcipVisibilitySituation[];

typedef int SAENTCIPEssCloudSituationV4;

extern const ASN1CType asn1_type_SAENTCIPEssCloudSituationV4[];

typedef struct SAENtcipCloudSituation {
  SAENTCIPEssCloudSituationV4 situation;
} SAENtcipCloudSituation;


extern const ASN1CType asn1_type_SAENtcipCloudSituation[];

typedef enum SAENTCIPPrecipitationSensorPrecipSituation {
  SAENTCIPPrecipitationSensorPrecipSituation_other,
  SAENTCIPPrecipitationSensorPrecipSituation_unknown,
  SAENTCIPPrecipitationSensorPrecipSituation_noPrecipitation,
  SAENTCIPPrecipitationSensorPrecipSituation_unidentifiedSlight,
  SAENTCIPPrecipitationSensorPrecipSituation_unidentifiedModerate,
  SAENTCIPPrecipitationSensorPrecipSituation_unidentifiedHeavy,
  SAENTCIPPrecipitationSensorPrecipSituation_snowSlight,
  SAENTCIPPrecipitationSensorPrecipSituation_snowModerate,
  SAENTCIPPrecipitationSensorPrecipSituation_snowHeavy,
  SAENTCIPPrecipitationSensorPrecipSituation_rainSlight,
  SAENTCIPPrecipitationSensorPrecipSituation_rainModerate,
  SAENTCIPPrecipitationSensorPrecipSituation_rainHeavy,
  SAENTCIPPrecipitationSensorPrecipSituation_frozenPrecipitationSlight,
  SAENTCIPPrecipitationSensorPrecipSituation_frozenPrecipitationModerate,
  SAENTCIPPrecipitationSensorPrecipSituation_frozenPrecipitationHeavy,
} SAENTCIPPrecipitationSensorPrecipSituation;

extern const ASN1CType asn1_type_SAENTCIPPrecipitationSensorPrecipSituation[];

typedef struct SAENtcipPrecipitation {
  SAENTCIPPrecipitationSensorPrecipSituation precipitation;
} SAENtcipPrecipitation;


extern const ASN1CType asn1_type_SAENtcipPrecipitation[];

typedef int SAENTCIPEssTotalRadiationV4;

extern const ASN1CType asn1_type_SAENTCIPEssTotalRadiationV4[];

typedef int SAENTCIPEssTotalRadiationPeriod;

extern const ASN1CType asn1_type_SAENTCIPEssTotalRadiationPeriod[];

typedef struct SAENtcipSolarRadiation {
  SAENTCIPEssTotalRadiationV4 solarRadiation;
  SAENTCIPEssTotalRadiationPeriod measurementPeriod;
} SAENtcipSolarRadiation;


extern const ASN1CType asn1_type_SAENtcipSolarRadiation[];

typedef struct SAENtcipEssData {
  BOOL airTemp_option;
  SAENtcipAirTemperature airTemp;
  BOOL atmosphere_option;
  SAENtcipAtmosphericPressure atmosphere;
  BOOL wind_option;
  SAENtcipWind wind;
  BOOL humidity_option;
  SAENtcipRelativeHumidity humidity;
  BOOL dewpoint_option;
  SAENtcipDewPoint dewpoint;
  BOOL pavement_option;
  SAENtcipPavement pavement;
  BOOL visibility_option;
  SAENtcipVisibility visibility;
  BOOL visSituation_option;
  SAENtcipVisibilitySituation visSituation;
  BOOL cloudSitiation_option;
  SAENtcipCloudSituation cloudSitiation;
  BOOL precipitation_option;
  SAENtcipPrecipitation precipitation;
  BOOL solarRadiation_option;
  SAENtcipSolarRadiation solarRadiation;
} SAENtcipEssData;


extern const ASN1CType asn1_type_SAENtcipEssData[];

typedef struct SAESnapShot {
  SAEFullPositionVector thePosition;
  BOOL safetyExt_option;
  SAEVehicleSafetyExtensions safetyExt;
  BOOL dataSet_option;
  SAEVehicleStatus dataSet;
  BOOL weatherData_option;
  SAENtcipEssData weatherData;
} SAESnapShot;


extern const ASN1CType asn1_type_SAESnapShot[];

typedef int SAENTCIPEssPavementTreatmentLatitude;

extern const ASN1CType asn1_type_SAENTCIPEssPavementTreatmentLatitude[];

typedef int SAENTCIPEssPavementTreatmentLongitude;

extern const ASN1CType asn1_type_SAENTCIPEssPavementTreatmentLongitude[];

typedef ASN1String SAENTCIPEssPavementTreatmentLocation;

extern const ASN1CType asn1_type_SAENTCIPEssPavementTreatmentLocation[];

typedef enum SAENTCIPEssPaveTreatProductType {
  SAENTCIPEssPaveTreatProductType_other,
  SAENTCIPEssPaveTreatProductType_sand,
  SAENTCIPEssPaveTreatProductType_dirt,
  SAENTCIPEssPaveTreatProductType_gravel,
  SAENTCIPEssPaveTreatProductType_cinders,
  SAENTCIPEssPaveTreatProductType_water,
  SAENTCIPEssPaveTreatProductType_enhancedSalts,
  SAENTCIPEssPaveTreatProductType_naCl,
  SAENTCIPEssPaveTreatProductType_caCl,
  SAENTCIPEssPaveTreatProductType_mgCl,
  SAENTCIPEssPaveTreatProductType_cMA,
  SAENTCIPEssPaveTreatProductType_kAC,
  SAENTCIPEssPaveTreatProductType_naFormate,
  SAENTCIPEssPaveTreatProductType_naA,
} SAENTCIPEssPaveTreatProductType;

extern const ASN1CType asn1_type_SAENTCIPEssPaveTreatProductType[];

typedef enum SAENTCIPEssPaveTreatProductForm {
  SAENTCIPEssPaveTreatProductForm_other,
  SAENTCIPEssPaveTreatProductForm_dry,
  SAENTCIPEssPaveTreatProductForm_prewet,
  SAENTCIPEssPaveTreatProductForm_liquid,
} SAENTCIPEssPaveTreatProductForm;

extern const ASN1CType asn1_type_SAENTCIPEssPaveTreatProductForm[];

typedef int SAENTCIPEssPercentProductMix;

extern const ASN1CType asn1_type_SAENTCIPEssPercentProductMix[];

typedef int SAENTCIPEssPaveTreatmentAmount;

extern const ASN1CType asn1_type_SAENTCIPEssPaveTreatmentAmount[];

typedef int SAENTCIPEssPaveTreatmentWidth;

extern const ASN1CType asn1_type_SAENTCIPEssPaveTreatmentWidth[];

typedef struct SAENtcipPavementTreatment {
  SAENTCIPEssPavementTreatmentLatitude latitude;
  SAENTCIPEssPavementTreatmentLongitude longitude;
  SAENTCIPEssPavementTreatmentLocation location;
  BOOL productType_option;
  SAENTCIPEssPaveTreatProductType productType;
  BOOL form_option;
  SAENTCIPEssPaveTreatProductForm form;
  BOOL percentage_option;
  SAENTCIPEssPercentProductMix percentage;
  BOOL amount_option;
  SAENTCIPEssPaveTreatmentAmount amount;
  BOOL width_option;
  SAENTCIPEssPaveTreatmentWidth width;
} SAENtcipPavementTreatment;


extern const ASN1CType asn1_type_SAENtcipPavementTreatment[];

typedef struct SAEWDMSFleetData {
  BOOL pavementTreat_option;
  SAENtcipPavementTreatment pavementTreat;
  BOOL routingAdvice_option;
  SAEITIStext routingAdvice;
} SAEWDMSFleetData;


extern const ASN1CType asn1_type_SAEWDMSFleetData[];

typedef struct SAEVehicleReport {
  SAESnapShot snapShot;
  BOOL wdmsFleetData_option;
  SAEWDMSFleetData wdmsFleetData;
} SAEVehicleReport;


extern const ASN1CType asn1_type_SAEVehicleReport[];

typedef struct SAERoadWeatherUpload_1 {
  SAEVehicleReport *tab;
  size_t count;
} SAERoadWeatherUpload_1;

extern const ASN1CType asn1_type_SAERoadWeatherUpload_1[];

typedef enum {
  SAERoadWeatherUpload_vehicleReport,
  SAERoadWeatherUpload_citizenReport,
} SAERoadWeatherUpload_choice;

typedef struct SAERoadWeatherUpload {
  SAERoadWeatherUpload_choice choice;
  union {
    SAERoadWeatherUpload_1 vehicleReport;
    SAESnapShot citizenReport;
  } u;
} SAERoadWeatherUpload;

extern const ASN1CType asn1_type_SAERoadWeatherUpload[];

typedef struct SAERoadWeatherDownload {
  SAETravelerDataFrameList travelerData;
  BOOL wdmsFleetData_option;
  SAEWDMSFleetData wdmsFleetData;
} SAERoadWeatherDownload;


extern const ASN1CType asn1_type_SAERoadWeatherDownload[];

typedef enum {
  SAERoadWeatherMessage_upload,
  SAERoadWeatherMessage_download,
} SAERoadWeatherMessage_choice;

typedef struct SAERoadWeatherMessage {
  SAERoadWeatherMessage_choice choice;
  union {
    SAERoadWeatherUpload upload;
    SAERoadWeatherDownload download;
  } u;
} SAERoadWeatherMessage;

extern const ASN1CType asn1_type_SAERoadWeatherMessage[];

typedef struct SAEEventIdentifier {
  SAERoadAuthorityID operatorID;
  SAETemporaryID uniqueID;
} SAEEventIdentifier;


extern const ASN1CType asn1_type_SAEEventIdentifier[];

typedef BOOL SAEActivity;

extern const ASN1CType asn1_type_SAEActivity[];

typedef struct SAEEventRecurrence {
  BOOL startTime_option;
  SAEDTime startTime;
  BOOL endTime_option;
  SAEDTime endTime;
  BOOL startDate_option;
  SAEDDate startDate;
  BOOL endDate_option;
  SAEDDate endDate;
  BOOL monday;
  BOOL tuesday;
  BOOL wednesday;
  BOOL thursday;
  BOOL friday;
  BOOL saturday;
  BOOL sunday;
  BOOL exclusion_option;
  BOOL exclusion;
} SAEEventRecurrence;


extern const ASN1CType asn1_type_SAEEventRecurrence[];

typedef struct SAEEventInfo_1 {
  SAEEventRecurrence *tab;
  size_t count;
} SAEEventInfo_1;

extern const ASN1CType asn1_type_SAEEventInfo_1[];

typedef struct SAEEventInfo_2 {
  SAEITISVehicleGroupAffected *tab;
  size_t count;
} SAEEventInfo_2;

extern const ASN1CType asn1_type_SAEEventInfo_2[];

typedef struct SAEEventInfo {
  SAEEventIdentifier eventID;
  SAEMsgCount eventUpdate;
  SAEActivity eventCancellation;
  SAEDDateTime startDateTime;
  BOOL endDateTime_option;
  SAEDDateTime endDateTime;
  BOOL eventRecurrence_option;
  SAEEventInfo_1 eventRecurrence;
  SAEITISgroups causeCode;
  BOOL subCauseCode_option;
  SAEITIScodes subCauseCode;
  BOOL affectedVehicles_option;
  SAEEventInfo_2 affectedVehicles;
} SAEEventInfo;


extern const ASN1CType asn1_type_SAEEventInfo[];

typedef int SAELatOffset;

extern const ASN1CType asn1_type_SAELatOffset[];

typedef int SAELongOffset;

extern const ASN1CType asn1_type_SAELongOffset[];

typedef int SAEElevOffset;

extern const ASN1CType asn1_type_SAEElevOffset[];

typedef struct SAEOffset3D {
  SAELatOffset lat_offset;
  SAELongOffset long_offset;
  BOOL elev_offset_option;
  SAEElevOffset elev_offset;
} SAEOffset3D;


extern const ASN1CType asn1_type_SAEOffset3D[];

typedef enum {
  SAERegionUncertainty_alongPath,
  SAERegionUncertainty_inCoordinateFrame,
} SAERegionUncertainty_choice;

typedef struct SAERegionUncertainty {
  SAERegionUncertainty_choice choice;
  union {
    SAEOffset3D alongPath;
    SAEOffset3D inCoordinateFrame;
  } u;
} SAERegionUncertainty;

extern const ASN1CType asn1_type_SAERegionUncertainty[];

typedef enum SAEReferencePointType {
  SAEReferencePointType_startOfEvent,
  SAEReferencePointType_arbitrary,
} SAEReferencePointType;

extern const ASN1CType asn1_type_SAEReferencePointType[];

typedef int SAEHeadingDeg;

extern const ASN1CType asn1_type_SAEHeadingDeg[];

typedef int SAETolerance;

extern const ASN1CType asn1_type_SAETolerance[];

typedef struct SAEApplicableHeading {
  SAEHeadingDeg heading;
  SAETolerance tolerance;
} SAEApplicableHeading;


extern const ASN1CType asn1_type_SAEApplicableHeading[];

typedef enum {
  SAENodePointLLE_node_3Dabsolute,
  SAENodePointLLE_node_3Doffset,
} SAENodePointLLE_choice;

typedef struct SAENodePointLLE {
  SAENodePointLLE_choice choice;
  union {
    SAEPosition3D node_3Dabsolute;
    SAEOffset3D node_3Doffset;
  } u;
} SAENodePointLLE;

extern const ASN1CType asn1_type_SAENodePointLLE[];

typedef struct SAERSMPolygon {
  SAENodePointLLE *tab;
  size_t count;
} SAERSMPolygon;

extern const ASN1CType asn1_type_SAERSMPolygon[];

typedef enum {
  SAEBroadRegionArea_polygon,
  SAEBroadRegionArea_circle,
} SAEBroadRegionArea_choice;

typedef struct SAEBroadRegionArea {
  SAEBroadRegionArea_choice choice;
  union {
    SAERSMPolygon polygon;
    SAECircle circle;
  } u;
} SAEBroadRegionArea;

extern const ASN1CType asn1_type_SAEBroadRegionArea[];

typedef struct SAEBroadRegion {
  SAEApplicableHeading applicableHeading;
  SAEBroadRegionArea broadArea;
} SAEBroadRegion;


extern const ASN1CType asn1_type_SAEBroadRegion[];

typedef struct SAEPathPoints {
  SAENodePointLLE *tab;
  size_t count;
} SAEPathPoints;

extern const ASN1CType asn1_type_SAEPathPoints[];

typedef struct SAEPath {
  int pathWidth;
  SAEPathPoints pathPoints;
} SAEPath;


extern const ASN1CType asn1_type_SAEPath[];

typedef struct SAEPathList {
  SAEPath *tab;
  size_t count;
} SAEPathList;

extern const ASN1CType asn1_type_SAEPathList[];

typedef enum {
  SAEAreaType_broadRegion,
  SAEAreaType_paths,
} SAEAreaType_choice;

typedef struct SAEAreaType {
  SAEAreaType_choice choice;
  union {
    SAEBroadRegion broadRegion;
    SAEPathList paths;
  } u;
} SAEAreaType;

extern const ASN1CType asn1_type_SAEAreaType[];

typedef struct SAERegionInfo {
  SAEPosition3D referencePoint;
  BOOL locationUncertainty_option;
  SAERegionUncertainty locationUncertainty;
  BOOL referencePointType_option;
  SAEReferencePointType referencePointType;
  BOOL descriptiveName_option;
  SAEDescriptiveName descriptiveName;
  BOOL scale_option;
  SAEZoom scale;
  BOOL approachRegion_option;
  SAEAreaType approachRegion;
} SAERegionInfo;


extern const ASN1CType asn1_type_SAERegionInfo[];

typedef struct SAECommonContainer_1 {
  SAERegionInfo *tab;
  size_t count;
} SAECommonContainer_1;

extern const ASN1CType asn1_type_SAECommonContainer_1[];

typedef struct SAEAudioLink {
  BOOL amChannel_option;
  int amChannel;
  BOOL fmChannel_option;
  int fmChannel;
  BOOL satelliteChannel_option;
  int satelliteChannel;
  BOOL urlChannel_option;
  ASN1String urlChannel;
} SAEAudioLink;


extern const ASN1CType asn1_type_SAEAudioLink[];

typedef struct SAECrossLinking_1 {
  SAEAudioLink *tab;
  size_t count;
} SAECrossLinking_1;

extern const ASN1CType asn1_type_SAECrossLinking_1[];

typedef struct SAEVisualLink {
  BOOL urlLink_option;
  ASN1String urlLink;
} SAEVisualLink;


extern const ASN1CType asn1_type_SAEVisualLink[];

typedef struct SAECrossLinking_2 {
  SAEVisualLink *tab;
  size_t count;
} SAECrossLinking_2;

extern const ASN1CType asn1_type_SAECrossLinking_2[];

typedef struct SAECrossLinking_3 {
  SAEEventIdentifier *tab;
  size_t count;
} SAECrossLinking_3;

extern const ASN1CType asn1_type_SAECrossLinking_3[];

typedef struct SAECrossLinking {
  BOOL audioLinks_option;
  SAECrossLinking_1 audioLinks;
  BOOL visualLink_option;
  SAECrossLinking_2 visualLink;
  BOOL rsmLink_option;
  SAECrossLinking_3 rsmLink;
} SAECrossLinking;


extern const ASN1CType asn1_type_SAECrossLinking[];

typedef struct SAECommonContainer {
  SAEEventInfo eventInfo;
  SAECommonContainer_1 regionInfo;
  BOOL crossLinking_option;
  SAECrossLinking crossLinking;
} SAECommonContainer;


extern const ASN1CType asn1_type_SAECommonContainer[];

typedef struct SAEReducedSpeedZoneContainer {
  SAERegulatorySpeedLimit speedLimit;
  SAERegionInfo rszRegion;
} SAEReducedSpeedZoneContainer;


extern const ASN1CType asn1_type_SAEReducedSpeedZoneContainer[];

typedef int SAERSMLanePosition;

extern const ASN1CType asn1_type_SAERSMLanePosition[];

typedef BOOL SAELaneClosed;

extern const ASN1CType asn1_type_SAELaneClosed[];

typedef struct SAELaneInfo {
  SAERSMLanePosition lanePosition;
  SAELaneClosed laneClosed;
  BOOL laneCloseOffset_option;
  SAEObstacleDistance laneCloseOffset;
} SAELaneInfo;


extern const ASN1CType asn1_type_SAELaneInfo[];

typedef struct SAELaneClosureContainer_1 {
  SAELaneInfo *tab;
  size_t count;
} SAELaneClosureContainer_1;

extern const ASN1CType asn1_type_SAELaneClosureContainer_1[];

typedef struct SAELaneClosureContainer {
  BOOL laneStatus_option;
  SAELaneClosureContainer_1 laneStatus;
  BOOL laneStatusVaries_option;
  SAEActivity laneStatusVaries;
  SAERegionInfo closureRegion;
} SAELaneClosureContainer;


extern const ASN1CType asn1_type_SAELaneClosureContainer[];

typedef int SAERadius;

extern const ASN1CType asn1_type_SAERadius[];

typedef int SAEBankAngle;

extern const ASN1CType asn1_type_SAEBankAngle[];

typedef struct SAECurveContainer {
  SAESpeedAdvice advisorySpeed;
  BOOL surfaceCondition_option;
  SAEFrictionInformation surfaceCondition;
  BOOL minRadius_option;
  SAERadius minRadius;
  BOOL bankAngle_option;
  SAEBankAngle bankAngle;
  BOOL curveRegion_option;
  SAERegionInfo curveRegion;
} SAECurveContainer;


extern const ASN1CType asn1_type_SAECurveContainer[];

typedef enum SAEDynamicInfoContainer_1 {
  SAEDynamicInfoContainer_1_low_priority,
  SAEDynamicInfoContainer_1_medium_priority,
  SAEDynamicInfoContainer_1_high_priority,
  SAEDynamicInfoContainer_1_critical,
} SAEDynamicInfoContainer_1;

extern const ASN1CType asn1_type_SAEDynamicInfoContainer_1[];

typedef ASN1String SAEShortString;

extern const ASN1CType asn1_type_SAEShortString[];

typedef struct SAEDynamicInfoContainer_2 {
  SAEShortString *tab;
  size_t count;
} SAEDynamicInfoContainer_2;

extern const ASN1CType asn1_type_SAEDynamicInfoContainer_2[];

typedef struct SAEDynamicInfoContainer {
  SAEDynamicInfoContainer_1 priority;
  SAEDynamicInfoContainer_2 dmsSignString;
  SAERegionInfo applicableRegion;
} SAEDynamicInfoContainer;


extern const ASN1CType asn1_type_SAEDynamicInfoContainer[];

typedef struct SAEIncidentsContainer_1 {
  SAEITISResponderGroupAffected *tab;
  size_t count;
} SAEIncidentsContainer_1;

extern const ASN1CType asn1_type_SAEIncidentsContainer_1[];

typedef struct SAEIncidentsContainer {
  BOOL responderType_option;
  SAEIncidentsContainer_1 responderType;
  SAERegionInfo incidentLocation;
} SAEIncidentsContainer;


extern const ASN1CType asn1_type_SAEIncidentsContainer[];

typedef struct SAEObstructions {
  SAEPosition3D location;
  BOOL description_option;
  SAEITIScodes description;
} SAEObstructions;


extern const ASN1CType asn1_type_SAEObstructions[];

typedef struct SAESituationalContainer {
  BOOL obstructions_option;
  SAEObstructions obstructions;
  BOOL visibility_option;
  SAENTCIPEssVisibility visibility;
  BOOL peoplePresent_option;
  SAEActivity peoplePresent;
  BOOL anomalousTraffic_option;
  SAEActivity anomalousTraffic;
  SAERegionInfo applicableRegion;
} SAESituationalContainer;


extern const ASN1CType asn1_type_SAESituationalContainer[];

typedef enum {
  SAEContentContainer_rszContainer,
  SAEContentContainer_laneClosureContainer,
  SAEContentContainer_curveContainer,
  SAEContentContainer_dynamicInfoContainer,
  SAEContentContainer_incidentsContainer,
  SAEContentContainer_situationalContainer,
} SAEContentContainer_choice;

typedef struct SAEContentContainer {
  SAEContentContainer_choice choice;
  union {
    SAEReducedSpeedZoneContainer rszContainer;
    SAELaneClosureContainer laneClosureContainer;
    SAECurveContainer curveContainer;
    SAEDynamicInfoContainer dynamicInfoContainer;
    SAEIncidentsContainer incidentsContainer;
    SAESituationalContainer situationalContainer;
  } u;
} SAEContentContainer;

extern const ASN1CType asn1_type_SAEContentContainer[];

typedef struct SAERoadSafetyMessage_1 {
  SAEContentContainer *tab;
  size_t count;
} SAERoadSafetyMessage_1;

extern const ASN1CType asn1_type_SAERoadSafetyMessage_1[];

typedef struct SAERoadSafetyMessage {
  SAECommonContainer commonContainer;
  SAERoadSafetyMessage_1 content;
} SAERoadSafetyMessage;


extern const ASN1CType asn1_type_SAERoadSafetyMessage[];

typedef int SAECCMPartII_Id;

extern const ASN1CType asn1_type_SAECCMPartII_Id[];

typedef struct SAECCMPartIIcontent_1 {
  SAECCMPartII_Id partII_Id;
  ASN1OpenType partII_Value;
} SAECCMPartIIcontent_1;


extern const ASN1CType asn1_type_SAECCMPartIIcontent_1[];

typedef struct SAECooperativeControlMessage_1 {
  SAECCMPartIIcontent_1 *tab;
  size_t count;
} SAECooperativeControlMessage_1;

extern const ASN1CType asn1_type_SAECooperativeControlMessage_1[];

typedef struct SAECooperativeControlMessage {
  SAEBSMcoreData coreData;
  BOOL partII_option;
  SAECooperativeControlMessage_1 partII;
} SAECooperativeControlMessage;


extern const ASN1CType asn1_type_SAECooperativeControlMessage[];

typedef struct SAECCMPARTII_EXT_ID_AND_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Type;
} SAECCMPARTII_EXT_ID_AND_TYPE;


extern const ASN1CType asn1_type_SAECCMPARTII_EXT_ID_AND_TYPE[];

typedef enum SAELongitudinalControlState {
  SAELongitudinalControlState_unavailable,
  SAELongitudinalControlState_manual,
  SAELongitudinalControlState_cc,
  SAELongitudinalControlState_acc,
  SAELongitudinalControlState_caccOne,
  SAELongitudinalControlState_caccMultiple,
  SAELongitudinalControlState_sensorAuto,
  SAELongitudinalControlState_fusedAuto,
  SAELongitudinalControlState_manualOver,
} SAELongitudinalControlState;

extern const ASN1CType asn1_type_SAELongitudinalControlState[];

typedef int SAETimeConstant;

extern const ASN1CType asn1_type_SAETimeConstant[];

typedef struct SAEAccelTimeConstant {
  BOOL accelTimeConst_option;
  SAETimeConstant accelTimeConst;
  BOOL decelTimeConst_option;
  SAETimeConstant decelTimeConst;
} SAEAccelTimeConstant;


extern const ASN1CType asn1_type_SAEAccelTimeConstant[];

typedef int SAESeparationDistance;

extern const ASN1CType asn1_type_SAESeparationDistance[];

typedef BOOL SAEFrontCutIn;

extern const ASN1CType asn1_type_SAEFrontCutIn[];

typedef struct SAELightVehicleCCMExtensions {
  SAELongitudinalControlState longCntrlState;
  BOOL targetId_option;
  SAETemporaryID targetId;
  BOOL accelForecast_option;
  SAEAcceleration accelForecast;
  BOOL accelTimeConst_option;
  SAEAccelTimeConstant accelTimeConst;
  BOOL seperationDist_option;
  SAESeparationDistance seperationDist;
  BOOL frontCutIn_option;
  SAEFrontCutIn frontCutIn;
} SAELightVehicleCCMExtensions;


extern const ASN1CType asn1_type_SAELightVehicleCCMExtensions[];

typedef int SAERoadGrade;

extern const ASN1CType asn1_type_SAERoadGrade[];

typedef int SAEBrakePedalPosition;

extern const ASN1CType asn1_type_SAEBrakePedalPosition[];

typedef int SAEAcceleratorPedalPosition;

extern const ASN1CType asn1_type_SAEAcceleratorPedalPosition[];

typedef int SAETorque;

extern const ASN1CType asn1_type_SAETorque[];

typedef int SAEYaw;

extern const ASN1CType asn1_type_SAEYaw[];

typedef int SAEPitch;

extern const ASN1CType asn1_type_SAEPitch[];

typedef int SAERoll;

extern const ASN1CType asn1_type_SAERoll[];

typedef int SAEPitchRate;

extern const ASN1CType asn1_type_SAEPitchRate[];

typedef int SAERollRate;

extern const ASN1CType asn1_type_SAERollRate[];

typedef struct SAEAxesMovement {
  BOOL yaw_option;
  SAEYaw yaw;
  BOOL pitch_option;
  SAEPitch pitch;
  BOOL roll_option;
  SAERoll roll;
  BOOL yawRate_option;
  SAEYawRate yawRate;
  BOOL pitchRate_option;
  SAEPitchRate pitchRate;
  BOOL rollRate_option;
  SAERollRate rollRate;
} SAEAxesMovement;


extern const ASN1CType asn1_type_SAEAxesMovement[];

typedef int SAETotalMass;

extern const ASN1CType asn1_type_SAETotalMass[];

typedef int SAEMaxAvailableAcceleration;

extern const ASN1CType asn1_type_SAEMaxAvailableAcceleration[];

typedef int SAEMaxAvailableDeceleration;

extern const ASN1CType asn1_type_SAEMaxAvailableDeceleration[];

typedef ASN1BitString SAECCMFaultMode;

extern const ASN1CType asn1_type_SAECCMFaultMode[];

typedef int SAECCMManeuverID;

enum {
  SAECCMManeuverID_unavailable = 0,
  SAECCMManeuverID_stayAtRestManCtl = 1,
  SAECCMManeuverID_stayAtRestAutoLonCtl = 2,
  SAECCMManeuverID_autoSpdCtlFollowRefTrafAccel = 4,
  SAECCMManeuverID_transManToAutoSpdCtl = 5,
  SAECCMManeuverID_stringForm = 6,
  SAECCMManeuverID_autoJoinString = 7,
  SAECCMManeuverID_autoCtl = 8,
  SAECCMManeuverID_increaseGapAutoCtl = 9,
  SAECCMManeuverID_leftLnChgEndString = 10,
  SAECCMManeuverID_rightLnChgEndString = 11,
  SAECCMManeuverID_virtualGapIncDiffLane = 12,
  SAECCMManeuverID_virtualGapRedDiffLane = 13,
  SAECCMManeuverID_emgcyIncInterVehDistToStop = 14,
  SAECCMManeuverID_vehMrgToStringFrmOnramp = 15,
  SAECCMManeuverID_leftLnChgJoinString = 16,
  SAECCMManeuverID_rightLnChgJoinString = 17,
  SAECCMManeuverID_collisionAvoidLnChgOnly = 19,
  SAECCMManeuverID_collisionAvoidLnChgWthSpdRed = 20,
  SAECCMManeuverID_collisionAvoidEmgcyStp = 21,
  SAECCMManeuverID_autoDecelFollowSpdProfile = 28,
  SAECCMManeuverID_stoppingClosedloopVehFollowCtl = 31,
  SAECCMManeuverID_stoppngOpenloopDecelCmd = 32,
  SAECCMManeuverID_brakeToStopManCtl = 33,
  SAECCMManeuverID_incGapContString = 34,
  SAECCMManeuverID_incGapRedSpdToStp = 35,
  SAECCMManeuverID_cruiseCtl = 36,
  SAECCMManeuverID_adapCruiseCtl = 41,
  SAECCMManeuverID_coopAdapCruiseCtl = 42,
  SAECCMManeuverID_manCtl = 46,
  SAECCMManeuverID_coordAutoBrkForStringWthSvcBrkEngBrk = 47,
  SAECCMManeuverID_emgcyBrkForStringOnePlusVehWthSvcBrk = 48,
};

extern const ASN1CType asn1_type_SAECCMManeuverID[];

typedef struct SAEHeavyTruckCCMExtensions {
  SAELongitudinalControlState longCntrlState;
  BOOL targetId_option;
  SAETemporaryID targetId;
  BOOL roadGrade_option;
  SAERoadGrade roadGrade;
  BOOL brakePedalPos_option;
  SAEBrakePedalPosition brakePedalPos;
  BOOL accelPedalPos_option;
  SAEAcceleratorPedalPosition accelPedalPos;
  BOOL desiredSpeed_option;
  SAESpeed desiredSpeed;
  BOOL desiredAccel_option;
  SAEAcceleration desiredAccel;
  BOOL desiredTorque_option;
  SAETorque desiredTorque;
  BOOL desiredTmRetarderTorque_option;
  SAETorque desiredTmRetarderTorque;
  BOOL desiredEngRetarderTorque_option;
  SAETorque desiredEngRetarderTorque;
  BOOL axesMvmt_option;
  SAEAxesMovement axesMvmt;
  BOOL separationDist_option;
  SAESeparationDistance separationDist;
  BOOL totalMass_option;
  SAETotalMass totalMass;
  BOOL maxAvailAccel_option;
  SAEMaxAvailableAcceleration maxAvailAccel;
  BOOL maxAvailDecel_option;
  SAEMaxAvailableDeceleration maxAvailDecel;
  BOOL ccmFaultMode_option;
  SAECCMFaultMode ccmFaultMode;
  BOOL maneuverID_option;
  SAECCMManeuverID maneuverID;
  BOOL frontCutIn_option;
  SAEFrontCutIn frontCutIn;
} SAEHeavyTruckCCMExtensions;


extern const ASN1CType asn1_type_SAEHeavyTruckCCMExtensions[];

typedef ASN1Null SAEPersonalSafetyMessage2;

extern const ASN1CType asn1_type_SAEPersonalSafetyMessage2[];

typedef ASN1Null SAERoadGeometryAndAttributes;

extern const ASN1CType asn1_type_SAERoadGeometryAndAttributes[];

typedef int SAEConfigId;

extern const ASN1CType asn1_type_SAEConfigId[];

typedef struct SAECfgVehicleClass {
  BOOL motorcycles;
  BOOL passengerCars;
  BOOL other2axle4tireSingleUnitVehs;
  BOOL buses;
  BOOL twoAxle6TireSingleUnitTrucks;
  BOOL threeAxleSingleUnitTrucks;
  BOOL fourOrMoreAxleSingleUnitTrucks;
  BOOL fourOrFewerAxleSingleTrailerTrucks;
  BOOL fiveAxleSingleTrailerTrucks;
  BOOL sixOrMoreAxleSingleTrailerTrucks;
  BOOL fiveOrFewerAxleMultiTrailerTrucks;
  BOOL sixAxleMultiTrailerTrucks;
  BOOL sevenOrMoreAxleMultiTrailerTrucks;
} SAECfgVehicleClass;


extern const ASN1CType asn1_type_SAECfgVehicleClass[];

typedef struct SAEConfigDescriptor {
  SAEConfigId identifier;
  BOOL vehClass_option;
  SAECfgVehicleClass vehClass;
  BOOL roadAuthorityID_option;
  SAERoadAuthorityID roadAuthorityID;
  BOOL percentOfResp_option;
  int percentOfResp;
} SAEConfigDescriptor;


extern const ASN1CType asn1_type_SAEConfigDescriptor[];

typedef enum {
  SAECfgInterval_timeInterval,
  SAECfgInterval_distanceInterval,
} SAECfgInterval_choice;

typedef struct SAECfgInterval {
  SAECfgInterval_choice choice;
  union {
    int timeInterval;
    int distanceInterval;
  } u;
} SAECfgInterval;

extern const ASN1CType asn1_type_SAECfgInterval[];

typedef struct SAECfgTransitVehicleData {
  BOOL currNumPasngers_option;
  BOOL currNumPasngers;
  BOOL avgNumPasngers_option;
  BOOL avgNumPasngers;
  BOOL trnstVehSchAdh_option;
  BOOL trnstVehSchAdh;
} SAECfgTransitVehicleData;


extern const ASN1CType asn1_type_SAECfgTransitVehicleData[];

typedef struct SAECfgIntervalEvents {
  SAECfgInterval interval;
  BOOL wiperStatus_option;
  BOOL wiperStatus;
  BOOL vehCount_option;
  BOOL vehCount;
  BOOL weatherData_option;
  BOOL weatherData;
  BOOL transitVehData_option;
  SAECfgTransitVehicleData transitVehData;
  BOOL numOfOccupants_option;
  BOOL numOfOccupants;
} SAECfgIntervalEvents;


extern const ASN1CType asn1_type_SAECfgIntervalEvents[];

typedef struct SAECfgEvents {
  BOOL absActivated_option;
  BOOL absActivated;
  BOOL tractionCtlLoss_option;
  BOOL tractionCtlLoss;
  BOOL stabilityCtlActivated_option;
  BOOL stabilityCtlActivated;
  BOOL hardBraking_option;
  BOOL hardBraking;
  BOOL swerveThreshold_option;
  int swerveThreshold;
} SAECfgEvents;


extern const ASN1CType asn1_type_SAECfgEvents[];

typedef struct SAECfgHysteresis {
  int hysSamples;
  int hysRate;
} SAECfgHysteresis;


extern const ASN1CType asn1_type_SAECfgHysteresis[];

typedef struct SAECfgKinematicEvents {
  SAECfgEvents events;
  BOOL hysteresis_option;
  SAECfgHysteresis hysteresis;
} SAECfgKinematicEvents;


extern const ASN1CType asn1_type_SAECfgKinematicEvents[];

typedef struct SAECfgLowSpeedCriteria {
  int lowSpeedThreshold;
  BOOL lowSpeedTimeThresh_option;
  int lowSpeedTimeThresh;
} SAECfgLowSpeedCriteria;


extern const ASN1CType asn1_type_SAECfgLowSpeedCriteria[];

typedef enum {
  SAECfgEmerAndTransitInfo_emerVehLightBar,
  SAECfgEmerAndTransitInfo_reqTspEvp,
  SAECfgEmerAndTransitInfo_transitVehPassCnt,
  SAECfgEmerAndTransitInfo_transitVehDoor,
} SAECfgEmerAndTransitInfo_choice;

typedef struct SAECfgEmerAndTransitInfo {
  SAECfgEmerAndTransitInfo_choice choice;
  union {
    BOOL emerVehLightBar;
    BOOL reqTspEvp;
    BOOL transitVehPassCnt;
    BOOL transitVehDoor;
  } u;
} SAECfgEmerAndTransitInfo;

extern const ASN1CType asn1_type_SAECfgEmerAndTransitInfo[];

typedef enum SAECfgMsgDictionary {
  SAECfgMsgDictionary_sae,
  SAECfgMsgDictionary_etsi,
  SAECfgMsgDictionary_iso,
} SAECfgMsgDictionary;

extern const ASN1CType asn1_type_SAECfgMsgDictionary[];

typedef int SAEDSRCmsgID;

extern const ASN1CType asn1_type_SAEDSRCmsgID[];

typedef struct SAECfgMsgRecepIndicators_1 {
  SAEDSRCmsgID *tab;
  size_t count;
} SAECfgMsgRecepIndicators_1;

extern const ASN1CType asn1_type_SAECfgMsgRecepIndicators_1[];

typedef struct SAECfgMsgRecepIndicators {
  BOOL msgDictionary_option;
  SAECfgMsgDictionary msgDictionary;
  BOOL messages_option;
  SAECfgMsgRecepIndicators_1 messages;
} SAECfgMsgRecepIndicators;


extern const ASN1CType asn1_type_SAECfgMsgRecepIndicators[];

typedef struct SAECfgVehicleEvents {
  BOOL headLights_option;
  BOOL headLights;
  BOOL fogLights_option;
  BOOL fogLights;
  BOOL hazardLights_option;
  BOOL hazardLights;
  BOOL kinematicEvents_option;
  SAECfgKinematicEvents kinematicEvents;
  BOOL wiperStatusChange_option;
  BOOL wiperStatusChange;
  BOOL lowSpeed_option;
  SAECfgLowSpeedCriteria lowSpeed;
  BOOL resumedSpeed_option;
  int resumedSpeed;
  BOOL vehEntrsExitsRegion_option;
  BOOL vehEntrsExitsRegion;
  BOOL emerVehDetect_option;
  BOOL emerVehDetect;
  BOOL emerAndTransInfo_option;
  SAECfgEmerAndTransitInfo emerAndTransInfo;
  BOOL v2xMsgRecption_option;
  SAECfgMsgRecepIndicators v2xMsgRecption;
  BOOL driverAlertsAndWarnings_option;
  BOOL driverAlertsAndWarnings;
} SAECfgVehicleEvents;


extern const ASN1CType asn1_type_SAECfgVehicleEvents[];

typedef struct SAECfgTrafficSigEncounters_1 {
  SAEIntersectionID *tab;
  size_t count;
} SAECfgTrafficSigEncounters_1;

extern const ASN1CType asn1_type_SAECfgTrafficSigEncounters_1[];

typedef struct SAECfgTrafficSigEncounters {
  BOOL intersections_option;
  SAECfgTrafficSigEncounters_1 intersections;
  BOOL trfcsigApproachDelay_option;
  int trfcsigApproachDelay;
  BOOL trfsigApproachSpeed_option;
  int trfsigApproachSpeed;
  BOOL trfsigArrivalGreen_option;
  BOOL trfsigArrivalGreen;
  BOOL trfsigArrivalRed_option;
  BOOL trfsigArrivalRed;
  BOOL trfsigPedDelay_option;
  int trfsigPedDelay;
  BOOL trfsigSpatMismatch_option;
  BOOL trfsigSpatMismatch;
  BOOL trfsigSpatTimingError_option;
  BOOL trfsigSpatTimingError;
} SAECfgTrafficSigEncounters;


extern const ASN1CType asn1_type_SAECfgTrafficSigEncounters[];

typedef struct SAECfgRoadSignTypes {
  BOOL whiteOnGreen_option;
  BOOL whiteOnGreen;
  BOOL blackOnYellow_option;
  BOOL blackOnYellow;
  BOOL blackOnOrange_option;
  BOOL blackOnOrange;
  BOOL whiteOnRed_option;
  BOOL whiteOnRed;
  BOOL blackOnWhite_option;
  BOOL blackOnWhite;
  BOOL octagon_option;
  BOOL octagon;
  BOOL eqlatTriangle_option;
  BOOL eqlatTriangle;
  BOOL circle_option;
  BOOL circle;
  BOOL pennant_option;
  BOOL pennant;
  BOOL pentagon_option;
  BOOL pentagon;
  BOOL crossbuck_option;
  BOOL crossbuck;
  BOOL diamond_option;
  BOOL diamond;
  BOOL trapezoid_option;
  BOOL trapezoid;
  BOOL other_option;
  BOOL other;
} SAECfgRoadSignTypes;


extern const ASN1CType asn1_type_SAECfgRoadSignTypes[];

typedef struct SAECfgRoadSignInfo {
  SAECfgRoadSignTypes roadsignDetection;
  BOOL lowRoadsignReflect1_option;
  int lowRoadsignReflect1;
  BOOL lowRoadsignReflect2_option;
  int lowRoadsignReflect2;
} SAECfgRoadSignInfo;


extern const ASN1CType asn1_type_SAECfgRoadSignInfo[];

typedef struct SAECfgRoadwayEvents {
  BOOL obstacleDetected;
  BOOL adverseRoadSurface;
  BOOL trafficSigEncounters_option;
  SAECfgTrafficSigEncounters trafficSigEncounters;
  BOOL trfsigLightOut;
  BOOL trfsigRoadGeoMismatch;
  BOOL roadSignInfo_option;
  SAECfgRoadSignInfo roadSignInfo;
  BOOL lowLaneMarkReflect_option;
  int lowLaneMarkReflect;
  BOOL roadsignIncnstncy;
  BOOL laneGeoIncnstncy;
  BOOL incidentDetect;
  BOOL workZoneCharDetect;
  BOOL inclWeatherDetect;
  BOOL railrdCrossActivated;
  BOOL drawBridgeActivated;
} SAECfgRoadwayEvents;


extern const ASN1CType asn1_type_SAECfgRoadwayEvents[];

typedef struct SAECfgCommSysPerfEvents {
  BOOL j2945_1ChanBusyThresh_option;
  int j2945_1ChanBusyThresh;
  BOOL rfDataRsuInfo_option;
  BOOL rfDataRsuInfo;
  BOOL numRsusObservedThresh_option;
  int numRsusObservedThresh;
  BOOL rfV2xJamDetectThresh_option;
  int rfV2xJamDetectThresh;
  BOOL j2945_1VehDensThresh_option;
  int j2945_1VehDensThresh;
  BOOL j2945_1CqiBelowThresh_option;
  int j2945_1CqiBelowThresh;
  BOOL j2945_1TrackErrorThresh_option;
  int j2945_1TrackErrorThresh;
  BOOL gnssHdopExceedsThresh_option;
  int gnssHdopExceedsThresh;
  BOOL gnssSatsBelowThresh_option;
  int gnssSatsBelowThresh;
  BOOL gnssJammingDetect_option;
  BOOL gnssJammingDetect;
} SAECfgCommSysPerfEvents;


extern const ASN1CType asn1_type_SAECfgCommSysPerfEvents[];

typedef enum {
  SAECfgInstantaneousEventTriggers_intervalEvents,
  SAECfgInstantaneousEventTriggers_vehicleEvents,
  SAECfgInstantaneousEventTriggers_roadwayEvents,
  SAECfgInstantaneousEventTriggers_commSysPerfEvents,
} SAECfgInstantaneousEventTriggers_choice;

typedef struct SAECfgInstantaneousEventTriggers {
  SAECfgInstantaneousEventTriggers_choice choice;
  union {
    SAECfgIntervalEvents intervalEvents;
    SAECfgVehicleEvents vehicleEvents;
    SAECfgRoadwayEvents roadwayEvents;
    SAECfgCommSysPerfEvents commSysPerfEvents;
  } u;
} SAECfgInstantaneousEventTriggers;

extern const ASN1CType asn1_type_SAECfgInstantaneousEventTriggers[];

typedef struct SAECfgAveragedTriggers {
  BOOL avgSpeed_option;
  BOOL avgSpeed;
  BOOL avgStopDuration_option;
  BOOL avgStopDuration;
  BOOL avgFuelConsumption_option;
  BOOL avgFuelConsumption;
  BOOL avgEmissions_option;
  BOOL avgEmissions;
  BOOL avgNumOfOccupants_option;
  BOOL avgNumOfOccupants;
} SAECfgAveragedTriggers;


extern const ASN1CType asn1_type_SAECfgAveragedTriggers[];

typedef struct SAECfgStoppedCriteria {
  int stoppedSpeedThreshold;
  int amountOfTimeBelow;
} SAECfgStoppedCriteria;


extern const ASN1CType asn1_type_SAECfgStoppedCriteria[];

typedef struct SAECfgSummaryTriggers {
  BOOL regTravelTime_option;
  BOOL regTravelTime;
  BOOL regVehDistTraveled_option;
  BOOL regVehDistTraveled;
  BOOL regVehTimeTraveled_option;
  BOOL regVehTimeTraveled;
  BOOL fuelConsumption_option;
  BOOL fuelConsumption;
  BOOL totalVehEmissions_option;
  BOOL totalVehEmissions;
  BOOL numOfLowSpeedEvents_option;
  SAECfgLowSpeedCriteria numOfLowSpeedEvents;
  BOOL timeStopped_option;
  SAECfgStoppedCriteria timeStopped;
  BOOL numOfStopped_option;
  SAECfgStoppedCriteria numOfStopped;
  BOOL locOfStops_option;
  BOOL locOfStops;
  BOOL regNumOfVehPassed_option;
  BOOL regNumOfVehPassed;
  BOOL regNumOfSurpassedVeh_option;
  BOOL regNumOfSurpassedVeh;
  BOOL totalMsgsReceived_option;
  SAECfgMsgRecepIndicators totalMsgsReceived;
} SAECfgSummaryTriggers;


extern const ASN1CType asn1_type_SAECfgSummaryTriggers[];

typedef enum {
  SAECfgAveragedAndSummaryTriggers_averagedTriggers,
  SAECfgAveragedAndSummaryTriggers_summaryTriggers,
} SAECfgAveragedAndSummaryTriggers_choice;

typedef struct SAECfgAveragedAndSummaryTriggers {
  SAECfgAveragedAndSummaryTriggers_choice choice;
  union {
    SAECfgAveragedTriggers averagedTriggers;
    SAECfgSummaryTriggers summaryTriggers;
  } u;
} SAECfgAveragedAndSummaryTriggers;

extern const ASN1CType asn1_type_SAECfgAveragedAndSummaryTriggers[];

typedef enum {
  SAEConfigTriggers_instantaneousTriggers,
  SAEConfigTriggers_avgAndSumTriggers,
} SAEConfigTriggers_choice;

typedef struct SAEConfigTriggers {
  SAEConfigTriggers_choice choice;
  union {
    SAECfgInstantaneousEventTriggers instantaneousTriggers;
    SAECfgAveragedAndSummaryTriggers avgAndSumTriggers;
  } u;
} SAEConfigTriggers;

extern const ASN1CType asn1_type_SAEConfigTriggers[];

typedef struct SAECfgEventRecurrence {
  BOOL startTime_option;
  SAEDTime startTime;
  BOOL endTime_option;
  SAEDTime endTime;
  BOOL startDate_option;
  SAEDDate startDate;
  BOOL endDate_option;
  SAEDDate endDate;
  BOOL monday;
  BOOL tuesday;
  BOOL wednesday;
  BOOL thursday;
  BOOL friday;
  BOOL saturday;
  BOOL sunday;
  BOOL exclusion_option;
  BOOL exclusion;
} SAECfgEventRecurrence;


extern const ASN1CType asn1_type_SAECfgEventRecurrence[];

typedef struct SAEConfigTemporalBoundary {
  SAEDDateTime beginTime;
  SAEDDateTime endTime;
  SAECfgEventRecurrence recurring;
} SAEConfigTemporalBoundary;


extern const ASN1CType asn1_type_SAEConfigTemporalBoundary[];

typedef enum {
  SAEConfigBoundary_temporalBoundary,
  SAEConfigBoundary_geoAndDistBoundary,
} SAEConfigBoundary_choice;

typedef struct SAEConfigBoundary {
  SAEConfigBoundary_choice choice;
  union {
    SAEConfigTemporalBoundary temporalBoundary;
    SAEValidRegion geoAndDistBoundary;
  } u;
} SAEConfigBoundary;

extern const ASN1CType asn1_type_SAEConfigBoundary[];

typedef struct SAEProbeDataConfig {
  SAEConfigDescriptor descriptor;
  SAEConfigTriggers triggers;
  int maxAgeOfData;
  BOOL boundary_option;
  SAEConfigBoundary boundary;
} SAEProbeDataConfig;


extern const ASN1CType asn1_type_SAEProbeDataConfig[];

typedef struct SAEProbeDataConfigMessage {
  SAEProbeDataConfig *tab;
  size_t count;
} SAEProbeDataConfigMessage;

extern const ASN1CType asn1_type_SAEProbeDataConfigMessage[];

typedef int SAEStdDev;

extern const ASN1CType asn1_type_SAEStdDev[];

typedef struct SAERptVelocity {
  SAESpeed speed;
  BOOL speedStdDev_option;
  SAEStdDev speedStdDev;
  BOOL heading_option;
  SAEHeading heading;
} SAERptVelocity;


extern const ASN1CType asn1_type_SAERptVelocity[];

typedef struct SAERptDevType {
  BOOL oemOrAftermarket;
  BOOL canOrIvnConnected;
  BOOL mcoCapable_option;
  BOOL mcoCapable;
} SAERptDevType;


extern const ASN1CType asn1_type_SAERptDevType[];

typedef struct SAEReportCharacteristics {
  SAEDDateTime timeStamp;
  SAEPosition3D position;
  SAEPositionalAccuracy posAccuracy;
  SAERptVelocity velocity;
  BOOL vehicleClass_option;
  SAERptVehicleClass vehicleClass;
  BOOL devType_option;
  SAERptDevType devType;
  BOOL vehicleSize_option;
  SAEVehicleSize vehicleSize;
  BOOL vehicleMass_option;
  SAEVehicleMass vehicleMass;
  BOOL vehPassengerCount_option;
  int vehPassengerCount;
} SAEReportCharacteristics;


extern const ASN1CType asn1_type_SAEReportCharacteristics[];

typedef enum SAERptWiperStatus {
  SAERptWiperStatus_off,
  SAERptWiperStatus_low,
  SAERptWiperStatus_medium,
  SAERptWiperStatus_high,
} SAERptWiperStatus;

extern const ASN1CType asn1_type_SAERptWiperStatus[];

typedef struct SAERptVehicleReport {
  SAENtcipEssData *tab;
  size_t count;
} SAERptVehicleReport;

extern const ASN1CType asn1_type_SAERptVehicleReport[];

typedef struct SAERptTransitVehData {
  BOOL currNumPasngers_option;
  int currNumPasngers;
  BOOL avgNumPasngers_option;
  int avgNumPasngers;
  BOOL trnstVehSchAdh_option;
  int trnstVehSchAdh;
} SAERptTransitVehData;


extern const ASN1CType asn1_type_SAERptTransitVehData[];

typedef struct SAERptIntervalEvents {
  BOOL wiperStatus_option;
  SAERptWiperStatus wiperStatus;
  BOOL vehCount_option;
  int vehCount;
  BOOL weatherData_option;
  SAERptVehicleReport weatherData;
  BOOL transitVehData_option;
  SAERptTransitVehData transitVehData;
  BOOL numOfOccupants_option;
  int numOfOccupants;
} SAERptIntervalEvents;


extern const ASN1CType asn1_type_SAERptIntervalEvents[];

typedef enum {
  SAERptEvents_absActive,
  SAERptEvents_tractionCtlLoss,
  SAERptEvents_stabilityCtlActive,
  SAERptEvents_hardBraking,
  SAERptEvents_swerve,
} SAERptEvents_choice;

typedef struct SAERptEvents {
  SAERptEvents_choice choice;
  union {
    BOOL absActive;
    BOOL tractionCtlLoss;
    BOOL stabilityCtlActive;
    BOOL hardBraking;
    BOOL swerve;
  } u;
} SAERptEvents;

extern const ASN1CType asn1_type_SAERptEvents[];

typedef struct SAERptHysteresis {
  SAEDTime time;
  SAEPosition3D position;
  BOOL positionalAccuracy_option;
  SAEPositionalAccuracy positionalAccuracy;
  SAERptVelocity velocity;
} SAERptHysteresis;


extern const ASN1CType asn1_type_SAERptHysteresis[];

typedef struct SAERptHysteresisRecord {
  SAERptHysteresis *tab;
  size_t count;
} SAERptHysteresisRecord;

extern const ASN1CType asn1_type_SAERptHysteresisRecord[];

typedef struct SAERptKinematicEvents {
  SAERptEvents events;
  BOOL hysteresis_option;
  SAERptHysteresisRecord hysteresis;
} SAERptKinematicEvents;


extern const ASN1CType asn1_type_SAERptKinematicEvents[];

typedef enum {
  SAERptDriverAlertsAndWarnings_j2945Slash1Eebl,
  SAERptDriverAlertsAndWarnings_j2945Slash1Fcw,
  SAERptDriverAlertsAndWarnings_j2945Slash1BswLcw,
  SAERptDriverAlertsAndWarnings_j2945Slash1Ima,
  SAERptDriverAlertsAndWarnings_j2945Slash1Lta,
  SAERptDriverAlertsAndWarnings_j2945Slash1Clw,
  SAERptDriverAlertsAndWarnings_redLightViolationWarn,
  SAERptDriverAlertsAndWarnings_emerVehAlert,
  SAERptDriverAlertsAndWarnings_otherAlert,
  SAERptDriverAlertsAndWarnings_otherWarning,
} SAERptDriverAlertsAndWarnings_choice;

typedef struct SAERptDriverAlertsAndWarnings {
  SAERptDriverAlertsAndWarnings_choice choice;
  union {
    uint8_t dummy_field;
  } u;
} SAERptDriverAlertsAndWarnings;

extern const ASN1CType asn1_type_SAERptDriverAlertsAndWarnings[];

typedef enum {
  SAERptVehicleEvents_headLights,
  SAERptVehicleEvents_fogLights,
  SAERptVehicleEvents_hazardLights,
  SAERptVehicleEvents_kinematicEvents,
  SAERptVehicleEvents_wiperStatusChange,
  SAERptVehicleEvents_lowSpeed,
  SAERptVehicleEvents_resumedSpeed,
  SAERptVehicleEvents_vehEntrsExitsRegion,
  SAERptVehicleEvents_emerVehDetect,
  SAERptVehicleEvents_emerVehLightBar,
  SAERptVehicleEvents_reqTspEvp,
  SAERptVehicleEvents_transitVehPassCnt,
  SAERptVehicleEvents_transitVehDoor,
  SAERptVehicleEvents_v2xMsgRecption,
  SAERptVehicleEvents_driverAlertsAndWarnings,
} SAERptVehicleEvents_choice;

typedef struct SAERptVehicleEvents {
  SAERptVehicleEvents_choice choice;
  union {
    SAERptKinematicEvents kinematicEvents;
    SAERptDriverAlertsAndWarnings driverAlertsAndWarnings;
  } u;
} SAERptVehicleEvents;

extern const ASN1CType asn1_type_SAERptVehicleEvents[];

typedef struct SAERptRoadRoughness {
  SAEMeanVariation meanVerticalVariation;
  BOOL verticalVariationStdDev_option;
  SAEStdDev verticalVariationStdDev;
  BOOL meanHorizontalVariation_option;
  SAEMeanVariation meanHorizontalVariation;
  BOOL horizontalVariationStdDev_option;
  SAEStdDev horizontalVariationStdDev;
} SAERptRoadRoughness;


extern const ASN1CType asn1_type_SAERptRoadRoughness[];

typedef enum {
  SAERptTrafficMetrics_trfsigApproachDelay,
  SAERptTrafficMetrics_trfsigApproachSpeed,
  SAERptTrafficMetrics_trfsigArrivalGreen,
  SAERptTrafficMetrics_trfsigArrivalRed,
  SAERptTrafficMetrics_trfsigPedDelay,
  SAERptTrafficMetrics_trfsigSpatMismatch,
  SAERptTrafficMetrics_trfsigSpatTimingError,
} SAERptTrafficMetrics_choice;

typedef struct SAERptTrafficMetrics {
  SAERptTrafficMetrics_choice choice;
  union {
    uint8_t dummy_field;
  } u;
} SAERptTrafficMetrics;

extern const ASN1CType asn1_type_SAERptTrafficMetrics[];

typedef struct SAERptTrafficSigEncounters {
  BOOL intersectionID_option;
  SAEIntersectionID intersectionID;
  SAERptTrafficMetrics trafficMetrics;
} SAERptTrafficSigEncounters;


extern const ASN1CType asn1_type_SAERptTrafficSigEncounters[];

typedef enum {
  SAERptRoadwayEvents_obstacleDetected,
  SAERptRoadwayEvents_adverseRoadSurface,
  SAERptRoadwayEvents_trfsigEncounters,
  SAERptRoadwayEvents_trfsigLightOut,
  SAERptRoadwayEvents_trfsigRoadGeoMismatch,
  SAERptRoadwayEvents_roadsignDetection,
  SAERptRoadwayEvents_lowRoadsignReflect,
  SAERptRoadwayEvents_lowLaneMarkReflect,
  SAERptRoadwayEvents_roadsignIncnstncy,
  SAERptRoadwayEvents_laneGeoIncnstncy,
  SAERptRoadwayEvents_incidentDetect,
  SAERptRoadwayEvents_workZoneCharDetect,
  SAERptRoadwayEvents_inclWeatherDetect,
  SAERptRoadwayEvents_railrdCrossActiv,
  SAERptRoadwayEvents_drawBridgeActiv,
} SAERptRoadwayEvents_choice;

typedef struct SAERptRoadwayEvents {
  SAERptRoadwayEvents_choice choice;
  union {
    SAERptRoadRoughness adverseRoadSurface;
    SAERptTrafficSigEncounters trfsigEncounters;
  } u;
} SAERptRoadwayEvents;

extern const ASN1CType asn1_type_SAERptRoadwayEvents[];

typedef enum {
  SAERptCommSysPerfEvents_j2945_1ChanBusy,
  SAERptCommSysPerfEvents_rfDataRsuInfo,
  SAERptCommSysPerfEvents_numOfRsusObserved,
  SAERptCommSysPerfEvents_rfV2xJamDetect,
  SAERptCommSysPerfEvents_j2945_1VehDens,
  SAERptCommSysPerfEvents_j2945_1CqiBelow,
  SAERptCommSysPerfEvents_j2945_1TrackingError,
  SAERptCommSysPerfEvents_gnssHdopExceeds,
  SAERptCommSysPerfEvents_gnssErrElipse,
  SAERptCommSysPerfEvents_gnssSatsBelow,
  SAERptCommSysPerfEvents_jammingDetect,
} SAERptCommSysPerfEvents_choice;

typedef struct SAERptCommSysPerfEvents {
  SAERptCommSysPerfEvents_choice choice;
  union {
    ASN1String rfDataRsuInfo;
    int numOfRsusObserved;
  } u;
} SAERptCommSysPerfEvents;

extern const ASN1CType asn1_type_SAERptCommSysPerfEvents[];

typedef enum {
  SAERptInstantaneousRecordData_intervalEvents,
  SAERptInstantaneousRecordData_vehEvents,
  SAERptInstantaneousRecordData_roadwayEvents,
  SAERptInstantaneousRecordData_commSysPerfEvents,
} SAERptInstantaneousRecordData_choice;

typedef struct SAERptInstantaneousRecordData {
  SAERptInstantaneousRecordData_choice choice;
  union {
    SAERptIntervalEvents intervalEvents;
    SAERptVehicleEvents vehEvents;
    SAERptRoadwayEvents roadwayEvents;
    SAERptCommSysPerfEvents commSysPerfEvents;
  } u;
} SAERptInstantaneousRecordData;

extern const ASN1CType asn1_type_SAERptInstantaneousRecordData[];

typedef struct SAERptInstantaneousRecord {
  SAEDDateTime timeOfInstantRec;
  SAEPosition3D locOfInstantRec;
  SAEPositionalAccuracy accOfPosition;
  SAERptVelocity velOfInstantRec;
  BOOL record_option;
  SAERptInstantaneousRecordData record;
} SAERptInstantaneousRecord;


extern const ASN1CType asn1_type_SAERptInstantaneousRecord[];

typedef struct SAERptInstantaneousRecords {
  SAERptInstantaneousRecord *tab;
  size_t count;
} SAERptInstantaneousRecords;

extern const ASN1CType asn1_type_SAERptInstantaneousRecords[];

typedef struct SAERptEmissions {
  BOOL hydrocarbons_option;
  int hydrocarbons;
  BOOL co_option;
  int co;
  BOOL co2_option;
  int co2;
  BOOL no_option;
  int no;
  BOOL no2_option;
  int no2;
  BOOL so2_option;
  int so2;
  BOOL o3_option;
  int o3;
  BOOL pm10_option;
  int pm10;
  BOOL pm25_option;
  int pm25;
} SAERptEmissions;


extern const ASN1CType asn1_type_SAERptEmissions[];

typedef struct SAERptAveragedRecord {
  BOOL avgSpeed_option;
  SAESpeed avgSpeed;
  BOOL speedStdDev_option;
  SAEStdDev speedStdDev;
  BOOL avgStopDuration_option;
  int avgStopDuration;
  BOOL avgStopStdDev_option;
  SAEStdDev avgStopStdDev;
  BOOL avgFuelConsumption_option;
  int avgFuelConsumption;
  BOOL avgEmissions_option;
  SAERptEmissions avgEmissions;
  BOOL avgNumOfOccupants_option;
  int avgNumOfOccupants;
} SAERptAveragedRecord;


extern const ASN1CType asn1_type_SAERptAveragedRecord[];

typedef struct SAERptLocOfStops {
  SAEPosition3D locationOfStop;
  SAEPositionalAccuracy locAccOfStop;
  int durationOfStop;
} SAERptLocOfStops;


extern const ASN1CType asn1_type_SAERptLocOfStops[];

typedef struct SAERptSummaryRecord {
  BOOL regTravelTime_option;
  int regTravelTime;
  BOOL regVehDistTraveled_option;
  int regVehDistTraveled;
  BOOL regVehTimeTraveled_option;
  int regVehTimeTraveled;
  BOOL fuelConsumption_option;
  int fuelConsumption;
  BOOL totalVehEmissions_option;
  SAERptEmissions totalVehEmissions;
  BOOL numOfLowSpeedEvents_option;
  int numOfLowSpeedEvents;
  BOOL timeStopped_option;
  int timeStopped;
  BOOL numOfStopped_option;
  int numOfStopped;
  BOOL locOfStops_option;
  SAERptLocOfStops locOfStops;
  BOOL regNumOfVehPassed_option;
  int regNumOfVehPassed;
  BOOL regNumOfSurpassedVeh_option;
  int regNumOfSurpassedVeh;
  BOOL totalMsgsReceived_option;
  int totalMsgsReceived;
} SAERptSummaryRecord;


extern const ASN1CType asn1_type_SAERptSummaryRecord[];

typedef enum {
  SAERptAvgAndSummaryRecordData_averagedRecord,
  SAERptAvgAndSummaryRecordData_summaryRecord,
} SAERptAvgAndSummaryRecordData_choice;

typedef struct SAERptAvgAndSummaryRecordData {
  SAERptAvgAndSummaryRecordData_choice choice;
  union {
    SAERptAveragedRecord averagedRecord;
    SAERptSummaryRecord summaryRecord;
  } u;
} SAERptAvgAndSummaryRecordData;

extern const ASN1CType asn1_type_SAERptAvgAndSummaryRecordData[];

typedef struct SAERptAveragedAndSummaryRecord {
  SAEDDateTime startTime;
  SAEPosition3D startLoc;
  SAEPositionalAccuracy startAccOfPos;
  SAEDDateTime endTime;
  SAEPosition3D endLoc;
  SAEPositionalAccuracy endAccOfPos;
  SAERptAvgAndSummaryRecordData record;
} SAERptAveragedAndSummaryRecord;


extern const ASN1CType asn1_type_SAERptAveragedAndSummaryRecord[];

typedef struct SAEProbeDataReportMessage {
  SAEConfigId configId;
  SAEReportCharacteristics reportChar;
  BOOL roadAuthorityID_option;
  SAERoadAuthorityID roadAuthorityID;
  BOOL instantaneousRecs_option;
  SAERptInstantaneousRecords instantaneousRecs;
  BOOL avgAndSumRec_option;
  SAERptAveragedAndSummaryRecord avgAndSumRec;
} SAEProbeDataReportMessage;


extern const ASN1CType asn1_type_SAEProbeDataReportMessage[];

typedef enum SAEMSCMType {
  SAEMSCMType_maneuverIntent,
  SAEMSCMType_maneuverRequest,
  SAEMSCMType_maneuverResponse,
  SAEMSCMType_maneuverReservation,
  SAEMSCMType_hVManeuverCancellation,
  SAEMSCMType_rVManeuverCancellationRequest,
  SAEMSCMType_emergencyManeuverReservation,
  SAEMSCMType_maneuverExecutionStatus,
} SAEMSCMType;

extern const ASN1CType asn1_type_SAEMSCMType[];

typedef struct SAETemporaryIDList {
  SAETemporaryID *tab;
  size_t count;
} SAETemporaryIDList;

extern const ASN1CType asn1_type_SAETemporaryIDList[];

typedef int SAEMSMManeuverID;

extern const ASN1CType asn1_type_SAEMSMManeuverID[];

typedef ASN1BitString SAETemporaryIDPointer;

extern const ASN1CType asn1_type_SAETemporaryIDPointer[];

typedef int SAEMSCMObjectDistance;

extern const ASN1CType asn1_type_SAEMSCMObjectDistance[];

typedef struct SAEMSCMPositionOffsetXYZ {
  SAEMSCMObjectDistance offsetX;
  SAEMSCMObjectDistance offsetY;
  BOOL offsetZ_option;
  SAEMSCMObjectDistance offsetZ;
} SAEMSCMPositionOffsetXYZ;


extern const ASN1CType asn1_type_SAEMSCMPositionOffsetXYZ[];

typedef struct SAECurrentStateData {
  BOOL executantVehPos_option;
  SAEMSCMPositionOffsetXYZ executantVehPos;
  BOOL executantVehPosConfidence_option;
  SAEPositionConfidenceSet executantVehPosConfidence;
  SAESpeed speed;
  SAEHeading heading;
  BOOL accel4way_option;
  SAEAccelerationSet4Way accel4way;
  SAEVehicleSize size;
} SAECurrentStateData;


extern const ASN1CType asn1_type_SAECurrentStateData[];

typedef enum SAETRRType {
  SAETRRType_tRRType1,
  SAETRRType_tRRType2,
  SAETRRType_tRRType3,
} SAETRRType;

extern const ASN1CType asn1_type_SAETRRType[];

typedef int SAETRRLength;

extern const ASN1CType asn1_type_SAETRRLength[];

typedef enum SAELaneOffset {
  SAELaneOffset_currentLane,
  SAELaneOffset_firstLeftLane,
  SAELaneOffset_firstRightLane,
  SAELaneOffset_secondLeftLane,
  SAELaneOffset_secondRightLane,
  SAELaneOffset_thirdLeftLane,
  SAELaneOffset_thirdRightLane,
} SAELaneOffset;

extern const ASN1CType asn1_type_SAELaneOffset[];

typedef struct SAETRRLocationType1 {
  SAETRRLength tRRLength;
  SAEMSCMPositionOffsetXYZ frontSidePosition;
  SAELaneOffset laneOffset;
  BOOL tRRMovement_option;
  SAESpeed tRRMovement;
} SAETRRLocationType1;


extern const ASN1CType asn1_type_SAETRRLocationType1[];

typedef struct SAESurroundingVehicleInfo {
  SAETemporaryID surroundingVehicleID;
  SAEMSCMPositionOffsetXYZ surroundingVehiclePosition;
  SAEVehicleSize surroundingVehicleSize;
} SAESurroundingVehicleInfo;


extern const ASN1CType asn1_type_SAESurroundingVehicleInfo[];

typedef struct SAETRRLocationType2 {
  SAETRRLength safetyGap;
  BOOL frontSideVehicle_option;
  SAESurroundingVehicleInfo frontSideVehicle;
  BOOL rearSideVehicle_option;
  SAESurroundingVehicleInfo rearSideVehicle;
  BOOL tRRLength_option;
  SAETRRLength tRRLength;
  SAELaneOffset laneOffset;
} SAETRRLocationType2;


extern const ASN1CType asn1_type_SAETRRLocationType2[];

typedef struct SAETRRLocationType3 {
  SAEMSCMPositionOffsetXYZ *tab;
  size_t count;
} SAETRRLocationType3;

extern const ASN1CType asn1_type_SAETRRLocationType3[];

typedef enum {
  SAETRRLocation_tRRLocationType1,
  SAETRRLocation_tRRLocationType2,
  SAETRRLocation_tRRLocationType3,
} SAETRRLocation_choice;

typedef struct SAETRRLocation {
  SAETRRLocation_choice choice;
  union {
    SAETRRLocationType1 tRRLocationType1;
    SAETRRLocationType2 tRRLocationType2;
    SAETRRLocationType3 tRRLocationType3;
  } u;
} SAETRRLocation;

extern const ASN1CType asn1_type_SAETRRLocation[];

typedef struct SAETargetRoadResource {
  SAETRRType tRRType;
  SAETRRLocation tRRLocation;
} SAETargetRoadResource;


extern const ASN1CType asn1_type_SAETargetRoadResource[];

typedef struct SAESubManeuver {
  SAETemporaryID executantVehID;
  SAETemporaryIDPointer affectedVehIDs;
  SAECurrentStateData currentStateData;
  BOOL targetRoadResource_option;
  SAETargetRoadResource targetRoadResource;
  SAEDDateTime startTime;
  SAEDDateTime endTime;
  BOOL minSpeed_option;
  SAESpeed minSpeed;
  BOOL maxSpeed_option;
  SAESpeed maxSpeed;
} SAESubManeuver;


extern const ASN1CType asn1_type_SAESubManeuver[];

typedef struct SAESubManeuverList {
  SAESubManeuver *tab;
  size_t count;
} SAESubManeuverList;

extern const ASN1CType asn1_type_SAESubManeuverList[];

typedef struct SAEManeuver {
  SAESubManeuverList subManeuverList;
} SAEManeuver;


extern const ASN1CType asn1_type_SAEManeuver[];

typedef BOOL SAEResponseFlag;

extern const ASN1CType asn1_type_SAEResponseFlag[];

typedef enum SAEReasonCode {
  SAEReasonCode_unknown,
  SAEReasonCode_unableToConform,
  SAEReasonCode_unwanted,
  SAEReasonCode_unableToUnderstand,
  SAEReasonCode_erroneousBehaviorDetected,
  SAEReasonCode_misbehaviorAttackDetected,
  SAEReasonCode_rVManeuverCancellationRequestIssued,
  SAEReasonCode_sessionIDConflicted,
} SAEReasonCode;

extern const ASN1CType asn1_type_SAEReasonCode[];

typedef enum SAEManeuverExecutionStatus {
  SAEManeuverExecutionStatus_started,
  SAEManeuverExecutionStatus_inProgress,
  SAEManeuverExecutionStatus_completed,
  SAEManeuverExecutionStatus_terminated,
} SAEManeuverExecutionStatus;

extern const ASN1CType asn1_type_SAEManeuverExecutionStatus[];

typedef struct SAEManeuverSharingAndCoordinatingMessage {
  SAEDDateTime mSCMTimestamp;
  BOOL hVPos_option;
  SAEPosition3D hVPos;
  BOOL hVPosXYConf_option;
  SAEPositionalAccuracy hVPosXYConf;
  SAEMSCMType mSCMType;
  SAETemporaryID sourceID;
  BOOL destinationIDs_option;
  SAETemporaryIDList destinationIDs;
  BOOL maneuverID_option;
  SAEMSMManeuverID maneuverID;
  BOOL maneuver_option;
  SAEManeuver maneuver;
  BOOL responseFlag_option;
  SAEResponseFlag responseFlag;
  BOOL reasonCode_option;
  SAEReasonCode reasonCode;
  BOOL maneuverExecutionStatus_option;
  SAEManeuverExecutionStatus maneuverExecutionStatus;
} SAEManeuverSharingAndCoordinatingMessage;


extern const ASN1CType asn1_type_SAEManeuverSharingAndCoordinatingMessage[];

typedef int SAEInt1Unsigned;

extern const ASN1CType asn1_type_SAEInt1Unsigned[];

typedef int SAEInt1Signed;

extern const ASN1CType asn1_type_SAEInt1Signed[];

typedef int SAEInt2Unsigned;

extern const ASN1CType asn1_type_SAEInt2Unsigned[];

typedef int SAEInt2Signed;

extern const ASN1CType asn1_type_SAEInt2Signed[];

typedef int SAEInt3Unsigned;

extern const ASN1CType asn1_type_SAEInt3Unsigned[];

typedef unsigned int SAEInt4Unsigned;

extern const ASN1CType asn1_type_SAEInt4Unsigned[];

typedef int SAEInt4Signed;

extern const ASN1CType asn1_type_SAEInt4Signed[];

typedef ASN1Integer SAEInt8Unsigned;

extern const ASN1CType asn1_type_SAEInt8Unsigned[];

typedef ASN1Integer SAEInt8Signed;

extern const ASN1CType asn1_type_SAEInt8Signed[];

typedef int SAEAccountStatus;

enum {
  SAEAccountStatus_ok = 0,
  SAEAccountStatus_low = 1,
  SAEAccountStatus_empty = 2,
  SAEAccountStatus_negative = 3,
};

extern const ASN1CType asn1_type_SAEAccountStatus[];

typedef SAEInt1Unsigned SAEActualNumberOfPassengers;

extern const ASN1CType asn1_type_SAEActualNumberOfPassengers[];

typedef SAEInt2Signed SAEEcfAltitude;

extern const ASN1CType asn1_type_SAEEcfAltitude[];

typedef SAEInt2Unsigned SAECO2EmissionValue;

#define asn1_type_SAECO2EmissionValue asn1_type_SAEInt2Unsigned

typedef ASN1String SAEContractAuthenticator;

extern const ASN1CType asn1_type_SAEContractAuthenticator[];

typedef SAEInt4Unsigned SAEContractSerialNumber;

extern const ASN1CType asn1_type_SAEContractSerialNumber[];

typedef int SAECopValue;

enum {
  SAECopValue_noEntry = 0,
  SAECopValue_co2class1 = 1,
  SAECopValue_co2class2 = 2,
  SAECopValue_co2class3 = 3,
  SAECopValue_co2class4 = 4,
  SAECopValue_co2class5 = 5,
  SAECopValue_co2class6 = 6,
  SAECopValue_co2class7 = 7,
};

extern const ASN1CType asn1_type_SAECopValue[];

typedef ASN1BitString SAECountryCode;

extern const ASN1CType asn1_type_SAECountryCode[];

typedef int SAEDescriptiveCharacteristics;

enum {
  SAEDescriptiveCharacteristics_noEntry = 0,
};

extern const ASN1CType asn1_type_SAEDescriptiveCharacteristics[];

typedef int SAEDetectionMode;

enum {
  SAEDetectionMode_measured = 0,
  SAEDetectionMode_inferred = 1,
  SAEDetectionMode_lac = 2,
};

extern const ASN1CType asn1_type_SAEDetectionMode[];

typedef int SAEEmissionUnit;

enum {
  SAEEmissionUnit_mgPerKm = 0,
  SAEEmissionUnit_mgPerKwh = 1,
};

extern const ASN1CType asn1_type_SAEEmissionUnit[];

typedef int SAEEngineCharacteristics;

enum {
  SAEEngineCharacteristics_noEntry = 0,
  SAEEngineCharacteristics_noEngine = 1,
  SAEEngineCharacteristics_petrolUnleaded = 2,
  SAEEngineCharacteristics_petrolLeaded = 3,
  SAEEngineCharacteristics_diesel = 4,
  SAEEngineCharacteristics_lpg = 5,
  SAEEngineCharacteristics_battery = 6,
  SAEEngineCharacteristics_solar = 7,
  SAEEngineCharacteristics_hybrid = 8,
  SAEEngineCharacteristics_hydrogen = 9,
  SAEEngineCharacteristics_multiFuel = 10,
  SAEEngineCharacteristics_bivalentPetrolLpg = 11,
  SAEEngineCharacteristics_bivalentPetrolCng = 12,
  SAEEngineCharacteristics_combinedPetrolElectric = 13,
  SAEEngineCharacteristics_cng = 14,
  SAEEngineCharacteristics_lng = 15,
  SAEEngineCharacteristics_combinedDieselElectric = 16,
  SAEEngineCharacteristics_combinedHydrogenElectric = 17,
  SAEEngineCharacteristics_bivalentHydrogenPetrol = 18,
  SAEEngineCharacteristics_bivalentHydrogenPetrolElectricEngine = 19,
  SAEEngineCharacteristics_fuelCellHydrogen = 20,
  SAEEngineCharacteristics_fuelCellPetrol = 21,
  SAEEngineCharacteristics_fuelCellMethanol = 22,
  SAEEngineCharacteristics_fuelCellEthanol = 23,
  SAEEngineCharacteristics_fuelCellDiesel = 24,
  SAEEngineCharacteristics_combinedMultiFuelElectricEngine = 25,
  SAEEngineCharacteristics_combinedCngElectricEngine = 26,
  SAEEngineCharacteristics_combinedLngElectricEngine = 27,
  SAEEngineCharacteristics_petrolEthanol = 28,
  SAEEngineCharacteristics_combinedLpgElectricEngine = 29,
  SAEEngineCharacteristics_hybridPetrolExternalBattery = 30,
  SAEEngineCharacteristics_hybridDieselExternalBattery = 31,
  SAEEngineCharacteristics_hybridLpgExternalBattery = 32,
  SAEEngineCharacteristics_hybridHydrogenExternalBattery = 33,
  SAEEngineCharacteristics_hybridMultiFuelExternalBattery = 34,
  SAEEngineCharacteristics_hybridCngExternalBattery = 35,
  SAEEngineCharacteristics_hybridLngExternalBattery = 36,
  SAEEngineCharacteristics_hybridBivalentHydrogenPetrolExternalBattery = 37,
  SAEEngineCharacteristics_hydrogenCng = 38,
  SAEEngineCharacteristics_hydrogenLng = 39,
  SAEEngineCharacteristics_hybridHydrogenCngExternalBattery = 40,
  SAEEngineCharacteristics_hybridHydrogenLngExternalBattery = 41,
  SAEEngineCharacteristics_ethanol = 42,
  SAEEngineCharacteristics_hybridFuelCellHydrogen = 43,
  SAEEngineCharacteristics_hybridFuelCellHydrogenExternalBattery = 44,
  SAEEngineCharacteristics_dualFuelLngDiesel = 45,
  SAEEngineCharacteristics_electricExternal = 46,
  SAEEngineCharacteristics_biogas = 47,
  SAEEngineCharacteristics_bioDiesel = 48,
  SAEEngineCharacteristics_bioPetrol = 49,
  SAEEngineCharacteristics_bivalentPetrolBiogas = 50,
  SAEEngineCharacteristics_combinedBiogasElectricEngine = 51,
  SAEEngineCharacteristics_dualFuelCngDiesel = 52,
  SAEEngineCharacteristics_other = 255,
};

extern const ASN1CType asn1_type_SAEEngineCharacteristics[];

typedef ASN1String SAEEquipmentIccId;

extern const ASN1CType asn1_type_SAEEquipmentIccId[];

typedef ASN1String SAEEquipmentObuId;

extern const ASN1CType asn1_type_SAEEquipmentObuId[];

typedef ASN1BitString SAEEquipmentStatus;

extern const ASN1CType asn1_type_SAEEquipmentStatus[];

typedef int SAEEuroValue;

enum {
  SAEEuroValue_noEntry = 0,
  SAEEuroValue_euro1 = 1,
  SAEEuroValue_euro2 = 2,
  SAEEuroValue_euro3 = 3,
  SAEEuroValue_euro4 = 4,
  SAEEuroValue_euro5 = 5,
  SAEEuroValue_euro6 = 6,
  SAEEuroValue_euro7 = 7,
  SAEEuroValue_eev = 15,
};

extern const ASN1CType asn1_type_SAEEuroValue[];

typedef int SAEFutureCharacteristics;

enum {
  SAEFutureCharacteristics_noEntry = 0,
  SAEFutureCharacteristics_airSuspension = 1,
};

extern const ASN1CType asn1_type_SAEFutureCharacteristics[];

typedef int SAEIssuerIdentifier;

extern const ASN1CType asn1_type_SAEIssuerIdentifier[];

typedef SAEInt4Signed SAEEcfLatitude;

extern const ASN1CType asn1_type_SAEEcfLatitude[];

typedef int SAEDistanceUnit;

enum {
  SAEDistanceUnit_kilometres = 0,
  SAEDistanceUnit_miles = 1,
  SAEDistanceUnit_metres = 2,
  SAEDistanceUnit_yards = 3,
  SAEDistanceUnit_feet = 4,
  SAEDistanceUnit_decimetres = 5,
  SAEDistanceUnit_quartermetres = 6,
  SAEDistanceUnit_centimeters = 7,
  SAEDistanceUnit_millimeters = 8,
};

extern const ASN1CType asn1_type_SAEDistanceUnit[];

typedef SAEInt2Unsigned SAELocalVehicleClassId;

extern const ASN1CType asn1_type_SAELocalVehicleClassId[];

typedef SAEInt4Unsigned SAELocationClassId;

extern const ASN1CType asn1_type_SAELocationClassId[];

typedef SAEInt4Signed SAEEcfLongitude;

extern const ASN1CType asn1_type_SAEEcfLongitude[];

typedef ASN1String SAEPaymentSecurityData;

extern const ASN1CType asn1_type_SAEPaymentSecurityData[];

typedef ASN1String SAEPayUnit;

extern const ASN1CType asn1_type_SAEPayUnit[];

typedef ASN1String SAEPersonalAccountNumber;

extern const ASN1CType asn1_type_SAEPersonalAccountNumber[];

typedef ASN1String SAEReceiptAuthenticator;

extern const ASN1CType asn1_type_SAEReceiptAuthenticator[];

typedef SAEInt3Unsigned SAEReceiptDistance;

#define asn1_type_SAEReceiptDistance asn1_type_SAEInt3Unsigned

typedef ASN1String SAEResultFin;

extern const ASN1CType asn1_type_SAEResultFin[];

typedef ASN1String SAEReceiptIccId;

extern const ASN1CType asn1_type_SAEReceiptIccId[];

typedef ASN1String SAEReceiptObuId;

extern const ASN1CType asn1_type_SAEReceiptObuId[];

typedef int SAEResultOp;

enum {
  SAEResultOp_correctTransaction = 0,
  SAEResultOp_obeStatusNotAccepted = 1,
  SAEResultOp_equipmentStatusNotAccepted = 2,
  SAEResultOp_contractNotInWhiteList = 3,
  SAEResultOp_contractIdentifierInBlackList = 4,
  SAEResultOp_contractIdentifierNotCorrect = 5,
  SAEResultOp_expiredContract = 6,
  SAEResultOp_contractRestrictionsNotFulfilled = 7,
  SAEResultOp_claimedVehicleCharacteristicsNotValid = 8,
  SAEResultOp_vehicleClassAuthenticationFailed = 9,
  SAEResultOp_entryVehicleClassDifferentFromExitVehicleClass = 10,
  SAEResultOp_entryReceiptMissing = 11,
  SAEResultOp_entryReceiptNotValid = 12,
  SAEResultOp_entryTollStationNotValid = 13,
  SAEResultOp_equipmentNotCertified = 14,
  SAEResultOp_timeDifference = 15,
  SAEResultOp_accessCredentialsNotAccepted = 16,
  SAEResultOp_contractAuthenticatorNotAccepted = 17,
  SAEResultOp_receiptAuthenticatorNotAccepted = 18,
  SAEResultOp_claimedVehicleCharacteristicsMissing = 19,
  SAEResultOp_paymentMeansNotAccepted = 20,
  SAEResultOp_paymentAuthenticatorNotAccepted = 21,
  SAEResultOp_paymentMeansInBlackList = 22,
  SAEResultOp_paymentMeansNotCorrect = 23,
  SAEResultOp_expiredPaymentMeans = 24,
  SAEResultOp_paymentMeansRestrictionsNotFulfilled = 25,
};

extern const ASN1CType asn1_type_SAEResultOp[];

typedef SAEInt3Unsigned SAEReceiptServiceSerialNumber;

#define asn1_type_SAEReceiptServiceSerialNumber asn1_type_SAEInt3Unsigned

typedef ASN1String SAEReceiptText;

extern const ASN1CType asn1_type_SAEReceiptText[];

typedef int SAEStationType;

enum {
  SAEStationType_unspecified = 0,
  SAEStationType_closedEntryWithPayment = 1,
  SAEStationType_closedEntryWithoutPayment = 2,
  SAEStationType_closedTransit = 3,
  SAEStationType_closedExit = 4,
  SAEStationType_closedCredit = 5,
  SAEStationType_mixed = 6,
  SAEStationType_passage = 7,
  SAEStationType_checkpoint = 8,
  SAEStationType_reload = 9,
  SAEStationType_reservedForFutureCENUse1 = 10,
  SAEStationType_reservedForFutureCENUse2 = 11,
  SAEStationType_reservedForFutureCENUse3 = 12,
  SAEStationType_reservedForFutureCENUse4 = 13,
  SAEStationType_privateUse5 = 14,
  SAEStationType_privateUse6 = 15,
};

extern const ASN1CType asn1_type_SAEStationType[];

typedef SAEInt4Unsigned SAETariffClassId;

extern const ASN1CType asn1_type_SAETariffClassId[];

typedef SAEInt4Unsigned SAETime;

#define asn1_type_SAETime asn1_type_SAEInt4Unsigned

typedef SAEInt2Unsigned SAETimeClassId;

extern const ASN1CType asn1_type_SAETimeClassId[];

typedef int SAETimeUnit;

enum {
  SAETimeUnit_seconds = 0,
  SAETimeUnit_minutes = 1,
  SAETimeUnit_hours = 2,
  SAETimeUnit_days = 3,
  SAETimeUnit_months = 4,
};

extern const ASN1CType asn1_type_SAETimeUnit[];

typedef int SAETrailerType;

enum {
  SAETrailerType_notPresent = 0,
  SAETrailerType_trailer = 1,
  SAETrailerType_semitrailer = 2,
};

extern const ASN1CType asn1_type_SAETrailerType[];

typedef int SAETyreConfiguration;

enum {
  SAETyreConfiguration_notSpecified = 0,
  SAETyreConfiguration_singleTyre = 1,
  SAETyreConfiguration_dualTyres = 2,
  SAETyreConfiguration_reservedForUse = 3,
};

extern const ASN1CType asn1_type_SAETyreConfiguration[];

typedef SAEInt1Unsigned SAEUserClassId;

extern const ASN1CType asn1_type_SAEUserClassId[];

typedef ASN1String SAEVehicleAuthenticator;

extern const ASN1CType asn1_type_SAEVehicleAuthenticator[];

typedef SAEInt1Unsigned SAEVehicleClass;

extern const ASN1CType asn1_type_SAEVehicleClass[];

typedef SAEInt2Unsigned SAEVehicleCurrentMaxTrainWeight;

extern const ASN1CType asn1_type_SAEVehicleCurrentMaxTrainWeight[];

typedef SAEInt4Unsigned SAEVehicleTotalDistance;

#define asn1_type_SAEVehicleTotalDistance asn1_type_SAEInt4Unsigned

typedef SAEInt2Unsigned SAEVehicleWeightLaden;

extern const ASN1CType asn1_type_SAEVehicleWeightLaden[];

typedef int SAEWeekday;

enum {
  SAEWeekday_reserved = 0,
  SAEWeekday_monday = 1,
  SAEWeekday_tuesday = 2,
  SAEWeekday_wednesday = 3,
  SAEWeekday_thursday = 4,
  SAEWeekday_friday = 5,
  SAEWeekday_saturday = 6,
  SAEWeekday_sunday = 7,
};

extern const ASN1CType asn1_type_SAEWeekday[];

typedef struct SAEAbsolutePosition2d {
  SAEEcfLongitude gnssLon;
  SAEEcfLatitude gnssLat;
} SAEAbsolutePosition2d;


extern const ASN1CType asn1_type_SAEAbsolutePosition2d[];

typedef struct SAEAbsolutePosition3d {
  SAEEcfLongitude longitude;
  SAEEcfLatitude latitude;
  BOOL altitude_option;
  SAEEcfAltitude altitude;
} SAEAbsolutePosition3d;


extern const ASN1CType asn1_type_SAEAbsolutePosition3d[];

typedef struct SAEAxleWeightLimit {
  SAEInt1Unsigned axleNumber;
  SAEInt2Unsigned maxLadenWeightOnAxle;
} SAEAxleWeightLimit;


extern const ASN1CType asn1_type_SAEAxleWeightLimit[];

typedef struct SAEAxleWeightLimits {
  SAEInt2Unsigned maxLadenweightOnAxle1;
  SAEInt2Unsigned maxLadenweightOnAxle2;
  SAEInt2Unsigned maxLadenweightOnAxle3;
  SAEInt2Unsigned maxLadenweightOnAxle4;
  SAEInt2Unsigned maxLadenweightOnAxle5;
} SAEAxleWeightLimits;


extern const ASN1CType asn1_type_SAEAxleWeightLimits[];

typedef struct SAEDateCompact {
  int year;
  int month;
  int day;
} SAEDateCompact;


extern const ASN1CType asn1_type_SAEDateCompact[];

typedef struct SAEParticulate {
  SAEEmissionUnit unitType;
  int value;
} SAEParticulate;


extern const ASN1CType asn1_type_SAEParticulate[];

typedef struct SAEDieselEmissionValues {
  SAEParticulate particulate;
  SAEInt2Unsigned absorptionCoeff;
} SAEDieselEmissionValues;


extern const ASN1CType asn1_type_SAEDieselEmissionValues[];

typedef struct SAEDriverCharacteristics {
  SAEInt1Unsigned driverClass;
  SAEInt1Unsigned tripPurpose;
} SAEDriverCharacteristics;


extern const ASN1CType asn1_type_SAEDriverCharacteristics[];

typedef struct SAEDistance {
  SAEInt4Unsigned distanceValue;
  SAEDistanceUnit distanceUnit;
} SAEDistance;


extern const ASN1CType asn1_type_SAEDistance[];

typedef struct SAEEcfDuration {
  SAEInt4Unsigned durationValue;
  SAETimeUnit timeUnit;
} SAEEcfDuration;


extern const ASN1CType asn1_type_SAEEcfDuration[];

typedef struct SAEEngineDetails {
  SAEInt2Unsigned engineCapacity;
  SAEInt2Unsigned enginePower;
} SAEEngineDetails;


extern const ASN1CType asn1_type_SAEEngineDetails[];

typedef struct SAEExhaustEmissionValues {
  SAEEmissionUnit unitType;
  int emissionCo;
  SAEInt2Unsigned emissionHc;
  SAEInt2Unsigned emissionNox;
  SAEInt2Unsigned emissionHcNox;
} SAEExhaustEmissionValues;


extern const ASN1CType asn1_type_SAEExhaustEmissionValues[];

typedef struct SAENumberOfAxles {
  int trailerAxles;
  int tractorAxles;
} SAENumberOfAxles;


extern const ASN1CType asn1_type_SAENumberOfAxles[];

typedef struct SAEObeId {
  SAEInt2Unsigned manufacturerId;
  SAEEquipmentObuId equipmentObuId;
} SAEObeId;


extern const ASN1CType asn1_type_SAEObeId[];

typedef struct SAEPassengerCapacity {
  SAEInt1Unsigned numberOfSeats;
  SAEInt1Unsigned numberOfStandingPlaces;
} SAEPassengerCapacity;


extern const ASN1CType asn1_type_SAEPassengerCapacity[];

typedef struct SAEPaymentFee {
  SAEInt2Unsigned paymentFeeAmount;
  SAEPayUnit paymentFeeUnit;
} SAEPaymentFee;


extern const ASN1CType asn1_type_SAEPaymentFee[];

typedef ASN1String SAEGeneralizedTime_Internal;

extern const ASN1CType asn1_type_SAEGeneralizedTime_Internal[];

typedef struct SAEPeriod {
  SAEGeneralizedTime_Internal beginOfPeriod;
  SAEGeneralizedTime_Internal endOfPeriod;
} SAEPeriod;


extern const ASN1CType asn1_type_SAEPeriod[];

typedef struct SAEProvider {
  SAECountryCode countryCode;
  SAEIssuerIdentifier providerIdentifier;
} SAEProvider;


extern const ASN1CType asn1_type_SAEProvider[];

typedef struct SAERelativePosition3d {
  SAEInt2Signed longitude;
  SAEInt2Signed latitude;
  BOOL altitude_option;
  SAEInt2Signed altitude;
} SAERelativePosition3d;


extern const ASN1CType asn1_type_SAERelativePosition3d[];

typedef struct SAESessionClass {
  SAEInt1Unsigned sessionTariffClass;
  SAEInt1Unsigned sessionClaimedClass;
} SAESessionClass;


extern const ASN1CType asn1_type_SAESessionClass[];

typedef struct SAESessionLocation {
  BOOL ascendingKilometrage;
  int laneCodeNumber;
} SAESessionLocation;


extern const ASN1CType asn1_type_SAESessionLocation[];

typedef enum {
  SAESignedValue_positive,
  SAESignedValue_negative,
} SAESignedValue_choice;

typedef struct SAESignedValue {
  SAESignedValue_choice choice;
  union {
    int positive;
    int negative;
  } u;
} SAESignedValue;

extern const ASN1CType asn1_type_SAESignedValue[];

typedef struct SAESoundLevel {
  SAEInt1Unsigned soundStationary;
  SAEInt1Unsigned soundDriveBy;
} SAESoundLevel;


extern const ASN1CType asn1_type_SAESoundLevel[];

typedef struct SAETimeCompact {
  int hours;
  int mins;
  int doubleSecs;
} SAETimeCompact;


extern const ASN1CType asn1_type_SAETimeCompact[];

typedef struct SAETrailerDetails {
  SAETrailerType trailerType;
  int trailerAxles;
} SAETrailerDetails;


extern const ASN1CType asn1_type_SAETrailerDetails[];

typedef struct SAEAxlesWeightLimits {
  SAEAxleWeightLimit *tab;
  size_t count;
} SAEAxlesWeightLimits;

extern const ASN1CType asn1_type_SAEAxlesWeightLimits[];

typedef struct SAEChargeObjectId {
  BOOL chargeObjectOperator_option;
  SAEProvider chargeObjectOperator;
  SAEInt4Unsigned chargeObjectDesignation;
} SAEChargeObjectId;


extern const ASN1CType asn1_type_SAEChargeObjectId[];

typedef struct SAEContractValidity {
  ASN1String contractRestrictions;
  SAEDateCompact contractExpiryDate;
} SAEContractValidity;


extern const ASN1CType asn1_type_SAEContractValidity[];

typedef struct SAEDateAndTime {
  SAEDateCompact timeDate;
  SAETimeCompact timeCompact;
} SAEDateAndTime;


extern const ASN1CType asn1_type_SAEDateAndTime[];

typedef struct SAEEnvironmentalCharacteristics {
  SAEEuroValue euroValue;
  SAECopValue copValue;
} SAEEnvironmentalCharacteristics;


extern const ASN1CType asn1_type_SAEEnvironmentalCharacteristics[];

typedef enum SAELpn_1 {
  SAELpn_1_latinAlphabetNo1,
  SAELpn_1_latinAlphabetNo2,
  SAELpn_1_latinAlphabetNo3,
  SAELpn_1_latinAlphabetNo4,
  SAELpn_1_latinCyrillicAlphabet,
  SAELpn_1_latinArabicAlphabet,
  SAELpn_1_latinGreekAlphabet,
  SAELpn_1_latinHebrewAlphabet,
  SAELpn_1_latinAlphabetNo5,
  SAELpn_1_latinAlphabetNo6,
  SAELpn_1_twoOctetBMP,
  SAELpn_1_fourOctetCanonical,
  SAELpn_1_reservedForUse1,
  SAELpn_1_reservedForUse2,
  SAELpn_1_reservedForUse3,
  SAELpn_1_reservedForUse4,
  SAELpn_1_reservedForUse5,
  SAELpn_1_reservedForUse6,
  SAELpn_1_reservedForUse7,
  SAELpn_1_reservedForUse8,
  SAELpn_1_reservedForUse9,
  SAELpn_1_reservedForUse10,
  SAELpn_1_reservedForUse11,
  SAELpn_1_reservedForUse12,
  SAELpn_1_reservedForUse13,
  SAELpn_1_reservedForUse14,
  SAELpn_1_reservedForUse15,
  SAELpn_1_reservedForUse16,
  SAELpn_1_reservedForUse17,
  SAELpn_1_reservedForUse18,
  SAELpn_1_reservedForUse19,
  SAELpn_1_reservedForUse20,
  SAELpn_1_reservedForUse21,
} SAELpn_1;

extern const ASN1CType asn1_type_SAELpn_1[];

typedef struct SAELpn {
  SAECountryCode countryCode;
  SAELpn_1 alphabetIndicator;
  ASN1String licencePlateNumber;
} SAELpn;


extern const ASN1CType asn1_type_SAELpn[];

typedef struct SAEPaymentMeans {
  SAEPersonalAccountNumber personalAccountNumber;
  SAEDateCompact paymentMeansExpiryDate;
  ASN1String pamentMeansUsageControl;
} SAEPaymentMeans;


extern const ASN1CType asn1_type_SAEPaymentMeans[];

typedef SAESignedValue SAEPaymentMeansBalance;

#define asn1_type_SAEPaymentMeansBalance asn1_type_SAESignedValue

typedef enum {
  SAEPoint_pointIdentifier,
  SAEPoint_absolutePointCoordinates,
  SAEPoint_relativePointCoordinates,
} SAEPoint_choice;

typedef struct SAEPoint {
  SAEPoint_choice choice;
  union {
    SAEInt4Unsigned pointIdentifier;
    SAEAbsolutePosition3d absolutePointCoordinates;
    SAERelativePosition3d relativePointCoordinates;
  } u;
} SAEPoint;

extern const ASN1CType asn1_type_SAEPoint[];

typedef struct SAEPurseBalance {
  SAESignedValue purseValue;
  SAEPayUnit purseUnit;
} SAEPurseBalance;


extern const ASN1CType asn1_type_SAEPurseBalance[];

typedef struct SAETrailerCharacteristics {
  SAETrailerDetails trailerDetails;
  SAEInt2Unsigned trailerMaxLadenWeight;
  SAEInt2Unsigned trailerWeightUnladen;
} SAETrailerCharacteristics;


extern const ASN1CType asn1_type_SAETrailerCharacteristics[];

typedef struct SAEValidityOfContract {
  ASN1String issuerRestrictions;
  SAEDateCompact contractExpiryDate;
} SAEValidityOfContract;


extern const ASN1CType asn1_type_SAEValidityOfContract[];

typedef struct SAEVehicleAxlesNumber {
  SAETyreConfiguration tyreConfiguration;
  SAENumberOfAxles numberOfAxles;
} SAEVehicleAxlesNumber;


extern const ASN1CType asn1_type_SAEVehicleAxlesNumber[];

typedef struct SAEVehicleDimensions {
  SAEInt1Unsigned vehicleLengthOverall;
  SAEInt1Unsigned vehicleHeigthOverall;
  SAEInt1Unsigned vehicleWidthOverall;
} SAEVehicleDimensions;


extern const ASN1CType asn1_type_SAEVehicleDimensions[];

typedef struct SAEVehicleWeightLimits {
  SAEInt2Unsigned vehicleMaxLadenWeight;
  SAEInt2Unsigned vehicleTrainMaximumWeight;
  SAEInt2Unsigned vehicleWeightUnladen;
} SAEVehicleWeightLimits;


extern const ASN1CType asn1_type_SAEVehicleWeightLimits[];

typedef struct SAEEfcContextMark {
  SAEProvider contractProvider;
  ASN1String typeOfContract;
  int contextVersion;
} SAEEfcContextMark;


extern const ASN1CType asn1_type_SAEEfcContextMark[];

typedef struct SAEReceiptContract {
  SAEProvider sessionContractProvider;
  ASN1String sessionTypeOfContract;
  SAEInt4Unsigned sessionContractSerialNumber;
} SAEReceiptContract;


extern const ASN1CType asn1_type_SAEReceiptContract[];

typedef struct SAEReceiptData {
  SAEDateAndTime sessionTime;
  SAEProvider sessionServiceProvider;
  SAEInt2Unsigned locationOfStation;
  SAESessionLocation sessionLocation;
  SAEInt1Unsigned sessionType;
  SAEResultOp sessionResult;
  SAEInt1Unsigned sessionTariffClass;
  SAEInt1Unsigned sessionClaimedClass;
  SAEPaymentFee sessionFee;
  SAEProvider sessionContractProvider;
  ASN1String sessionTypeOfContract;
  int sessionContextVersion;
  ASN1String receiptDataAuthenticator;
} SAEReceiptData;


extern const ASN1CType asn1_type_SAEReceiptData[];

typedef struct SAEReceiptFinancialPart {
  SAEPersonalAccountNumber personalAccountNumber;
  SAEPaymentFee sessionPaymentFee;
  SAEPurseBalance sessionCurrentBalance;
  SAEInt4Unsigned receiptFinancialSerialNumber;
} SAEReceiptFinancialPart;


extern const ASN1CType asn1_type_SAEReceiptFinancialPart[];

typedef struct SAEReceiptServicePart {
  SAEDateAndTime sessionTime;
  SAEProvider sessionServiceProvider;
  int stationLocation;
  ASN1BitString sessionLocation;
  SAEStationType typeOfSession;
  SAEResultOp sessionResultOperational;
  SAEResultFin sessionResultFinancial;
} SAEReceiptServicePart;


extern const ASN1CType asn1_type_SAEReceiptServicePart[];

typedef struct SAEUserId {
  BOOL pan_option;
  SAEPersonalAccountNumber pan;
  BOOL contractSerialNumber_option;
  SAEContractSerialNumber contractSerialNumber;
  BOOL licencePlateNumber_option;
  SAELpn licencePlateNumber;
  BOOL obeId_option;
  SAEObeId obeId;
  BOOL iccId_option;
  SAEEquipmentIccId iccId;
} SAEUserId;


extern const ASN1CType asn1_type_SAEUserId[];

typedef struct SAEVehicleAxles {
  SAEInt1Unsigned vehicleFirstAxleHeight;
  SAEVehicleAxlesNumber vehicleAxlesNumber;
} SAEVehicleAxles;


extern const ASN1CType asn1_type_SAEVehicleAxles[];

typedef struct SAEVehicleSpecificCharacteristics {
  SAEEnvironmentalCharacteristics environmentalCharacteristics;
  SAEEngineCharacteristics engineCharacteristics;
  SAEDescriptiveCharacteristics descriptiveCharacteristics;
  SAEFutureCharacteristics futureCharacteristics;
} SAEVehicleSpecificCharacteristics;


extern const ASN1CType asn1_type_SAEVehicleSpecificCharacteristics[];

typedef struct SAETariffClassDescription {
  SAETariffClassId tariffClassId;
  BOOL localVehicleClassId_option;
  SAELocalVehicleClassId localVehicleClassId;
  BOOL timeClassId_option;
  SAETimeClassId timeClassId;
  BOOL locationClassId_option;
  SAELocationClassId locationClassId;
  BOOL userClassId_option;
  SAEUserClassId userClassId;
} SAETariffClassDescription;


extern const ASN1CType asn1_type_SAETariffClassDescription[];

typedef struct SAEVehicleDescription {
  BOOL vehicleLPNr_option;
  SAELpn vehicleLPNr;
  BOOL axles_option;
  SAEVehicleAxles axles;
  BOOL Class_option;
  SAEVehicleClass Class;
  BOOL dimensions_option;
  SAEVehicleDimensions dimensions;
  BOOL specificCharacteristics_option;
  SAEVehicleSpecificCharacteristics specificCharacteristics;
  BOOL ladenWeight_option;
  SAEVehicleWeightLaden ladenWeight;
  BOOL weightLimits_option;
  SAEVehicleWeightLimits weightLimits;
  BOOL trailerCharacteristics_option;
  SAETrailerCharacteristics trailerCharacteristics;
  BOOL vehicleCurrentMaxTrainWeight_option;
  SAEVehicleCurrentMaxTrainWeight vehicleCurrentMaxTrainWeight;
  BOOL actualNumberOfPassengers_option;
  SAEActualNumberOfPassengers actualNumberOfPassengers;
  BOOL axleWeightLimits_option;
  SAEAxleWeightLimits axleWeightLimits;
  BOOL dieselEmissionValues_option;
  SAEDieselEmissionValues dieselEmissionValues;
  BOOL driverCharacteristics_option;
  SAEDriverCharacteristics driverCharacteristics;
  BOOL engineDetails_option;
  SAEEngineDetails engineDetails;
  BOOL exhaustEmissionValues_option;
  SAEExhaustEmissionValues exhaustEmissionValues;
  BOOL passengerCapacity_option;
  SAEPassengerCapacity passengerCapacity;
  BOOL soundLevel_option;
  SAESoundLevel soundLevel;
} SAEVehicleDescription;


extern const ASN1CType asn1_type_SAEVehicleDescription[];

typedef struct SAEAggregatedSingleTariffClassSession {
  BOOL timePeriodCovered_option;
  SAEPeriod timePeriodCovered;
  BOOL currentTariffClass_option;
  SAETariffClassDescription currentTariffClass;
  BOOL vehicleDescription_option;
  SAEVehicleDescription vehicleDescription;
  BOOL totalDistanceCovered_option;
  SAEDistance totalDistanceCovered;
  BOOL numberOfDetectedEvents_option;
  SAEInt2Unsigned numberOfDetectedEvents;
  BOOL obeStatus_option;
  SAEInt1Unsigned obeStatus;
  BOOL feeExclVat_option;
  SAEPaymentFee feeExclVat;
  BOOL sumVat_option;
  SAEPaymentFee sumVat;
} SAEAggregatedSingleTariffClassSession;


extern const ASN1CType asn1_type_SAEAggregatedSingleTariffClassSession[];

typedef struct SAEDetectedChargeObject {
  SAEChargeObjectId chargeObjectId;
  BOOL subObjectNumber_option;
  SAEInt4Unsigned subObjectNumber;
  BOOL timeWhenUsed_option;
  SAEGeneralizedTime_Internal timeWhenUsed;
  BOOL mileageWhenUsed_option;
  SAEDistance mileageWhenUsed;
  BOOL currentTariffClass_option;
  SAETariffClassDescription currentTariffClass;
  BOOL vehicleDescription_option;
  SAEVehicleDescription vehicleDescription;
  BOOL obeStatus_option;
  SAEInt1Unsigned obeStatus;
  BOOL feeExclVat_option;
  SAEPaymentFee feeExclVat;
  BOOL sumVat_option;
  SAEPaymentFee sumVat;
  BOOL chargeObjDetectionMode_option;
  SAEDetectionMode chargeObjDetectionMode;
} SAEDetectedChargeObject;


extern const ASN1CType asn1_type_SAEDetectedChargeObject[];

typedef enum SAEConfigInfo_1 {
  SAEConfigInfo_1_excluded,
  SAEConfigInfo_1_replacesOtherCharges,
  SAEConfigInfo_1_addedToOtherCharges,
} SAEConfigInfo_1;

extern const ASN1CType asn1_type_SAEConfigInfo_1[];

typedef struct SAEConfigInfo {
  int configID;
  int configVersion;
  SAEDDateTime startDate;
  SAEDDateTime expirationDate;
  SAEConfigInfo_1 configurationFeeType;
} SAEConfigInfo;


extern const ASN1CType asn1_type_SAEConfigInfo[];

typedef enum SAEChargingConfig_1 {
  SAEChargingConfig_1_hourly,
  SAEChargingConfig_1_weekly,
  SAEChargingConfig_1_monthly,
  SAEChargingConfig_1_quarterly,
} SAEChargingConfig_1;

extern const ASN1CType asn1_type_SAEChargingConfig_1[];

typedef struct SAEChargingFees_1 {
  SAEEventRecurrence *tab;
  size_t count;
} SAEChargingFees_1;

extern const ASN1CType asn1_type_SAEChargingFees_1[];

typedef enum SAEVehicleTypes {
  SAEVehicleTypes_motorcycles,
  SAEVehicleTypes_passengerCars,
  SAEVehicleTypes_fourTireSingleUnit,
  SAEVehicleTypes_buses,
  SAEVehicleTypes_twoAxleSixTireSingleUnit,
  SAEVehicleTypes_threeAxleSingleUnit,
  SAEVehicleTypes_fourOrMoreAxleSingleUnit,
  SAEVehicleTypes_fourOrLessAxleSingleTrailer,
  SAEVehicleTypes_fiveAxleTractorSemitrailer,
  SAEVehicleTypes_sixOrMoreAxleSingleTrailer,
  SAEVehicleTypes_fiveOrLessAxleMultiTrailer,
  SAEVehicleTypes_sixAxleMultiTrailer,
  SAEVehicleTypes_sevenOrMoreAxleMultiTrailer,
} SAEVehicleTypes;

extern const ASN1CType asn1_type_SAEVehicleTypes[];

typedef struct SAEOperatorDefined {
  BOOL opDefCharge1_option;
  SAEPaymentFee opDefCharge1;
  BOOL opDefCharge2_option;
  SAEPaymentFee opDefCharge2;
  BOOL opDefCharge3_option;
  SAEPaymentFee opDefCharge3;
  BOOL opDefCharge4_option;
  SAEPaymentFee opDefCharge4;
  BOOL opDefCharge5_option;
  SAEPaymentFee opDefCharge5;
  BOOL opDefCharge6_option;
  SAEPaymentFee opDefCharge6;
  BOOL opDefCharge7_option;
  SAEPaymentFee opDefCharge7;
  BOOL opDefCharge8_option;
  SAEPaymentFee opDefCharge8;
  BOOL opDefCharge9_option;
  SAEPaymentFee opDefCharge9;
  BOOL opDefCharge10_option;
  SAEPaymentFee opDefCharge10;
  BOOL opDefCharge11_option;
  SAEPaymentFee opDefCharge11;
  BOOL opDefCharge12_option;
  SAEPaymentFee opDefCharge12;
  BOOL opDefCharge13_option;
  SAEPaymentFee opDefCharge13;
  BOOL opDefCharge14_option;
  SAEPaymentFee opDefCharge14;
  BOOL opDefCharge15_option;
  SAEPaymentFee opDefCharge15;
  BOOL opDefCharge16_option;
  SAEPaymentFee opDefCharge16;
} SAEOperatorDefined;


extern const ASN1CType asn1_type_SAEOperatorDefined[];

typedef struct SAESpecialCharges {
  BOOL hov2Charge_option;
  SAEPaymentFee hov2Charge;
  BOOL hov3Charge_option;
  SAEPaymentFee hov3Charge;
  BOOL hov4Charge_option;
  SAEPaymentFee hov4Charge;
  BOOL hov5PlusCharge_option;
  SAEPaymentFee hov5PlusCharge;
  BOOL cleanAirCharge_option;
  SAEPaymentFee cleanAirCharge;
  BOOL operatorDefined_option;
  SAEOperatorDefined operatorDefined;
  BOOL engineCharacteristics_option;
  SAEEngineCharacteristics engineCharacteristics;
} SAESpecialCharges;


extern const ASN1CType asn1_type_SAESpecialCharges[];

typedef struct SAEVehTypeCharges {
  SAEVehicleTypes vehType;
  SAEPaymentFee charges;
  BOOL specialCharges_option;
  SAESpecialCharges specialCharges;
} SAEVehTypeCharges;


extern const ASN1CType asn1_type_SAEVehTypeCharges[];

typedef struct SAEVehTypeChargesTable {
  SAEVehTypeCharges *tab;
  size_t count;
} SAEVehTypeChargesTable;

extern const ASN1CType asn1_type_SAEVehTypeChargesTable[];

typedef struct SAEAxlesCharges {
  int axlesLimit;
  SAEPaymentFee axlesCharge;
} SAEAxlesCharges;


extern const ASN1CType asn1_type_SAEAxlesCharges[];

typedef struct SAEAxlesChargesTable {
  SAEAxlesCharges *tab;
  size_t count;
} SAEAxlesChargesTable;

extern const ASN1CType asn1_type_SAEAxlesChargesTable[];

typedef enum SAETotalWeightCharges_1 {
  SAETotalWeightCharges_1_pounds,
  SAETotalWeightCharges_1_kilograms,
} SAETotalWeightCharges_1;

extern const ASN1CType asn1_type_SAETotalWeightCharges_1[];

typedef struct SAETotalWeightCharges {
  int weightLimit;
  SAETotalWeightCharges_1 weightLimitUnits;
  SAEPaymentFee weightCharge;
} SAETotalWeightCharges;


extern const ASN1CType asn1_type_SAETotalWeightCharges[];

typedef enum SAEPerAxleWeightCharges_1 {
  SAEPerAxleWeightCharges_1_pounds,
  SAEPerAxleWeightCharges_1_kilograms,
} SAEPerAxleWeightCharges_1;

extern const ASN1CType asn1_type_SAEPerAxleWeightCharges_1[];

typedef struct SAEPerAxleWeightCharges {
  int totalWeightLimit;
  int maxLadenWeightOnAxle;
  SAEPerAxleWeightCharges_1 weightLimitUnits;
  SAEPaymentFee axleWeightCharge;
} SAEPerAxleWeightCharges;


extern const ASN1CType asn1_type_SAEPerAxleWeightCharges[];

typedef enum {
  SAEWeightCharges_totalWeightCharges,
  SAEWeightCharges_perAxleWeightCharges,
} SAEWeightCharges_choice;

typedef struct SAEWeightCharges {
  SAEWeightCharges_choice choice;
  union {
    SAETotalWeightCharges totalWeightCharges;
    SAEPerAxleWeightCharges perAxleWeightCharges;
  } u;
} SAEWeightCharges;

extern const ASN1CType asn1_type_SAEWeightCharges[];

typedef struct SAEWeightChargesTable {
  SAEWeightCharges *tab;
  size_t count;
} SAEWeightChargesTable;

extern const ASN1CType asn1_type_SAEWeightChargesTable[];

typedef enum {
  SAEChargesTable_vehTypeBased,
  SAEChargesTable_numAxlesBased,
  SAEChargesTable_weightBased,
} SAEChargesTable_choice;

typedef struct SAEChargesTable {
  SAEChargesTable_choice choice;
  union {
    SAEVehTypeChargesTable vehTypeBased;
    SAEAxlesChargesTable numAxlesBased;
    SAEWeightChargesTable weightBased;
  } u;
} SAEChargesTable;

extern const ASN1CType asn1_type_SAEChargesTable[];

typedef enum SAEDriven {
  SAEDriven_perMin,
  SAEDriven_perHour,
  SAEDriven_perDay,
  SAEDriven_perDistMile,
  SAEDriven_perDistKilo,
} SAEDriven;

extern const ASN1CType asn1_type_SAEDriven[];

typedef enum SAEParked {
  SAEParked_perMin,
  SAEParked_perHour,
  SAEParked_perDay,
} SAEParked;

extern const ASN1CType asn1_type_SAEParked[];

typedef enum {
  SAEChargingUnits_driven,
  SAEChargingUnits_parked,
} SAEChargingUnits_choice;

typedef struct SAEChargingUnits {
  SAEChargingUnits_choice choice;
  union {
    SAEDriven driven;
    SAEParked parked;
  } u;
} SAEChargingUnits;

extern const ASN1CType asn1_type_SAEChargingUnits[];

typedef struct SAEChargingFees {
  BOOL chargingSchedule_option;
  SAEChargingFees_1 chargingSchedule;
  SAEChargesTable chargesTable;
  SAEChargingUnits chargingUnits;
} SAEChargingFees;


extern const ASN1CType asn1_type_SAEChargingFees[];

typedef struct SAEPrimaryRegionState {
  ASN1String usCanMexState;
  BOOL chargingFees_option;
  SAEChargingFees chargingFees;
} SAEPrimaryRegionState;


extern const ASN1CType asn1_type_SAEPrimaryRegionState[];

typedef enum {
  SAEPrimaryRegionChargingInfo_1_state,
} SAEPrimaryRegionChargingInfo_1_choice;

typedef struct SAEPrimaryRegionChargingInfo_1 {
  SAEPrimaryRegionChargingInfo_1_choice choice;
  union {
    SAEPrimaryRegionState state;
  } u;
} SAEPrimaryRegionChargingInfo_1;

extern const ASN1CType asn1_type_SAEPrimaryRegionChargingInfo_1[];

typedef struct SAEPrimaryRegionChargingInfo {
  SAECountryCode primaryRegionCountry;
  SAEPrimaryRegionChargingInfo_1 chargingPrimaryRegion;
} SAEPrimaryRegionChargingInfo;


extern const ASN1CType asn1_type_SAEPrimaryRegionChargingInfo[];

typedef struct SAESubRegionChargingInfo {
  ASN1ObjectIdentifier subRegion;
  SAEChargingFees chargingFees;
} SAESubRegionChargingInfo;


extern const ASN1CType asn1_type_SAESubRegionChargingInfo[];

typedef struct SAEChargingConfig_2 {
  SAESubRegionChargingInfo *tab;
  size_t count;
} SAEChargingConfig_2;

extern const ASN1CType asn1_type_SAEChargingConfig_2[];

typedef struct SAEArea {
  ASN1ObjectIdentifier areaID;
  SAEValidRegion chargingArea;
  SAEChargingFees chargingFees;
} SAEArea;


extern const ASN1CType asn1_type_SAEArea[];

typedef struct SAELaneChargesTable {
  SAELaneID laneId;
  SAEChargesTable chargesTable;
} SAELaneChargesTable;


extern const ASN1CType asn1_type_SAELaneChargesTable[];

typedef struct SAETollChargesTable_1 {
  SAELaneChargesTable *tab;
  size_t count;
} SAETollChargesTable_1;

extern const ASN1CType asn1_type_SAETollChargesTable_1[];

typedef int SAETollPointID;

extern const ASN1CType asn1_type_SAETollPointID[];

typedef struct SAEExitInfo {
  int exitNumber;
  BOOL exitLetter_option;
  int exitLetter;
  BOOL tollPointID_option;
  SAETollPointID tollPointID;
} SAEExitInfo;


extern const ASN1CType asn1_type_SAEExitInfo[];

typedef struct SAEEntryChargesTable {
  SAEExitInfo exitInfo;
  SAEChargesTable chargesTable;
} SAEEntryChargesTable;


extern const ASN1CType asn1_type_SAEEntryChargesTable[];

typedef struct SAEExitChargesTable {
  BOOL entryInfo_option;
  SAETollPointID entryInfo;
  SAEChargesTable chargesTable;
} SAEExitChargesTable;


extern const ASN1CType asn1_type_SAEExitChargesTable[];

typedef enum {
  SAEClosedNetworkChargesTable_entryChargesTable,
  SAEClosedNetworkChargesTable_exitChargesTable,
} SAEClosedNetworkChargesTable_choice;

typedef struct SAEClosedNetworkChargesTable {
  SAEClosedNetworkChargesTable_choice choice;
  union {
    SAEEntryChargesTable entryChargesTable;
    SAEExitChargesTable exitChargesTable;
  } u;
} SAEClosedNetworkChargesTable;

extern const ASN1CType asn1_type_SAEClosedNetworkChargesTable[];

typedef struct SAETollChargesTable_2 {
  SAEClosedNetworkChargesTable *tab;
  size_t count;
} SAETollChargesTable_2;

extern const ASN1CType asn1_type_SAETollChargesTable_2[];

typedef struct SAETimeChargesTable {
  int maxTime;
  SAEChargesTable chargesTable;
} SAETimeChargesTable;


extern const ASN1CType asn1_type_SAETimeChargesTable[];

typedef enum {
  SAETollChargesTable_3_pointCharges,
  SAETollChargesTable_3_perLaneCharges,
  SAETollChargesTable_3_closedNetworkCharges,
  SAETollChargesTable_3_timeBasedCharges,
} SAETollChargesTable_3_choice;

typedef struct SAETollChargesTable_3 {
  SAETollChargesTable_3_choice choice;
  union {
    SAEChargesTable pointCharges;
    SAETollChargesTable_1 perLaneCharges;
    SAETollChargesTable_2 closedNetworkCharges;
    SAETimeChargesTable timeBasedCharges;
  } u;
} SAETollChargesTable_3;

extern const ASN1CType asn1_type_SAETollChargesTable_3[];

typedef struct SAETollChargesTable {
  SAETollChargesTable_3 tollTypeCharge;
} SAETollChargesTable;


extern const ASN1CType asn1_type_SAETollChargesTable[];

typedef struct SAETollChargerInfo {
  ASN1ObjectIdentifier tollChargerId;
  SAETollPointID tollPointId;
  BOOL descriptiveName_option;
  SAEDescriptiveName descriptiveName;
} SAETollChargerInfo;


extern const ASN1CType asn1_type_SAETollChargerInfo[];

typedef struct SAETumInstructions {
  int maxNumOfLocTimeStamps;
  int locTimeStampRate;
} SAETumInstructions;


extern const ASN1CType asn1_type_SAETumInstructions[];

typedef struct SAETollPointMap_1 {
  SAEGenericLane *tab;
  size_t count;
} SAETollPointMap_1;

extern const ASN1CType asn1_type_SAETollPointMap_1[];

typedef struct SAETollPointMap_2 {
  SAEGenericLane *tab;
  size_t count;
} SAETollPointMap_2;

extern const ASN1CType asn1_type_SAETollPointMap_2[];

typedef struct SAETollPointMap {
  int revisionNum;
  SAEPosition3D referencePoint;
  SAERegulatorySpeedLimit speedLimit;
  SAELaneWidth laneWidth;
  SAETollPointMap_1 approachLanesMap;
  SAETollPointMap_2 tollZoneLanesMap;
} SAETollPointMap;


extern const ASN1CType asn1_type_SAETollPointMap[];

typedef struct SAEAckPolicy {
  int timeout;
  int numOfRetries;
} SAEAckPolicy;


extern const ASN1CType asn1_type_SAEAckPolicy[];

typedef struct SAETollAdvertisementInfo {
  SAEMsgCount tamSequenceNum;
  int totalTams;
  int tamNum;
  SAETollChargerInfo tollChargerInfo;
  SAEDDateTime timestamp;
  BOOL tumInstructions_option;
  SAETumInstructions tumInstructions;
  SAETollPointMap tollPointMap;
  ASN1String tumPublicKey;
  SAEAckPolicy ackPolicy;
  BOOL lastTollPtDataReq_option;
  BOOL lastTollPtDataReq;
} SAETollAdvertisementInfo;


extern const ASN1CType asn1_type_SAETollAdvertisementInfo[];

typedef struct SAETollAdvertisementMessage {
  SAETollChargesTable tollChargesTable;
  BOOL tollAdvInfo_option;
  SAETollAdvertisementInfo tollAdvInfo;
} SAETollAdvertisementMessage;


extern const ASN1CType asn1_type_SAETollAdvertisementMessage[];

typedef struct SAESegment_1 {
  SAETollAdvertisementMessage *tab;
  size_t count;
} SAESegment_1;

extern const ASN1CType asn1_type_SAESegment_1[];

typedef struct SAESegment {
  ASN1ObjectIdentifier segmentID;
  SAESegment_1 chargingSegment;
  BOOL chargingUnits_option;
  SAEChargingUnits chargingUnits;
} SAESegment;


extern const ASN1CType asn1_type_SAESegment[];

typedef enum {
  SAEChargingAreaOrSegment_area,
  SAEChargingAreaOrSegment_segment,
} SAEChargingAreaOrSegment_choice;

typedef struct SAEChargingAreaOrSegment {
  SAEChargingAreaOrSegment_choice choice;
  union {
    SAEArea area;
    SAESegment segment;
  } u;
} SAEChargingAreaOrSegment;

extern const ASN1CType asn1_type_SAEChargingAreaOrSegment[];

typedef struct SAEAreaOrSegmentChargingInfo_1 {
  SAEChargingAreaOrSegment *tab;
  size_t count;
} SAEAreaOrSegmentChargingInfo_1;

extern const ASN1CType asn1_type_SAEAreaOrSegmentChargingInfo_1[];

typedef struct SAEAreaOrSegmentChargingInfo {
  SAEAreaOrSegmentChargingInfo_1 chargingAreaOrSegment;
} SAEAreaOrSegmentChargingInfo;


extern const ASN1CType asn1_type_SAEAreaOrSegmentChargingInfo[];

typedef struct SAEChargingConfig {
  SAEConfigInfo configInfo;
  SAEChargingConfig_1 reportSched;
  SAEPrimaryRegionChargingInfo byPrimaryRegion;
  BOOL bySubRegion_option;
  SAEChargingConfig_2 bySubRegion;
  BOOL byAreaOrSegment_option;
  SAEAreaOrSegmentChargingInfo byAreaOrSegment;
} SAEChargingConfig;


extern const ASN1CType asn1_type_SAEChargingConfig[];

typedef struct SAEChargerInfo {
  ASN1ObjectIdentifier chargerID;
  BOOL descriptiveName_option;
  SAEDescriptiveName descriptiveName;
  BOOL timeStamp_option;
  SAEDDateTime timeStamp;
  SAEChargingConfig chargingConfig;
} SAEChargerInfo;


extern const ASN1CType asn1_type_SAEChargerInfo[];

typedef struct SAERoadUserChargingConfigMessage_1 {
  SAEChargerInfo *tab;
  size_t count;
} SAERoadUserChargingConfigMessage_1;

extern const ASN1CType asn1_type_SAERoadUserChargingConfigMessage_1[];

typedef struct SAERoadUserChargingConfigMessage {
  SAERoadUserChargingConfigMessage_1 chargerInfoTable;
} SAERoadUserChargingConfigMessage;


extern const ASN1CType asn1_type_SAERoadUserChargingConfigMessage[];

typedef struct SAEVehicleId {
  BOOL vehicleIdentity_option;
  ASN1String vehicleIdentity;
  BOOL licPlateState_option;
  ASN1String licPlateState;
  BOOL licPlateNumVeh_option;
  ASN1String licPlateNumVeh;
  BOOL licPlateNumTrailer_option;
  ASN1String licPlateNumTrailer;
  BOOL userId_option;
  SAEUserId userId;
} SAEVehicleId;


extern const ASN1CType asn1_type_SAEVehicleId[];

typedef struct SAEUserData {
  SAEDDateTime timeStamp;
  ASN1ObjectIdentifier svcProvID;
  SAEVehicleId vehicleID;
  SAEVehicleTypes vehicleType;
  BOOL vehicleDescription_option;
  SAEVehicleDescription vehicleDescription;
} SAEUserData;


extern const ASN1CType asn1_type_SAEUserData[];

typedef struct SAETimePeriod {
  SAEDDateTime startTime;
  SAEDDateTime endTime;
} SAETimePeriod;


extern const ASN1CType asn1_type_SAETimePeriod[];

typedef struct SAEUserFeeInfo {
  SAEPaymentFee fee;
  SAETimePeriod timePeriod;
} SAEUserFeeInfo;


extern const ASN1CType asn1_type_SAEUserFeeInfo[];

typedef struct SAEFeeReport {
  SAEUserData userData;
  SAEUserFeeInfo fees;
} SAEFeeReport;


extern const ASN1CType asn1_type_SAEFeeReport[];

typedef struct SAETripInfo {
  BOOL distanceTraveled_option;
  int distanceTraveled;
  BOOL distanceUnits_option;
  SAEDistanceUnits distanceUnits;
  BOOL timeTraveled_option;
  int timeTraveled;
} SAETripInfo;


extern const ASN1CType asn1_type_SAETripInfo[];

typedef struct SAEItemizedChargerData {
  ASN1ObjectIdentifier chargerID;
  BOOL chargingDescription_option;
  SAEDescriptiveName chargingDescription;
  BOOL configID_option;
  int configID;
  BOOL tripInfo_option;
  SAETripInfo tripInfo;
  SAEPaymentFee totalPaidToCharger;
} SAEItemizedChargerData;


extern const ASN1CType asn1_type_SAEItemizedChargerData[];

typedef struct SAEItemizedPaymentReport_1 {
  SAEItemizedChargerData *tab;
  size_t count;
} SAEItemizedPaymentReport_1;

extern const ASN1CType asn1_type_SAEItemizedPaymentReport_1[];

typedef struct SAEItemizedPaymentReport {
  SAEDDateTime timeStamp;
  SAETimePeriod timePeriod;
  ASN1ObjectIdentifier svcProvID;
  SAEItemizedPaymentReport_1 chargerData;
} SAEItemizedPaymentReport;


extern const ASN1CType asn1_type_SAEItemizedPaymentReport[];

typedef enum {
  SAEUsageReport_feeReport,
  SAEUsageReport_itemizedPaymentReport,
} SAEUsageReport_choice;

typedef struct SAEUsageReport {
  SAEUsageReport_choice choice;
  union {
    SAEFeeReport feeReport;
    SAEItemizedPaymentReport itemizedPaymentReport;
  } u;
} SAEUsageReport;

extern const ASN1CType asn1_type_SAEUsageReport[];

typedef struct SAERoadUserChargingReportMessage {
  SAEUsageReport usageReport;
  BOOL serviceProviderData_option;
  ASN1String serviceProviderData;
} SAERoadUserChargingReportMessage;


extern const ASN1CType asn1_type_SAERoadUserChargingReportMessage[];

typedef struct SAETumAckHash {
  BOOL signedTumHash_option;
  ASN1String signedTumHash;
  SAETemporaryID tempId;
  SAEMsgCount tumSequenceNum;
} SAETumAckHash;


extern const ASN1CType asn1_type_SAETumAckHash[];

typedef struct SAETumAck {
  SAETumAckHash *tab;
  size_t count;
} SAETumAck;

extern const ASN1CType asn1_type_SAETumAck[];

typedef struct SAETollUsageAckMessage {
  SAETumAck tumAck;
  int ackMaxAge;
} SAETollUsageAckMessage;


extern const ASN1CType asn1_type_SAETollUsageAckMessage[];

typedef ASN1String SAETumHash;

extern const ASN1CType asn1_type_SAETumHash[];

typedef ASN1String SAEEncryptedTumData;

extern const ASN1CType asn1_type_SAEEncryptedTumData[];

typedef struct SAETollUsageMessage {
  SAETollChargerInfo tollPointInfo;
  SAETemporaryID tempID;
  SAEMsgCount tumSequenceNum;
  SAEMsgCount tamSequenceNum;
  BOOL tumHash_option;
  SAETumHash tumHash;
  SAEEncryptedTumData encryptedTumData;
} SAETollUsageMessage;


extern const ASN1CType asn1_type_SAETollUsageMessage[];

typedef struct SAEVehicleAxlesAndWeightInfo_1 {
  int *tab;
  size_t count;
} SAEVehicleAxlesAndWeightInfo_1;

extern const ASN1CType asn1_type_SAEVehicleAxlesAndWeightInfo_1[];

typedef enum SAEVehicleAxlesAndWeightInfo_2 {
  SAEVehicleAxlesAndWeightInfo_2_pounds,
  SAEVehicleAxlesAndWeightInfo_2_kilograms,
} SAEVehicleAxlesAndWeightInfo_2;

extern const ASN1CType asn1_type_SAEVehicleAxlesAndWeightInfo_2[];

typedef struct SAEVehicleAxlesAndWeightInfo {
  int vehNumAxles;
  SAEVehicleAxlesAndWeightInfo_1 vehWeightPerAxle;
  int vehTotalWeight;
  SAEVehicleAxlesAndWeightInfo_2 vehWeightUnits;
} SAEVehicleAxlesAndWeightInfo;


extern const ASN1CType asn1_type_SAEVehicleAxlesAndWeightInfo[];

typedef struct SAELocAndTimeStamp {
  SAELatitude latitude;
  SAELongitude longitude;
  BOOL elevation_option;
  SAEElevation elevation;
  SAEDDateTime timeStamp;
  BOOL currentLane_option;
  SAELaneID currentLane;
} SAELocAndTimeStamp;


extern const ASN1CType asn1_type_SAELocAndTimeStamp[];

typedef struct SAELocAndTimeStamps {
  SAELocAndTimeStamp *tab;
  size_t count;
} SAELocAndTimeStamps;

extern const ASN1CType asn1_type_SAELocAndTimeStamps[];

typedef struct SAELastTollPointInfo {
  SAETollChargerInfo tollChargerInfo;
  SAEDDateTime timeStamp;
} SAELastTollPointInfo;


extern const ASN1CType asn1_type_SAELastTollPointInfo[];

typedef struct SAELastTollPointInfos {
  SAELastTollPointInfo *tab;
  size_t count;
} SAELastTollPointInfos;

extern const ASN1CType asn1_type_SAELastTollPointInfos[];

typedef struct SAETollUserData {
  SAEDDateTime timeStamp;
  ASN1ObjectIdentifier tspId;
  SAEVehicleId vehicleId;
  BOOL vehType_option;
  SAEVehicleTypes vehType;
  BOOL vehicleDescription_option;
  SAEVehicleDescription vehicleDescription;
  BOOL vehAxlesAndWeight_option;
  SAEVehicleAxlesAndWeightInfo vehAxlesAndWeight;
  BOOL numOccupants_option;
  int numOccupants;
  BOOL entryTollPointId_option;
  SAETollPointID entryTollPointId;
  BOOL entryTimeStamp_option;
  SAEDDateTime entryTimeStamp;
  BOOL locAndTimeStamps_option;
  SAELocAndTimeStamps locAndTimeStamps;
  BOOL lastTollPoints_option;
  SAELastTollPointInfos lastTollPoints;
  BOOL charge_option;
  SAEPaymentFee charge;
} SAETollUserData;


extern const ASN1CType asn1_type_SAETollUserData[];

typedef ASN1String SAETollServiceProviderData;

extern const ASN1CType asn1_type_SAETollServiceProviderData[];

typedef struct SAETumData {
  SAETollUserData tollUserData;
  BOOL tollServiceProviderData_option;
  SAETollServiceProviderData tollServiceProviderData;
} SAETumData;


extern const ASN1CType asn1_type_SAETumData[];

typedef enum SAEEquipmentType {
  SAEEquipmentType_unknown,
  SAEEquipmentType_rsu,
  SAEEquipmentType_obu,
  SAEEquipmentType_vru,
} SAEEquipmentType;

extern const ASN1CType asn1_type_SAEEquipmentType[];

typedef enum SAEObjectType {
  SAEObjectType_unknown,
  SAEObjectType_vehicle,
  SAEObjectType_vru,
  SAEObjectType_animal,
} SAEObjectType;

extern const ASN1CType asn1_type_SAEObjectType[];

typedef int SAEClassificationConfidence;

extern const ASN1CType asn1_type_SAEClassificationConfidence[];

typedef int SAEObjectID;

extern const ASN1CType asn1_type_SAEObjectID[];

typedef int SAEMeasurementTimeOffset;

extern const ASN1CType asn1_type_SAEMeasurementTimeOffset[];

typedef int SAEObjectDistance;

extern const ASN1CType asn1_type_SAEObjectDistance[];

typedef struct SAEPositionOffsetXYZ {
  SAEObjectDistance offsetX;
  SAEObjectDistance offsetY;
  BOOL offsetZ_option;
  SAEObjectDistance offsetZ;
} SAEPositionOffsetXYZ;


extern const ASN1CType asn1_type_SAEPositionOffsetXYZ[];

typedef struct SAEDetectedObjectCommonData {
  SAEObjectType objType;
  SAEClassificationConfidence objTypeCfd;
  SAEObjectID objectID;
  SAEMeasurementTimeOffset measurementTime;
  SAETimeConfidence timeConfidence;
  SAEPositionOffsetXYZ pos;
  SAEPositionConfidenceSet posConfidence;
  SAESpeed speed;
  SAESpeedConfidence speedConfidence;
  BOOL speedZ_option;
  SAESpeed speedZ;
  BOOL speedConfidenceZ_option;
  SAESpeedConfidence speedConfidenceZ;
  SAEHeading heading;
  SAEHeadingConfidence headingConf;
  BOOL accel4way_option;
  SAEAccelerationSet4Way accel4way;
  BOOL accCfdX_option;
  SAEAccelerationConfidence accCfdX;
  BOOL accCfdY_option;
  SAEAccelerationConfidence accCfdY;
  BOOL accCfdZ_option;
  SAEAccelerationConfidence accCfdZ;
  BOOL accCfdYaw_option;
  SAEYawRateConfidence accCfdYaw;
} SAEDetectedObjectCommonData;


extern const ASN1CType asn1_type_SAEDetectedObjectCommonData[];

typedef int SAEPitchDetected;

extern const ASN1CType asn1_type_SAEPitchDetected[];

typedef int SAERollDetected;

extern const ASN1CType asn1_type_SAERollDetected[];

typedef int SAEYawDetected;

extern const ASN1CType asn1_type_SAEYawDetected[];

typedef struct SAEAttitude {
  SAEPitchDetected pitch;
  SAERollDetected roll;
  SAEYawDetected yaw;
} SAEAttitude;


extern const ASN1CType asn1_type_SAEAttitude[];

typedef struct SAEAttitudeConfidence {
  SAEHeadingConfidence pitchConfidence;
  SAEHeadingConfidence rollConfidence;
  SAEHeadingConfidence yawConfidence;
} SAEAttitudeConfidence;


extern const ASN1CType asn1_type_SAEAttitudeConfidence[];

typedef int SAESDSMPitchRate;

extern const ASN1CType asn1_type_SAESDSMPitchRate[];

typedef int SAESDSMRollRate;

extern const ASN1CType asn1_type_SAESDSMRollRate[];

typedef struct SAEAngularVelocity {
  SAESDSMPitchRate pitchRate;
  SAESDSMRollRate rollRate;
} SAEAngularVelocity;


extern const ASN1CType asn1_type_SAEAngularVelocity[];

typedef enum SAEPitchRateConfidence {
  SAEPitchRateConfidence_unavailable,
  SAEPitchRateConfidence_degSec_100_00,
  SAEPitchRateConfidence_degSec_010_00,
  SAEPitchRateConfidence_degSec_005_00,
  SAEPitchRateConfidence_degSec_001_00,
  SAEPitchRateConfidence_degSec_000_10,
  SAEPitchRateConfidence_degSec_000_05,
  SAEPitchRateConfidence_degSec_000_01,
} SAEPitchRateConfidence;

extern const ASN1CType asn1_type_SAEPitchRateConfidence[];

typedef enum SAERollRateConfidence {
  SAERollRateConfidence_unavailable,
  SAERollRateConfidence_degSec_100_00,
  SAERollRateConfidence_degSec_010_00,
  SAERollRateConfidence_degSec_005_00,
  SAERollRateConfidence_degSec_001_00,
  SAERollRateConfidence_degSec_000_10,
  SAERollRateConfidence_degSec_000_05,
  SAERollRateConfidence_degSec_000_01,
} SAERollRateConfidence;

extern const ASN1CType asn1_type_SAERollRateConfidence[];

typedef struct SAEAngularVelocityConfidence {
  BOOL pitchRateConfidence_option;
  SAEPitchRateConfidence pitchRateConfidence;
  BOOL rollRateConfidence_option;
  SAERollRateConfidence rollRateConfidence;
} SAEAngularVelocityConfidence;


extern const ASN1CType asn1_type_SAEAngularVelocityConfidence[];

typedef enum SAESizeValueConfidence {
  SAESizeValueConfidence_unavailable,
  SAESizeValueConfidence_size_100_00,
  SAESizeValueConfidence_size_050_00,
  SAESizeValueConfidence_size_020_00,
  SAESizeValueConfidence_size_010_00,
  SAESizeValueConfidence_size_005_00,
  SAESizeValueConfidence_size_002_00,
  SAESizeValueConfidence_size_001_00,
  SAESizeValueConfidence_size_000_50,
  SAESizeValueConfidence_size_000_20,
  SAESizeValueConfidence_size_000_10,
  SAESizeValueConfidence_size_000_05,
  SAESizeValueConfidence_size_000_02,
  SAESizeValueConfidence_size_000_01,
} SAESizeValueConfidence;

extern const ASN1CType asn1_type_SAESizeValueConfidence[];

typedef struct SAEVehicleSizeConfidence {
  SAESizeValueConfidence vehicleWidthConfidence;
  SAESizeValueConfidence vehicleLengthConfidence;
  BOOL vehicleHeightConfidence_option;
  SAESizeValueConfidence vehicleHeightConfidence;
} SAEVehicleSizeConfidence;


extern const ASN1CType asn1_type_SAEVehicleSizeConfidence[];

typedef struct SAEDetectedVehicleData {
  BOOL lights_option;
  SAEExteriorLights lights;
  BOOL vehAttitude_option;
  SAEAttitude vehAttitude;
  BOOL vehAttitudeConfidence_option;
  SAEAttitudeConfidence vehAttitudeConfidence;
  BOOL vehAngVel_option;
  SAEAngularVelocity vehAngVel;
  BOOL vehAngVelConfidence_option;
  SAEAngularVelocityConfidence vehAngVelConfidence;
  BOOL size_option;
  SAEVehicleSize size;
  BOOL height_option;
  SAEVehicleHeight height;
  BOOL vehicleSizeConfidence_option;
  SAEVehicleSizeConfidence vehicleSizeConfidence;
  BOOL vehicleClass_option;
  SAEBasicVehicleClass vehicleClass;
  BOOL classConf_option;
  SAEClassificationConfidence classConf;
} SAEDetectedVehicleData;


extern const ASN1CType asn1_type_SAEDetectedVehicleData[];

typedef struct SAEDetectedVRUData {
  BOOL basicType_option;
  SAEPersonalDeviceUserType basicType;
  BOOL propulsion_option;
  SAEPropelledInformation propulsion;
  BOOL attachment_option;
  SAEAttachment attachment;
  BOOL radius_option;
  SAEAttachmentRadius radius;
} SAEDetectedVRUData;


extern const ASN1CType asn1_type_SAEDetectedVRUData[];

typedef int SAESizeValue;

extern const ASN1CType asn1_type_SAESizeValue[];

typedef struct SAEObstacleSize {
  SAESizeValue width;
  SAESizeValue length;
  BOOL height_option;
  SAESizeValue height;
} SAEObstacleSize;


extern const ASN1CType asn1_type_SAEObstacleSize[];

typedef struct SAEObstacleSizeConfidence {
  SAESizeValueConfidence widthConfidence;
  SAESizeValueConfidence lengthConfidence;
  BOOL heightConfidence_option;
  SAESizeValueConfidence heightConfidence;
} SAEObstacleSizeConfidence;


extern const ASN1CType asn1_type_SAEObstacleSizeConfidence[];

typedef struct SAEDetectedObstacleData {
  SAEObstacleSize obstSize;
  SAEObstacleSizeConfidence obstSizeConfidence;
} SAEDetectedObstacleData;


extern const ASN1CType asn1_type_SAEDetectedObstacleData[];

typedef enum {
  SAEDetectedObjectOptionalData_detVeh,
  SAEDetectedObjectOptionalData_detVRU,
  SAEDetectedObjectOptionalData_detObst,
} SAEDetectedObjectOptionalData_choice;

typedef struct SAEDetectedObjectOptionalData {
  SAEDetectedObjectOptionalData_choice choice;
  union {
    SAEDetectedVehicleData detVeh;
    SAEDetectedVRUData detVRU;
    SAEDetectedObstacleData detObst;
  } u;
} SAEDetectedObjectOptionalData;

extern const ASN1CType asn1_type_SAEDetectedObjectOptionalData[];

typedef struct SAEDetectedObjectData {
  SAEDetectedObjectCommonData detObjCommon;
  BOOL detObjOptData_option;
  SAEDetectedObjectOptionalData detObjOptData;
} SAEDetectedObjectData;


extern const ASN1CType asn1_type_SAEDetectedObjectData[];

typedef struct SAEDetectedObjectList {
  SAEDetectedObjectData *tab;
  size_t count;
} SAEDetectedObjectList;

extern const ASN1CType asn1_type_SAEDetectedObjectList[];

typedef struct SAESensorDataSharingMessage {
  SAEMsgCount msgCnt;
  SAETemporaryID sourceID;
  SAEEquipmentType equipmentType;
  SAEDDateTime sDSMTimeStamp;
  SAEPosition3D refPos;
  SAEPositionalAccuracy refPosXYConf;
  BOOL refPosElConf_option;
  SAEElevationConfidence refPosElConf;
  SAEDetectedObjectList objects;
} SAESensorDataSharingMessage;


extern const ASN1CType asn1_type_SAESensorDataSharingMessage[];

typedef struct SAEMessageFrame {
  SAEDSRCmsgID messageId;
  ASN1OpenType value;
} SAEMessageFrame;


extern const ASN1CType asn1_type_SAEMessageFrame[];

typedef struct SAEMESSAGE_ID_AND_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Type;
} SAEMESSAGE_ID_AND_TYPE;


extern const ASN1CType asn1_type_SAEMESSAGE_ID_AND_TYPE[];

#ifdef  __cplusplus
}
#endif

#endif /* _FFASN1_J2735ASN_H */
