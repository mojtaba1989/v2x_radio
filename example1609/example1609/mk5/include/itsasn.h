/* Automatically generated file - do not edit */
#ifndef _FFASN1_ITSASN_H
#define _FFASN1_ITSASN_H

#include "asn1defs.h"

#ifdef  __cplusplus
extern "C" {
#endif

typedef int ITSOrdinalNumber1B;

extern const ASN1CType asn1_type_ITSOrdinalNumber1B[];

typedef int ITSMessageId;

enum {
  ITSMessageId_denm = 1,
  ITSMessageId_cam = 2,
  ITSMessageId_poim = 3,
  ITSMessageId_spatem = 4,
  ITSMessageId_mapem = 5,
  ITSMessageId_ivim = 6,
  ITSMessageId_rfu1 = 7,
  ITSMessageId_rfu2 = 8,
  ITSMessageId_srem = 9,
  ITSMessageId_ssem = 10,
  ITSMessageId_evcsn = 11,
  ITSMessageId_saem = 12,
  ITSMessageId_rtcmem = 13,
  ITSMessageId_cpm = 14,
  ITSMessageId_imzm = 15,
  ITSMessageId_vam = 16,
  ITSMessageId_dsm = 17,
  ITSMessageId_mim = 18,
  ITSMessageId_mvm = 19,
  ITSMessageId_mcm = 20,
  ITSMessageId_pam = 21,
  ITSMessageId_mcdm = 22,
  ITSMessageId_pmm = 23,
  ITSMessageId_pcm = 24,
};

extern const ASN1CType asn1_type_ITSMessageId[];

typedef unsigned int ITSStationId;

extern const ASN1CType asn1_type_ITSStationId[];

typedef struct ITSItsPduHeader {
  ITSOrdinalNumber1B protocolVersion;
  ITSMessageId messageId;
  ITSStationId stationId;
} ITSItsPduHeader;


extern const ASN1CType asn1_type_ITSItsPduHeader[];

typedef int ITSGenerationDeltaTime;

enum {
  ITSGenerationDeltaTime_oneMilliSec = 1,
};

extern const ASN1CType asn1_type_ITSGenerationDeltaTime[];

typedef int ITSTrafficParticipantType;

enum {
  ITSTrafficParticipantType_unknown = 0,
  ITSTrafficParticipantType_pedestrian = 1,
  ITSTrafficParticipantType_cyclist = 2,
  ITSTrafficParticipantType_moped = 3,
  ITSTrafficParticipantType_motorcycle = 4,
  ITSTrafficParticipantType_passengerCar = 5,
  ITSTrafficParticipantType_bus = 6,
  ITSTrafficParticipantType_lightTruck = 7,
  ITSTrafficParticipantType_heavyTruck = 8,
  ITSTrafficParticipantType_trailer = 9,
  ITSTrafficParticipantType_specialVehicle = 10,
  ITSTrafficParticipantType_tram = 11,
  ITSTrafficParticipantType_lightVruVehicle = 12,
  ITSTrafficParticipantType_animal = 13,
  ITSTrafficParticipantType_agricultural = 14,
  ITSTrafficParticipantType_roadSideUnit = 15,
};

extern const ASN1CType asn1_type_ITSTrafficParticipantType[];

typedef int ITSLatitude;

enum {
  ITSLatitude_oneMicrodegreeNorth = 10,
  ITSLatitude_oneMicrodegreeSouth = -10,
  ITSLatitude_unavailable = 900000001,
};

extern const ASN1CType asn1_type_ITSLatitude[];

typedef int ITSLongitude;

enum {
  ITSLongitude_oneMicrodegreeEast = 10,
  ITSLongitude_oneMicrodegreeWest = -10,
  ITSLongitude_valueNotUsed = -1800000000,
  ITSLongitude_unavailable = 1800000001,
};

extern const ASN1CType asn1_type_ITSLongitude[];

typedef int ITSSemiAxisLength;

enum {
  ITSSemiAxisLength_doNotUse = 0,
  ITSSemiAxisLength_oneCentimeter = 1,
  ITSSemiAxisLength_outOfRange = 4094,
  ITSSemiAxisLength_unavailable = 4095,
};

extern const ASN1CType asn1_type_ITSSemiAxisLength[];

typedef int ITSWgs84AngleValue;

enum {
  ITSWgs84AngleValue_wgs84North = 0,
  ITSWgs84AngleValue_wgs84East = 900,
  ITSWgs84AngleValue_wgs84South = 1800,
  ITSWgs84AngleValue_wgs84West = 2700,
  ITSWgs84AngleValue_doNotUse = 3600,
  ITSWgs84AngleValue_unavailable = 3601,
};

extern const ASN1CType asn1_type_ITSWgs84AngleValue[];

typedef struct ITSPositionConfidenceEllipse {
  ITSSemiAxisLength semiMajorAxisLength;
  ITSSemiAxisLength semiMinorAxisLength;
  ITSWgs84AngleValue semiMajorAxisOrientation;
} ITSPositionConfidenceEllipse;


extern const ASN1CType asn1_type_ITSPositionConfidenceEllipse[];

typedef int ITSAltitudeValue;

enum {
  ITSAltitudeValue_referenceEllipsoidSurface = 0,
  ITSAltitudeValue_oneCentimeter = 1,
  ITSAltitudeValue_negativeOutOfRange = -100000,
  ITSAltitudeValue_postiveOutOfRange = 800000,
  ITSAltitudeValue_unavailable = 800001,
};

extern const ASN1CType asn1_type_ITSAltitudeValue[];

typedef enum ITSAltitudeConfidence {
  ITSAltitudeConfidence_alt_000_01,
  ITSAltitudeConfidence_alt_000_02,
  ITSAltitudeConfidence_alt_000_05,
  ITSAltitudeConfidence_alt_000_10,
  ITSAltitudeConfidence_alt_000_20,
  ITSAltitudeConfidence_alt_000_50,
  ITSAltitudeConfidence_alt_001_00,
  ITSAltitudeConfidence_alt_002_00,
  ITSAltitudeConfidence_alt_005_00,
  ITSAltitudeConfidence_alt_010_00,
  ITSAltitudeConfidence_alt_020_00,
  ITSAltitudeConfidence_alt_050_00,
  ITSAltitudeConfidence_alt_100_00,
  ITSAltitudeConfidence_alt_200_00,
  ITSAltitudeConfidence_outOfRange,
  ITSAltitudeConfidence_unavailable,
} ITSAltitudeConfidence;

extern const ASN1CType asn1_type_ITSAltitudeConfidence[];

typedef struct ITSAltitude {
  ITSAltitudeValue altitudeValue;
  ITSAltitudeConfidence altitudeConfidence;
} ITSAltitude;


extern const ASN1CType asn1_type_ITSAltitude[];

typedef struct ITSReferencePositionWithConfidence {
  ITSLatitude latitude;
  ITSLongitude longitude;
  ITSPositionConfidenceEllipse positionConfidenceEllipse;
  ITSAltitude altitude;
} ITSReferencePositionWithConfidence;


extern const ASN1CType asn1_type_ITSReferencePositionWithConfidence[];

typedef struct ITSBasicContainer {
  ITSTrafficParticipantType stationType;
  ITSReferencePositionWithConfidence referencePosition;
} ITSBasicContainer;


extern const ASN1CType asn1_type_ITSBasicContainer[];

typedef int ITSHeadingValue;

enum {
  ITSHeadingValue_wgs84North = 0,
  ITSHeadingValue_wgs84East = 900,
  ITSHeadingValue_wgs84South = 1800,
  ITSHeadingValue_wgs84West = 2700,
  ITSHeadingValue_doNotUse = 3600,
  ITSHeadingValue_unavailable = 3601,
};

extern const ASN1CType asn1_type_ITSHeadingValue[];

typedef int ITSHeadingConfidence;

enum {
  ITSHeadingConfidence_equalOrWithinZeroPointOneDegree = 1,
  ITSHeadingConfidence_outOfRange = 126,
  ITSHeadingConfidence_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSHeadingConfidence[];

typedef struct ITSHeading {
  ITSHeadingValue headingValue;
  ITSHeadingConfidence headingConfidence;
} ITSHeading;


extern const ASN1CType asn1_type_ITSHeading[];

typedef int ITSSpeedValue;

enum {
  ITSSpeedValue_standstill = 0,
  ITSSpeedValue_oneCentimeterPerSec = 1,
  ITSSpeedValue_outOfRange = 16382,
  ITSSpeedValue_unavailable = 16383,
};

extern const ASN1CType asn1_type_ITSSpeedValue[];

typedef int ITSSpeedConfidence;

enum {
  ITSSpeedConfidence_equalOrWithinOneCentimeterPerSec = 1,
  ITSSpeedConfidence_outOfRange = 126,
  ITSSpeedConfidence_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSSpeedConfidence[];

typedef struct ITSSpeed {
  ITSSpeedValue speedValue;
  ITSSpeedConfidence speedConfidence;
} ITSSpeed;


extern const ASN1CType asn1_type_ITSSpeed[];

typedef enum ITSDriveDirection {
  ITSDriveDirection_forward,
  ITSDriveDirection_backward,
  ITSDriveDirection_unavailable,
} ITSDriveDirection;

extern const ASN1CType asn1_type_ITSDriveDirection[];

typedef int ITSVehicleLengthValue;

enum {
  ITSVehicleLengthValue_tenCentimeters = 1,
  ITSVehicleLengthValue_outOfRange = 1022,
  ITSVehicleLengthValue_unavailable = 1023,
};

extern const ASN1CType asn1_type_ITSVehicleLengthValue[];

typedef enum ITSVehicleLengthConfidenceIndication {
  ITSVehicleLengthConfidenceIndication_noTrailerPresent,
  ITSVehicleLengthConfidenceIndication_trailerPresentWithKnownLength,
  ITSVehicleLengthConfidenceIndication_trailerPresentWithUnknownLength,
  ITSVehicleLengthConfidenceIndication_trailerPresenceIsUnknown,
  ITSVehicleLengthConfidenceIndication_unavailable,
} ITSVehicleLengthConfidenceIndication;

extern const ASN1CType asn1_type_ITSVehicleLengthConfidenceIndication[];

typedef struct ITSVehicleLength {
  ITSVehicleLengthValue vehicleLengthValue;
  ITSVehicleLengthConfidenceIndication vehicleLengthConfidenceIndication;
} ITSVehicleLength;


extern const ASN1CType asn1_type_ITSVehicleLength[];

typedef int ITSVehicleWidth;

enum {
  ITSVehicleWidth_tenCentimeters = 1,
  ITSVehicleWidth_outOfRange = 61,
  ITSVehicleWidth_unavailable = 62,
};

extern const ASN1CType asn1_type_ITSVehicleWidth[];

typedef int ITSAccelerationValue;

enum {
  ITSAccelerationValue_negativeOutOfRange = -160,
  ITSAccelerationValue_positiveOutOfRange = 160,
  ITSAccelerationValue_unavailable = 161,
};

extern const ASN1CType asn1_type_ITSAccelerationValue[];

typedef int ITSAccelerationConfidence;

enum {
  ITSAccelerationConfidence_outOfRange = 101,
  ITSAccelerationConfidence_unavailable = 102,
};

extern const ASN1CType asn1_type_ITSAccelerationConfidence[];

typedef struct ITSAccelerationComponent {
  ITSAccelerationValue value;
  ITSAccelerationConfidence confidence;
} ITSAccelerationComponent;


extern const ASN1CType asn1_type_ITSAccelerationComponent[];

typedef int ITSCurvatureValue;

enum {
  ITSCurvatureValue_outOfRangeNegative = -1023,
  ITSCurvatureValue_straight = 0,
  ITSCurvatureValue_outOfRangePositive = 1022,
  ITSCurvatureValue_unavailable = 1023,
};

extern const ASN1CType asn1_type_ITSCurvatureValue[];

typedef enum ITSCurvatureConfidence {
  ITSCurvatureConfidence_onePerMeter_0_00002,
  ITSCurvatureConfidence_onePerMeter_0_0001,
  ITSCurvatureConfidence_onePerMeter_0_0005,
  ITSCurvatureConfidence_onePerMeter_0_002,
  ITSCurvatureConfidence_onePerMeter_0_01,
  ITSCurvatureConfidence_onePerMeter_0_1,
  ITSCurvatureConfidence_outOfRange,
  ITSCurvatureConfidence_unavailable,
} ITSCurvatureConfidence;

extern const ASN1CType asn1_type_ITSCurvatureConfidence[];

typedef struct ITSCurvature {
  ITSCurvatureValue curvatureValue;
  ITSCurvatureConfidence curvatureConfidence;
} ITSCurvature;


extern const ASN1CType asn1_type_ITSCurvature[];

typedef enum ITSCurvatureCalculationMode {
  ITSCurvatureCalculationMode_yawRateUsed,
  ITSCurvatureCalculationMode_yawRateNotUsed,
  ITSCurvatureCalculationMode_unavailable,
} ITSCurvatureCalculationMode;

extern const ASN1CType asn1_type_ITSCurvatureCalculationMode[];

typedef int ITSYawRateValue;

enum {
  ITSYawRateValue_negativeOutOfRange = -32766,
  ITSYawRateValue_positiveOutOfRange = 32766,
  ITSYawRateValue_unavailable = 32767,
};

extern const ASN1CType asn1_type_ITSYawRateValue[];

typedef enum ITSYawRateConfidence {
  ITSYawRateConfidence_degSec_000_01,
  ITSYawRateConfidence_degSec_000_05,
  ITSYawRateConfidence_degSec_000_10,
  ITSYawRateConfidence_degSec_001_00,
  ITSYawRateConfidence_degSec_005_00,
  ITSYawRateConfidence_degSec_010_00,
  ITSYawRateConfidence_degSec_100_00,
  ITSYawRateConfidence_outOfRange,
  ITSYawRateConfidence_unavailable,
} ITSYawRateConfidence;

extern const ASN1CType asn1_type_ITSYawRateConfidence[];

typedef struct ITSYawRate {
  ITSYawRateValue yawRateValue;
  ITSYawRateConfidence yawRateConfidence;
} ITSYawRate;


extern const ASN1CType asn1_type_ITSYawRate[];

typedef ASN1BitString ITSAccelerationControl;

extern const ASN1CType asn1_type_ITSAccelerationControl[];

typedef int ITSLanePosition;

enum {
  ITSLanePosition_offTheRoad = -1,
  ITSLanePosition_innerHardShoulder = 0,
  ITSLanePosition_innermostDrivingLane = 1,
  ITSLanePosition_outerHardShoulder = 14,
};

extern const ASN1CType asn1_type_ITSLanePosition[];

typedef int ITSSteeringWheelAngleValue;

enum {
  ITSSteeringWheelAngleValue_straight = 0,
  ITSSteeringWheelAngleValue_onePointFiveDegreesToRight = -1,
  ITSSteeringWheelAngleValue_onePointFiveDegreesToLeft = 1,
  ITSSteeringWheelAngleValue_negativeOutOfRange = -511,
  ITSSteeringWheelAngleValue_positiveOutOfRange = 511,
  ITSSteeringWheelAngleValue_unavailable = 512,
};

extern const ASN1CType asn1_type_ITSSteeringWheelAngleValue[];

typedef int ITSSteeringWheelAngleConfidence;

enum {
  ITSSteeringWheelAngleConfidence_outOfRange = 126,
  ITSSteeringWheelAngleConfidence_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSSteeringWheelAngleConfidence[];

typedef struct ITSSteeringWheelAngle {
  ITSSteeringWheelAngleValue steeringWheelAngleValue;
  ITSSteeringWheelAngleConfidence steeringWheelAngleConfidence;
} ITSSteeringWheelAngle;


extern const ASN1CType asn1_type_ITSSteeringWheelAngle[];

typedef int ITSPerformanceClass;

enum {
  ITSPerformanceClass_unavailable = 0,
  ITSPerformanceClass_performanceClassA = 1,
  ITSPerformanceClass_performanceClassB = 2,
};

extern const ASN1CType asn1_type_ITSPerformanceClass[];

typedef int ITSProtectedZoneId;

extern const ASN1CType asn1_type_ITSProtectedZoneId[];

typedef struct ITSCenDsrcTollingZone {
  ITSLatitude protectedZoneLatitude;
  ITSLongitude protectedZoneLongitude;
  BOOL cenDsrcTollingZoneId_option;
  ITSProtectedZoneId cenDsrcTollingZoneId;
} ITSCenDsrcTollingZone;


extern const ASN1CType asn1_type_ITSCenDsrcTollingZone[];

typedef struct ITSBasicVehicleContainerHighFrequency {
  ITSHeading heading;
  ITSSpeed speed;
  ITSDriveDirection driveDirection;
  ITSVehicleLength vehicleLength;
  ITSVehicleWidth vehicleWidth;
  ITSAccelerationComponent longitudinalAcceleration;
  ITSCurvature curvature;
  ITSCurvatureCalculationMode curvatureCalculationMode;
  ITSYawRate yawRate;
  BOOL accelerationControl_option;
  ITSAccelerationControl accelerationControl;
  BOOL lanePosition_option;
  ITSLanePosition lanePosition;
  BOOL steeringWheelAngle_option;
  ITSSteeringWheelAngle steeringWheelAngle;
  BOOL lateralAcceleration_option;
  ITSAccelerationComponent lateralAcceleration;
  BOOL verticalAcceleration_option;
  ITSAccelerationComponent verticalAcceleration;
  BOOL performanceClass_option;
  ITSPerformanceClass performanceClass;
  BOOL cenDsrcTollingZone_option;
  ITSCenDsrcTollingZone cenDsrcTollingZone;
} ITSBasicVehicleContainerHighFrequency;


extern const ASN1CType asn1_type_ITSBasicVehicleContainerHighFrequency[];

typedef enum ITSProtectedZoneType {
  ITSProtectedZoneType_permanentCenDsrcTolling,
  ITSProtectedZoneType_temporaryCenDsrcTolling,
} ITSProtectedZoneType;

extern const ASN1CType asn1_type_ITSProtectedZoneType[];

typedef ASN1Integer ITSTimestampIts;

extern const ASN1CType asn1_type_ITSTimestampIts[];

typedef int ITSProtectedZoneRadius;

extern const ASN1CType asn1_type_ITSProtectedZoneRadius[];

typedef struct ITSProtectedCommunicationZone {
  ITSProtectedZoneType protectedZoneType;
  BOOL expiryTime_option;
  ITSTimestampIts expiryTime;
  ITSLatitude protectedZoneLatitude;
  ITSLongitude protectedZoneLongitude;
  BOOL protectedZoneRadius_option;
  ITSProtectedZoneRadius protectedZoneRadius;
  BOOL protectedZoneId_option;
  ITSProtectedZoneId protectedZoneId;
} ITSProtectedCommunicationZone;


extern const ASN1CType asn1_type_ITSProtectedCommunicationZone[];

typedef struct ITSProtectedCommunicationZonesRSU {
  ITSProtectedCommunicationZone *tab;
  size_t count;
} ITSProtectedCommunicationZonesRSU;

extern const ASN1CType asn1_type_ITSProtectedCommunicationZonesRSU[];

typedef struct ITSRSUContainerHighFrequency {
  BOOL protectedCommunicationZonesRSU_option;
  ITSProtectedCommunicationZonesRSU protectedCommunicationZonesRSU;
} ITSRSUContainerHighFrequency;


extern const ASN1CType asn1_type_ITSRSUContainerHighFrequency[];

typedef enum {
  ITSHighFrequencyContainer_basicVehicleContainerHighFrequency,
  ITSHighFrequencyContainer_rsuContainerHighFrequency,
} ITSHighFrequencyContainer_choice;

typedef struct ITSHighFrequencyContainer {
  ITSHighFrequencyContainer_choice choice;
  union {
    ITSBasicVehicleContainerHighFrequency basicVehicleContainerHighFrequency;
    ITSRSUContainerHighFrequency rsuContainerHighFrequency;
  } u;
} ITSHighFrequencyContainer;

extern const ASN1CType asn1_type_ITSHighFrequencyContainer[];

typedef enum ITSVehicleRole {
  ITSVehicleRole_Default,
  ITSVehicleRole_publicTransport,
  ITSVehicleRole_specialTransport,
  ITSVehicleRole_dangerousGoods,
  ITSVehicleRole_roadWork,
  ITSVehicleRole_rescue,
  ITSVehicleRole_emergency,
  ITSVehicleRole_safetyCar,
  ITSVehicleRole_agriculture,
  ITSVehicleRole_commercial,
  ITSVehicleRole_military,
  ITSVehicleRole_roadOperator,
  ITSVehicleRole_taxi,
  ITSVehicleRole_uvar,
  ITSVehicleRole_rfu1,
  ITSVehicleRole_rfu2,
} ITSVehicleRole;

extern const ASN1CType asn1_type_ITSVehicleRole[];

typedef ASN1BitString ITSExteriorLights;

extern const ASN1CType asn1_type_ITSExteriorLights[];

typedef int ITSDeltaLatitude;

enum {
  ITSDeltaLatitude_oneMicrodegreeSouth = -10,
  ITSDeltaLatitude_noChange = 0,
  ITSDeltaLatitude_oneMicrodegreeNorth = 10,
  ITSDeltaLatitude_unavailable = 131072,
};

extern const ASN1CType asn1_type_ITSDeltaLatitude[];

typedef int ITSDeltaLongitude;

enum {
  ITSDeltaLongitude_oneMicrodegreeWest = -10,
  ITSDeltaLongitude_noChange = 0,
  ITSDeltaLongitude_oneMicrodegreeEast = 10,
  ITSDeltaLongitude_unavailable = 131072,
};

extern const ASN1CType asn1_type_ITSDeltaLongitude[];

typedef int ITSDeltaAltitude;

enum {
  ITSDeltaAltitude_negativeOutOfRange = -12700,
  ITSDeltaAltitude_oneCentimeterDown = -1,
  ITSDeltaAltitude_noChange = 0,
  ITSDeltaAltitude_oneCentimeterUp = 1,
  ITSDeltaAltitude_positiveOutOfRange = 12799,
  ITSDeltaAltitude_unavailable = 12800,
};

extern const ASN1CType asn1_type_ITSDeltaAltitude[];

typedef struct ITSDeltaReferencePosition {
  ITSDeltaLatitude deltaLatitude;
  ITSDeltaLongitude deltaLongitude;
  ITSDeltaAltitude deltaAltitude;
} ITSDeltaReferencePosition;


extern const ASN1CType asn1_type_ITSDeltaReferencePosition[];

typedef int ITSPathDeltaTime;

extern const ASN1CType asn1_type_ITSPathDeltaTime[];

typedef struct ITSPathPoint {
  ITSDeltaReferencePosition pathPosition;
  BOOL pathDeltaTime_option;
  ITSPathDeltaTime pathDeltaTime;
} ITSPathPoint;


extern const ASN1CType asn1_type_ITSPathPoint[];

typedef struct ITSPath {
  ITSPathPoint *tab;
  size_t count;
} ITSPath;

extern const ASN1CType asn1_type_ITSPath[];

typedef struct ITSBasicVehicleContainerLowFrequency {
  ITSVehicleRole vehicleRole;
  ITSExteriorLights exteriorLights;
  ITSPath pathHistory;
} ITSBasicVehicleContainerLowFrequency;


extern const ASN1CType asn1_type_ITSBasicVehicleContainerLowFrequency[];

typedef enum {
  ITSLowFrequencyContainer_basicVehicleContainerLowFrequency,
} ITSLowFrequencyContainer_choice;

typedef struct ITSLowFrequencyContainer {
  ITSLowFrequencyContainer_choice choice;
  union {
    ITSBasicVehicleContainerLowFrequency basicVehicleContainerLowFrequency;
  } u;
} ITSLowFrequencyContainer;

extern const ASN1CType asn1_type_ITSLowFrequencyContainer[];

typedef BOOL ITSEmbarkationStatus;

extern const ASN1CType asn1_type_ITSEmbarkationStatus[];

typedef int ITSPtActivationType;

enum {
  ITSPtActivationType_undefinedCodingType = 0,
  ITSPtActivationType_r09_16CodingType = 1,
  ITSPtActivationType_vdv_50149CodingType = 2,
};

extern const ASN1CType asn1_type_ITSPtActivationType[];

typedef ASN1String ITSPtActivationData;

extern const ASN1CType asn1_type_ITSPtActivationData[];

typedef struct ITSPtActivation {
  ITSPtActivationType ptActivationType;
  ITSPtActivationData ptActivationData;
} ITSPtActivation;


extern const ASN1CType asn1_type_ITSPtActivation[];

typedef struct ITSPublicTransportContainer {
  ITSEmbarkationStatus embarkationStatus;
  BOOL ptActivation_option;
  ITSPtActivation ptActivation;
} ITSPublicTransportContainer;


extern const ASN1CType asn1_type_ITSPublicTransportContainer[];

typedef ASN1BitString ITSSpecialTransportType;

extern const ASN1CType asn1_type_ITSSpecialTransportType[];

typedef ASN1BitString ITSLightBarSirenInUse;

extern const ASN1CType asn1_type_ITSLightBarSirenInUse[];

typedef struct ITSSpecialTransportContainer {
  ITSSpecialTransportType specialTransportType;
  ITSLightBarSirenInUse lightBarSirenInUse;
} ITSSpecialTransportContainer;


extern const ASN1CType asn1_type_ITSSpecialTransportContainer[];

typedef enum ITSDangerousGoodsBasic {
  ITSDangerousGoodsBasic_explosives1,
  ITSDangerousGoodsBasic_explosives2,
  ITSDangerousGoodsBasic_explosives3,
  ITSDangerousGoodsBasic_explosives4,
  ITSDangerousGoodsBasic_explosives5,
  ITSDangerousGoodsBasic_explosives6,
  ITSDangerousGoodsBasic_flammableGases,
  ITSDangerousGoodsBasic_nonFlammableGases,
  ITSDangerousGoodsBasic_toxicGases,
  ITSDangerousGoodsBasic_flammableLiquids,
  ITSDangerousGoodsBasic_flammableSolids,
  ITSDangerousGoodsBasic_substancesLiableToSpontaneousCombustion,
  ITSDangerousGoodsBasic_substancesEmittingFlammableGasesUponContactWithWater,
  ITSDangerousGoodsBasic_oxidizingSubstances,
  ITSDangerousGoodsBasic_organicPeroxides,
  ITSDangerousGoodsBasic_toxicSubstances,
  ITSDangerousGoodsBasic_infectiousSubstances,
  ITSDangerousGoodsBasic_radioactiveMaterial,
  ITSDangerousGoodsBasic_corrosiveSubstances,
  ITSDangerousGoodsBasic_miscellaneousDangerousSubstances,
} ITSDangerousGoodsBasic;

extern const ASN1CType asn1_type_ITSDangerousGoodsBasic[];

typedef struct ITSDangerousGoodsContainer {
  ITSDangerousGoodsBasic dangerousGoodsBasic;
} ITSDangerousGoodsContainer;


extern const ASN1CType asn1_type_ITSDangerousGoodsContainer[];

typedef int ITSRoadworksSubCauseCode;

enum {
  ITSRoadworksSubCauseCode_unavailable = 0,
  ITSRoadworksSubCauseCode_majorRoadworks = 1,
  ITSRoadworksSubCauseCode_roadMarkingWork = 2,
  ITSRoadworksSubCauseCode_slowMovingRoadMaintenance = 3,
  ITSRoadworksSubCauseCode_shortTermStationaryRoadworks = 4,
  ITSRoadworksSubCauseCode_streetCleaning = 5,
  ITSRoadworksSubCauseCode_winterService = 6,
  ITSRoadworksSubCauseCode_setupPhase = 7,
  ITSRoadworksSubCauseCode_remodellingPhase = 8,
  ITSRoadworksSubCauseCode_dismantlingPhase = 9,
};

extern const ASN1CType asn1_type_ITSRoadworksSubCauseCode[];

typedef enum ITSHardShoulderStatus {
  ITSHardShoulderStatus_availableForStopping,
  ITSHardShoulderStatus_closed,
  ITSHardShoulderStatus_availableForDriving,
} ITSHardShoulderStatus;

extern const ASN1CType asn1_type_ITSHardShoulderStatus[];

typedef ASN1BitString ITSDrivingLaneStatus;

extern const ASN1CType asn1_type_ITSDrivingLaneStatus[];

typedef struct ITSClosedLanes {
  BOOL innerhardShoulderStatus_option;
  ITSHardShoulderStatus innerhardShoulderStatus;
  BOOL outerhardShoulderStatus_option;
  ITSHardShoulderStatus outerhardShoulderStatus;
  BOOL drivingLaneStatus_option;
  ITSDrivingLaneStatus drivingLaneStatus;
} ITSClosedLanes;


extern const ASN1CType asn1_type_ITSClosedLanes[];

typedef struct ITSRoadWorksContainerBasic {
  BOOL roadworksSubCauseCode_option;
  ITSRoadworksSubCauseCode roadworksSubCauseCode;
  ITSLightBarSirenInUse lightBarSirenInUse;
  BOOL closedLanes_option;
  ITSClosedLanes closedLanes;
} ITSRoadWorksContainerBasic;


extern const ASN1CType asn1_type_ITSRoadWorksContainerBasic[];

typedef struct ITSRescueContainer {
  ITSLightBarSirenInUse lightBarSirenInUse;
} ITSRescueContainer;


extern const ASN1CType asn1_type_ITSRescueContainer[];

typedef int ITSSubCauseCodeType;

extern const ASN1CType asn1_type_ITSSubCauseCodeType[];

typedef int ITSTrafficConditionSubCauseCode;

enum {
  ITSTrafficConditionSubCauseCode_unavailable = 0,
  ITSTrafficConditionSubCauseCode_increasedVolumeOfTraffic = 1,
  ITSTrafficConditionSubCauseCode_trafficJamSlowlyIncreasing = 2,
  ITSTrafficConditionSubCauseCode_trafficJamIncreasing = 3,
  ITSTrafficConditionSubCauseCode_trafficJamStronglyIncreasing = 4,
  ITSTrafficConditionSubCauseCode_trafficJam = 5,
  ITSTrafficConditionSubCauseCode_trafficJamSlightlyDecreasing = 6,
  ITSTrafficConditionSubCauseCode_trafficJamDecreasing = 7,
  ITSTrafficConditionSubCauseCode_trafficJamStronglyDecreasing = 8,
  ITSTrafficConditionSubCauseCode_trafficJamStable = 9,
};

extern const ASN1CType asn1_type_ITSTrafficConditionSubCauseCode[];

typedef int ITSAccidentSubCauseCode;

enum {
  ITSAccidentSubCauseCode_unavailable = 0,
  ITSAccidentSubCauseCode_multiVehicleAccident = 1,
  ITSAccidentSubCauseCode_heavyAccident = 2,
  ITSAccidentSubCauseCode_accidentInvolvingLorry = 3,
  ITSAccidentSubCauseCode_accidentInvolvingBus = 4,
  ITSAccidentSubCauseCode_accidentInvolvingHazardousMaterials = 5,
  ITSAccidentSubCauseCode_accidentOnOppositeLane = 6,
  ITSAccidentSubCauseCode_unsecuredAccident = 7,
  ITSAccidentSubCauseCode_assistanceRequested = 8,
};

extern const ASN1CType asn1_type_ITSAccidentSubCauseCode[];

typedef int ITSImpassabilitySubCauseCode;

enum {
  ITSImpassabilitySubCauseCode_unavailable = 0,
  ITSImpassabilitySubCauseCode_flooding = 1,
  ITSImpassabilitySubCauseCode_dangerOfAvalanches = 2,
  ITSImpassabilitySubCauseCode_blastingOfAvalanches = 3,
  ITSImpassabilitySubCauseCode_landslips = 4,
  ITSImpassabilitySubCauseCode_chemicalSpillage = 5,
  ITSImpassabilitySubCauseCode_winterClosure = 6,
  ITSImpassabilitySubCauseCode_sinkhole = 7,
  ITSImpassabilitySubCauseCode_earthquakeDamage = 8,
  ITSImpassabilitySubCauseCode_fallenTrees = 9,
  ITSImpassabilitySubCauseCode_rockfalls = 10,
  ITSImpassabilitySubCauseCode_sewerOverflow = 11,
  ITSImpassabilitySubCauseCode_stormDamage = 12,
  ITSImpassabilitySubCauseCode_subsidence = 13,
  ITSImpassabilitySubCauseCode_burstPipe = 14,
  ITSImpassabilitySubCauseCode_burstWaterMain = 15,
  ITSImpassabilitySubCauseCode_fallenPowerCables = 16,
  ITSImpassabilitySubCauseCode_snowDrifts = 17,
};

extern const ASN1CType asn1_type_ITSImpassabilitySubCauseCode[];

typedef int ITSAdverseWeatherCondition_AdhesionSubCauseCode;

enum {
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_unavailable = 0,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_heavyFrostOnRoad = 1,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_fuelOnRoad = 2,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_mudOnRoad = 3,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_snowOnRoad = 4,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_iceOnRoad = 5,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_blackIceOnRoad = 6,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_oilOnRoad = 7,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_looseChippings = 8,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_instantBlackIce = 9,
  ITSAdverseWeatherCondition_AdhesionSubCauseCode_roadsSalted = 10,
};

extern const ASN1CType asn1_type_ITSAdverseWeatherCondition_AdhesionSubCauseCode[];

typedef int ITSHazardousLocation_SurfaceConditionSubCauseCode;

enum {
  ITSHazardousLocation_SurfaceConditionSubCauseCode_unavailable = 0,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_rockfalls = 1,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_earthquakeDamage = 2,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_sewerCollapse = 3,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_subsidence = 4,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_snowDrifts = 5,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_stormDamage = 6,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_burstPipe = 7,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_volcanoEruption = 8,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_fallingIce = 9,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_fire = 10,
  ITSHazardousLocation_SurfaceConditionSubCauseCode_flooding = 11,
};

extern const ASN1CType asn1_type_ITSHazardousLocation_SurfaceConditionSubCauseCode[];

typedef int ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode;

enum {
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_unavailable = 0,
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_shedLoad = 1,
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_partsOfVehicles = 2,
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_partsOfTyres = 3,
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_bigObjects = 4,
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_fallenTrees = 5,
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_hubCaps = 6,
  ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode_waitingVehicles = 7,
};

extern const ASN1CType asn1_type_ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode[];

typedef int ITSHazardousLocation_AnimalOnTheRoadSubCauseCode;

enum {
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_unavailable = 0,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_wildAnimals = 1,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_herdOfAnimals = 2,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_smallAnimals = 3,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_largeAnimals = 4,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_wildAnimalsSmall = 5,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_wildAnimalsLarge = 6,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_domesticAnimals = 7,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_domesticAnimalsSmall = 8,
  ITSHazardousLocation_AnimalOnTheRoadSubCauseCode_domesticAnimalsLarge = 9,
};

extern const ASN1CType asn1_type_ITSHazardousLocation_AnimalOnTheRoadSubCauseCode[];

typedef int ITSHumanPresenceOnTheRoadSubCauseCode;

enum {
  ITSHumanPresenceOnTheRoadSubCauseCode_unavailable = 0,
  ITSHumanPresenceOnTheRoadSubCauseCode_childrenOnRoadway = 1,
  ITSHumanPresenceOnTheRoadSubCauseCode_cyclistOnRoadway = 2,
  ITSHumanPresenceOnTheRoadSubCauseCode_motorcyclistOnRoadway = 3,
  ITSHumanPresenceOnTheRoadSubCauseCode_pedestrian = 4,
  ITSHumanPresenceOnTheRoadSubCauseCode_ordinary_pedestrian = 5,
  ITSHumanPresenceOnTheRoadSubCauseCode_road_worker = 6,
  ITSHumanPresenceOnTheRoadSubCauseCode_first_responder = 7,
  ITSHumanPresenceOnTheRoadSubCauseCode_lightVruVehicle = 8,
  ITSHumanPresenceOnTheRoadSubCauseCode_bicyclist = 9,
  ITSHumanPresenceOnTheRoadSubCauseCode_wheelchair_user = 10,
  ITSHumanPresenceOnTheRoadSubCauseCode_horse_and_rider = 11,
  ITSHumanPresenceOnTheRoadSubCauseCode_rollerskater = 12,
  ITSHumanPresenceOnTheRoadSubCauseCode_e_scooter = 13,
  ITSHumanPresenceOnTheRoadSubCauseCode_personal_transporter = 14,
  ITSHumanPresenceOnTheRoadSubCauseCode_pedelec = 15,
  ITSHumanPresenceOnTheRoadSubCauseCode_speed_pedelec = 16,
  ITSHumanPresenceOnTheRoadSubCauseCode_ptw = 17,
  ITSHumanPresenceOnTheRoadSubCauseCode_moped = 18,
  ITSHumanPresenceOnTheRoadSubCauseCode_motorcycle = 19,
  ITSHumanPresenceOnTheRoadSubCauseCode_motorcycle_and_sidecar_right = 20,
  ITSHumanPresenceOnTheRoadSubCauseCode_motorcycle_and_sidecar_left = 21,
};

extern const ASN1CType asn1_type_ITSHumanPresenceOnTheRoadSubCauseCode[];

typedef int ITSWrongWayDrivingSubCauseCode;

enum {
  ITSWrongWayDrivingSubCauseCode_unavailable = 0,
  ITSWrongWayDrivingSubCauseCode_wrongLane = 1,
  ITSWrongWayDrivingSubCauseCode_wrongDirection = 2,
};

extern const ASN1CType asn1_type_ITSWrongWayDrivingSubCauseCode[];

typedef int ITSRescueAndRecoveryWorkInProgressSubCauseCode;

enum {
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_unavailable = 0,
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_emergencyVehicles = 1,
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_rescueHelicopterLanding = 2,
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_policeActivityOngoing = 3,
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_medicalEmergencyOngoing = 4,
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_childAbductionInProgress = 5,
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_prioritizedVehicle = 6,
  ITSRescueAndRecoveryWorkInProgressSubCauseCode_rescueAndRecoveryVehicle = 7,
};

extern const ASN1CType asn1_type_ITSRescueAndRecoveryWorkInProgressSubCauseCode[];

typedef int ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode;

enum {
  ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_unavailable = 0,
  ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_strongWinds = 1,
  ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_damagingHail = 2,
  ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_hurricane = 3,
  ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_thunderstorm = 4,
  ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_tornado = 5,
  ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_blizzard = 6,
};

extern const ASN1CType asn1_type_ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode[];

typedef int ITSAdverseWeatherCondition_VisibilitySubCauseCode;

enum {
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_unavailable = 0,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_fog = 1,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_smoke = 2,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_heavySnowfall = 3,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_heavyRain = 4,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_heavyHail = 5,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_lowSunGlare = 6,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_sandstorms = 7,
  ITSAdverseWeatherCondition_VisibilitySubCauseCode_swarmsOfInsects = 8,
};

extern const ASN1CType asn1_type_ITSAdverseWeatherCondition_VisibilitySubCauseCode[];

typedef int ITSAdverseWeatherCondition_PrecipitationSubCauseCode;

enum {
  ITSAdverseWeatherCondition_PrecipitationSubCauseCode_unavailable = 0,
  ITSAdverseWeatherCondition_PrecipitationSubCauseCode_heavyRain = 1,
  ITSAdverseWeatherCondition_PrecipitationSubCauseCode_heavySnowfall = 2,
  ITSAdverseWeatherCondition_PrecipitationSubCauseCode_softHail = 3,
};

extern const ASN1CType asn1_type_ITSAdverseWeatherCondition_PrecipitationSubCauseCode[];

typedef int ITSSlowVehicleSubCauseCode;

enum {
  ITSSlowVehicleSubCauseCode_unavailable = 0,
  ITSSlowVehicleSubCauseCode_maintenanceVehicle = 1,
  ITSSlowVehicleSubCauseCode_vehiclesSlowingToLookAtAccident = 2,
  ITSSlowVehicleSubCauseCode_abnormalLoad = 3,
  ITSSlowVehicleSubCauseCode_abnormalWideLoad = 4,
  ITSSlowVehicleSubCauseCode_convoy = 5,
  ITSSlowVehicleSubCauseCode_snowplough = 6,
  ITSSlowVehicleSubCauseCode_deicing = 7,
  ITSSlowVehicleSubCauseCode_saltingVehicles = 8,
};

extern const ASN1CType asn1_type_ITSSlowVehicleSubCauseCode[];

typedef int ITSDangerousEndOfQueueSubCauseCode;

enum {
  ITSDangerousEndOfQueueSubCauseCode_unavailable = 0,
  ITSDangerousEndOfQueueSubCauseCode_suddenEndOfQueue = 1,
  ITSDangerousEndOfQueueSubCauseCode_queueOverHill = 2,
  ITSDangerousEndOfQueueSubCauseCode_queueAroundBend = 3,
  ITSDangerousEndOfQueueSubCauseCode_queueInTunnel = 4,
};

extern const ASN1CType asn1_type_ITSDangerousEndOfQueueSubCauseCode[];

typedef int ITSVehicleBreakdownSubCauseCode;

enum {
  ITSVehicleBreakdownSubCauseCode_unavailable = 0,
  ITSVehicleBreakdownSubCauseCode_lackOfFuel = 1,
  ITSVehicleBreakdownSubCauseCode_lackOfBatteryPower = 2,
  ITSVehicleBreakdownSubCauseCode_engineProblem = 3,
  ITSVehicleBreakdownSubCauseCode_transmissionProblem = 4,
  ITSVehicleBreakdownSubCauseCode_engineCoolingProblem = 5,
  ITSVehicleBreakdownSubCauseCode_brakingSystemProblem = 6,
  ITSVehicleBreakdownSubCauseCode_steeringProblem = 7,
  ITSVehicleBreakdownSubCauseCode_tyrePuncture = 8,
  ITSVehicleBreakdownSubCauseCode_tyrePressureProblem = 9,
  ITSVehicleBreakdownSubCauseCode_vehicleOnFire = 10,
};

extern const ASN1CType asn1_type_ITSVehicleBreakdownSubCauseCode[];

typedef int ITSPostCrashSubCauseCode;

enum {
  ITSPostCrashSubCauseCode_unavailable = 0,
  ITSPostCrashSubCauseCode_accidentWithoutECallTriggered = 1,
  ITSPostCrashSubCauseCode_accidentWithECallManuallyTriggered = 2,
  ITSPostCrashSubCauseCode_accidentWithECallAutomaticallyTriggered = 3,
  ITSPostCrashSubCauseCode_accidentWithECallTriggeredWithoutAccessToCellularNetwork = 4,
};

extern const ASN1CType asn1_type_ITSPostCrashSubCauseCode[];

typedef int ITSHumanProblemSubCauseCode;

enum {
  ITSHumanProblemSubCauseCode_unavailable = 0,
  ITSHumanProblemSubCauseCode_glycemiaProblem = 1,
  ITSHumanProblemSubCauseCode_heartProblem = 2,
};

extern const ASN1CType asn1_type_ITSHumanProblemSubCauseCode[];

typedef int ITSStationaryVehicleSubCauseCode;

enum {
  ITSStationaryVehicleSubCauseCode_unavailable = 0,
  ITSStationaryVehicleSubCauseCode_humanProblem = 1,
  ITSStationaryVehicleSubCauseCode_vehicleBreakdown = 2,
  ITSStationaryVehicleSubCauseCode_postCrash = 3,
  ITSStationaryVehicleSubCauseCode_publicTransportStop = 4,
  ITSStationaryVehicleSubCauseCode_carryingDangerousGoods = 5,
  ITSStationaryVehicleSubCauseCode_vehicleOnFire = 6,
};

extern const ASN1CType asn1_type_ITSStationaryVehicleSubCauseCode[];

typedef int ITSEmergencyVehicleApproachingSubCauseCode;

enum {
  ITSEmergencyVehicleApproachingSubCauseCode_unavailable = 0,
  ITSEmergencyVehicleApproachingSubCauseCode_emergencyVehicleApproaching = 1,
  ITSEmergencyVehicleApproachingSubCauseCode_prioritizedVehicleApproaching = 2,
};

extern const ASN1CType asn1_type_ITSEmergencyVehicleApproachingSubCauseCode[];

typedef int ITSHazardousLocation_DangerousCurveSubCauseCode;

enum {
  ITSHazardousLocation_DangerousCurveSubCauseCode_unavailable = 0,
  ITSHazardousLocation_DangerousCurveSubCauseCode_dangerousLeftTurnCurve = 1,
  ITSHazardousLocation_DangerousCurveSubCauseCode_dangerousRightTurnCurve = 2,
  ITSHazardousLocation_DangerousCurveSubCauseCode_multipleCurvesStartingWithUnknownTurningDirection = 3,
  ITSHazardousLocation_DangerousCurveSubCauseCode_multipleCurvesStartingWithLeftTurn = 4,
  ITSHazardousLocation_DangerousCurveSubCauseCode_multipleCurvesStartingWithRightTurn = 5,
};

extern const ASN1CType asn1_type_ITSHazardousLocation_DangerousCurveSubCauseCode[];

typedef int ITSCollisionRiskSubCauseCode;

enum {
  ITSCollisionRiskSubCauseCode_unavailable = 0,
  ITSCollisionRiskSubCauseCode_longitudinalCollisionRisk = 1,
  ITSCollisionRiskSubCauseCode_crossingCollisionRisk = 2,
  ITSCollisionRiskSubCauseCode_lateralCollisionRisk = 3,
  ITSCollisionRiskSubCauseCode_vulnerableRoadUser = 4,
  ITSCollisionRiskSubCauseCode_collisionRiskWithPedestrian = 5,
  ITSCollisionRiskSubCauseCode_collisionRiskWithCyclist = 6,
  ITSCollisionRiskSubCauseCode_collisionRiskWithMotorVehicle = 7,
};

extern const ASN1CType asn1_type_ITSCollisionRiskSubCauseCode[];

typedef int ITSSignalViolationSubCauseCode;

enum {
  ITSSignalViolationSubCauseCode_unavailable = 0,
  ITSSignalViolationSubCauseCode_stopSignViolation = 1,
  ITSSignalViolationSubCauseCode_trafficLightViolation = 2,
  ITSSignalViolationSubCauseCode_turningRegulationViolation = 3,
};

extern const ASN1CType asn1_type_ITSSignalViolationSubCauseCode[];

typedef int ITSDangerousSituationSubCauseCode;

enum {
  ITSDangerousSituationSubCauseCode_unavailable = 0,
  ITSDangerousSituationSubCauseCode_emergencyElectronicBrakeEngaged = 1,
  ITSDangerousSituationSubCauseCode_preCrashSystemEngaged = 2,
  ITSDangerousSituationSubCauseCode_espEngaged = 3,
  ITSDangerousSituationSubCauseCode_absEngaged = 4,
  ITSDangerousSituationSubCauseCode_aebEngaged = 5,
  ITSDangerousSituationSubCauseCode_brakeWarningEngaged = 6,
  ITSDangerousSituationSubCauseCode_collisionRiskWarningEngaged = 7,
};

extern const ASN1CType asn1_type_ITSDangerousSituationSubCauseCode[];

typedef int ITSRailwayLevelCrossingSubCauseCode;

enum {
  ITSRailwayLevelCrossingSubCauseCode_unavailable = 0,
  ITSRailwayLevelCrossingSubCauseCode_doNotCrossAbnormalSituation = 1,
  ITSRailwayLevelCrossingSubCauseCode_closed = 2,
  ITSRailwayLevelCrossingSubCauseCode_unguarded = 3,
  ITSRailwayLevelCrossingSubCauseCode_nominal = 4,
  ITSRailwayLevelCrossingSubCauseCode_trainApproaching = 5,
};

extern const ASN1CType asn1_type_ITSRailwayLevelCrossingSubCauseCode[];

typedef enum {
  ITSCauseCodeChoice_reserved0,
  ITSCauseCodeChoice_trafficCondition1,
  ITSCauseCodeChoice_accident2,
  ITSCauseCodeChoice_roadworks3,
  ITSCauseCodeChoice_reserved4,
  ITSCauseCodeChoice_impassability5,
  ITSCauseCodeChoice_adverseWeatherCondition_Adhesion6,
  ITSCauseCodeChoice_aquaplaning7,
  ITSCauseCodeChoice_reserved8,
  ITSCauseCodeChoice_hazardousLocation_SurfaceCondition9,
  ITSCauseCodeChoice_hazardousLocation_ObstacleOnTheRoad10,
  ITSCauseCodeChoice_hazardousLocation_AnimalOnTheRoad11,
  ITSCauseCodeChoice_humanPresenceOnTheRoad12,
  ITSCauseCodeChoice_reserved13,
  ITSCauseCodeChoice_wrongWayDriving14,
  ITSCauseCodeChoice_rescueAndRecoveryWorkInProgress15,
  ITSCauseCodeChoice_reserved16,
  ITSCauseCodeChoice_adverseWeatherCondition_ExtremeWeatherCondition17,
  ITSCauseCodeChoice_adverseWeatherCondition_Visibility18,
  ITSCauseCodeChoice_adverseWeatherCondition_Precipitation19,
  ITSCauseCodeChoice_violence20,
  ITSCauseCodeChoice_reserved21,
  ITSCauseCodeChoice_reserved22,
  ITSCauseCodeChoice_reserved23,
  ITSCauseCodeChoice_reserved24,
  ITSCauseCodeChoice_reserved25,
  ITSCauseCodeChoice_slowVehicle26,
  ITSCauseCodeChoice_dangerousEndOfQueue27,
  ITSCauseCodeChoice_publicTransportVehicleApproaching28,
  ITSCauseCodeChoice_reserved29,
  ITSCauseCodeChoice_reserved30,
  ITSCauseCodeChoice_reserved31,
  ITSCauseCodeChoice_reserved32,
  ITSCauseCodeChoice_reserved33,
  ITSCauseCodeChoice_reserved34,
  ITSCauseCodeChoice_reserved35,
  ITSCauseCodeChoice_reserved36,
  ITSCauseCodeChoice_reserved37,
  ITSCauseCodeChoice_reserved38,
  ITSCauseCodeChoice_reserved39,
  ITSCauseCodeChoice_reserved40,
  ITSCauseCodeChoice_reserved41,
  ITSCauseCodeChoice_reserved42,
  ITSCauseCodeChoice_reserved43,
  ITSCauseCodeChoice_reserved44,
  ITSCauseCodeChoice_reserved45,
  ITSCauseCodeChoice_reserved46,
  ITSCauseCodeChoice_reserved47,
  ITSCauseCodeChoice_reserved48,
  ITSCauseCodeChoice_reserved49,
  ITSCauseCodeChoice_reserved50,
  ITSCauseCodeChoice_reserved51,
  ITSCauseCodeChoice_reserved52,
  ITSCauseCodeChoice_reserved53,
  ITSCauseCodeChoice_reserved54,
  ITSCauseCodeChoice_reserved55,
  ITSCauseCodeChoice_reserved56,
  ITSCauseCodeChoice_reserved57,
  ITSCauseCodeChoice_reserved58,
  ITSCauseCodeChoice_reserved59,
  ITSCauseCodeChoice_reserved60,
  ITSCauseCodeChoice_reserved61,
  ITSCauseCodeChoice_reserved62,
  ITSCauseCodeChoice_reserved63,
  ITSCauseCodeChoice_reserved64,
  ITSCauseCodeChoice_reserved65,
  ITSCauseCodeChoice_reserved66,
  ITSCauseCodeChoice_reserved67,
  ITSCauseCodeChoice_reserved68,
  ITSCauseCodeChoice_reserved69,
  ITSCauseCodeChoice_reserved70,
  ITSCauseCodeChoice_reserved71,
  ITSCauseCodeChoice_reserved72,
  ITSCauseCodeChoice_reserved73,
  ITSCauseCodeChoice_reserved74,
  ITSCauseCodeChoice_reserved75,
  ITSCauseCodeChoice_reserved76,
  ITSCauseCodeChoice_reserved77,
  ITSCauseCodeChoice_reserved78,
  ITSCauseCodeChoice_reserved79,
  ITSCauseCodeChoice_reserved80,
  ITSCauseCodeChoice_reserved81,
  ITSCauseCodeChoice_reserved82,
  ITSCauseCodeChoice_reserved83,
  ITSCauseCodeChoice_reserved84,
  ITSCauseCodeChoice_reserved85,
  ITSCauseCodeChoice_reserved86,
  ITSCauseCodeChoice_reserved87,
  ITSCauseCodeChoice_reserved88,
  ITSCauseCodeChoice_reserved89,
  ITSCauseCodeChoice_reserved90,
  ITSCauseCodeChoice_vehicleBreakdown91,
  ITSCauseCodeChoice_postCrash92,
  ITSCauseCodeChoice_humanProblem93,
  ITSCauseCodeChoice_stationaryVehicle94,
  ITSCauseCodeChoice_emergencyVehicleApproaching95,
  ITSCauseCodeChoice_hazardousLocation_DangerousCurve96,
  ITSCauseCodeChoice_collisionRisk97,
  ITSCauseCodeChoice_signalViolation98,
  ITSCauseCodeChoice_dangerousSituation99,
  ITSCauseCodeChoice_railwayLevelCrossing100,
  ITSCauseCodeChoice_reserved101,
  ITSCauseCodeChoice_reserved102,
  ITSCauseCodeChoice_reserved103,
  ITSCauseCodeChoice_reserved104,
  ITSCauseCodeChoice_reserved105,
  ITSCauseCodeChoice_reserved106,
  ITSCauseCodeChoice_reserved107,
  ITSCauseCodeChoice_reserved108,
  ITSCauseCodeChoice_reserved109,
  ITSCauseCodeChoice_reserved110,
  ITSCauseCodeChoice_reserved111,
  ITSCauseCodeChoice_reserved112,
  ITSCauseCodeChoice_reserved113,
  ITSCauseCodeChoice_reserved114,
  ITSCauseCodeChoice_reserved115,
  ITSCauseCodeChoice_reserved116,
  ITSCauseCodeChoice_reserved117,
  ITSCauseCodeChoice_reserved118,
  ITSCauseCodeChoice_reserved119,
  ITSCauseCodeChoice_reserved120,
  ITSCauseCodeChoice_reserved121,
  ITSCauseCodeChoice_reserved122,
  ITSCauseCodeChoice_reserved123,
  ITSCauseCodeChoice_reserved124,
  ITSCauseCodeChoice_reserved125,
  ITSCauseCodeChoice_reserved126,
  ITSCauseCodeChoice_reserved127,
  ITSCauseCodeChoice_reserved128,
} ITSCauseCodeChoice_choice;

typedef struct ITSCauseCodeChoice {
  ITSCauseCodeChoice_choice choice;
  union {
    ITSSubCauseCodeType reserved0;
    ITSTrafficConditionSubCauseCode trafficCondition1;
    ITSAccidentSubCauseCode accident2;
    ITSRoadworksSubCauseCode roadworks3;
    ITSSubCauseCodeType reserved4;
    ITSImpassabilitySubCauseCode impassability5;
    ITSAdverseWeatherCondition_AdhesionSubCauseCode adverseWeatherCondition_Adhesion6;
    ITSSubCauseCodeType aquaplaning7;
    ITSSubCauseCodeType reserved8;
    ITSHazardousLocation_SurfaceConditionSubCauseCode hazardousLocation_SurfaceCondition9;
    ITSHazardousLocation_ObstacleOnTheRoadSubCauseCode hazardousLocation_ObstacleOnTheRoad10;
    ITSHazardousLocation_AnimalOnTheRoadSubCauseCode hazardousLocation_AnimalOnTheRoad11;
    ITSHumanPresenceOnTheRoadSubCauseCode humanPresenceOnTheRoad12;
    ITSSubCauseCodeType reserved13;
    ITSWrongWayDrivingSubCauseCode wrongWayDriving14;
    ITSRescueAndRecoveryWorkInProgressSubCauseCode rescueAndRecoveryWorkInProgress15;
    ITSSubCauseCodeType reserved16;
    ITSAdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode adverseWeatherCondition_ExtremeWeatherCondition17;
    ITSAdverseWeatherCondition_VisibilitySubCauseCode adverseWeatherCondition_Visibility18;
    ITSAdverseWeatherCondition_PrecipitationSubCauseCode adverseWeatherCondition_Precipitation19;
    ITSSubCauseCodeType violence20;
    ITSSubCauseCodeType reserved21;
    ITSSubCauseCodeType reserved22;
    ITSSubCauseCodeType reserved23;
    ITSSubCauseCodeType reserved24;
    ITSSubCauseCodeType reserved25;
    ITSSlowVehicleSubCauseCode slowVehicle26;
    ITSDangerousEndOfQueueSubCauseCode dangerousEndOfQueue27;
    ITSSubCauseCodeType publicTransportVehicleApproaching28;
    ITSSubCauseCodeType reserved29;
    ITSSubCauseCodeType reserved30;
    ITSSubCauseCodeType reserved31;
    ITSSubCauseCodeType reserved32;
    ITSSubCauseCodeType reserved33;
    ITSSubCauseCodeType reserved34;
    ITSSubCauseCodeType reserved35;
    ITSSubCauseCodeType reserved36;
    ITSSubCauseCodeType reserved37;
    ITSSubCauseCodeType reserved38;
    ITSSubCauseCodeType reserved39;
    ITSSubCauseCodeType reserved40;
    ITSSubCauseCodeType reserved41;
    ITSSubCauseCodeType reserved42;
    ITSSubCauseCodeType reserved43;
    ITSSubCauseCodeType reserved44;
    ITSSubCauseCodeType reserved45;
    ITSSubCauseCodeType reserved46;
    ITSSubCauseCodeType reserved47;
    ITSSubCauseCodeType reserved48;
    ITSSubCauseCodeType reserved49;
    ITSSubCauseCodeType reserved50;
    ITSSubCauseCodeType reserved51;
    ITSSubCauseCodeType reserved52;
    ITSSubCauseCodeType reserved53;
    ITSSubCauseCodeType reserved54;
    ITSSubCauseCodeType reserved55;
    ITSSubCauseCodeType reserved56;
    ITSSubCauseCodeType reserved57;
    ITSSubCauseCodeType reserved58;
    ITSSubCauseCodeType reserved59;
    ITSSubCauseCodeType reserved60;
    ITSSubCauseCodeType reserved61;
    ITSSubCauseCodeType reserved62;
    ITSSubCauseCodeType reserved63;
    ITSSubCauseCodeType reserved64;
    ITSSubCauseCodeType reserved65;
    ITSSubCauseCodeType reserved66;
    ITSSubCauseCodeType reserved67;
    ITSSubCauseCodeType reserved68;
    ITSSubCauseCodeType reserved69;
    ITSSubCauseCodeType reserved70;
    ITSSubCauseCodeType reserved71;
    ITSSubCauseCodeType reserved72;
    ITSSubCauseCodeType reserved73;
    ITSSubCauseCodeType reserved74;
    ITSSubCauseCodeType reserved75;
    ITSSubCauseCodeType reserved76;
    ITSSubCauseCodeType reserved77;
    ITSSubCauseCodeType reserved78;
    ITSSubCauseCodeType reserved79;
    ITSSubCauseCodeType reserved80;
    ITSSubCauseCodeType reserved81;
    ITSSubCauseCodeType reserved82;
    ITSSubCauseCodeType reserved83;
    ITSSubCauseCodeType reserved84;
    ITSSubCauseCodeType reserved85;
    ITSSubCauseCodeType reserved86;
    ITSSubCauseCodeType reserved87;
    ITSSubCauseCodeType reserved88;
    ITSSubCauseCodeType reserved89;
    ITSSubCauseCodeType reserved90;
    ITSVehicleBreakdownSubCauseCode vehicleBreakdown91;
    ITSPostCrashSubCauseCode postCrash92;
    ITSHumanProblemSubCauseCode humanProblem93;
    ITSStationaryVehicleSubCauseCode stationaryVehicle94;
    ITSEmergencyVehicleApproachingSubCauseCode emergencyVehicleApproaching95;
    ITSHazardousLocation_DangerousCurveSubCauseCode hazardousLocation_DangerousCurve96;
    ITSCollisionRiskSubCauseCode collisionRisk97;
    ITSSignalViolationSubCauseCode signalViolation98;
    ITSDangerousSituationSubCauseCode dangerousSituation99;
    ITSRailwayLevelCrossingSubCauseCode railwayLevelCrossing100;
    ITSSubCauseCodeType reserved101;
    ITSSubCauseCodeType reserved102;
    ITSSubCauseCodeType reserved103;
    ITSSubCauseCodeType reserved104;
    ITSSubCauseCodeType reserved105;
    ITSSubCauseCodeType reserved106;
    ITSSubCauseCodeType reserved107;
    ITSSubCauseCodeType reserved108;
    ITSSubCauseCodeType reserved109;
    ITSSubCauseCodeType reserved110;
    ITSSubCauseCodeType reserved111;
    ITSSubCauseCodeType reserved112;
    ITSSubCauseCodeType reserved113;
    ITSSubCauseCodeType reserved114;
    ITSSubCauseCodeType reserved115;
    ITSSubCauseCodeType reserved116;
    ITSSubCauseCodeType reserved117;
    ITSSubCauseCodeType reserved118;
    ITSSubCauseCodeType reserved119;
    ITSSubCauseCodeType reserved120;
    ITSSubCauseCodeType reserved121;
    ITSSubCauseCodeType reserved122;
    ITSSubCauseCodeType reserved123;
    ITSSubCauseCodeType reserved124;
    ITSSubCauseCodeType reserved125;
    ITSSubCauseCodeType reserved126;
    ITSSubCauseCodeType reserved127;
    ITSSubCauseCodeType reserved128;
  } u;
} ITSCauseCodeChoice;

extern const ASN1CType asn1_type_ITSCauseCodeChoice[];

typedef struct ITSCauseCodeV2 {
  ITSCauseCodeChoice ccAndScc;
} ITSCauseCodeV2;


extern const ASN1CType asn1_type_ITSCauseCodeV2[];

typedef ASN1BitString ITSEmergencyPriority;

extern const ASN1CType asn1_type_ITSEmergencyPriority[];

typedef struct ITSEmergencyContainer {
  ITSLightBarSirenInUse lightBarSirenInUse;
  BOOL incidentIndication_option;
  ITSCauseCodeV2 incidentIndication;
  BOOL emergencyPriority_option;
  ITSEmergencyPriority emergencyPriority;
} ITSEmergencyContainer;


extern const ASN1CType asn1_type_ITSEmergencyContainer[];

typedef enum ITSTrafficRule {
  ITSTrafficRule_noPassing,
  ITSTrafficRule_noPassingForTrucks,
  ITSTrafficRule_passToRight,
  ITSTrafficRule_passToLeft,
  ITSTrafficRule_passToLeftOrRight,
} ITSTrafficRule;

extern const ASN1CType asn1_type_ITSTrafficRule[];

typedef int ITSSpeedLimit;

extern const ASN1CType asn1_type_ITSSpeedLimit[];

typedef struct ITSSafetyCarContainer {
  ITSLightBarSirenInUse lightBarSirenInUse;
  BOOL incidentIndication_option;
  ITSCauseCodeV2 incidentIndication;
  BOOL trafficRule_option;
  ITSTrafficRule trafficRule;
  BOOL speedLimit_option;
  ITSSpeedLimit speedLimit;
} ITSSafetyCarContainer;


extern const ASN1CType asn1_type_ITSSafetyCarContainer[];

typedef enum {
  ITSSpecialVehicleContainer_publicTransportContainer,
  ITSSpecialVehicleContainer_specialTransportContainer,
  ITSSpecialVehicleContainer_dangerousGoodsContainer,
  ITSSpecialVehicleContainer_roadWorksContainerBasic,
  ITSSpecialVehicleContainer_rescueContainer,
  ITSSpecialVehicleContainer_emergencyContainer,
  ITSSpecialVehicleContainer_safetyCarContainer,
} ITSSpecialVehicleContainer_choice;

typedef struct ITSSpecialVehicleContainer {
  ITSSpecialVehicleContainer_choice choice;
  union {
    ITSPublicTransportContainer publicTransportContainer;
    ITSSpecialTransportContainer specialTransportContainer;
    ITSDangerousGoodsContainer dangerousGoodsContainer;
    ITSRoadWorksContainerBasic roadWorksContainerBasic;
    ITSRescueContainer rescueContainer;
    ITSEmergencyContainer emergencyContainer;
    ITSSafetyCarContainer safetyCarContainer;
  } u;
} ITSSpecialVehicleContainer;

extern const ASN1CType asn1_type_ITSSpecialVehicleContainer[];

typedef struct ITSPosConfidenceEllipse {
  ITSSemiAxisLength semiMajorConfidence;
  ITSSemiAxisLength semiMinorConfidence;
  ITSHeadingValue semiMajorOrientation;
} ITSPosConfidenceEllipse;


extern const ASN1CType asn1_type_ITSPosConfidenceEllipse[];

typedef struct ITSReferencePosition {
  ITSLatitude latitude;
  ITSLongitude longitude;
  ITSPosConfidenceEllipse positionConfidenceEllipse;
  ITSAltitude altitude;
} ITSReferencePosition;


extern const ASN1CType asn1_type_ITSReferencePosition[];

typedef int ITSMinInterdistance;

enum {
  ITSMinInterdistance_oneMetre = 1,
};

extern const ASN1CType asn1_type_ITSMinInterdistance[];

typedef struct ITSI2VMessageContainer {
  ITSReferencePosition position;
  BOOL maxRecSpeed_option;
  ITSSpeedLimit maxRecSpeed;
  BOOL minRecInterdistance_option;
  ITSMinInterdistance minRecInterdistance;
} ITSI2VMessageContainer;


extern const ASN1CType asn1_type_ITSI2VMessageContainer[];

typedef struct ITSPlatooningContainer {
  BOOL isJoinable;
  BOOL messageContainer_option;
  ITSI2VMessageContainer messageContainer;
} ITSPlatooningContainer;


extern const ASN1CType asn1_type_ITSPlatooningContainer[];

typedef struct ITSCamParameters {
  ITSBasicContainer basicContainer;
  ITSHighFrequencyContainer highFrequencyContainer;
  BOOL lowFrequencyContainer_option;
  ITSLowFrequencyContainer lowFrequencyContainer;
  BOOL specialVehicleContainer_option;
  ITSSpecialVehicleContainer specialVehicleContainer;
  BOOL platooningContainer_option;
  ITSPlatooningContainer platooningContainer;
} ITSCamParameters;


extern const ASN1CType asn1_type_ITSCamParameters[];

typedef struct ITSCamPayload {
  ITSGenerationDeltaTime generationDeltaTime;
  ITSCamParameters camParameters;
} ITSCamPayload;


extern const ASN1CType asn1_type_ITSCamPayload[];

typedef struct ITSCAM {
  ITSItsPduHeader header;
  ITSCamPayload cam;
} ITSCAM;


extern const ASN1CType asn1_type_ITSCAM[];

typedef int ITSStationType;

enum {
  ITSStationType_unknown = 0,
  ITSStationType_pedestrian = 1,
  ITSStationType_cyclist = 2,
  ITSStationType_moped = 3,
  ITSStationType_motorcycle = 4,
  ITSStationType_passengerCar = 5,
  ITSStationType_bus = 6,
  ITSStationType_lightTruck = 7,
  ITSStationType_heavyTruck = 8,
  ITSStationType_trailer = 9,
  ITSStationType_specialVehicle = 10,
  ITSStationType_tram = 11,
  ITSStationType_lightVruVehicle = 12,
  ITSStationType_animal = 13,
  ITSStationType_roadSideUnit = 15,
};

extern const ASN1CType asn1_type_ITSStationType[];

typedef enum ITSEuVehicleCategoryL {
  ITSEuVehicleCategoryL_l1,
  ITSEuVehicleCategoryL_l2,
  ITSEuVehicleCategoryL_l3,
  ITSEuVehicleCategoryL_l4,
  ITSEuVehicleCategoryL_l5,
  ITSEuVehicleCategoryL_l6,
  ITSEuVehicleCategoryL_l7,
} ITSEuVehicleCategoryL;

extern const ASN1CType asn1_type_ITSEuVehicleCategoryL[];

typedef enum ITSEuVehicleCategoryM {
  ITSEuVehicleCategoryM_m1,
  ITSEuVehicleCategoryM_m2,
  ITSEuVehicleCategoryM_m3,
} ITSEuVehicleCategoryM;

extern const ASN1CType asn1_type_ITSEuVehicleCategoryM[];

typedef enum ITSEuVehicleCategoryN {
  ITSEuVehicleCategoryN_n1,
  ITSEuVehicleCategoryN_n2,
  ITSEuVehicleCategoryN_n3,
} ITSEuVehicleCategoryN;

extern const ASN1CType asn1_type_ITSEuVehicleCategoryN[];

typedef enum ITSEuVehicleCategoryO {
  ITSEuVehicleCategoryO_o1,
  ITSEuVehicleCategoryO_o2,
  ITSEuVehicleCategoryO_o3,
  ITSEuVehicleCategoryO_o4,
} ITSEuVehicleCategoryO;

extern const ASN1CType asn1_type_ITSEuVehicleCategoryO[];

typedef enum {
  ITSEuVehicleCategoryCode_euVehicleCategoryL,
  ITSEuVehicleCategoryCode_euVehicleCategoryM,
  ITSEuVehicleCategoryCode_euVehicleCategoryN,
  ITSEuVehicleCategoryCode_euVehicleCategoryO,
  ITSEuVehicleCategoryCode_euVehicleCategoryT,
  ITSEuVehicleCategoryCode_euVehicleCategoryG,
} ITSEuVehicleCategoryCode_choice;

typedef struct ITSEuVehicleCategoryCode {
  ITSEuVehicleCategoryCode_choice choice;
  union {
    ITSEuVehicleCategoryL euVehicleCategoryL;
    ITSEuVehicleCategoryM euVehicleCategoryM;
    ITSEuVehicleCategoryN euVehicleCategoryN;
    ITSEuVehicleCategoryO euVehicleCategoryO;
  } u;
} ITSEuVehicleCategoryCode;

extern const ASN1CType asn1_type_ITSEuVehicleCategoryCode[];

typedef int ITSIso3833VehicleType;

enum {
  ITSIso3833VehicleType_passengerCar = 0,
  ITSIso3833VehicleType_saloon = 1,
  ITSIso3833VehicleType_convertibleSaloon = 2,
  ITSIso3833VehicleType_pullmanSaloon = 3,
  ITSIso3833VehicleType_stationWagon = 4,
  ITSIso3833VehicleType_truckStationWagon = 5,
  ITSIso3833VehicleType_coupe = 6,
  ITSIso3833VehicleType_convertible = 7,
  ITSIso3833VehicleType_multipurposePassengerCar = 8,
  ITSIso3833VehicleType_forwardControlPassengerCar = 9,
  ITSIso3833VehicleType_specialPassengerCar = 10,
  ITSIso3833VehicleType_bus = 11,
  ITSIso3833VehicleType_minibus = 12,
  ITSIso3833VehicleType_urbanBus = 13,
  ITSIso3833VehicleType_interurbanCoach = 14,
  ITSIso3833VehicleType_longDistanceCoach = 15,
  ITSIso3833VehicleType_articulatedBus = 16,
  ITSIso3833VehicleType_trolleyBus = 17,
  ITSIso3833VehicleType_specialBus = 18,
  ITSIso3833VehicleType_commercialVehicle = 19,
  ITSIso3833VehicleType_specialCommercialVehicle = 20,
  ITSIso3833VehicleType_specialVehicle = 21,
  ITSIso3833VehicleType_trailingTowingVehicle = 22,
  ITSIso3833VehicleType_semiTrailerTowingVehicle = 23,
  ITSIso3833VehicleType_trailer = 24,
  ITSIso3833VehicleType_busTrailer = 25,
  ITSIso3833VehicleType_generalPurposeTrailer = 26,
  ITSIso3833VehicleType_caravan = 27,
  ITSIso3833VehicleType_specialTrailer = 28,
  ITSIso3833VehicleType_semiTrailer = 29,
  ITSIso3833VehicleType_busSemiTrailer = 30,
  ITSIso3833VehicleType_generalPurposeSemiTrailer = 31,
  ITSIso3833VehicleType_specialSemiTrailer = 32,
  ITSIso3833VehicleType_roadTrain = 33,
  ITSIso3833VehicleType_passengerRoadTrain = 34,
  ITSIso3833VehicleType_articulatedRoadTrain = 35,
  ITSIso3833VehicleType_doubleRoadTrain = 36,
  ITSIso3833VehicleType_compositeRoadTrain = 37,
  ITSIso3833VehicleType_specialRoadTrain = 38,
  ITSIso3833VehicleType_moped = 39,
  ITSIso3833VehicleType_motorCycle = 40,
};

extern const ASN1CType asn1_type_ITSIso3833VehicleType[];

typedef enum ITSEuroValue {
  ITSEuroValue_noEntry,
  ITSEuroValue_euro_1,
  ITSEuroValue_euro_2,
  ITSEuroValue_euro_3,
  ITSEuroValue_euro_4,
  ITSEuroValue_euro_5,
  ITSEuroValue_euro_6,
  ITSEuroValue_reservedForUse1,
  ITSEuroValue_reservedForUse2,
  ITSEuroValue_reservedForUse3,
  ITSEuroValue_reservedForUse4,
  ITSEuroValue_reservedForUse5,
  ITSEuroValue_reservedForUse6,
  ITSEuroValue_reservedForUse7,
  ITSEuroValue_reservedForUse8,
  ITSEuroValue_eev,
} ITSEuroValue;

extern const ASN1CType asn1_type_ITSEuroValue[];

typedef enum ITSCopValue {
  ITSCopValue_noEntry,
  ITSCopValue_co2class1,
  ITSCopValue_co2class2,
  ITSCopValue_co2class3,
  ITSCopValue_co2class4,
  ITSCopValue_co2class5,
  ITSCopValue_co2class6,
  ITSCopValue_co2class7,
  ITSCopValue_reservedforUse,
} ITSCopValue;

extern const ASN1CType asn1_type_ITSCopValue[];

typedef struct ITSEnvironmentalCharacteristics {
  ITSEuroValue euroValue;
  ITSCopValue copValue;
} ITSEnvironmentalCharacteristics;


extern const ASN1CType asn1_type_ITSEnvironmentalCharacteristics[];

typedef int ITSEngineCharacteristics;

enum {
  ITSEngineCharacteristics_noEntry = 0,
  ITSEngineCharacteristics_noEngine = 1,
  ITSEngineCharacteristics_petrolUnleaded = 2,
  ITSEngineCharacteristics_petrolLeaded = 3,
  ITSEngineCharacteristics_diesel = 4,
  ITSEngineCharacteristics_lPG = 5,
  ITSEngineCharacteristics_battery = 6,
  ITSEngineCharacteristics_solar = 7,
  ITSEngineCharacteristics_hybrid = 8,
  ITSEngineCharacteristics_hydrogen = 9,
};

extern const ASN1CType asn1_type_ITSEngineCharacteristics[];

typedef enum ITSUnitType {
  ITSUnitType_mg_km,
  ITSUnitType_mg_kWh,
} ITSUnitType;

extern const ASN1CType asn1_type_ITSUnitType[];

typedef int ITSInt2;

extern const ASN1CType asn1_type_ITSInt2[];

typedef struct ITSExhaustEmissionValues {
  ITSUnitType unitType;
  int emissionCO;
  ITSInt2 emissionHC;
  ITSInt2 emissionNOX;
  ITSInt2 emissionHCNOX;
} ITSExhaustEmissionValues;


extern const ASN1CType asn1_type_ITSExhaustEmissionValues[];

typedef struct ITSDieselEmissionValues_1 {
  ITSUnitType unitType;
  int value;
} ITSDieselEmissionValues_1;


extern const ASN1CType asn1_type_ITSDieselEmissionValues_1[];

typedef struct ITSDieselEmissionValues {
  ITSDieselEmissionValues_1 particulate;
  ITSInt2 absorptionCoeff;
} ITSDieselEmissionValues;


extern const ASN1CType asn1_type_ITSDieselEmissionValues[];

typedef struct ITSEmissionContainer {
  BOOL euVehicleCategoryCode_option;
  ITSEuVehicleCategoryCode euVehicleCategoryCode;
  ITSIso3833VehicleType iso3833VehicleType;
  BOOL euroAndCo2value_option;
  ITSEnvironmentalCharacteristics euroAndCo2value;
  ITSEngineCharacteristics engineCharacteristics;
  BOOL exhaustEmissionValues_option;
  ITSExhaustEmissionValues exhaustEmissionValues;
  BOOL dieselEmissionValues_option;
  ITSDieselEmissionValues dieselEmissionValues;
} ITSEmissionContainer;


extern const ASN1CType asn1_type_ITSEmissionContainer[];

typedef struct ITSCAMBasicContainer {
  ITSStationType stationType;
  ITSReferencePosition referencePosition;
  BOOL emissions_option;
  ITSEmissionContainer emissions;
} ITSCAMBasicContainer;


extern const ASN1CType asn1_type_ITSCAMBasicContainer[];

typedef int ITSSequenceNumber;

extern const ASN1CType asn1_type_ITSSequenceNumber[];

typedef struct ITSActionId {
  ITSStationId originatingStationId;
  ITSSequenceNumber sequenceNumber;
} ITSActionId;


extern const ASN1CType asn1_type_ITSActionId[];

typedef enum ITSTermination {
  ITSTermination_isCancellation,
  ITSTermination_isNegation,
} ITSTermination;

extern const ASN1CType asn1_type_ITSTermination[];

typedef enum ITSStandardLength3b {
  ITSStandardLength3b_lessThan50m,
  ITSStandardLength3b_lessThan100m,
  ITSStandardLength3b_lessThan200m,
  ITSStandardLength3b_lessThan500m,
  ITSStandardLength3b_lessThan1000m,
  ITSStandardLength3b_lessThan5km,
  ITSStandardLength3b_lessThan10km,
  ITSStandardLength3b_over10km,
} ITSStandardLength3b;

extern const ASN1CType asn1_type_ITSStandardLength3b[];

typedef enum ITSTrafficDirection {
  ITSTrafficDirection_allTrafficDirections,
  ITSTrafficDirection_sameAsReferenceDirection_upstreamOfReferencePosition,
  ITSTrafficDirection_sameAsReferenceDirection_downstreamOfReferencePosition,
  ITSTrafficDirection_oppositeToReferenceDirection,
} ITSTrafficDirection;

extern const ASN1CType asn1_type_ITSTrafficDirection[];

typedef int ITSDeltaTimeSecond;

extern const ASN1CType asn1_type_ITSDeltaTimeSecond[];

typedef int ITSDeltaTimeMilliSecondPositive;

extern const ASN1CType asn1_type_ITSDeltaTimeMilliSecondPositive[];

typedef struct ITSManagementContainer {
  ITSActionId actionId;
  ITSTimestampIts detectionTime;
  ITSTimestampIts referenceTime;
  BOOL termination_option;
  ITSTermination termination;
  ITSReferencePositionWithConfidence eventPosition;
  BOOL awarenessDistance_option;
  ITSStandardLength3b awarenessDistance;
  BOOL trafficDirection_option;
  ITSTrafficDirection trafficDirection;
  ITSDeltaTimeSecond validityDuration;
  BOOL transmissionInterval_option;
  ITSDeltaTimeMilliSecondPositive transmissionInterval;
  ITSStationType stationType;
} ITSManagementContainer;


extern const ASN1CType asn1_type_ITSManagementContainer[];

typedef int ITSInformationQuality;

enum {
  ITSInformationQuality_unavailable = 0,
};

extern const ASN1CType asn1_type_ITSInformationQuality[];

typedef struct ITSEventPoint {
  ITSDeltaReferencePosition eventPosition;
  BOOL eventDeltaTime_option;
  ITSPathDeltaTime eventDeltaTime;
  ITSInformationQuality informationQuality;
} ITSEventPoint;


extern const ASN1CType asn1_type_ITSEventPoint[];

typedef struct ITSEventHistory {
  ITSEventPoint *tab;
  size_t count;
} ITSEventHistory;

extern const ASN1CType asn1_type_ITSEventHistory[];

typedef ITSEventHistory ITSEventZone;

extern const ASN1CType asn1_type_ITSEventZone[];

typedef struct ITSActionIdList {
  ITSActionId *tab;
  size_t count;
} ITSActionIdList;

extern const ASN1CType asn1_type_ITSActionIdList[];

typedef int ITSPosition1d;

enum {
  ITSPosition1d_outOfRange = 8190,
  ITSPosition1d_unavailable = 8191,
};

extern const ASN1CType asn1_type_ITSPosition1d[];

typedef struct ITSSituationContainer {
  ITSInformationQuality informationQuality;
  ITSCauseCodeV2 eventType;
  BOOL linkedCause_option;
  ITSCauseCodeV2 linkedCause;
  BOOL eventZone_option;
  ITSEventZone eventZone;
  BOOL linkedDenms_option;
  ITSActionIdList linkedDenms;
  BOOL eventEnd_option;
  ITSPosition1d eventEnd;
} ITSSituationContainer;


extern const ASN1CType asn1_type_ITSSituationContainer[];

typedef int ITSWgs84AngleConfidence;

enum {
  ITSWgs84AngleConfidence_equalOrWithinZeroPointOneDegree = 1,
  ITSWgs84AngleConfidence_outOfRange = 126,
  ITSWgs84AngleConfidence_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSWgs84AngleConfidence[];

typedef struct ITSWgs84Angle {
  ITSWgs84AngleValue value;
  ITSWgs84AngleConfidence confidence;
} ITSWgs84Angle;


extern const ASN1CType asn1_type_ITSWgs84Angle[];

typedef struct ITSTraces {
  ITSPath *tab;
  size_t count;
} ITSTraces;

extern const ASN1CType asn1_type_ITSTraces[];

typedef enum ITSRoadType {
  ITSRoadType_urban_NoStructuralSeparationToOppositeLanes,
  ITSRoadType_urban_WithStructuralSeparationToOppositeLanes,
  ITSRoadType_nonUrban_NoStructuralSeparationToOppositeLanes,
  ITSRoadType_nonUrban_WithStructuralSeparationToOppositeLanes,
} ITSRoadType;

extern const ASN1CType asn1_type_ITSRoadType[];

typedef int ITSLaneType;

enum {
  ITSLaneType_traffic = 0,
  ITSLaneType_through = 1,
  ITSLaneType_reversible = 2,
  ITSLaneType_acceleration = 3,
  ITSLaneType_deceleration = 4,
  ITSLaneType_leftHandTurning = 5,
  ITSLaneType_rightHandTurning = 6,
  ITSLaneType_dedicatedVehicle = 7,
  ITSLaneType_bus = 8,
  ITSLaneType_taxi = 9,
  ITSLaneType_hov = 10,
  ITSLaneType_hot = 11,
  ITSLaneType_pedestrian = 12,
  ITSLaneType_cycleLane = 13,
  ITSLaneType_median = 14,
  ITSLaneType_striping = 15,
  ITSLaneType_trackedVehicle = 16,
  ITSLaneType_parking = 17,
  ITSLaneType_emergency = 18,
  ITSLaneType_verge = 19,
  ITSLaneType_minimumRiskManoeuvre = 20,
  ITSLaneType_exclusiveCycleLane = 21,
  ITSLaneType_unknown = 31,
};

extern const ASN1CType asn1_type_ITSLaneType[];

typedef int ITSDirection;

enum {
  ITSDirection_sameDirection = 0,
  ITSDirection_oppositeDirection = 1,
  ITSDirection_bothDirections = 2,
  ITSDirection_unavailable = 3,
};

extern const ASN1CType asn1_type_ITSDirection[];

typedef struct ITSLanePositionAndType {
  ITSLanePosition transversalPosition;
  ITSLaneType laneType;
  ITSDirection direction;
} ITSLanePositionAndType;


extern const ASN1CType asn1_type_ITSLanePositionAndType[];

typedef int ITSStandardLength9b;

extern const ASN1CType asn1_type_ITSStandardLength9b[];

typedef struct ITSLanePositionWithLateralDetails {
  ITSLanePositionAndType super_LanePositionAndType;
  ITSStandardLength9b distanceToLeftBorder;
  ITSStandardLength9b distanceToRightBorder;
} ITSLanePositionWithLateralDetails;


extern const ASN1CType asn1_type_ITSLanePositionWithLateralDetails[];

typedef struct ITSTrafficIslandPosition {
  ITSLanePositionAndType oneSide;
  ITSLanePositionAndType otherSide;
} ITSTrafficIslandPosition;


extern const ASN1CType asn1_type_ITSTrafficIslandPosition[];

typedef enum {
  ITSLanePositionOptions_simplelanePosition,
  ITSLanePositionOptions_simpleLaneType,
  ITSLanePositionOptions_detailedlanePosition,
  ITSLanePositionOptions_lanePositionWithLateralDetails,
  ITSLanePositionOptions_trafficIslandPosition,
} ITSLanePositionOptions_choice;

typedef struct ITSLanePositionOptions {
  ITSLanePositionOptions_choice choice;
  union {
    ITSLanePosition simplelanePosition;
    ITSLaneType simpleLaneType;
    ITSLanePositionAndType detailedlanePosition;
    ITSLanePositionWithLateralDetails lanePositionWithLateralDetails;
    ITSTrafficIslandPosition trafficIslandPosition;
  } u;
} ITSLanePositionOptions;

extern const ASN1CType asn1_type_ITSLanePositionOptions[];

typedef int ITSIdentifier2B;

extern const ASN1CType asn1_type_ITSIdentifier2B[];

typedef struct ITSRoadSegmentReferenceId {
  BOOL region_option;
  ITSIdentifier2B region;
  ITSIdentifier2B id;
} ITSRoadSegmentReferenceId;


extern const ASN1CType asn1_type_ITSRoadSegmentReferenceId[];

typedef struct ITSIntersectionReferenceId {
  BOOL region_option;
  ITSIdentifier2B region;
  ITSIdentifier2B id;
} ITSIntersectionReferenceId;


extern const ASN1CType asn1_type_ITSIntersectionReferenceId[];

typedef enum {
  ITSMapReference_roadsegment,
  ITSMapReference_intersection,
} ITSMapReference_choice;

typedef struct ITSMapReference {
  ITSMapReference_choice choice;
  union {
    ITSRoadSegmentReferenceId roadsegment;
    ITSIntersectionReferenceId intersection;
  } u;
} ITSMapReference;

extern const ASN1CType asn1_type_ITSMapReference[];

typedef int ITSIdentifier1B;

extern const ASN1CType asn1_type_ITSIdentifier1B[];

typedef int ITSLongitudinalLanePositionValue;

enum {
  ITSLongitudinalLanePositionValue_outOfRange = 32766,
  ITSLongitudinalLanePositionValue_unavailable = 32767,
};

extern const ASN1CType asn1_type_ITSLongitudinalLanePositionValue[];

typedef int ITSLongitudinalLanePositionConfidence;

enum {
  ITSLongitudinalLanePositionConfidence_outOfRange = 1022,
  ITSLongitudinalLanePositionConfidence_unavailable = 1023,
};

extern const ASN1CType asn1_type_ITSLongitudinalLanePositionConfidence[];

typedef struct ITSLongitudinalLanePosition {
  ITSLongitudinalLanePositionValue longitudinalLanePositionValue;
  ITSLongitudinalLanePositionConfidence longitudinalLanePositionConfidence;
} ITSLongitudinalLanePosition;


extern const ASN1CType asn1_type_ITSLongitudinalLanePosition[];

typedef struct ITSMapPosition {
  BOOL mapReference_option;
  ITSMapReference mapReference;
  BOOL laneId_option;
  ITSIdentifier1B laneId;
  BOOL connectionId_option;
  ITSIdentifier1B connectionId;
  BOOL longitudinalLanePosition_option;
  ITSLongitudinalLanePosition longitudinalLanePosition;
} ITSMapPosition;


extern const ASN1CType asn1_type_ITSMapPosition[];

typedef ASN1BitString ITSSensorTypes;

extern const ASN1CType asn1_type_ITSSensorTypes[];

typedef ASN1BitString ITSStoredInformationType;

extern const ASN1CType asn1_type_ITSStoredInformationType[];

typedef int ITSConfidenceLevel;

enum {
  ITSConfidenceLevel_unavailable = 101,
};

extern const ASN1CType asn1_type_ITSConfidenceLevel[];

typedef struct ITSMetaInformation {
  ITSSensorTypes usedDetectionInformation;
  ITSStoredInformationType usedStoredInformation;
  BOOL confidenceValue_option;
  ITSConfidenceLevel confidenceValue;
} ITSMetaInformation;


extern const ASN1CType asn1_type_ITSMetaInformation[];

typedef struct ITSGeneralizedLanePosition {
  ITSLanePositionOptions lanePositionBased;
  BOOL mapBased_option;
  ITSMapPosition mapBased;
  ITSMetaInformation confidence;
} ITSGeneralizedLanePosition;


extern const ASN1CType asn1_type_ITSGeneralizedLanePosition[];

typedef struct ITSGeneralizedLanePositions {
  ITSGeneralizedLanePosition *tab;
  size_t count;
} ITSGeneralizedLanePositions;

extern const ASN1CType asn1_type_ITSGeneralizedLanePositions[];

typedef struct ITSOccupiedLanesWithConfidence_1 {
  ITSLanePositionOptions *tab;
  size_t count;
} ITSOccupiedLanesWithConfidence_1;

extern const ASN1CType asn1_type_ITSOccupiedLanesWithConfidence_1[];

typedef struct ITSOccupiedLanesWithConfidence_2 {
  ITSMapPosition *tab;
  size_t count;
} ITSOccupiedLanesWithConfidence_2;

extern const ASN1CType asn1_type_ITSOccupiedLanesWithConfidence_2[];

typedef struct ITSOccupiedLanesWithConfidence {
  ITSOccupiedLanesWithConfidence_1 lanePositionBased;
  BOOL mapBased_option;
  ITSOccupiedLanesWithConfidence_2 mapBased;
  ITSMetaInformation confidence;
} ITSOccupiedLanesWithConfidence;


extern const ASN1CType asn1_type_ITSOccupiedLanesWithConfidence[];

typedef ASN1BitString ITSCountryCode;

extern const ASN1CType asn1_type_ITSCountryCode[];

typedef int ITSIssuerIdentifier;

extern const ASN1CType asn1_type_ITSIssuerIdentifier[];

typedef struct ITSProvider {
  ITSCountryCode countryCode;
  ITSIssuerIdentifier providerIdentifier;
} ITSProvider;


extern const ASN1CType asn1_type_ITSProvider[];

typedef int ITSIviIdentificationNumber;

extern const ASN1CType asn1_type_ITSIviIdentificationNumber[];

typedef struct ITSIvimReference {
  ITSProvider serviceProviderId;
  ITSIviIdentificationNumber iviIdentificationNumber;
} ITSIvimReference;


extern const ASN1CType asn1_type_ITSIvimReference[];

typedef struct ITSIvimReferences {
  ITSIvimReference *tab;
  size_t count;
} ITSIvimReferences;

extern const ASN1CType asn1_type_ITSIvimReferences[];

typedef struct ITSMapReferences {
  ITSMapReference *tab;
  size_t count;
} ITSMapReferences;

extern const ASN1CType asn1_type_ITSMapReferences[];

typedef struct ITSPathExtended {
  int pointOfEventZone;
  ITSPath path;
} ITSPathExtended;


extern const ASN1CType asn1_type_ITSPathExtended[];

typedef struct ITSTracesExtended {
  ITSPathExtended *tab;
  size_t count;
} ITSTracesExtended;

extern const ASN1CType asn1_type_ITSTracesExtended[];

typedef int ITSDeltaTimeTenthOfSecond;

enum {
  ITSDeltaTimeTenthOfSecond_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSDeltaTimeTenthOfSecond[];

typedef int ITSDeltaTimeTenSeconds;

extern const ASN1CType asn1_type_ITSDeltaTimeTenSeconds[];

typedef enum {
  ITSPathDeltaTimeChoice_deltaTimeHighPrecision,
  ITSPathDeltaTimeChoice_deltaTimeBigRange,
  ITSPathDeltaTimeChoice_deltaTimeMidRange,
} ITSPathDeltaTimeChoice_choice;

typedef struct ITSPathDeltaTimeChoice {
  ITSPathDeltaTimeChoice_choice choice;
  union {
    ITSDeltaTimeTenthOfSecond deltaTimeHighPrecision;
    ITSDeltaTimeTenSeconds deltaTimeBigRange;
    ITSDeltaTimeSecond deltaTimeMidRange;
  } u;
} ITSPathDeltaTimeChoice;

extern const ASN1CType asn1_type_ITSPathDeltaTimeChoice[];

typedef struct ITSPathPointPredicted {
  ITSDeltaLatitude deltaLatitude;
  ITSDeltaLongitude deltaLongitude;
  BOOL horizontalPositionConfidence_option;
  ITSPosConfidenceEllipse horizontalPositionConfidence;
  ITSDeltaAltitude deltaAltitude;
  ITSAltitudeConfidence altitudeConfidence;
  BOOL pathDeltaTime_option;
  ITSPathDeltaTimeChoice pathDeltaTime;
  BOOL symmetricAreaOffset_option;
  ITSStandardLength9b symmetricAreaOffset;
  BOOL asymmetricAreaOffset_option;
  ITSStandardLength9b asymmetricAreaOffset;
} ITSPathPointPredicted;


extern const ASN1CType asn1_type_ITSPathPointPredicted[];

typedef struct ITSPathPredicted {
  ITSPathPointPredicted *tab;
  size_t count;
} ITSPathPredicted;

extern const ASN1CType asn1_type_ITSPathPredicted[];

typedef enum ITSUsageIndication {
  ITSUsageIndication_noIndication,
  ITSUsageIndication_specialUse,
  ITSUsageIndication_rescueOperation,
  ITSUsageIndication_railroad,
  ITSUsageIndication_fixedRoute,
  ITSUsageIndication_restrictedRoute,
  ITSUsageIndication_adasAd,
  ITSUsageIndication_navigation,
} ITSUsageIndication;

extern const ASN1CType asn1_type_ITSUsageIndication[];

typedef struct ITSPathPredicted2 {
  ITSPathPredicted pathPredicted;
  ITSUsageIndication usageIndication;
  ITSConfidenceLevel confidenceLevel;
} ITSPathPredicted2;


extern const ASN1CType asn1_type_ITSPathPredicted2[];

typedef struct ITSPathPredictedList {
  ITSPathPredicted2 *tab;
  size_t count;
} ITSPathPredictedList;

extern const ASN1CType asn1_type_ITSPathPredictedList[];

typedef struct ITSLocationContainer {
  BOOL eventSpeed_option;
  ITSSpeed eventSpeed;
  BOOL eventPositionHeading_option;
  ITSWgs84Angle eventPositionHeading;
  ITSTraces detectionZonesToEventPosition;
  BOOL roadType_option;
  ITSRoadType roadType;
  BOOL lanePositions_option;
  ITSGeneralizedLanePositions lanePositions;
  BOOL occupiedLanes_option;
  ITSOccupiedLanesWithConfidence occupiedLanes;
  BOOL linkedIvims_option;
  ITSIvimReferences linkedIvims;
  BOOL linkedMapems_option;
  ITSMapReferences linkedMapems;
  BOOL detectionZonesToSpecifiedEventPoint_option;
  ITSTracesExtended detectionZonesToSpecifiedEventPoint;
  BOOL predictedPaths_option;
  ITSPathPredictedList predictedPaths;
} ITSLocationContainer;


extern const ASN1CType asn1_type_ITSLocationContainer[];

typedef int ITSHeightLonCarr;

enum {
  ITSHeightLonCarr_outOfRange = 99,
  ITSHeightLonCarr_unavailable = 100,
};

extern const ASN1CType asn1_type_ITSHeightLonCarr[];

typedef int ITSPosLonCarr;

enum {
  ITSPosLonCarr_outOfRange = 126,
  ITSPosLonCarr_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSPosLonCarr[];

typedef int ITSPosPillar;

enum {
  ITSPosPillar_outOfRange = 29,
  ITSPosPillar_unavailable = 30,
};

extern const ASN1CType asn1_type_ITSPosPillar[];

typedef struct ITSPositionOfPillars {
  ITSPosPillar *tab;
  size_t count;
} ITSPositionOfPillars;

extern const ASN1CType asn1_type_ITSPositionOfPillars[];

typedef int ITSPosCentMass;

enum {
  ITSPosCentMass_tenCentimetres = 1,
  ITSPosCentMass_outOfRange = 62,
  ITSPosCentMass_unavailable = 63,
};

extern const ASN1CType asn1_type_ITSPosCentMass[];

typedef int ITSWheelBaseVehicle;

enum {
  ITSWheelBaseVehicle_outOfRange = 126,
  ITSWheelBaseVehicle_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSWheelBaseVehicle[];

typedef int ITSTurningRadius;

enum {
  ITSTurningRadius_outOfRange = 254,
  ITSTurningRadius_unavailable = 255,
};

extern const ASN1CType asn1_type_ITSTurningRadius[];

typedef int ITSPosFrontAx;

enum {
  ITSPosFrontAx_outOfRange = 19,
  ITSPosFrontAx_unavailable = 20,
};

extern const ASN1CType asn1_type_ITSPosFrontAx[];

typedef ASN1BitString ITSPositionOfOccupants;

extern const ASN1CType asn1_type_ITSPositionOfOccupants[];

typedef int ITSVehicleMass;

enum {
  ITSVehicleMass_outOfRange = 1023,
  ITSVehicleMass_unavailable = 1024,
};

extern const ASN1CType asn1_type_ITSVehicleMass[];

typedef enum ITSRequestResponseIndication {
  ITSRequestResponseIndication_request,
  ITSRequestResponseIndication_response,
} ITSRequestResponseIndication;

extern const ASN1CType asn1_type_ITSRequestResponseIndication[];

typedef struct ITSImpactReductionContainer {
  ITSHeightLonCarr heightLonCarrLeft;
  ITSHeightLonCarr heightLonCarrRight;
  ITSPosLonCarr posLonCarrLeft;
  ITSPosLonCarr posLonCarrRight;
  ITSPositionOfPillars positionOfPillars;
  ITSPosCentMass posCentMass;
  ITSWheelBaseVehicle wheelBaseVehicle;
  ITSTurningRadius turningRadius;
  ITSPosFrontAx posFrontAx;
  ITSPositionOfOccupants positionOfOccupants;
  ITSVehicleMass vehicleMass;
  ITSRequestResponseIndication requestResponseIndication;
} ITSImpactReductionContainer;


extern const ASN1CType asn1_type_ITSImpactReductionContainer[];

typedef int ITSTemperature;

enum {
  ITSTemperature_equalOrSmallerThanMinus60Deg = -60,
  ITSTemperature_equalOrGreaterThan67Deg = 67,
};

extern const ASN1CType asn1_type_ITSTemperature[];

typedef struct ITSRestrictedTypes {
  ITSStationType *tab;
  size_t count;
} ITSRestrictedTypes;

extern const ASN1CType asn1_type_ITSRestrictedTypes[];

typedef struct ITSItineraryPath {
  ITSReferencePosition *tab;
  size_t count;
} ITSItineraryPath;

extern const ASN1CType asn1_type_ITSItineraryPath[];

typedef struct ITSRoadWorksContainerExtended {
  BOOL lightBarSirenInUse_option;
  ITSLightBarSirenInUse lightBarSirenInUse;
  BOOL closedLanes_option;
  ITSClosedLanes closedLanes;
  BOOL restriction_option;
  ITSRestrictedTypes restriction;
  BOOL speedLimit_option;
  ITSSpeedLimit speedLimit;
  BOOL incidentIndication_option;
  ITSCauseCodeV2 incidentIndication;
  BOOL recommendedPath_option;
  ITSItineraryPath recommendedPath;
  BOOL startingPointSpeedLimit_option;
  ITSDeltaReferencePosition startingPointSpeedLimit;
  BOOL trafficFlowRule_option;
  ITSTrafficRule trafficFlowRule;
  BOOL referenceDenms_option;
  ITSActionIdList referenceDenms;
} ITSRoadWorksContainerExtended;


extern const ASN1CType asn1_type_ITSRoadWorksContainerExtended[];

typedef enum ITSPositioningSolutionType {
  ITSPositioningSolutionType_noPositioningSolution,
  ITSPositioningSolutionType_sGNSS,
  ITSPositioningSolutionType_dGNSS,
  ITSPositioningSolutionType_sGNSSplusDR,
  ITSPositioningSolutionType_dGNSSplusDR,
  ITSPositioningSolutionType_dR,
  ITSPositioningSolutionType_manuallyByOperator,
} ITSPositioningSolutionType;

extern const ASN1CType asn1_type_ITSPositioningSolutionType[];

typedef enum ITSStationarySince {
  ITSStationarySince_lessThan1Minute,
  ITSStationarySince_lessThan2Minutes,
  ITSStationarySince_lessThan15Minutes,
  ITSStationarySince_equalOrGreater15Minutes,
} ITSStationarySince;

extern const ASN1CType asn1_type_ITSStationarySince[];

typedef ASN1String ITSPhoneNumber;

extern const ASN1CType asn1_type_ITSPhoneNumber[];

typedef struct ITSDangerousGoodsExtended {
  ITSDangerousGoodsBasic dangerousGoodsType;
  int unNumber;
  BOOL elevatedTemperature;
  BOOL tunnelsRestricted;
  BOOL limitedQuantity;
  BOOL emergencyActionCode_option;
  ASN1String emergencyActionCode;
  BOOL phoneNumber_option;
  ITSPhoneNumber phoneNumber;
  BOOL companyName_option;
  ASN1String companyName;
} ITSDangerousGoodsExtended;


extern const ASN1CType asn1_type_ITSDangerousGoodsExtended[];

typedef int ITSNumberOfOccupants;

enum {
  ITSNumberOfOccupants_outOfRange = 126,
  ITSNumberOfOccupants_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSNumberOfOccupants[];

typedef ASN1String ITSWMInumber;

extern const ASN1CType asn1_type_ITSWMInumber[];

typedef ASN1String ITSVDS;

extern const ASN1CType asn1_type_ITSVDS[];

typedef struct ITSVehicleIdentification {
  BOOL wMInumber_option;
  ITSWMInumber wMInumber;
  BOOL vDS_option;
  ITSVDS vDS;
} ITSVehicleIdentification;


extern const ASN1CType asn1_type_ITSVehicleIdentification[];

typedef ASN1BitString ITSEnergyStorageType;

extern const ASN1CType asn1_type_ITSEnergyStorageType[];

typedef struct ITSStationaryVehicleContainer {
  BOOL stationarySince_option;
  ITSStationarySince stationarySince;
  BOOL stationaryCause_option;
  ITSCauseCodeV2 stationaryCause;
  BOOL carryingDangerousGoods_option;
  ITSDangerousGoodsExtended carryingDangerousGoods;
  BOOL numberOfOccupants_option;
  ITSNumberOfOccupants numberOfOccupants;
  BOOL vehicleIdentification_option;
  ITSVehicleIdentification vehicleIdentification;
  BOOL energyStorageType_option;
  ITSEnergyStorageType energyStorageType;
} ITSStationaryVehicleContainer;


extern const ASN1CType asn1_type_ITSStationaryVehicleContainer[];

typedef struct ITSGeoPosition {
  ITSLatitude latitude;
  ITSLongitude longitude;
  ITSAltitudeValue altitude;
} ITSGeoPosition;


extern const ASN1CType asn1_type_ITSGeoPosition[];

typedef int ITSStandardLength2B;

extern const ASN1CType asn1_type_ITSStandardLength2B[];

typedef int ITSPathId;

enum {
  ITSPathId_noPath = 0,
  ITSPathId_path1 = 1,
  ITSPathId_path2 = 2,
  ITSPathId_path3 = 3,
  ITSPathId_path4 = 4,
  ITSPathId_path5 = 5,
  ITSPathId_path6 = 6,
  ITSPathId_path7 = 7,
  ITSPathId_pathExtended1 = 8,
  ITSPathId_pathExtended2 = 9,
  ITSPathId_pathExtended3 = 10,
  ITSPathId_pathExtended4 = 11,
  ITSPathId_pathExtended5 = 12,
  ITSPathId_pathExtended6 = 13,
  ITSPathId_pathExtended7 = 14,
};

extern const ASN1CType asn1_type_ITSPathId[];

typedef struct ITSPathReferences {
  ITSPathId *tab;
  size_t count;
} ITSPathReferences;

extern const ASN1CType asn1_type_ITSPathReferences[];

typedef struct ITSRoadSectionDefinition {
  ITSGeoPosition startingPointSection;
  BOOL lengthOfSection_option;
  ITSStandardLength2B lengthOfSection;
  BOOL endingPointSection_option;
  ITSGeoPosition endingPointSection;
  ITSPathReferences connectedPaths;
  ITSPathReferences includedPaths;
  BOOL isEventZoneIncluded;
  BOOL isEventZoneConnected;
} ITSRoadSectionDefinition;


extern const ASN1CType asn1_type_ITSRoadSectionDefinition[];

typedef int ITSLaneWidth;

extern const ASN1CType asn1_type_ITSLaneWidth[];

typedef int ITSRoadSectionId;

extern const ASN1CType asn1_type_ITSRoadSectionId[];

typedef struct ITSBasicLaneInformation {
  ITSLanePosition laneNumber;
  ITSDirection direction;
  BOOL laneWidth_option;
  ITSLaneWidth laneWidth;
  BOOL connectingLane_option;
  ITSLanePosition connectingLane;
  BOOL connectingRoadSection_option;
  ITSRoadSectionId connectingRoadSection;
} ITSBasicLaneInformation;


extern const ASN1CType asn1_type_ITSBasicLaneInformation[];

typedef struct ITSBasicLaneConfiguration {
  ITSBasicLaneInformation *tab;
  size_t count;
} ITSBasicLaneConfiguration;

extern const ASN1CType asn1_type_ITSBasicLaneConfiguration[];

typedef struct ITSMapemLaneList {
  ITSIdentifier1B *tab;
  size_t count;
} ITSMapemLaneList;

extern const ASN1CType asn1_type_ITSMapemLaneList[];

typedef struct ITSMapemConnectionList {
  ITSIdentifier1B *tab;
  size_t count;
} ITSMapemConnectionList;

extern const ASN1CType asn1_type_ITSMapemConnectionList[];

typedef struct ITSMapemElementReference {
  BOOL mapReference_option;
  ITSMapReference mapReference;
  BOOL laneIds_option;
  ITSMapemLaneList laneIds;
  BOOL connectionIds_option;
  ITSMapemConnectionList connectionIds;
} ITSMapemElementReference;


extern const ASN1CType asn1_type_ITSMapemElementReference[];

typedef struct ITSMapemConfiguration {
  ITSMapemElementReference *tab;
  size_t count;
} ITSMapemConfiguration;

extern const ASN1CType asn1_type_ITSMapemConfiguration[];

typedef struct ITSRoadConfigurationSection {
  ITSRoadSectionDefinition roadSectionDefinition;
  BOOL roadType_option;
  ITSRoadType roadType;
  BOOL laneConfiguration_option;
  ITSBasicLaneConfiguration laneConfiguration;
  BOOL mapemConfiguration_option;
  ITSMapemConfiguration mapemConfiguration;
} ITSRoadConfigurationSection;


extern const ASN1CType asn1_type_ITSRoadConfigurationSection[];

typedef struct ITSRoadConfigurationSectionList {
  ITSRoadConfigurationSection *tab;
  size_t count;
} ITSRoadConfigurationSectionList;

extern const ASN1CType asn1_type_ITSRoadConfigurationSectionList[];

typedef struct ITSALCRoadConfigurationContainer {
  ITSMetaInformation roadConfigurationConfidence;
  ITSRoadConfigurationSectionList roadConfigurationSectionList;
} ITSALCRoadConfigurationContainer;


extern const ASN1CType asn1_type_ITSALCRoadConfigurationContainer[];

typedef int ITSDeltaTimeMilliSecondSigned;

extern const ASN1CType asn1_type_ITSDeltaTimeMilliSecondSigned[];

typedef int ITSCartesianCoordinateLarge;

enum {
  ITSCartesianCoordinateLarge_negativeOutOfRange = -131072,
  ITSCartesianCoordinateLarge_positiveOutOfRange = 131071,
};

extern const ASN1CType asn1_type_ITSCartesianCoordinateLarge[];

typedef int ITSCoordinateConfidence;

enum {
  ITSCoordinateConfidence_outOfRange = 4095,
  ITSCoordinateConfidence_unavailable = 4096,
};

extern const ASN1CType asn1_type_ITSCoordinateConfidence[];

typedef struct ITSCartesianCoordinateWithConfidence {
  ITSCartesianCoordinateLarge value;
  ITSCoordinateConfidence confidence;
} ITSCartesianCoordinateWithConfidence;


extern const ASN1CType asn1_type_ITSCartesianCoordinateWithConfidence[];

typedef struct ITSCartesianPosition3dWithConfidence {
  ITSCartesianCoordinateWithConfidence xCoordinate;
  ITSCartesianCoordinateWithConfidence yCoordinate;
  BOOL zCoordinate_option;
  ITSCartesianCoordinateWithConfidence zCoordinate;
} ITSCartesianPosition3dWithConfidence;


extern const ASN1CType asn1_type_ITSCartesianPosition3dWithConfidence[];

typedef int ITSCartesianAngleValue;

enum {
  ITSCartesianAngleValue_valueNotUsed = 3600,
  ITSCartesianAngleValue_unavailable = 3601,
};

extern const ASN1CType asn1_type_ITSCartesianAngleValue[];

typedef int ITSAngleConfidence;

enum {
  ITSAngleConfidence_outOfRange = 126,
  ITSAngleConfidence_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSAngleConfidence[];

typedef struct ITSCartesianAngle {
  ITSCartesianAngleValue value;
  ITSAngleConfidence confidence;
} ITSCartesianAngle;


extern const ASN1CType asn1_type_ITSCartesianAngle[];

typedef int ITSVelocityComponentValue;

enum {
  ITSVelocityComponentValue_negativeOutOfRange = -16383,
  ITSVelocityComponentValue_positiveOutOfRange = 16382,
  ITSVelocityComponentValue_unavailable = 16383,
};

extern const ASN1CType asn1_type_ITSVelocityComponentValue[];

typedef struct ITSVelocityComponent {
  ITSVelocityComponentValue value;
  ITSSpeedConfidence confidence;
} ITSVelocityComponent;


extern const ASN1CType asn1_type_ITSVelocityComponent[];

typedef struct ITSVelocityPolarWithZ {
  ITSSpeed velocityMagnitude;
  ITSCartesianAngle velocityDirection;
  BOOL zVelocity_option;
  ITSVelocityComponent zVelocity;
} ITSVelocityPolarWithZ;


extern const ASN1CType asn1_type_ITSVelocityPolarWithZ[];

typedef struct ITSVelocityCartesian {
  ITSVelocityComponent xVelocity;
  ITSVelocityComponent yVelocity;
  BOOL zVelocity_option;
  ITSVelocityComponent zVelocity;
} ITSVelocityCartesian;


extern const ASN1CType asn1_type_ITSVelocityCartesian[];

typedef enum {
  ITSVelocity3dWithConfidence_polarVelocity,
  ITSVelocity3dWithConfidence_cartesianVelocity,
} ITSVelocity3dWithConfidence_choice;

typedef struct ITSVelocity3dWithConfidence {
  ITSVelocity3dWithConfidence_choice choice;
  union {
    ITSVelocityPolarWithZ polarVelocity;
    ITSVelocityCartesian cartesianVelocity;
  } u;
} ITSVelocity3dWithConfidence;

extern const ASN1CType asn1_type_ITSVelocity3dWithConfidence[];

typedef int ITSAccelerationMagnitudeValue;

enum {
  ITSAccelerationMagnitudeValue_positiveOutOfRange = 160,
  ITSAccelerationMagnitudeValue_unavailable = 161,
};

extern const ASN1CType asn1_type_ITSAccelerationMagnitudeValue[];

typedef struct ITSAccelerationMagnitude {
  ITSAccelerationMagnitudeValue accelerationMagnitudeValue;
  ITSAccelerationConfidence accelerationConfidence;
} ITSAccelerationMagnitude;


extern const ASN1CType asn1_type_ITSAccelerationMagnitude[];

typedef struct ITSAccelerationPolarWithZ {
  ITSAccelerationMagnitude accelerationMagnitude;
  ITSCartesianAngle accelerationDirection;
  BOOL zAcceleration_option;
  ITSAccelerationComponent zAcceleration;
} ITSAccelerationPolarWithZ;


extern const ASN1CType asn1_type_ITSAccelerationPolarWithZ[];

typedef struct ITSAccelerationCartesian {
  ITSAccelerationComponent xAcceleration;
  ITSAccelerationComponent yAcceleration;
  BOOL zAcceleration_option;
  ITSAccelerationComponent zAcceleration;
} ITSAccelerationCartesian;


extern const ASN1CType asn1_type_ITSAccelerationCartesian[];

typedef enum {
  ITSAcceleration3dWithConfidence_polarAcceleration,
  ITSAcceleration3dWithConfidence_cartesianAcceleration,
} ITSAcceleration3dWithConfidence_choice;

typedef struct ITSAcceleration3dWithConfidence {
  ITSAcceleration3dWithConfidence_choice choice;
  union {
    ITSAccelerationPolarWithZ polarAcceleration;
    ITSAccelerationCartesian cartesianAcceleration;
  } u;
} ITSAcceleration3dWithConfidence;

extern const ASN1CType asn1_type_ITSAcceleration3dWithConfidence[];

typedef struct ITSEulerAnglesWithConfidence {
  ITSCartesianAngle zAngle;
  BOOL yAngle_option;
  ITSCartesianAngle yAngle;
  BOOL xAngle_option;
  ITSCartesianAngle xAngle;
} ITSEulerAnglesWithConfidence;


extern const ASN1CType asn1_type_ITSEulerAnglesWithConfidence[];

typedef int ITSCartesianAngularVelocityComponentValue;

enum {
  ITSCartesianAngularVelocityComponentValue_negativeOutofRange = -255,
  ITSCartesianAngularVelocityComponentValue_positiveOutOfRange = 255,
  ITSCartesianAngularVelocityComponentValue_unavailable = 256,
};

extern const ASN1CType asn1_type_ITSCartesianAngularVelocityComponentValue[];

typedef enum ITSAngularSpeedConfidence {
  ITSAngularSpeedConfidence_degSec_01,
  ITSAngularSpeedConfidence_degSec_02,
  ITSAngularSpeedConfidence_degSec_05,
  ITSAngularSpeedConfidence_degSec_10,
  ITSAngularSpeedConfidence_degSec_20,
  ITSAngularSpeedConfidence_degSec_50,
  ITSAngularSpeedConfidence_outOfRange,
  ITSAngularSpeedConfidence_unavailable,
} ITSAngularSpeedConfidence;

extern const ASN1CType asn1_type_ITSAngularSpeedConfidence[];

typedef struct ITSCartesianAngularVelocityComponent {
  ITSCartesianAngularVelocityComponentValue value;
  ITSAngularSpeedConfidence confidence;
} ITSCartesianAngularVelocityComponent;


extern const ASN1CType asn1_type_ITSCartesianAngularVelocityComponent[];

typedef ASN1BitString ITSMatrixIncludedComponents;

extern const ASN1CType asn1_type_ITSMatrixIncludedComponents[];

typedef int ITSCorrelationCellValue;

enum {
  ITSCorrelationCellValue_full_negative_correlation = -100,
  ITSCorrelationCellValue_no_correlation = 0,
  ITSCorrelationCellValue_full_positive_correlation = 100,
  ITSCorrelationCellValue_unavailable = 101,
};

extern const ASN1CType asn1_type_ITSCorrelationCellValue[];

typedef struct ITSCorrelationColumn {
  ITSCorrelationCellValue *tab;
  size_t count;
} ITSCorrelationColumn;

extern const ASN1CType asn1_type_ITSCorrelationColumn[];

typedef struct ITSLowerTriangularPositiveSemidefiniteMatrixColumns {
  ITSCorrelationColumn *tab;
  size_t count;
} ITSLowerTriangularPositiveSemidefiniteMatrixColumns;

extern const ASN1CType asn1_type_ITSLowerTriangularPositiveSemidefiniteMatrixColumns[];

typedef struct ITSLowerTriangularPositiveSemidefiniteMatrix {
  ITSMatrixIncludedComponents componentsIncludedIntheMatrix;
  ITSLowerTriangularPositiveSemidefiniteMatrixColumns matrix;
} ITSLowerTriangularPositiveSemidefiniteMatrix;


extern const ASN1CType asn1_type_ITSLowerTriangularPositiveSemidefiniteMatrix[];

typedef struct ITSLowerTriangularPositiveSemidefiniteMatrices {
  ITSLowerTriangularPositiveSemidefiniteMatrix *tab;
  size_t count;
} ITSLowerTriangularPositiveSemidefiniteMatrices;

extern const ASN1CType asn1_type_ITSLowerTriangularPositiveSemidefiniteMatrices[];

typedef int ITSObjectDimensionValue;

enum {
  ITSObjectDimensionValue_outOfRange = 255,
  ITSObjectDimensionValue_unavailable = 256,
};

extern const ASN1CType asn1_type_ITSObjectDimensionValue[];

typedef int ITSObjectDimensionConfidence;

enum {
  ITSObjectDimensionConfidence_outOfRange = 31,
  ITSObjectDimensionConfidence_unavailable = 32,
};

extern const ASN1CType asn1_type_ITSObjectDimensionConfidence[];

typedef struct ITSObjectDimension {
  ITSObjectDimensionValue value;
  ITSObjectDimensionConfidence confidence;
} ITSObjectDimension;


extern const ASN1CType asn1_type_ITSObjectDimension[];

typedef int ITSDeltaTimeMilliSecondSigned_1;

extern const ASN1CType asn1_type_ITSDeltaTimeMilliSecondSigned_1[];

typedef int ITSObjectPerceptionQuality;

enum {
  ITSObjectPerceptionQuality_noConfidence = 0,
  ITSObjectPerceptionQuality_fullConfidence = 15,
};

extern const ASN1CType asn1_type_ITSObjectPerceptionQuality[];

typedef struct ITSSequenceOfIdentifier1B {
  ITSIdentifier1B *tab;
  size_t count;
} ITSSequenceOfIdentifier1B;

extern const ASN1CType asn1_type_ITSSequenceOfIdentifier1B[];

typedef int ITSTrafficParticipantType_1;

enum {
  ITSTrafficParticipantType_1_unknown = 0,
  ITSTrafficParticipantType_1_pedestrian = 1,
  ITSTrafficParticipantType_1_cyclist = 2,
  ITSTrafficParticipantType_1_moped = 3,
  ITSTrafficParticipantType_1_motorcycle = 4,
  ITSTrafficParticipantType_1_passengerCar = 5,
  ITSTrafficParticipantType_1_bus = 6,
  ITSTrafficParticipantType_1_lightTruck = 7,
  ITSTrafficParticipantType_1_heavyTruck = 8,
  ITSTrafficParticipantType_1_trailer = 9,
  ITSTrafficParticipantType_1_specialVehicle = 10,
  ITSTrafficParticipantType_1_tram = 11,
  ITSTrafficParticipantType_1_lightVruVehicle = 12,
  ITSTrafficParticipantType_1_animal = 13,
  ITSTrafficParticipantType_1_agricultural = 14,
  ITSTrafficParticipantType_1_roadSideUnit = 15,
};

extern const ASN1CType asn1_type_ITSTrafficParticipantType_1[];

typedef int ITSVruSubProfilePedestrian;

enum {
  ITSVruSubProfilePedestrian_unavailable = 0,
  ITSVruSubProfilePedestrian_ordinary_pedestrian = 1,
  ITSVruSubProfilePedestrian_road_worker = 2,
  ITSVruSubProfilePedestrian_first_responder = 3,
};

extern const ASN1CType asn1_type_ITSVruSubProfilePedestrian[];

typedef int ITSVruSubProfileBicyclist;

enum {
  ITSVruSubProfileBicyclist_unavailable = 0,
  ITSVruSubProfileBicyclist_bicyclist = 1,
  ITSVruSubProfileBicyclist_wheelchair_user = 2,
  ITSVruSubProfileBicyclist_horse_and_rider = 3,
  ITSVruSubProfileBicyclist_rollerskater = 4,
  ITSVruSubProfileBicyclist_e_scooter = 5,
  ITSVruSubProfileBicyclist_personal_transporter = 6,
  ITSVruSubProfileBicyclist_pedelec = 7,
  ITSVruSubProfileBicyclist_speed_pedelec = 8,
  ITSVruSubProfileBicyclist_roadbike = 9,
  ITSVruSubProfileBicyclist_childrensbike = 10,
};

extern const ASN1CType asn1_type_ITSVruSubProfileBicyclist[];

typedef int ITSVruSubProfileMotorcyclist;

enum {
  ITSVruSubProfileMotorcyclist_unavailable = 0,
  ITSVruSubProfileMotorcyclist_moped = 1,
  ITSVruSubProfileMotorcyclist_motorcycle = 2,
  ITSVruSubProfileMotorcyclist_motorcycle_and_sidecar_right = 3,
  ITSVruSubProfileMotorcyclist_motorcycle_and_sidecar_left = 4,
};

extern const ASN1CType asn1_type_ITSVruSubProfileMotorcyclist[];

typedef int ITSVruSubProfileAnimal;

enum {
  ITSVruSubProfileAnimal_unavailable = 0,
  ITSVruSubProfileAnimal_wild_animal = 1,
  ITSVruSubProfileAnimal_farm_animal = 2,
  ITSVruSubProfileAnimal_service_animal = 3,
};

extern const ASN1CType asn1_type_ITSVruSubProfileAnimal[];

typedef enum {
  ITSVruProfileAndSubprofile_pedestrian,
  ITSVruProfileAndSubprofile_bicyclistAndLightVruVehicle,
  ITSVruProfileAndSubprofile_motorcyclist,
  ITSVruProfileAndSubprofile_animal,
} ITSVruProfileAndSubprofile_choice;

typedef struct ITSVruProfileAndSubprofile {
  ITSVruProfileAndSubprofile_choice choice;
  union {
    ITSVruSubProfilePedestrian pedestrian;
    ITSVruSubProfileBicyclist bicyclistAndLightVruVehicle;
    ITSVruSubProfileMotorcyclist motorcyclist;
    ITSVruSubProfileAnimal animal;
  } u;
} ITSVruProfileAndSubprofile;

extern const ASN1CType asn1_type_ITSVruProfileAndSubprofile[];

typedef int ITSCartesianCoordinate;

enum {
  ITSCartesianCoordinate_negativeOutOfRange = -32768,
  ITSCartesianCoordinate_positiveOutOfRange = 32767,
};

extern const ASN1CType asn1_type_ITSCartesianCoordinate[];

typedef struct ITSCartesianPosition3d {
  ITSCartesianCoordinate xCoordinate;
  ITSCartesianCoordinate yCoordinate;
  BOOL zCoordinate_option;
  ITSCartesianCoordinate zCoordinate;
} ITSCartesianPosition3d;


extern const ASN1CType asn1_type_ITSCartesianPosition3d[];

typedef int ITSStandardLength12b;

extern const ASN1CType asn1_type_ITSStandardLength12b[];

typedef struct ITSRectangularShape {
  BOOL shapeReferencePoint_option;
  ITSCartesianPosition3d shapeReferencePoint;
  ITSStandardLength12b semiLength;
  ITSStandardLength12b semiBreadth;
  BOOL orientation_option;
  ITSCartesianAngleValue orientation;
  BOOL height_option;
  ITSStandardLength12b height;
} ITSRectangularShape;


extern const ASN1CType asn1_type_ITSRectangularShape[];

typedef struct ITSCircularShape {
  BOOL shapeReferencePoint_option;
  ITSCartesianPosition3d shapeReferencePoint;
  ITSStandardLength12b radius;
  BOOL height_option;
  ITSStandardLength12b height;
} ITSCircularShape;


extern const ASN1CType asn1_type_ITSCircularShape[];

typedef struct ITSSequenceOfCartesianPosition3d_1 {
  ITSCartesianPosition3d *tab;
  size_t count;
} ITSSequenceOfCartesianPosition3d_1;

extern const ASN1CType asn1_type_ITSSequenceOfCartesianPosition3d_1[];

typedef struct ITSPolygonalShape {
  BOOL shapeReferencePoint_option;
  ITSCartesianPosition3d shapeReferencePoint;
  ITSSequenceOfCartesianPosition3d_1 polygon;
  BOOL height_option;
  ITSStandardLength12b height;
} ITSPolygonalShape;


extern const ASN1CType asn1_type_ITSPolygonalShape[];

typedef struct ITSEllipticalShape {
  BOOL shapeReferencePoint_option;
  ITSCartesianPosition3d shapeReferencePoint;
  ITSStandardLength12b semiMajorAxisLength;
  ITSStandardLength12b semiMinorAxisLength;
  BOOL orientation_option;
  ITSCartesianAngleValue orientation;
  BOOL height_option;
  ITSStandardLength12b height;
} ITSEllipticalShape;


extern const ASN1CType asn1_type_ITSEllipticalShape[];

typedef struct ITSRadialShape {
  BOOL shapeReferencePoint_option;
  ITSCartesianPosition3d shapeReferencePoint;
  ITSStandardLength12b range;
  ITSCartesianAngleValue horizontalOpeningAngleStart;
  ITSCartesianAngleValue horizontalOpeningAngleEnd;
  BOOL verticalOpeningAngleStart_option;
  ITSCartesianAngleValue verticalOpeningAngleStart;
  BOOL verticalOpeningAngleEnd_option;
  ITSCartesianAngleValue verticalOpeningAngleEnd;
} ITSRadialShape;


extern const ASN1CType asn1_type_ITSRadialShape[];

typedef int ITSCartesianCoordinateSmall;

enum {
  ITSCartesianCoordinateSmall_negativeOutOfRange = -3094,
  ITSCartesianCoordinateSmall_positiveOutOfRange = 1001,
};

extern const ASN1CType asn1_type_ITSCartesianCoordinateSmall[];

typedef struct ITSRadialShapeDetails {
  ITSStandardLength12b range;
  ITSCartesianAngleValue horizontalOpeningAngleStart;
  ITSCartesianAngleValue horizontalOpeningAngleEnd;
  BOOL verticalOpeningAngleStart_option;
  ITSCartesianAngleValue verticalOpeningAngleStart;
  BOOL verticalOpeningAngleEnd_option;
  ITSCartesianAngleValue verticalOpeningAngleEnd;
} ITSRadialShapeDetails;


extern const ASN1CType asn1_type_ITSRadialShapeDetails[];

typedef struct ITSRadialShapesList {
  ITSRadialShapeDetails *tab;
  size_t count;
} ITSRadialShapesList;

extern const ASN1CType asn1_type_ITSRadialShapesList[];

typedef struct ITSRadialShapes {
  ITSIdentifier1B refPointId;
  ITSCartesianCoordinateSmall xCoordinate;
  ITSCartesianCoordinateSmall yCoordinate;
  BOOL zCoordinate_option;
  ITSCartesianCoordinateSmall zCoordinate;
  ITSRadialShapesList radialShapesList;
} ITSRadialShapes;


extern const ASN1CType asn1_type_ITSRadialShapes[];

typedef enum {
  ITSShape_rectangular,
  ITSShape_circular,
  ITSShape_polygonal,
  ITSShape_elliptical,
  ITSShape_radial,
  ITSShape_radialShapes,
} ITSShape_choice;

typedef struct ITSShape {
  ITSShape_choice choice;
  union {
    ITSRectangularShape rectangular;
    ITSCircularShape circular;
    ITSPolygonalShape polygonal;
    ITSEllipticalShape elliptical;
    ITSRadialShape radial;
    ITSRadialShapes radialShapes;
  } u;
} ITSShape;

extern const ASN1CType asn1_type_ITSShape[];

typedef int ITSCardinalNumber1B;

extern const ASN1CType asn1_type_ITSCardinalNumber1B[];

typedef ASN1BitString ITSVruClusterProfiles;

extern const ASN1CType asn1_type_ITSVruClusterProfiles[];

typedef struct ITSVruClusterInformation {
  BOOL clusterId_option;
  ITSIdentifier1B clusterId;
  BOOL clusterBoundingBoxShape_option;
  ITSShape clusterBoundingBoxShape;
  ITSCardinalNumber1B clusterCardinalitySize;
  BOOL clusterProfiles_option;
  ITSVruClusterProfiles clusterProfiles;
} ITSVruClusterInformation;


extern const ASN1CType asn1_type_ITSVruClusterInformation[];

typedef int ITSOtherSubClass;

enum {
  ITSOtherSubClass_unknown = 0,
  ITSOtherSubClass_singleObject = 1,
  ITSOtherSubClass_multipleObjects = 2,
  ITSOtherSubClass_bulkMaterial = 3,
};

extern const ASN1CType asn1_type_ITSOtherSubClass[];

typedef enum {
  ITSObjectClass_vehicleSubClass,
  ITSObjectClass_vruSubClass,
  ITSObjectClass_groupSubClass,
  ITSObjectClass_otherSubClass,
} ITSObjectClass_choice;

typedef struct ITSObjectClass {
  ITSObjectClass_choice choice;
  union {
    ITSTrafficParticipantType_1 vehicleSubClass;
    ITSVruProfileAndSubprofile vruSubClass;
    ITSVruClusterInformation groupSubClass;
    ITSOtherSubClass otherSubClass;
  } u;
} ITSObjectClass;

extern const ASN1CType asn1_type_ITSObjectClass[];

typedef struct ITSObjectClassWithConfidence {
  ITSObjectClass objectClass;
  ITSConfidenceLevel confidence;
} ITSObjectClassWithConfidence;


extern const ASN1CType asn1_type_ITSObjectClassWithConfidence[];

typedef struct ITSObjectClassDescription {
  ITSObjectClassWithConfidence *tab;
  size_t count;
} ITSObjectClassDescription;

extern const ASN1CType asn1_type_ITSObjectClassDescription[];

typedef struct ITSPerceivedObject {
  BOOL objectId_option;
  ITSIdentifier2B objectId;
  ITSDeltaTimeMilliSecondSigned measurementDeltaTime;
  ITSCartesianPosition3dWithConfidence position;
  BOOL velocity_option;
  ITSVelocity3dWithConfidence velocity;
  BOOL acceleration_option;
  ITSAcceleration3dWithConfidence acceleration;
  BOOL angles_option;
  ITSEulerAnglesWithConfidence angles;
  BOOL zAngularVelocity_option;
  ITSCartesianAngularVelocityComponent zAngularVelocity;
  BOOL lowerTriangularCorrelationMatrices_option;
  ITSLowerTriangularPositiveSemidefiniteMatrices lowerTriangularCorrelationMatrices;
  BOOL objectDimensionZ_option;
  ITSObjectDimension objectDimensionZ;
  BOOL objectDimensionY_option;
  ITSObjectDimension objectDimensionY;
  BOOL objectDimensionX_option;
  ITSObjectDimension objectDimensionX;
  BOOL objectAge_option;
  ITSDeltaTimeMilliSecondSigned_1 objectAge;
  BOOL objectPerceptionQuality_option;
  ITSObjectPerceptionQuality objectPerceptionQuality;
  BOOL sensorIdList_option;
  ITSSequenceOfIdentifier1B sensorIdList;
  BOOL classification_option;
  ITSObjectClassDescription classification;
  BOOL mapPosition_option;
  ITSMapPosition mapPosition;
} ITSPerceivedObject;


extern const ASN1CType asn1_type_ITSPerceivedObject[];

typedef enum ITSObjectFace {
  ITSObjectFace_front,
  ITSObjectFace_sideLeftFront,
  ITSObjectFace_sideLeftBack,
  ITSObjectFace_sideRightFront,
  ITSObjectFace_sideRightBack,
  ITSObjectFace_back,
} ITSObjectFace;

extern const ASN1CType asn1_type_ITSObjectFace[];

typedef struct ITSPreCrashContainer {
  ITSPerceivedObject perceivedPreCrashObject;
  BOOL objectStationId_option;
  ITSStationId objectStationId;
  BOOL timeToCollision_option;
  ITSDeltaTimeMilliSecondPositive timeToCollision;
  BOOL impactSection_option;
  ITSObjectFace impactSection;
  BOOL estimatedBrakingDistance_option;
  ITSStandardLength12b estimatedBrakingDistance;
} ITSPreCrashContainer;


extern const ASN1CType asn1_type_ITSPreCrashContainer[];

typedef struct ITSAlacarteContainer {
  BOOL lanePosition_option;
  ITSLanePosition lanePosition;
  BOOL impactReduction_option;
  ITSImpactReductionContainer impactReduction;
  BOOL externalTemperature_option;
  ITSTemperature externalTemperature;
  BOOL roadWorks_option;
  ITSRoadWorksContainerExtended roadWorks;
  BOOL positioningSolution_option;
  ITSPositioningSolutionType positioningSolution;
  BOOL stationaryVehicle_option;
  ITSStationaryVehicleContainer stationaryVehicle;
  BOOL roadConfiguration_option;
  ITSALCRoadConfigurationContainer roadConfiguration;
  BOOL preCrash_option;
  ITSPreCrashContainer preCrash;
} ITSAlacarteContainer;


extern const ASN1CType asn1_type_ITSAlacarteContainer[];

typedef struct ITSDenmPayload {
  ITSManagementContainer management;
  BOOL situation_option;
  ITSSituationContainer situation;
  BOOL location_option;
  ITSLocationContainer location;
  BOOL alacarte_option;
  ITSAlacarteContainer alacarte;
} ITSDenmPayload;


extern const ASN1CType asn1_type_ITSDenmPayload[];

typedef struct ITSDENM {
  ITSItsPduHeader header;
  ITSDenmPayload denm;
} ITSDENM;


extern const ASN1CType asn1_type_ITSDENM[];

#define ITSdefaultValidity 600

typedef enum ITSAccelerationChange {
  ITSAccelerationChange_accelerate,
  ITSAccelerationChange_decelerate,
} ITSAccelerationChange;

extern const ASN1CType asn1_type_ITSAccelerationChange[];

typedef ASN1BitString ITSAccelerationControlExtension;

extern const ASN1CType asn1_type_ITSAccelerationControlExtension[];

typedef enum ITSAccessTechnologyClass {
  ITSAccessTechnologyClass_any,
  ITSAccessTechnologyClass_itsg5Class,
  ITSAccessTechnologyClass_ltev2xClass,
  ITSAccessTechnologyClass_nrv2xClass,
} ITSAccessTechnologyClass;

extern const ASN1CType asn1_type_ITSAccessTechnologyClass[];

typedef int ITSAirHumidity;

enum {
  ITSAirHumidity_oneHundredPercent = 1000,
  ITSAirHumidity_unavailable = 1001,
};

extern const ASN1CType asn1_type_ITSAirHumidity[];

typedef enum ITSAngularAccelerationConfidence {
  ITSAngularAccelerationConfidence_degSecSquared_01,
  ITSAngularAccelerationConfidence_degSecSquared_02,
  ITSAngularAccelerationConfidence_degSecSquared_05,
  ITSAngularAccelerationConfidence_degSecSquared_10,
  ITSAngularAccelerationConfidence_degSecSquared_20,
  ITSAngularAccelerationConfidence_degSecSquared_50,
  ITSAngularAccelerationConfidence_outOfRange,
  ITSAngularAccelerationConfidence_unavailable,
} ITSAngularAccelerationConfidence;

extern const ASN1CType asn1_type_ITSAngularAccelerationConfidence[];

typedef ASN1BitString ITSAutomationControl;

extern const ASN1CType asn1_type_ITSAutomationControl[];

typedef int ITSAxlesCount;

enum {
  ITSAxlesCount_outOfRange = 1001,
  ITSAxlesCount_unavailable = 1002,
};

extern const ASN1CType asn1_type_ITSAxlesCount[];

typedef int ITSBarometricPressure;

enum {
  ITSBarometricPressure_outOfRangelower = 2999,
  ITSBarometricPressure_outOfRangeUpper = 12001,
  ITSBarometricPressure_unavailable = 12002,
};

extern const ASN1CType asn1_type_ITSBarometricPressure[];

typedef int ITSBogiesCount;

enum {
  ITSBogiesCount_outOfRange = 100,
  ITSBogiesCount_unavailable = 101,
};

extern const ASN1CType asn1_type_ITSBogiesCount[];

typedef ASN1BitString ITSBrakeControl;

extern const ASN1CType asn1_type_ITSBrakeControl[];

typedef int ITSCardinalNumber3b;

extern const ASN1CType asn1_type_ITSCardinalNumber3b[];

typedef int ITSCartesianAngularAccelerationComponentValue;

enum {
  ITSCartesianAngularAccelerationComponentValue_negativeOutOfRange = -255,
  ITSCartesianAngularAccelerationComponentValue_positiveOutOfRange = 255,
  ITSCartesianAngularAccelerationComponentValue_unavailable = 256,
};

extern const ASN1CType asn1_type_ITSCartesianAngularAccelerationComponentValue[];

typedef int ITSCauseCodeType;

enum {
  ITSCauseCodeType_trafficCondition = 1,
  ITSCauseCodeType_accident = 2,
  ITSCauseCodeType_roadworks = 3,
  ITSCauseCodeType_impassability = 5,
  ITSCauseCodeType_adverseWeatherCondition_Adhesion = 6,
  ITSCauseCodeType_aquaplaning = 7,
  ITSCauseCodeType_hazardousLocation_SurfaceCondition = 9,
  ITSCauseCodeType_hazardousLocation_ObstacleOnTheRoad = 10,
  ITSCauseCodeType_hazardousLocation_AnimalOnTheRoad = 11,
  ITSCauseCodeType_humanPresenceOnTheRoad = 12,
  ITSCauseCodeType_wrongWayDriving = 14,
  ITSCauseCodeType_rescueAndRecoveryWorkInProgress = 15,
  ITSCauseCodeType_adverseWeatherCondition_ExtremeWeatherCondition = 17,
  ITSCauseCodeType_adverseWeatherCondition_Visibility = 18,
  ITSCauseCodeType_adverseWeatherCondition_Precipitation = 19,
  ITSCauseCodeType_violence = 20,
  ITSCauseCodeType_slowVehicle = 26,
  ITSCauseCodeType_dangerousEndOfQueue = 27,
  ITSCauseCodeType_publicTransportVehicleApproaching = 28,
  ITSCauseCodeType_vehicleBreakdown = 91,
  ITSCauseCodeType_postCrash = 92,
  ITSCauseCodeType_humanProblem = 93,
  ITSCauseCodeType_stationaryVehicle = 94,
  ITSCauseCodeType_emergencyVehicleApproaching = 95,
  ITSCauseCodeType_hazardousLocation_DangerousCurve = 96,
  ITSCauseCodeType_collisionRisk = 97,
  ITSCauseCodeType_signalViolation = 98,
  ITSCauseCodeType_dangerousSituation = 99,
  ITSCauseCodeType_railwayLevelCrossing = 100,
};

extern const ASN1CType asn1_type_ITSCauseCodeType[];

typedef ITSProtectedZoneId ITSCenDsrcTollingZoneID;

#define asn1_type_ITSCenDsrcTollingZoneID asn1_type_ITSProtectedZoneId

typedef int ITSClusterBreakupReason;

enum {
  ITSClusterBreakupReason_notProvided = 0,
  ITSClusterBreakupReason_clusteringPurposeCompleted = 1,
  ITSClusterBreakupReason_leaderMovedOutOfClusterBoundingBox = 2,
  ITSClusterBreakupReason_joiningAnotherCluster = 3,
  ITSClusterBreakupReason_enteringLowRiskAreaBasedOnMaps = 4,
  ITSClusterBreakupReason_receptionOfCpmContainingCluster = 5,
};

extern const ASN1CType asn1_type_ITSClusterBreakupReason[];

typedef int ITSClusterLeaveReason;

enum {
  ITSClusterLeaveReason_notProvided = 0,
  ITSClusterLeaveReason_clusterLeaderLost = 1,
  ITSClusterLeaveReason_clusterDisbandedByLeader = 2,
  ITSClusterLeaveReason_outOfClusterBoundingBox = 3,
  ITSClusterLeaveReason_outOfClusterSpeedRange = 4,
  ITSClusterLeaveReason_joiningAnotherCluster = 5,
  ITSClusterLeaveReason_cancelledJoin = 6,
  ITSClusterLeaveReason_failedJoin = 7,
  ITSClusterLeaveReason_safetyCondition = 8,
};

extern const ASN1CType asn1_type_ITSClusterLeaveReason[];

typedef int ITSDeltaTimeQuarterSecond;

enum {
  ITSDeltaTimeQuarterSecond_unavailable = 255,
};

extern const ASN1CType asn1_type_ITSDeltaTimeQuarterSecond[];

typedef enum ITSInterferenceManagementZoneType {
  ITSInterferenceManagementZoneType_permanentCenDsrcTolling,
  ITSInterferenceManagementZoneType_temporaryCenDsrcTolling,
  ITSInterferenceManagementZoneType_unavailable,
  ITSInterferenceManagementZoneType_urbanRail,
  ITSInterferenceManagementZoneType_satelliteStation,
  ITSInterferenceManagementZoneType_fixedLinks,
} ITSInterferenceManagementZoneType;

extern const ASN1CType asn1_type_ITSInterferenceManagementZoneType[];

typedef int ITSLateralAccelerationValue;

enum {
  ITSLateralAccelerationValue_negativeOutOfRange = -160,
  ITSLateralAccelerationValue_positiveOutOfRange = 160,
  ITSLateralAccelerationValue_unavailable = 161,
};

extern const ASN1CType asn1_type_ITSLateralAccelerationValue[];

typedef int ITSLongitudinalAccelerationValue;

enum {
  ITSLongitudinalAccelerationValue_negativeOutOfRange = -160,
  ITSLongitudinalAccelerationValue_positiveOutOfRange = 160,
  ITSLongitudinalAccelerationValue_unavailable = 161,
};

extern const ASN1CType asn1_type_ITSLongitudinalAccelerationValue[];

typedef ASN1String ITSOpeningDaysHours;

extern const ASN1CType asn1_type_ITSOpeningDaysHours[];

typedef int ITSOrdinalNumber3b;

extern const ASN1CType asn1_type_ITSOrdinalNumber3b[];

typedef int ITSParkingAreaArrangementType;

enum {
  ITSParkingAreaArrangementType_parallelParkingSpace = 0,
  ITSParkingAreaArrangementType_diagonalParkingSpace = 1,
  ITSParkingAreaArrangementType_perpendicularParkingSpace = 2,
  ITSParkingAreaArrangementType_queueParking = 3,
  ITSParkingAreaArrangementType_mixed = 4,
  ITSParkingAreaArrangementType_unknown = 7,
};

extern const ASN1CType asn1_type_ITSParkingAreaArrangementType[];

typedef int ITSParkingReservationType;

enum {
  ITSParkingReservationType_disabled = 0,
  ITSParkingReservationType_pregnant = 1,
  ITSParkingReservationType_womenOnly = 2,
  ITSParkingReservationType_parentAndChild = 3,
  ITSParkingReservationType_loadAndOffloadGoods = 4,
  ITSParkingReservationType_manualElectricVehicleCharging = 5,
  ITSParkingReservationType_automatedElectricVehicleCharging = 6,
  ITSParkingReservationType_refriferatedTransport = 7,
  ITSParkingReservationType_vip = 8,
  ITSParkingReservationType_preBooking = 9,
  ITSParkingReservationType_freeToBeReserved = 10,
  ITSParkingReservationType_reservationNotPossible = 11,
  ITSParkingReservationType_automatedValetparking = 12,
  ITSParkingReservationType_permit = 13,
};

extern const ASN1CType asn1_type_ITSParkingReservationType[];

typedef int ITSPedalPositionValue;

enum {
  ITSPedalPositionValue_notPressed = 0,
  ITSPedalPositionValue_fullyPressed = 10,
  ITSPedalPositionValue_unavailable = 11,
};

extern const ASN1CType asn1_type_ITSPedalPositionValue[];

typedef int ITSPrecipitationIntensity;

enum {
  ITSPrecipitationIntensity_outOfRange = 2000,
  ITSPrecipitationIntensity_unavailable = 2001,
};

extern const ASN1CType asn1_type_ITSPrecipitationIntensity[];

typedef enum ITSRelevanceDistance {
  ITSRelevanceDistance_lessThan50m,
  ITSRelevanceDistance_lessThan100m,
  ITSRelevanceDistance_lessThan200m,
  ITSRelevanceDistance_lessThan500m,
  ITSRelevanceDistance_lessThan1000m,
  ITSRelevanceDistance_lessThan5km,
  ITSRelevanceDistance_lessThan10km,
  ITSRelevanceDistance_over10km,
} ITSRelevanceDistance;

extern const ASN1CType asn1_type_ITSRelevanceDistance[];

typedef enum ITSRelevanceTrafficDirection {
  ITSRelevanceTrafficDirection_allTrafficDirections,
  ITSRelevanceTrafficDirection_upstreamTraffic,
  ITSRelevanceTrafficDirection_downstreamTraffic,
  ITSRelevanceTrafficDirection_oppositeTraffic,
} ITSRelevanceTrafficDirection;

extern const ASN1CType asn1_type_ITSRelevanceTrafficDirection[];

typedef int ITSSaeAutomationLevel;

extern const ASN1CType asn1_type_ITSSaeAutomationLevel[];

typedef BOOL ITSSafeDistanceIndicator;

extern const ASN1CType asn1_type_ITSSafeDistanceIndicator[];

typedef int ITSSensorType;

enum {
  ITSSensorType_undefined = 0,
  ITSSensorType_radar = 1,
  ITSSensorType_lidar = 2,
  ITSSensorType_monovideo = 3,
  ITSSensorType_stereovision = 4,
  ITSSensorType_nightvision = 5,
  ITSSensorType_ultrasonic = 6,
  ITSSensorType_pmd = 7,
  ITSSensorType_inductionLoop = 8,
  ITSSensorType_sphericalCamera = 9,
  ITSSensorType_uwb = 10,
  ITSSensorType_acoustic = 11,
  ITSSensorType_localAggregation = 12,
  ITSSensorType_itsAggregation = 13,
  ITSSensorType_rfid = 14,
};

extern const ASN1CType asn1_type_ITSSensorType[];

typedef int ITSStabilityLossProbability;

enum {
  ITSStabilityLossProbability_stable = 0,
  ITSStabilityLossProbability_totalLossOfStability = 50,
  ITSStabilityLossProbability_unavailable = 63,
};

extern const ASN1CType asn1_type_ITSStabilityLossProbability[];

typedef int ITSStandardLength1B;

extern const ASN1CType asn1_type_ITSStandardLength1B[];

typedef unsigned int ITSStationID;

extern const ASN1CType asn1_type_ITSStationID[];

typedef enum ITSTrailerPresenceInformation {
  ITSTrailerPresenceInformation_noTrailerPresent,
  ITSTrailerPresenceInformation_trailerPresentWithKnownLength,
  ITSTrailerPresenceInformation_trailerPresentWithUnknownLength,
  ITSTrailerPresenceInformation_trailerPresenceIsUnknown,
  ITSTrailerPresenceInformation_unavailable,
} ITSTrailerPresenceInformation;

extern const ASN1CType asn1_type_ITSTrailerPresenceInformation[];

typedef int ITSTrajectoryInterceptionProbability;

enum {
  ITSTrajectoryInterceptionProbability_unavailable = 63,
};

extern const ASN1CType asn1_type_ITSTrajectoryInterceptionProbability[];

typedef int ITSTrajectoryInterceptionConfidence;

enum {
  ITSTrajectoryInterceptionConfidence_lessthan50percent = 0,
  ITSTrajectoryInterceptionConfidence_between50and70Percent = 1,
  ITSTrajectoryInterceptionConfidence_between70and90Percent = 2,
  ITSTrajectoryInterceptionConfidence_above90Percent = 3,
};

extern const ASN1CType asn1_type_ITSTrajectoryInterceptionConfidence[];

typedef int ITSTransmissionInterval;

extern const ASN1CType asn1_type_ITSTransmissionInterval[];

typedef enum ITSTurningDirection {
  ITSTurningDirection_left,
  ITSTurningDirection_right,
} ITSTurningDirection;

extern const ASN1CType asn1_type_ITSTurningDirection[];

typedef int ITSValidityDuration;

enum {
  ITSValidityDuration_timeOfDetection = 0,
  ITSValidityDuration_oneSecondAfterDetection = 1,
};

extern const ASN1CType asn1_type_ITSValidityDuration[];

typedef int ITSVehicleHeight;

enum {
  ITSVehicleHeight_outOfRange = 126,
  ITSVehicleHeight_unavailable = 127,
};

extern const ASN1CType asn1_type_ITSVehicleHeight[];

typedef int ITSVehicleHeight2;

enum {
  ITSVehicleHeight2_outOfRange = 61,
  ITSVehicleHeight2_unavailable = 62,
};

extern const ASN1CType asn1_type_ITSVehicleHeight2[];

typedef int ITSVerticalAccelerationValue;

enum {
  ITSVerticalAccelerationValue_negativeOutOfRange = -160,
  ITSVerticalAccelerationValue_positiveOutOfRange = 160,
  ITSVerticalAccelerationValue_unavailable = 161,
};

extern const ASN1CType asn1_type_ITSVerticalAccelerationValue[];

typedef int ITSVruDeviceUsage;

enum {
  ITSVruDeviceUsage_unavailable = 0,
  ITSVruDeviceUsage_other = 1,
  ITSVruDeviceUsage_idle = 2,
  ITSVruDeviceUsage_listeningToAudio = 3,
  ITSVruDeviceUsage_typing = 4,
  ITSVruDeviceUsage_calling = 5,
  ITSVruDeviceUsage_playingGames = 6,
  ITSVruDeviceUsage_reading = 7,
  ITSVruDeviceUsage_viewing = 8,
};

extern const ASN1CType asn1_type_ITSVruDeviceUsage[];

typedef int ITSVruEnvironment;

enum {
  ITSVruEnvironment_unavailable = 0,
  ITSVruEnvironment_intersectionCrossing = 1,
  ITSVruEnvironment_zebraCrossing = 2,
  ITSVruEnvironment_sidewalk = 3,
  ITSVruEnvironment_onVehicleRoad = 4,
  ITSVruEnvironment_protectedGeographicArea = 5,
};

extern const ASN1CType asn1_type_ITSVruEnvironment[];

typedef int ITSVruMovementControl;

enum {
  ITSVruMovementControl_unavailable = 0,
  ITSVruMovementControl_braking = 1,
  ITSVruMovementControl_hardBraking = 2,
  ITSVruMovementControl_stopPedaling = 3,
  ITSVruMovementControl_brakingAndStopPedaling = 4,
  ITSVruMovementControl_hardBrakingAndStopPedaling = 5,
  ITSVruMovementControl_noReaction = 6,
};

extern const ASN1CType asn1_type_ITSVruMovementControl[];

typedef int ITSVruSizeClass;

enum {
  ITSVruSizeClass_unavailable = 0,
  ITSVruSizeClass_low = 1,
  ITSVruSizeClass_medium = 2,
  ITSVruSizeClass_high = 3,
};

extern const ASN1CType asn1_type_ITSVruSizeClass[];

typedef ASN1BitString ITSVruSpecificExteriorLights;

extern const ASN1CType asn1_type_ITSVruSpecificExteriorLights[];

typedef int ITSWiperStatus;

enum {
  ITSWiperStatus_unavailable = 0,
  ITSWiperStatus_off = 1,
  ITSWiperStatus_intermittent = 2,
  ITSWiperStatus_low = 3,
  ITSWiperStatus_high = 4,
};

extern const ASN1CType asn1_type_ITSWiperStatus[];

typedef struct ITSAccelerationChangeIndication {
  ITSAccelerationChange accelOrDecel;
  ITSDeltaTimeTenthOfSecond actionDeltaTime;
} ITSAccelerationChangeIndication;


extern const ASN1CType asn1_type_ITSAccelerationChangeIndication[];

typedef struct ITSActionID {
  ITSStationID originatingStationId;
  ITSSequenceNumber sequenceNumber;
} ITSActionID;


extern const ASN1CType asn1_type_ITSActionID[];

typedef struct ITSCartesianAngularAccelerationComponent {
  ITSCartesianAngularAccelerationComponentValue value;
  ITSAngularAccelerationConfidence confidence;
} ITSCartesianAngularAccelerationComponent;


extern const ASN1CType asn1_type_ITSCartesianAngularAccelerationComponent[];

typedef struct ITSCauseCode {
  ITSCauseCodeType causeCode;
  ITSSubCauseCodeType subCauseCode;
} ITSCauseCode;


extern const ASN1CType asn1_type_ITSCauseCode[];

typedef struct ITSClusterBreakupInfo {
  ITSClusterBreakupReason clusterBreakupReason;
  ITSDeltaTimeQuarterSecond breakupTime;
} ITSClusterBreakupInfo;


extern const ASN1CType asn1_type_ITSClusterBreakupInfo[];

typedef struct ITSClusterJoinInfo {
  ITSIdentifier1B clusterId;
  ITSDeltaTimeQuarterSecond joinTime;
} ITSClusterJoinInfo;


extern const ASN1CType asn1_type_ITSClusterJoinInfo[];

typedef struct ITSClusterLeaveInfo {
  ITSIdentifier1B clusterId;
  ITSClusterLeaveReason clusterLeaveReason;
} ITSClusterLeaveInfo;


extern const ASN1CType asn1_type_ITSClusterLeaveInfo[];

typedef struct ITSConfidenceLevels {
  ITSConfidenceLevel *tab;
  size_t count;
} ITSConfidenceLevels;

extern const ASN1CType asn1_type_ITSConfidenceLevels[];

typedef struct ITSDeltaPosition {
  ITSDeltaLatitude deltaLatitude;
  ITSDeltaLongitude deltaLongitude;
} ITSDeltaPosition;


extern const ASN1CType asn1_type_ITSDeltaPosition[];

typedef struct ITSDeltaPositions {
  ITSDeltaPosition *tab;
  size_t count;
} ITSDeltaPositions;

extern const ASN1CType asn1_type_ITSDeltaPositions[];

typedef struct ITSDeltaReferencePositions {
  ITSDeltaReferencePosition *tab;
  size_t count;
} ITSDeltaReferencePositions;

extern const ASN1CType asn1_type_ITSDeltaReferencePositions[];

typedef struct ITSDigitalMap {
  ITSReferencePosition *tab;
  size_t count;
} ITSDigitalMap;

extern const ASN1CType asn1_type_ITSDigitalMap[];

typedef struct ITSGeoPositionWAltitude {
  ITSLatitude latitude;
  ITSLongitude longitude;
  ITSAltitude altitude;
} ITSGeoPositionWAltitude;


extern const ASN1CType asn1_type_ITSGeoPositionWAltitude[];

typedef struct ITSGeoPositionsWAltitude {
  ITSGeoPositionWAltitude *tab;
  size_t count;
} ITSGeoPositionsWAltitude;

extern const ASN1CType asn1_type_ITSGeoPositionsWAltitude[];

typedef struct ITSGeoPositionWoAltitude {
  ITSLatitude latitude;
  ITSLongitude longitude;
} ITSGeoPositionWoAltitude;


extern const ASN1CType asn1_type_ITSGeoPositionWoAltitude[];

typedef struct ITSGeoPositionsWoAltitude {
  ITSGeoPositionWoAltitude *tab;
  size_t count;
} ITSGeoPositionsWoAltitude;

extern const ASN1CType asn1_type_ITSGeoPositionsWoAltitude[];

typedef struct ITSHeadingChangeIndication {
  ITSTurningDirection direction;
  ITSDeltaTimeTenthOfSecond actionDeltaTime;
} ITSHeadingChangeIndication;


extern const ASN1CType asn1_type_ITSHeadingChangeIndication[];

typedef struct ITSInterferenceManagementChannel {
  int centreFrequency;
  int channelWidth;
  int exponent;
} ITSInterferenceManagementChannel;


extern const ASN1CType asn1_type_ITSInterferenceManagementChannel[];

typedef struct ITSInterferenceManagementZoneDefinition {
  ITSLatitude interferenceManagementZoneLatitude;
  ITSLongitude interferenceManagementZoneLongitude;
  BOOL interferenceManagementZoneId_option;
  ITSProtectedZoneId interferenceManagementZoneId;
  BOOL interferenceManagementZoneShape_option;
  ITSShape interferenceManagementZoneShape;
} ITSInterferenceManagementZoneDefinition;


extern const ASN1CType asn1_type_ITSInterferenceManagementZoneDefinition[];

typedef struct ITSMitigationPerTechnologyClass {
  ITSAccessTechnologyClass accessTechnologyClass;
  BOOL lowDutyCycle_option;
  int lowDutyCycle;
  BOOL powerReduction_option;
  int powerReduction;
  BOOL dmcToffLimit_option;
  int dmcToffLimit;
  BOOL dmcTonLimit_option;
  int dmcTonLimit;
} ITSMitigationPerTechnologyClass;


extern const ASN1CType asn1_type_ITSMitigationPerTechnologyClass[];

typedef struct ITSMitigationForTechnologies {
  ITSMitigationPerTechnologyClass *tab;
  size_t count;
} ITSMitigationForTechnologies;

extern const ASN1CType asn1_type_ITSMitigationForTechnologies[];

typedef struct ITSInterferenceManagementInfoPerChannel {
  ITSInterferenceManagementChannel interferenceManagementChannel;
  ITSInterferenceManagementZoneType interferenceManagementZoneType;
  BOOL interferenceManagementMitigationType_option;
  ITSMitigationForTechnologies interferenceManagementMitigationType;
  BOOL expiryTime_option;
  ITSTimestampIts expiryTime;
} ITSInterferenceManagementInfoPerChannel;


extern const ASN1CType asn1_type_ITSInterferenceManagementInfoPerChannel[];

typedef struct ITSInterferenceManagementInfo {
  ITSInterferenceManagementInfoPerChannel *tab;
  size_t count;
} ITSInterferenceManagementInfo;

extern const ASN1CType asn1_type_ITSInterferenceManagementInfo[];

typedef struct ITSInterferenceManagementZone {
  ITSInterferenceManagementZoneDefinition zoneDefinition;
  ITSInterferenceManagementInfo managementInfo;
} ITSInterferenceManagementZone;


extern const ASN1CType asn1_type_ITSInterferenceManagementZone[];

typedef struct ITSInterferenceManagementZones {
  ITSInterferenceManagementZone *tab;
  size_t count;
} ITSInterferenceManagementZones;

extern const ASN1CType asn1_type_ITSInterferenceManagementZones[];

typedef struct ITSLateralAcceleration {
  ITSLateralAccelerationValue lateralAccelerationValue;
  ITSAccelerationConfidence lateralAccelerationConfidence;
} ITSLateralAcceleration;


extern const ASN1CType asn1_type_ITSLateralAcceleration[];

typedef struct ITSLongitudinalAcceleration {
  ITSLongitudinalAccelerationValue longitudinalAccelerationValue;
  ITSAccelerationConfidence longitudinalAccelerationConfidence;
} ITSLongitudinalAcceleration;


extern const ASN1CType asn1_type_ITSLongitudinalAcceleration[];

typedef struct ITSMessageRateHz {
  int mantissa;
  int exponent;
} ITSMessageRateHz;


extern const ASN1CType asn1_type_ITSMessageRateHz[];

typedef struct ITSMessageSegmentationInfo {
  ITSCardinalNumber3b totalMsgNo;
  ITSOrdinalNumber3b thisMsgNo;
} ITSMessageSegmentationInfo;


extern const ASN1CType asn1_type_ITSMessageSegmentationInfo[];

typedef enum {
  ITSParkingOccupancyInfo_unknown,
  ITSParkingOccupancyInfo_unlimitedOccupancy,
  ITSParkingOccupancyInfo_onlyWhileCharging,
  ITSParkingOccupancyInfo_limitedDuration,
  ITSParkingOccupancyInfo_onlyWhileChargingLimitedDuration,
  ITSParkingOccupancyInfo_parkingAllowedUntil,
  ITSParkingOccupancyInfo_forcedParkingUntil,
} ITSParkingOccupancyInfo_choice;

typedef struct ITSParkingOccupancyInfo {
  ITSParkingOccupancyInfo_choice choice;
  union {
    ASN1Integer limitedDuration;
    ASN1Integer onlyWhileChargingLimitedDuration;
    ITSTimestampIts parkingAllowedUntil;
    ITSTimestampIts forcedParkingUntil;
  } u;
} ITSParkingOccupancyInfo;

extern const ASN1CType asn1_type_ITSParkingOccupancyInfo[];

typedef enum {
  ITSParkingSpaceStatus_unknown,
  ITSParkingSpaceStatus_free,
  ITSParkingSpaceStatus_freeUntil,
  ITSParkingSpaceStatus_fullyOccupied,
  ITSParkingSpaceStatus_partiallyOccupied,
  ITSParkingSpaceStatus_occupiedUntil,
  ITSParkingSpaceStatus_reservedUntil,
  ITSParkingSpaceStatus_accessBlocked,
  ITSParkingSpaceStatus_retrictedUsage,
} ITSParkingSpaceStatus_choice;

typedef struct ITSParkingSpaceStatus {
  ITSParkingSpaceStatus_choice choice;
  union {
    ITSTimestampIts freeUntil;
    int partiallyOccupied;
    ITSTimestampIts occupiedUntil;
    ITSTimestampIts reservedUntil;
  } u;
} ITSParkingSpaceStatus;

extern const ASN1CType asn1_type_ITSParkingSpaceStatus[];

typedef struct ITSParkingSpaceBasic {
  ITSIdentifier2B id;
  BOOL location_option;
  ITSDeltaReferencePosition location;
  ITSParkingSpaceStatus status;
} ITSParkingSpaceBasic;


extern const ASN1CType asn1_type_ITSParkingSpaceBasic[];

typedef struct ITSParkingSpaceDetailed_1 {
  ITSIdentifier2B *tab;
  size_t count;
} ITSParkingSpaceDetailed_1;

extern const ASN1CType asn1_type_ITSParkingSpaceDetailed_1[];

typedef struct ITSParkingSpaceDetailed_2 {
  ITSParkingReservationType *tab;
  size_t count;
} ITSParkingSpaceDetailed_2;

extern const ASN1CType asn1_type_ITSParkingSpaceDetailed_2[];

typedef struct ITSParkingSpaceDetailed {
  ITSParkingSpaceBasic super_ParkingSpaceBasic;
  BOOL arrangementType_option;
  ITSParkingAreaArrangementType arrangementType;
  BOOL boundary_option;
  ITSDeltaPositions boundary;
  BOOL orientation_option;
  ITSWgs84Angle orientation;
  ITSParkingOccupancyInfo occupancyRule;
  BOOL chargingStationId_option;
  ITSIdentifier2B chargingStationId;
  BOOL accessViaLane_option;
  ITSIdentifier2B accessViaLane;
  BOOL accessViaParkingSpaces_option;
  ITSParkingSpaceDetailed_1 accessViaParkingSpaces;
  BOOL reservationType_option;
  ITSParkingSpaceDetailed_2 reservationType;
} ITSParkingSpaceDetailed;


extern const ASN1CType asn1_type_ITSParkingSpaceDetailed[];

typedef struct ITSPathHistory {
  ITSPathPoint *tab;
  size_t count;
} ITSPathHistory;

extern const ASN1CType asn1_type_ITSPathHistory[];

typedef struct ITSPedalStatus {
  ITSPedalPositionValue pedalPositionValue;
} ITSPedalStatus;


extern const ASN1CType asn1_type_ITSPedalStatus[];

typedef enum {
  ITSPolygonalLine_deltaPositions,
  ITSPolygonalLine_deltaPositionsWithAltitude,
  ITSPolygonalLine_absolutePositions,
  ITSPolygonalLine_absolutePositionsWithAltitude,
} ITSPolygonalLine_choice;

typedef struct ITSPolygonalLine {
  ITSPolygonalLine_choice choice;
  union {
    ITSDeltaPositions deltaPositions;
    ITSDeltaReferencePositions deltaPositionsWithAltitude;
    ITSGeoPositionsWoAltitude absolutePositions;
    ITSGeoPositionsWAltitude absolutePositionsWithAltitude;
  } u;
} ITSPolygonalLine;

extern const ASN1CType asn1_type_ITSPolygonalLine[];

typedef struct ITSSafeDistanceIndication {
  BOOL subjectStation_option;
  ITSStationId subjectStation;
  ITSSafeDistanceIndicator safeDistanceIndicator;
  BOOL timeToCollision_option;
  ITSDeltaTimeTenthOfSecond timeToCollision;
} ITSSafeDistanceIndication;


extern const ASN1CType asn1_type_ITSSafeDistanceIndication[];

typedef struct ITSSequenceOfCartesianPosition3d {
  ITSCartesianPosition3d *tab;
  size_t count;
} ITSSequenceOfCartesianPosition3d;

extern const ASN1CType asn1_type_ITSSequenceOfCartesianPosition3d[];

typedef struct ITSSequenceOfSafeDistanceIndication {
  ITSSafeDistanceIndication *tab;
  size_t count;
} ITSSequenceOfSafeDistanceIndication;

extern const ASN1CType asn1_type_ITSSequenceOfSafeDistanceIndication[];

typedef struct ITSTrajectoryInterceptionIndication {
  BOOL subjectStation_option;
  ITSStationId subjectStation;
  ITSTrajectoryInterceptionProbability trajectoryInterceptionProbability;
  BOOL trajectoryInterceptionConfidence_option;
  ITSTrajectoryInterceptionConfidence trajectoryInterceptionConfidence;
} ITSTrajectoryInterceptionIndication;


extern const ASN1CType asn1_type_ITSTrajectoryInterceptionIndication[];

typedef struct ITSSequenceOfTrajectoryInterceptionIndication {
  ITSTrajectoryInterceptionIndication *tab;
  size_t count;
} ITSSequenceOfTrajectoryInterceptionIndication;

extern const ASN1CType asn1_type_ITSSequenceOfTrajectoryInterceptionIndication[];

typedef struct ITSStabilityChangeIndication {
  ITSStabilityLossProbability lossProbability;
  ITSDeltaTimeTenthOfSecond actionDeltaTime;
} ITSStabilityChangeIndication;


extern const ASN1CType asn1_type_ITSStabilityChangeIndication[];

typedef struct ITSTrailerData {
  ITSIdentifier1B refPointId;
  ITSStandardLength1B hitchPointOffset;
  BOOL frontOverhang_option;
  ITSStandardLength1B frontOverhang;
  BOOL rearOverhang_option;
  ITSStandardLength1B rearOverhang;
  BOOL trailerWidth_option;
  ITSVehicleWidth trailerWidth;
  ITSCartesianAngle hitchAngle;
} ITSTrailerData;


extern const ASN1CType asn1_type_ITSTrailerData[];

typedef int ITSExt3;

extern const ASN1CType asn1_type_ITSExt3[];

typedef enum {
  ITSExt2_content,
  ITSExt2_extension,
} ITSExt2_choice;

typedef struct ITSExt2 {
  ITSExt2_choice choice;
  union {
    int content;
    ITSExt3 extension;
  } u;
} ITSExt2;

extern const ASN1CType asn1_type_ITSExt2[];

typedef enum {
  ITSExt1_content,
  ITSExt1_extension,
} ITSExt1_choice;

typedef struct ITSExt1 {
  ITSExt1_choice choice;
  union {
    int content;
    ITSExt2 extension;
  } u;
} ITSExt1;

extern const ASN1CType asn1_type_ITSExt1[];

typedef enum {
  ITSVarLengthNumber_content,
  ITSVarLengthNumber_extension,
} ITSVarLengthNumber_choice;

typedef struct ITSVarLengthNumber {
  ITSVarLengthNumber_choice choice;
  union {
    int content;
    ITSExt1 extension;
  } u;
} ITSVarLengthNumber;

extern const ASN1CType asn1_type_ITSVarLengthNumber[];

typedef struct ITSVerticalAcceleration {
  ITSVerticalAccelerationValue verticalAccelerationValue;
  ITSAccelerationConfidence verticalAccelerationConfidence;
} ITSVerticalAcceleration;


extern const ASN1CType asn1_type_ITSVerticalAcceleration[];

typedef struct ITSVehicleLengthV2 {
  ITSVehicleLengthValue vehicleLengthValue;
  ITSTrailerPresenceInformation trailerPresenceInformation;
} ITSVehicleLengthV2;


extern const ASN1CType asn1_type_ITSVehicleLengthV2[];

typedef struct ITSVehicleMovementControl {
  ITSPedalStatus accelerationPedalStatus;
  ITSPedalStatus brakePedalStatus;
  BOOL saeAutomationLevel_option;
  ITSSaeAutomationLevel saeAutomationLevel;
  BOOL automationControl_option;
  ITSAutomationControl automationControl;
  BOOL accelerationControl_option;
  ITSAccelerationControl accelerationControl;
  BOOL accelerationControlExtension_option;
  ITSAccelerationControlExtension accelerationControlExtension;
} ITSVehicleMovementControl;


extern const ASN1CType asn1_type_ITSVehicleMovementControl[];

typedef struct ITSVruExteriorLights {
  ITSExteriorLights vehicular;
  ITSVruSpecificExteriorLights vruSpecific;
} ITSVruExteriorLights;


extern const ASN1CType asn1_type_ITSVruExteriorLights[];

typedef int ITSMinuteOfTheYear;

extern const ASN1CType asn1_type_ITSMinuteOfTheYear[];

typedef ASN1String ITSDescriptiveName;

extern const ASN1CType asn1_type_ITSDescriptiveName[];

typedef int ITSRoadRegulatorID;

extern const ASN1CType asn1_type_ITSRoadRegulatorID[];

typedef int ITSIntersectionID;

extern const ASN1CType asn1_type_ITSIntersectionID[];

typedef struct ITSIntersectionReferenceID {
  BOOL region_option;
  ITSRoadRegulatorID region;
  ITSIntersectionID id;
} ITSIntersectionReferenceID;


extern const ASN1CType asn1_type_ITSIntersectionReferenceID[];

typedef int ITSMsgCount;

extern const ASN1CType asn1_type_ITSMsgCount[];

typedef ASN1BitString ITSIntersectionStatusObject;

extern const ASN1CType asn1_type_ITSIntersectionStatusObject[];

typedef int ITSDSecond;

extern const ASN1CType asn1_type_ITSDSecond[];

typedef int ITSLaneID;

extern const ASN1CType asn1_type_ITSLaneID[];

typedef struct ITSEnabledLaneList {
  ITSLaneID *tab;
  size_t count;
} ITSEnabledLaneList;

extern const ASN1CType asn1_type_ITSEnabledLaneList[];

typedef int ITSSignalGroupID;

extern const ASN1CType asn1_type_ITSSignalGroupID[];

typedef enum ITSMovementPhaseState {
  ITSMovementPhaseState_unavailable,
  ITSMovementPhaseState_dark,
  ITSMovementPhaseState_stop_Then_Proceed,
  ITSMovementPhaseState_stop_And_Remain,
  ITSMovementPhaseState_pre_Movement,
  ITSMovementPhaseState_permissive_Movement_Allowed,
  ITSMovementPhaseState_protected_Movement_Allowed,
  ITSMovementPhaseState_permissive_clearance,
  ITSMovementPhaseState_protected_clearance,
  ITSMovementPhaseState_caution_Conflicting_Traffic,
} ITSMovementPhaseState;

extern const ASN1CType asn1_type_ITSMovementPhaseState[];

typedef int ITSTimeMark;

extern const ASN1CType asn1_type_ITSTimeMark[];

typedef int ITSTimeIntervalConfidence;

extern const ASN1CType asn1_type_ITSTimeIntervalConfidence[];

typedef struct ITSTimeChangeDetails {
  BOOL startTime_option;
  ITSTimeMark startTime;
  ITSTimeMark minEndTime;
  BOOL maxEndTime_option;
  ITSTimeMark maxEndTime;
  BOOL likelyTime_option;
  ITSTimeMark likelyTime;
  BOOL confidence_option;
  ITSTimeIntervalConfidence confidence;
  BOOL nextTime_option;
  ITSTimeMark nextTime;
} ITSTimeChangeDetails;


extern const ASN1CType asn1_type_ITSTimeChangeDetails[];

typedef enum ITSAdvisorySpeedType {
  ITSAdvisorySpeedType_none,
  ITSAdvisorySpeedType_greenwave,
  ITSAdvisorySpeedType_ecoDrive,
  ITSAdvisorySpeedType_transit,
} ITSAdvisorySpeedType;

extern const ASN1CType asn1_type_ITSAdvisorySpeedType[];

typedef int ITSSpeedAdvice;

extern const ASN1CType asn1_type_ITSSpeedAdvice[];

typedef enum ITSSpeedConfidenceDSRC {
  ITSSpeedConfidenceDSRC_unavailable,
  ITSSpeedConfidenceDSRC_prec100ms,
  ITSSpeedConfidenceDSRC_prec10ms,
  ITSSpeedConfidenceDSRC_prec5ms,
  ITSSpeedConfidenceDSRC_prec1ms,
  ITSSpeedConfidenceDSRC_prec0_1ms,
  ITSSpeedConfidenceDSRC_prec0_05ms,
  ITSSpeedConfidenceDSRC_prec0_01ms,
} ITSSpeedConfidenceDSRC;

extern const ASN1CType asn1_type_ITSSpeedConfidenceDSRC[];

typedef int ITSZoneLength;

extern const ASN1CType asn1_type_ITSZoneLength[];

typedef int ITSRestrictionClassID;

extern const ASN1CType asn1_type_ITSRestrictionClassID[];

typedef int ITSRegionId;

extern const ASN1CType asn1_type_ITSRegionId[];

typedef struct ITSRegionalExtension_6 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_6;


extern const ASN1CType asn1_type_ITSRegionalExtension_6[];

typedef struct ITSAdvisorySpeed_1 {
  ITSRegionalExtension_6 *tab;
  size_t count;
} ITSAdvisorySpeed_1;

extern const ASN1CType asn1_type_ITSAdvisorySpeed_1[];

typedef struct ITSAdvisorySpeed {
  ITSAdvisorySpeedType type;
  BOOL speed_option;
  ITSSpeedAdvice speed;
  BOOL confidence_option;
  ITSSpeedConfidenceDSRC confidence;
  BOOL distance_option;
  ITSZoneLength distance;
  BOOL Class_option;
  ITSRestrictionClassID Class;
  BOOL regional_option;
  ITSAdvisorySpeed_1 regional;
} ITSAdvisorySpeed;


extern const ASN1CType asn1_type_ITSAdvisorySpeed[];

typedef struct ITSAdvisorySpeedList {
  ITSAdvisorySpeed *tab;
  size_t count;
} ITSAdvisorySpeedList;

extern const ASN1CType asn1_type_ITSAdvisorySpeedList[];

typedef struct ITSRegionalExtension_14 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_14;


extern const ASN1CType asn1_type_ITSRegionalExtension_14[];

typedef struct ITSMovementEvent_1 {
  ITSRegionalExtension_14 *tab;
  size_t count;
} ITSMovementEvent_1;

extern const ASN1CType asn1_type_ITSMovementEvent_1[];

typedef struct ITSMovementEvent {
  ITSMovementPhaseState eventState;
  BOOL timing_option;
  ITSTimeChangeDetails timing;
  BOOL speeds_option;
  ITSAdvisorySpeedList speeds;
  BOOL regional_option;
  ITSMovementEvent_1 regional;
} ITSMovementEvent;


extern const ASN1CType asn1_type_ITSMovementEvent[];

typedef struct ITSMovementEventList {
  ITSMovementEvent *tab;
  size_t count;
} ITSMovementEventList;

extern const ASN1CType asn1_type_ITSMovementEventList[];

typedef int ITSLaneConnectionID;

extern const ASN1CType asn1_type_ITSLaneConnectionID[];

typedef BOOL ITSWaitOnStopline;

extern const ASN1CType asn1_type_ITSWaitOnStopline[];

typedef BOOL ITSPedestrianBicycleDetect;

extern const ASN1CType asn1_type_ITSPedestrianBicycleDetect[];

typedef struct ITSRegionalExtension_8 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_8;


extern const ASN1CType asn1_type_ITSRegionalExtension_8[];

typedef struct ITSConnectionManeuverAssist_1 {
  ITSRegionalExtension_8 *tab;
  size_t count;
} ITSConnectionManeuverAssist_1;

extern const ASN1CType asn1_type_ITSConnectionManeuverAssist_1[];

typedef struct ITSConnectionManeuverAssist {
  ITSLaneConnectionID connectionID;
  BOOL queueLength_option;
  ITSZoneLength queueLength;
  BOOL availableStorageLength_option;
  ITSZoneLength availableStorageLength;
  BOOL waitOnStop_option;
  ITSWaitOnStopline waitOnStop;
  BOOL pedBicycleDetect_option;
  ITSPedestrianBicycleDetect pedBicycleDetect;
  BOOL regional_option;
  ITSConnectionManeuverAssist_1 regional;
} ITSConnectionManeuverAssist;


extern const ASN1CType asn1_type_ITSConnectionManeuverAssist[];

typedef struct ITSManeuverAssistList {
  ITSConnectionManeuverAssist *tab;
  size_t count;
} ITSManeuverAssistList;

extern const ASN1CType asn1_type_ITSManeuverAssistList[];

typedef struct ITSRegionalExtension_15 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_15;


extern const ASN1CType asn1_type_ITSRegionalExtension_15[];

typedef struct ITSMovementState_1 {
  ITSRegionalExtension_15 *tab;
  size_t count;
} ITSMovementState_1;

extern const ASN1CType asn1_type_ITSMovementState_1[];

typedef struct ITSMovementState {
  BOOL movementName_option;
  ITSDescriptiveName movementName;
  ITSSignalGroupID signalGroup;
  ITSMovementEventList state_time_speed;
  BOOL maneuverAssistList_option;
  ITSManeuverAssistList maneuverAssistList;
  BOOL regional_option;
  ITSMovementState_1 regional;
} ITSMovementState;


extern const ASN1CType asn1_type_ITSMovementState[];

typedef struct ITSMovementList {
  ITSMovementState *tab;
  size_t count;
} ITSMovementList;

extern const ASN1CType asn1_type_ITSMovementList[];

typedef struct ITSRegionalExtension_11 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_11;


extern const ASN1CType asn1_type_ITSRegionalExtension_11[];

typedef struct ITSIntersectionState_1 {
  ITSRegionalExtension_11 *tab;
  size_t count;
} ITSIntersectionState_1;

extern const ASN1CType asn1_type_ITSIntersectionState_1[];

typedef ASN1ObjectIdentifier ITSFullRoadAuthorityID;

extern const ASN1CType asn1_type_ITSFullRoadAuthorityID[];

typedef ASN1RelativeOID ITSRelativeRoadAuthorityID;

extern const ASN1CType asn1_type_ITSRelativeRoadAuthorityID[];

typedef enum {
  ITSRoadAuthorityID_fullRdAuthID,
  ITSRoadAuthorityID_relRdAuthID,
} ITSRoadAuthorityID_choice;

typedef struct ITSRoadAuthorityID {
  ITSRoadAuthorityID_choice choice;
  union {
    ITSFullRoadAuthorityID fullRdAuthID;
    ITSRelativeRoadAuthorityID relRdAuthID;
  } u;
} ITSRoadAuthorityID;

extern const ASN1CType asn1_type_ITSRoadAuthorityID[];

typedef struct ITSIntersectionState {
  BOOL name_option;
  ITSDescriptiveName name;
  ITSIntersectionReferenceID id;
  ITSMsgCount revision;
  ITSIntersectionStatusObject status;
  BOOL moy_option;
  ITSMinuteOfTheYear moy;
  BOOL timeStamp_option;
  ITSDSecond timeStamp;
  BOOL enabledLanes_option;
  ITSEnabledLaneList enabledLanes;
  ITSMovementList states;
  BOOL maneuverAssistList_option;
  ITSManeuverAssistList maneuverAssistList;
  BOOL regional_option;
  ITSIntersectionState_1 regional;
  BOOL roadAuthorityID_option;
  ITSRoadAuthorityID roadAuthorityID;
} ITSIntersectionState;


extern const ASN1CType asn1_type_ITSIntersectionState[];

typedef struct ITSIntersectionStateList {
  ITSIntersectionState *tab;
  size_t count;
} ITSIntersectionStateList;

extern const ASN1CType asn1_type_ITSIntersectionStateList[];

typedef struct ITSRegionalExtension_3 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_3;


extern const ASN1CType asn1_type_ITSRegionalExtension_3[];

typedef struct ITSSPAT_1 {
  ITSRegionalExtension_3 *tab;
  size_t count;
} ITSSPAT_1;

extern const ASN1CType asn1_type_ITSSPAT_1[];

typedef struct ITSSPAT {
  BOOL timeStamp_option;
  ITSMinuteOfTheYear timeStamp;
  BOOL name_option;
  ITSDescriptiveName name;
  ITSIntersectionStateList intersections;
  BOOL regional_option;
  ITSSPAT_1 regional;
} ITSSPAT;


extern const ASN1CType asn1_type_ITSSPAT[];

typedef struct ITSSPATEM {
  ITSItsPduHeader header;
  ITSSPAT spat;
} ITSSPATEM;


extern const ASN1CType asn1_type_ITSSPATEM[];

typedef enum ITSLayerType {
  ITSLayerType_none,
  ITSLayerType_mixedContent,
  ITSLayerType_generalMapData,
  ITSLayerType_intersectionData,
  ITSLayerType_curveData,
  ITSLayerType_roadwaySectionData,
  ITSLayerType_parkingAreaData,
  ITSLayerType_sharedLaneData,
} ITSLayerType;

extern const ASN1CType asn1_type_ITSLayerType[];

typedef int ITSLayerID;

extern const ASN1CType asn1_type_ITSLayerID[];

typedef int ITSElevation;

extern const ASN1CType asn1_type_ITSElevation[];

typedef struct ITSRegionalExtension_18 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_18;


extern const ASN1CType asn1_type_ITSRegionalExtension_18[];

typedef struct ITSPosition3D_1 {
  ITSRegionalExtension_18 *tab;
  size_t count;
} ITSPosition3D_1;

extern const ASN1CType asn1_type_ITSPosition3D_1[];

typedef struct ITSPosition3D {
  ITSLatitude lat;
  ITSLongitude Long;
  BOOL elevation_option;
  ITSElevation elevation;
  BOOL regional_option;
  ITSPosition3D_1 regional;
} ITSPosition3D;


extern const ASN1CType asn1_type_ITSPosition3D[];

typedef int ITSDSRCLaneWidth;

extern const ASN1CType asn1_type_ITSDSRCLaneWidth[];

typedef enum ITSSpeedLimitType {
  ITSSpeedLimitType_unknown,
  ITSSpeedLimitType_maxSpeedInSchoolZone,
  ITSSpeedLimitType_maxSpeedInSchoolZoneWhenChildrenArePresent,
  ITSSpeedLimitType_maxSpeedInConstructionZone,
  ITSSpeedLimitType_vehicleMinSpeed,
  ITSSpeedLimitType_vehicleMaxSpeed,
  ITSSpeedLimitType_vehicleNightMaxSpeed,
  ITSSpeedLimitType_truckMinSpeed,
  ITSSpeedLimitType_truckMaxSpeed,
  ITSSpeedLimitType_truckNightMaxSpeed,
  ITSSpeedLimitType_vehiclesWithTrailersMinSpeed,
  ITSSpeedLimitType_vehiclesWithTrailersMaxSpeed,
  ITSSpeedLimitType_vehiclesWithTrailersNightMaxSpeed,
} ITSSpeedLimitType;

extern const ASN1CType asn1_type_ITSSpeedLimitType[];

typedef int ITSVelocity;

extern const ASN1CType asn1_type_ITSVelocity[];

typedef struct ITSRegulatorySpeedLimit {
  ITSSpeedLimitType type;
  ITSVelocity speed;
} ITSRegulatorySpeedLimit;


extern const ASN1CType asn1_type_ITSRegulatorySpeedLimit[];

typedef struct ITSSpeedLimitList {
  ITSRegulatorySpeedLimit *tab;
  size_t count;
} ITSSpeedLimitList;

extern const ASN1CType asn1_type_ITSSpeedLimitList[];

typedef int ITSApproachID;

extern const ASN1CType asn1_type_ITSApproachID[];

typedef ASN1BitString ITSLaneDirection;

extern const ASN1CType asn1_type_ITSLaneDirection[];

typedef ASN1BitString ITSLaneSharing;

extern const ASN1CType asn1_type_ITSLaneSharing[];

typedef ASN1BitString ITSLaneAttributes_Vehicle;

extern const ASN1CType asn1_type_ITSLaneAttributes_Vehicle[];

typedef ASN1BitString ITSLaneAttributes_Crosswalk;

extern const ASN1CType asn1_type_ITSLaneAttributes_Crosswalk[];

typedef ASN1BitString ITSLaneAttributes_Bike;

extern const ASN1CType asn1_type_ITSLaneAttributes_Bike[];

typedef ASN1BitString ITSLaneAttributes_Sidewalk;

extern const ASN1CType asn1_type_ITSLaneAttributes_Sidewalk[];

typedef ASN1BitString ITSLaneAttributes_Barrier;

extern const ASN1CType asn1_type_ITSLaneAttributes_Barrier[];

typedef ASN1BitString ITSLaneAttributes_Striping;

extern const ASN1CType asn1_type_ITSLaneAttributes_Striping[];

typedef ASN1BitString ITSLaneAttributes_TrackedVehicle;

extern const ASN1CType asn1_type_ITSLaneAttributes_TrackedVehicle[];

typedef ASN1BitString ITSLaneAttributes_Parking;

extern const ASN1CType asn1_type_ITSLaneAttributes_Parking[];

typedef enum {
  ITSLaneTypeAttributes_vehicle,
  ITSLaneTypeAttributes_crosswalk,
  ITSLaneTypeAttributes_bikeLane,
  ITSLaneTypeAttributes_sidewalk,
  ITSLaneTypeAttributes_median,
  ITSLaneTypeAttributes_striping,
  ITSLaneTypeAttributes_trackedVehicle,
  ITSLaneTypeAttributes_parking,
} ITSLaneTypeAttributes_choice;

typedef struct ITSLaneTypeAttributes {
  ITSLaneTypeAttributes_choice choice;
  union {
    ITSLaneAttributes_Vehicle vehicle;
    ITSLaneAttributes_Crosswalk crosswalk;
    ITSLaneAttributes_Bike bikeLane;
    ITSLaneAttributes_Sidewalk sidewalk;
    ITSLaneAttributes_Barrier median;
    ITSLaneAttributes_Striping striping;
    ITSLaneAttributes_TrackedVehicle trackedVehicle;
    ITSLaneAttributes_Parking parking;
  } u;
} ITSLaneTypeAttributes;

extern const ASN1CType asn1_type_ITSLaneTypeAttributes[];

typedef struct ITSRegionalExtension_12 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_12;


extern const ASN1CType asn1_type_ITSRegionalExtension_12[];

typedef struct ITSLaneAttributes {
  ITSLaneDirection directionalUse;
  ITSLaneSharing sharedWith;
  ITSLaneTypeAttributes laneType;
  BOOL regional_option;
  ITSRegionalExtension_12 regional;
} ITSLaneAttributes;


extern const ASN1CType asn1_type_ITSLaneAttributes[];

typedef ASN1BitString ITSAllowedManeuvers;

extern const ASN1CType asn1_type_ITSAllowedManeuvers[];

typedef int ITSOffset_B10;

extern const ASN1CType asn1_type_ITSOffset_B10[];

typedef struct ITSNode_XY_20b {
  ITSOffset_B10 x;
  ITSOffset_B10 y;
} ITSNode_XY_20b;


extern const ASN1CType asn1_type_ITSNode_XY_20b[];

typedef int ITSOffset_B11;

extern const ASN1CType asn1_type_ITSOffset_B11[];

typedef struct ITSNode_XY_22b {
  ITSOffset_B11 x;
  ITSOffset_B11 y;
} ITSNode_XY_22b;


extern const ASN1CType asn1_type_ITSNode_XY_22b[];

typedef int ITSOffset_B12;

extern const ASN1CType asn1_type_ITSOffset_B12[];

typedef struct ITSNode_XY_24b {
  ITSOffset_B12 x;
  ITSOffset_B12 y;
} ITSNode_XY_24b;


extern const ASN1CType asn1_type_ITSNode_XY_24b[];

typedef int ITSOffset_B13;

extern const ASN1CType asn1_type_ITSOffset_B13[];

typedef struct ITSNode_XY_26b {
  ITSOffset_B13 x;
  ITSOffset_B13 y;
} ITSNode_XY_26b;


extern const ASN1CType asn1_type_ITSNode_XY_26b[];

typedef int ITSOffset_B14;

extern const ASN1CType asn1_type_ITSOffset_B14[];

typedef struct ITSNode_XY_28b {
  ITSOffset_B14 x;
  ITSOffset_B14 y;
} ITSNode_XY_28b;


extern const ASN1CType asn1_type_ITSNode_XY_28b[];

typedef int ITSOffset_B16;

extern const ASN1CType asn1_type_ITSOffset_B16[];

typedef struct ITSNode_XY_32b {
  ITSOffset_B16 x;
  ITSOffset_B16 y;
} ITSNode_XY_32b;


extern const ASN1CType asn1_type_ITSNode_XY_32b[];

typedef struct ITSNode_LLmD_64b {
  ITSLongitude lon;
  ITSLatitude lat;
} ITSNode_LLmD_64b;


extern const ASN1CType asn1_type_ITSNode_LLmD_64b[];

typedef struct ITSRegionalExtension_17 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_17;


extern const ASN1CType asn1_type_ITSRegionalExtension_17[];

typedef enum {
  ITSNodeOffsetPointXY_node_XY1,
  ITSNodeOffsetPointXY_node_XY2,
  ITSNodeOffsetPointXY_node_XY3,
  ITSNodeOffsetPointXY_node_XY4,
  ITSNodeOffsetPointXY_node_XY5,
  ITSNodeOffsetPointXY_node_XY6,
  ITSNodeOffsetPointXY_node_LatLon,
  ITSNodeOffsetPointXY_regional,
} ITSNodeOffsetPointXY_choice;

typedef struct ITSNodeOffsetPointXY {
  ITSNodeOffsetPointXY_choice choice;
  union {
    ITSNode_XY_20b node_XY1;
    ITSNode_XY_22b node_XY2;
    ITSNode_XY_24b node_XY3;
    ITSNode_XY_26b node_XY4;
    ITSNode_XY_28b node_XY5;
    ITSNode_XY_32b node_XY6;
    ITSNode_LLmD_64b node_LatLon;
    ITSRegionalExtension_17 regional;
  } u;
} ITSNodeOffsetPointXY;

extern const ASN1CType asn1_type_ITSNodeOffsetPointXY[];

typedef enum ITSNodeAttributeXY {
  ITSNodeAttributeXY_reserved,
  ITSNodeAttributeXY_stopLine,
  ITSNodeAttributeXY_roundedCapStyleA,
  ITSNodeAttributeXY_roundedCapStyleB,
  ITSNodeAttributeXY_mergePoint,
  ITSNodeAttributeXY_divergePoint,
  ITSNodeAttributeXY_downstreamStopLine,
  ITSNodeAttributeXY_downstreamStartNode,
  ITSNodeAttributeXY_closedToTraffic,
  ITSNodeAttributeXY_safeIsland,
  ITSNodeAttributeXY_curbPresentAtStepOff,
  ITSNodeAttributeXY_hydrantPresent,
} ITSNodeAttributeXY;

extern const ASN1CType asn1_type_ITSNodeAttributeXY[];

typedef struct ITSNodeAttributeXYList {
  ITSNodeAttributeXY *tab;
  size_t count;
} ITSNodeAttributeXYList;

extern const ASN1CType asn1_type_ITSNodeAttributeXYList[];

typedef enum ITSSegmentAttributeXY {
  ITSSegmentAttributeXY_reserved,
  ITSSegmentAttributeXY_doNotBlock,
  ITSSegmentAttributeXY_whiteLine,
  ITSSegmentAttributeXY_mergingLaneLeft,
  ITSSegmentAttributeXY_mergingLaneRight,
  ITSSegmentAttributeXY_curbOnLeft,
  ITSSegmentAttributeXY_curbOnRight,
  ITSSegmentAttributeXY_loadingzoneOnLeft,
  ITSSegmentAttributeXY_loadingzoneOnRight,
  ITSSegmentAttributeXY_turnOutPointOnLeft,
  ITSSegmentAttributeXY_turnOutPointOnRight,
  ITSSegmentAttributeXY_adjacentParkingOnLeft,
  ITSSegmentAttributeXY_adjacentParkingOnRight,
  ITSSegmentAttributeXY_adjacentBikeLaneOnLeft,
  ITSSegmentAttributeXY_adjacentBikeLaneOnRight,
  ITSSegmentAttributeXY_sharedBikeLane,
  ITSSegmentAttributeXY_bikeBoxInFront,
  ITSSegmentAttributeXY_transitStopOnLeft,
  ITSSegmentAttributeXY_transitStopOnRight,
  ITSSegmentAttributeXY_transitStopInLane,
  ITSSegmentAttributeXY_sharedWithTrackedVehicle,
  ITSSegmentAttributeXY_safeIsland,
  ITSSegmentAttributeXY_lowCurbsPresent,
  ITSSegmentAttributeXY_rumbleStripPresent,
  ITSSegmentAttributeXY_audibleSignalingPresent,
  ITSSegmentAttributeXY_adaptiveTimingPresent,
  ITSSegmentAttributeXY_rfSignalRequestPresent,
  ITSSegmentAttributeXY_partialCurbIntrusion,
  ITSSegmentAttributeXY_taperToLeft,
  ITSSegmentAttributeXY_taperToRight,
  ITSSegmentAttributeXY_taperToCenterLine,
  ITSSegmentAttributeXY_parallelParking,
  ITSSegmentAttributeXY_headInParking,
  ITSSegmentAttributeXY_freeParking,
  ITSSegmentAttributeXY_timeRestrictionsOnParking,
  ITSSegmentAttributeXY_costToPark,
  ITSSegmentAttributeXY_midBlockCurbPresent,
  ITSSegmentAttributeXY_unEvenPavementPresent,
} ITSSegmentAttributeXY;

extern const ASN1CType asn1_type_ITSSegmentAttributeXY[];

typedef struct ITSSegmentAttributeXYList {
  ITSSegmentAttributeXY *tab;
  size_t count;
} ITSSegmentAttributeXYList;

extern const ASN1CType asn1_type_ITSSegmentAttributeXYList[];

typedef int ITSDeltaAngle;

extern const ASN1CType asn1_type_ITSDeltaAngle[];

typedef int ITSRoadwayCrownAngle;

extern const ASN1CType asn1_type_ITSRoadwayCrownAngle[];

typedef int ITSMergeDivergeNodeAngle;

extern const ASN1CType asn1_type_ITSMergeDivergeNodeAngle[];

typedef struct ITSRegionalExtension_13 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_13;


extern const ASN1CType asn1_type_ITSRegionalExtension_13[];

typedef struct ITSLaneDataAttribute_1 {
  ITSRegionalExtension_13 *tab;
  size_t count;
} ITSLaneDataAttribute_1;

extern const ASN1CType asn1_type_ITSLaneDataAttribute_1[];

typedef enum {
  ITSLaneDataAttribute_pathEndPointAngle,
  ITSLaneDataAttribute_laneCrownPointCenter,
  ITSLaneDataAttribute_laneCrownPointLeft,
  ITSLaneDataAttribute_laneCrownPointRight,
  ITSLaneDataAttribute_laneAngle,
  ITSLaneDataAttribute_speedLimits,
  ITSLaneDataAttribute_regional,
} ITSLaneDataAttribute_choice;

typedef struct ITSLaneDataAttribute {
  ITSLaneDataAttribute_choice choice;
  union {
    ITSDeltaAngle pathEndPointAngle;
    ITSRoadwayCrownAngle laneCrownPointCenter;
    ITSRoadwayCrownAngle laneCrownPointLeft;
    ITSRoadwayCrownAngle laneCrownPointRight;
    ITSMergeDivergeNodeAngle laneAngle;
    ITSSpeedLimitList speedLimits;
    ITSLaneDataAttribute_1 regional;
  } u;
} ITSLaneDataAttribute;

extern const ASN1CType asn1_type_ITSLaneDataAttribute[];

typedef struct ITSLaneDataAttributeList {
  ITSLaneDataAttribute *tab;
  size_t count;
} ITSLaneDataAttributeList;

extern const ASN1CType asn1_type_ITSLaneDataAttributeList[];

typedef struct ITSRegionalExtension_16 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_16;


extern const ASN1CType asn1_type_ITSRegionalExtension_16[];

typedef struct ITSNodeAttributeSetXY_1 {
  ITSRegionalExtension_16 *tab;
  size_t count;
} ITSNodeAttributeSetXY_1;

extern const ASN1CType asn1_type_ITSNodeAttributeSetXY_1[];

typedef struct ITSNodeAttributeSetXY {
  BOOL localNode_option;
  ITSNodeAttributeXYList localNode;
  BOOL disabled_option;
  ITSSegmentAttributeXYList disabled;
  BOOL enabled_option;
  ITSSegmentAttributeXYList enabled;
  BOOL data_option;
  ITSLaneDataAttributeList data;
  BOOL dWidth_option;
  ITSOffset_B10 dWidth;
  BOOL dElevation_option;
  ITSOffset_B10 dElevation;
  BOOL regional_option;
  ITSNodeAttributeSetXY_1 regional;
} ITSNodeAttributeSetXY;


extern const ASN1CType asn1_type_ITSNodeAttributeSetXY[];

typedef struct ITSNodeXY {
  ITSNodeOffsetPointXY delta;
  BOOL attributes_option;
  ITSNodeAttributeSetXY attributes;
} ITSNodeXY;


extern const ASN1CType asn1_type_ITSNodeXY[];

typedef struct ITSNodeSetXY {
  ITSNodeXY *tab;
  size_t count;
} ITSNodeSetXY;

extern const ASN1CType asn1_type_ITSNodeSetXY[];

typedef int ITSDrivenLineOffsetSm;

extern const ASN1CType asn1_type_ITSDrivenLineOffsetSm[];

typedef int ITSDrivenLineOffsetLg;

extern const ASN1CType asn1_type_ITSDrivenLineOffsetLg[];

typedef enum {
  ITSComputedLane_1_small,
  ITSComputedLane_1_large,
} ITSComputedLane_1_choice;

typedef struct ITSComputedLane_1 {
  ITSComputedLane_1_choice choice;
  union {
    ITSDrivenLineOffsetSm small;
    ITSDrivenLineOffsetLg large;
  } u;
} ITSComputedLane_1;

extern const ASN1CType asn1_type_ITSComputedLane_1[];

typedef enum {
  ITSComputedLane_2_small,
  ITSComputedLane_2_large,
} ITSComputedLane_2_choice;

typedef struct ITSComputedLane_2 {
  ITSComputedLane_2_choice choice;
  union {
    ITSDrivenLineOffsetSm small;
    ITSDrivenLineOffsetLg large;
  } u;
} ITSComputedLane_2;

extern const ASN1CType asn1_type_ITSComputedLane_2[];

typedef int ITSAngle;

extern const ASN1CType asn1_type_ITSAngle[];

typedef int ITSScale_B12;

extern const ASN1CType asn1_type_ITSScale_B12[];

typedef struct ITSRegionalExtension_7 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_7;


extern const ASN1CType asn1_type_ITSRegionalExtension_7[];

typedef struct ITSComputedLane_3 {
  ITSRegionalExtension_7 *tab;
  size_t count;
} ITSComputedLane_3;

extern const ASN1CType asn1_type_ITSComputedLane_3[];

typedef struct ITSComputedLane {
  ITSLaneID referenceLaneId;
  ITSComputedLane_1 offsetXaxis;
  ITSComputedLane_2 offsetYaxis;
  BOOL rotateXY_option;
  ITSAngle rotateXY;
  BOOL scaleXaxis_option;
  ITSScale_B12 scaleXaxis;
  BOOL scaleYaxis_option;
  ITSScale_B12 scaleYaxis;
  BOOL regional_option;
  ITSComputedLane_3 regional;
} ITSComputedLane;


extern const ASN1CType asn1_type_ITSComputedLane[];

typedef enum {
  ITSNodeListXY_nodes,
  ITSNodeListXY_computed,
} ITSNodeListXY_choice;

typedef struct ITSNodeListXY {
  ITSNodeListXY_choice choice;
  union {
    ITSNodeSetXY nodes;
    ITSComputedLane computed;
  } u;
} ITSNodeListXY;

extern const ASN1CType asn1_type_ITSNodeListXY[];

typedef struct ITSConnectingLane {
  ITSLaneID lane;
  BOOL maneuver_option;
  ITSAllowedManeuvers maneuver;
} ITSConnectingLane;


extern const ASN1CType asn1_type_ITSConnectingLane[];

typedef struct ITSConnection {
  ITSConnectingLane connectingLane;
  BOOL remoteIntersection_option;
  ITSIntersectionReferenceID remoteIntersection;
  BOOL signalGroup_option;
  ITSSignalGroupID signalGroup;
  BOOL userClass_option;
  ITSRestrictionClassID userClass;
  BOOL connectionID_option;
  ITSLaneConnectionID connectionID;
} ITSConnection;


extern const ASN1CType asn1_type_ITSConnection[];

typedef struct ITSConnectsToList {
  ITSConnection *tab;
  size_t count;
} ITSConnectsToList;

extern const ASN1CType asn1_type_ITSConnectsToList[];

typedef struct ITSOverlayLaneList {
  ITSLaneID *tab;
  size_t count;
} ITSOverlayLaneList;

extern const ASN1CType asn1_type_ITSOverlayLaneList[];

typedef struct ITSRegionalExtension_9 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_9;


extern const ASN1CType asn1_type_ITSRegionalExtension_9[];

typedef struct ITSGenericLane_1 {
  ITSRegionalExtension_9 *tab;
  size_t count;
} ITSGenericLane_1;

extern const ASN1CType asn1_type_ITSGenericLane_1[];

typedef struct ITSGenericLane {
  ITSLaneID laneID;
  BOOL name_option;
  ITSDescriptiveName name;
  BOOL ingressApproach_option;
  ITSApproachID ingressApproach;
  BOOL egressApproach_option;
  ITSApproachID egressApproach;
  ITSLaneAttributes laneAttributes;
  BOOL maneuvers_option;
  ITSAllowedManeuvers maneuvers;
  ITSNodeListXY nodeList;
  BOOL connectsTo_option;
  ITSConnectsToList connectsTo;
  BOOL overlays_option;
  ITSOverlayLaneList overlays;
  BOOL regional_option;
  ITSGenericLane_1 regional;
} ITSGenericLane;


extern const ASN1CType asn1_type_ITSGenericLane[];

typedef struct ITSLaneList {
  ITSGenericLane *tab;
  size_t count;
} ITSLaneList;

extern const ASN1CType asn1_type_ITSLaneList[];

typedef struct ITSRegionalExtension_23 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_23;


extern const ASN1CType asn1_type_ITSRegionalExtension_23[];

typedef struct ITSSignalControlZone {
  ITSRegionalExtension_23 zone;
} ITSSignalControlZone;


extern const ASN1CType asn1_type_ITSSignalControlZone[];

typedef struct ITSPreemptPriorityList {
  ITSSignalControlZone *tab;
  size_t count;
} ITSPreemptPriorityList;

extern const ASN1CType asn1_type_ITSPreemptPriorityList[];

typedef struct ITSRegionalExtension_10 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_10;


extern const ASN1CType asn1_type_ITSRegionalExtension_10[];

typedef struct ITSIntersectionGeometry_1 {
  ITSRegionalExtension_10 *tab;
  size_t count;
} ITSIntersectionGeometry_1;

extern const ASN1CType asn1_type_ITSIntersectionGeometry_1[];

typedef struct ITSIntersectionGeometry {
  BOOL name_option;
  ITSDescriptiveName name;
  ITSIntersectionReferenceID id;
  ITSMsgCount revision;
  ITSPosition3D refPoint;
  BOOL laneWidth_option;
  ITSDSRCLaneWidth laneWidth;
  BOOL speedLimits_option;
  ITSSpeedLimitList speedLimits;
  ITSLaneList laneSet;
  BOOL preemptPriorityData_option;
  ITSPreemptPriorityList preemptPriorityData;
  BOOL regional_option;
  ITSIntersectionGeometry_1 regional;
  BOOL roadAuthorityID_option;
  ITSRoadAuthorityID roadAuthorityID;
} ITSIntersectionGeometry;


extern const ASN1CType asn1_type_ITSIntersectionGeometry[];

typedef struct ITSIntersectionGeometryList {
  ITSIntersectionGeometry *tab;
  size_t count;
} ITSIntersectionGeometryList;

extern const ASN1CType asn1_type_ITSIntersectionGeometryList[];

typedef int ITSRoadSegmentID;

extern const ASN1CType asn1_type_ITSRoadSegmentID[];

typedef struct ITSRoadSegmentReferenceID {
  BOOL region_option;
  ITSRoadRegulatorID region;
  ITSRoadSegmentID id;
} ITSRoadSegmentReferenceID;


extern const ASN1CType asn1_type_ITSRoadSegmentReferenceID[];

typedef struct ITSRoadLaneSetList {
  ITSGenericLane *tab;
  size_t count;
} ITSRoadLaneSetList;

extern const ASN1CType asn1_type_ITSRoadLaneSetList[];

typedef struct ITSRegionalExtension_22 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_22;


extern const ASN1CType asn1_type_ITSRegionalExtension_22[];

typedef struct ITSRoadSegment_1 {
  ITSRegionalExtension_22 *tab;
  size_t count;
} ITSRoadSegment_1;

extern const ASN1CType asn1_type_ITSRoadSegment_1[];

typedef struct ITSRoadSegment {
  BOOL name_option;
  ITSDescriptiveName name;
  ITSRoadSegmentReferenceID id;
  ITSMsgCount revision;
  ITSPosition3D refPoint;
  BOOL laneWidth_option;
  ITSDSRCLaneWidth laneWidth;
  BOOL speedLimits_option;
  ITSSpeedLimitList speedLimits;
  ITSRoadLaneSetList roadLaneSet;
  BOOL regional_option;
  ITSRoadSegment_1 regional;
} ITSRoadSegment;


extern const ASN1CType asn1_type_ITSRoadSegment[];

typedef struct ITSRoadSegmentList {
  ITSRoadSegment *tab;
  size_t count;
} ITSRoadSegmentList;

extern const ASN1CType asn1_type_ITSRoadSegmentList[];

typedef struct ITSDataParameters {
  BOOL processMethod_option;
  ASN1String processMethod;
  BOOL processAgency_option;
  ASN1String processAgency;
  BOOL lastCheckedDate_option;
  ASN1String lastCheckedDate;
  BOOL geoidUsed_option;
  ASN1String geoidUsed;
} ITSDataParameters;


extern const ASN1CType asn1_type_ITSDataParameters[];

typedef enum ITSRestrictionAppliesTo {
  ITSRestrictionAppliesTo_none,
  ITSRestrictionAppliesTo_equippedTransit,
  ITSRestrictionAppliesTo_equippedTaxis,
  ITSRestrictionAppliesTo_equippedOther,
  ITSRestrictionAppliesTo_emissionCompliant,
  ITSRestrictionAppliesTo_equippedBicycle,
  ITSRestrictionAppliesTo_weightCompliant,
  ITSRestrictionAppliesTo_heightCompliant,
  ITSRestrictionAppliesTo_pedestrians,
  ITSRestrictionAppliesTo_slowMovingPersons,
  ITSRestrictionAppliesTo_wheelchairUsers,
  ITSRestrictionAppliesTo_visualDisabilities,
  ITSRestrictionAppliesTo_audioDisabilities,
  ITSRestrictionAppliesTo_otherUnknownDisabilities,
} ITSRestrictionAppliesTo;

extern const ASN1CType asn1_type_ITSRestrictionAppliesTo[];

typedef struct ITSRegionalExtension_21 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_21;


extern const ASN1CType asn1_type_ITSRegionalExtension_21[];

typedef struct ITSRestrictionUserType_1 {
  ITSRegionalExtension_21 *tab;
  size_t count;
} ITSRestrictionUserType_1;

extern const ASN1CType asn1_type_ITSRestrictionUserType_1[];

typedef enum {
  ITSRestrictionUserType_basicType,
  ITSRestrictionUserType_regional,
} ITSRestrictionUserType_choice;

typedef struct ITSRestrictionUserType {
  ITSRestrictionUserType_choice choice;
  union {
    ITSRestrictionAppliesTo basicType;
    ITSRestrictionUserType_1 regional;
  } u;
} ITSRestrictionUserType;

extern const ASN1CType asn1_type_ITSRestrictionUserType[];

typedef struct ITSRestrictionUserTypeList {
  ITSRestrictionUserType *tab;
  size_t count;
} ITSRestrictionUserTypeList;

extern const ASN1CType asn1_type_ITSRestrictionUserTypeList[];

typedef struct ITSRestrictionClassAssignment {
  ITSRestrictionClassID id;
  ITSRestrictionUserTypeList users;
} ITSRestrictionClassAssignment;


extern const ASN1CType asn1_type_ITSRestrictionClassAssignment[];

typedef struct ITSRestrictionClassList {
  ITSRestrictionClassAssignment *tab;
  size_t count;
} ITSRestrictionClassList;

extern const ASN1CType asn1_type_ITSRestrictionClassList[];

typedef struct ITSRegionalExtension_1 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_1;


extern const ASN1CType asn1_type_ITSRegionalExtension_1[];

typedef struct ITSMapData_1 {
  ITSRegionalExtension_1 *tab;
  size_t count;
} ITSMapData_1;

extern const ASN1CType asn1_type_ITSMapData_1[];

typedef struct ITSMapData {
  BOOL timeStamp_option;
  ITSMinuteOfTheYear timeStamp;
  ITSMsgCount msgIssueRevision;
  BOOL layerType_option;
  ITSLayerType layerType;
  BOOL layerID_option;
  ITSLayerID layerID;
  BOOL intersections_option;
  ITSIntersectionGeometryList intersections;
  BOOL roadSegments_option;
  ITSRoadSegmentList roadSegments;
  BOOL dataParameters_option;
  ITSDataParameters dataParameters;
  BOOL restrictionList_option;
  ITSRestrictionClassList restrictionList;
  BOOL regional_option;
  ITSMapData_1 regional;
} ITSMapData;


extern const ASN1CType asn1_type_ITSMapData[];

typedef struct ITSMAPEM {
  ITSItsPduHeader header;
  ITSMapData map;
} ITSMAPEM;


extern const ASN1CType asn1_type_ITSMAPEM[];

typedef struct ITSIviIdentificationNumbers {
  ITSIviIdentificationNumber *tab;
  size_t count;
} ITSIviIdentificationNumbers;

extern const ASN1CType asn1_type_ITSIviIdentificationNumbers[];

typedef int ITSIviStatus;

enum {
  ITSIviStatus_New = 0,
  ITSIviStatus_update = 1,
  ITSIviStatus_cancellation = 2,
  ITSIviStatus_negation = 3,
};

extern const ASN1CType asn1_type_ITSIviStatus[];

typedef struct ITSIviManagementContainer {
  ITSProvider serviceProviderId;
  ITSIviIdentificationNumber iviIdentificationNumber;
  BOOL timeStamp_option;
  ITSTimestampIts timeStamp;
  BOOL validFrom_option;
  ITSTimestampIts validFrom;
  BOOL validTo_option;
  ITSTimestampIts validTo;
  BOOL connectedIviStructures_option;
  ITSIviIdentificationNumbers connectedIviStructures;
  ITSIviStatus iviStatus;
  BOOL connectedDenms_option;
  ITSActionIdList connectedDenms;
} ITSIviManagementContainer;


extern const ASN1CType asn1_type_ITSIviManagementContainer[];

typedef int ITSZid;

enum {
  ITSZid_noZone = 32,
};

extern const ASN1CType asn1_type_ITSZid[];

typedef struct ITSSegment {
  ITSPolygonalLine line;
  BOOL laneWidth_option;
  ITSLaneWidth laneWidth;
} ITSSegment;


extern const ASN1CType asn1_type_ITSSegment[];

typedef struct ITSComputedSegment {
  ITSZid zoneId;
  ITSLanePosition laneNumber;
  ITSLaneWidth laneWidth;
  BOOL offsetDistance_option;
  int offsetDistance;
  BOOL offsetPosition_option;
  ITSDeltaReferencePosition offsetPosition;
} ITSComputedSegment;


extern const ASN1CType asn1_type_ITSComputedSegment[];

typedef struct ITSSegmentExtended {
  BOOL segmentReferencePosition_option;
  ITSZid segmentReferencePosition;
  ITSPolygonalLine line;
  BOOL segmentWidthLeft_option;
  ITSStandardLength9b segmentWidthLeft;
  BOOL segmentWidthRight_option;
  ITSStandardLength9b segmentWidthRight;
} ITSSegmentExtended;


extern const ASN1CType asn1_type_ITSSegmentExtended[];

typedef enum {
  ITSZone_segment_carriagewayOrLane,
  ITSZone_area,
  ITSZone_computedSegment,
  ITSZone_segment_setOfLanes,
} ITSZone_choice;

typedef struct ITSZone {
  ITSZone_choice choice;
  union {
    ITSSegment segment_carriagewayOrLane;
    ITSPolygonalLine area;
    ITSComputedSegment computedSegment;
    ITSSegmentExtended segment_setOfLanes;
  } u;
} ITSZone;

extern const ASN1CType asn1_type_ITSZone[];

typedef struct ITSGlcPart {
  ITSZid zoneId;
  BOOL laneNumber_option;
  ITSLanePosition laneNumber;
  BOOL zoneExtension_option;
  int zoneExtension;
  BOOL zoneHeading_option;
  ITSHeadingValue zoneHeading;
  BOOL zone_option;
  ITSZone zone;
} ITSGlcPart;


extern const ASN1CType asn1_type_ITSGlcPart[];

typedef struct ITSGlcParts {
  ITSGlcPart *tab;
  size_t count;
} ITSGlcParts;

extern const ASN1CType asn1_type_ITSGlcParts[];

typedef struct ITSGeographicLocationContainer {
  ITSReferencePosition referencePosition;
  BOOL referencePositionTime_option;
  ITSTimestampIts referencePositionTime;
  BOOL referencePositionHeading_option;
  ITSHeading referencePositionHeading;
  BOOL referencePositionSpeed_option;
  ITSSpeed referencePositionSpeed;
  ITSGlcParts parts;
} ITSGeographicLocationContainer;


extern const ASN1CType asn1_type_ITSGeographicLocationContainer[];

typedef struct ITSZoneIds {
  ITSZid *tab;
  size_t count;
} ITSZoneIds;

extern const ASN1CType asn1_type_ITSZoneIds[];

typedef struct ITSLanePositions {
  ITSLanePosition *tab;
  size_t count;
} ITSLanePositions;

extern const ASN1CType asn1_type_ITSLanePositions[];

typedef int ITSIviType;

enum {
  ITSIviType_immediateDangerWarningMessages = 0,
  ITSIviType_regulatoryMessages = 1,
  ITSIviType_trafficRelatedInformationMessages = 2,
  ITSIviType_pollutionMessages = 3,
  ITSIviType_notTrafficRelatedInformationMessages = 4,
  ITSIviType_machineReadableMessages = 5,
};

extern const ASN1CType asn1_type_ITSIviType[];

typedef int ITSIviPurpose;

enum {
  ITSIviPurpose_safety = 0,
  ITSIviPurpose_environmental = 1,
  ITSIviPurpose_trafficManagement = 2,
};

extern const ASN1CType asn1_type_ITSIviPurpose[];

typedef int ITSLaneStatus;

enum {
  ITSLaneStatus_open = 0,
  ITSLaneStatus_closed = 1,
  ITSLaneStatus_mergeR = 2,
  ITSLaneStatus_mergeL = 3,
  ITSLaneStatus_mergeLR = 4,
  ITSLaneStatus_provisionallyOpen = 5,
  ITSLaneStatus_diverging = 6,
};

extern const ASN1CType asn1_type_ITSLaneStatus[];

typedef int ITSGoodsType;

enum {
  ITSGoodsType_ammunition = 0,
  ITSGoodsType_chemicals = 1,
  ITSGoodsType_empty = 2,
  ITSGoodsType_fuel = 3,
  ITSGoodsType_glass = 4,
  ITSGoodsType_dangerous = 5,
  ITSGoodsType_liquid = 6,
  ITSGoodsType_liveStock = 7,
  ITSGoodsType_dangerousForPeople = 8,
  ITSGoodsType_dangerousForTheEnvironment = 9,
  ITSGoodsType_dangerousForWater = 10,
  ITSGoodsType_perishableProducts = 11,
  ITSGoodsType_pharmaceutical = 12,
  ITSGoodsType_vehicles = 13,
};

extern const ASN1CType asn1_type_ITSGoodsType[];

typedef struct ITSLoadType {
  ITSGoodsType goodsType;
  ITSDangerousGoodsBasic dangerousGoodsType;
  ITSSpecialTransportType specialTransportType;
} ITSLoadType;


extern const ASN1CType asn1_type_ITSLoadType[];

typedef enum {
  ITSVehicleCharacteristicsFixValues_simpleVehicleType,
  ITSVehicleCharacteristicsFixValues_euVehicleCategoryCode,
  ITSVehicleCharacteristicsFixValues_iso3833VehicleType,
  ITSVehicleCharacteristicsFixValues_euroAndCo2value,
  ITSVehicleCharacteristicsFixValues_engineCharacteristics,
  ITSVehicleCharacteristicsFixValues_loadType,
  ITSVehicleCharacteristicsFixValues_usage,
} ITSVehicleCharacteristicsFixValues_choice;

typedef struct ITSVehicleCharacteristicsFixValues {
  ITSVehicleCharacteristicsFixValues_choice choice;
  union {
    ITSStationType simpleVehicleType;
    ITSEuVehicleCategoryCode euVehicleCategoryCode;
    ITSIso3833VehicleType iso3833VehicleType;
    ITSEnvironmentalCharacteristics euroAndCo2value;
    ITSEngineCharacteristics engineCharacteristics;
    ITSLoadType loadType;
    ITSVehicleRole usage;
  } u;
} ITSVehicleCharacteristicsFixValues;

extern const ASN1CType asn1_type_ITSVehicleCharacteristicsFixValues[];

typedef struct ITSVehicleCharacteristicsFixValuesList {
  ITSVehicleCharacteristicsFixValues *tab;
  size_t count;
} ITSVehicleCharacteristicsFixValuesList;

extern const ASN1CType asn1_type_ITSVehicleCharacteristicsFixValuesList[];

typedef int ITSComparisonOperator;

enum {
  ITSComparisonOperator_greaterThan = 0,
  ITSComparisonOperator_greaterThanOrEqualTo = 1,
  ITSComparisonOperator_lessThan = 2,
  ITSComparisonOperator_lessThanOrEqualTo = 3,
};

extern const ASN1CType asn1_type_ITSComparisonOperator[];

typedef int ITSInt1;

extern const ASN1CType asn1_type_ITSInt1[];

typedef struct ITSVehicleDimensions {
  ITSInt1 vehicleLengthOverall;
  ITSInt1 vehicleHeigthOverall;
  ITSInt1 vehicleWidthOverall;
} ITSVehicleDimensions;


extern const ASN1CType asn1_type_ITSVehicleDimensions[];

typedef struct ITSVehicleWeightLimits {
  ITSInt2 vehicleMaxLadenWeight;
  ITSInt2 vehicleTrainMaximumWeight;
  ITSInt2 vehicleWeightUnladen;
} ITSVehicleWeightLimits;


extern const ASN1CType asn1_type_ITSVehicleWeightLimits[];

typedef struct ITSAxleWeightLimits {
  ITSInt2 maxLadenweightOnAxle1;
  ITSInt2 maxLadenweightOnAxle2;
  ITSInt2 maxLadenweightOnAxle3;
  ITSInt2 maxLadenweightOnAxle4;
  ITSInt2 maxLadenweightOnAxle5;
} ITSAxleWeightLimits;


extern const ASN1CType asn1_type_ITSAxleWeightLimits[];

typedef struct ITSPassengerCapacity {
  ITSInt1 numberOfSeats;
  ITSInt1 numberOfStandingPlaces;
} ITSPassengerCapacity;


extern const ASN1CType asn1_type_ITSPassengerCapacity[];

typedef struct ITSSoundLevel {
  ITSInt1 soundstationary;
  ITSInt1 sounddriveby;
} ITSSoundLevel;


extern const ASN1CType asn1_type_ITSSoundLevel[];

typedef enum {
  ITSVehicleCharacteristicsRanges_1_numberOfAxles,
  ITSVehicleCharacteristicsRanges_1_vehicleDimensions,
  ITSVehicleCharacteristicsRanges_1_vehicleWeightLimits,
  ITSVehicleCharacteristicsRanges_1_axleWeightLimits,
  ITSVehicleCharacteristicsRanges_1_passengerCapacity,
  ITSVehicleCharacteristicsRanges_1_exhaustEmissionValues,
  ITSVehicleCharacteristicsRanges_1_dieselEmissionValues,
  ITSVehicleCharacteristicsRanges_1_soundLevel,
} ITSVehicleCharacteristicsRanges_1_choice;

typedef struct ITSVehicleCharacteristicsRanges_1 {
  ITSVehicleCharacteristicsRanges_1_choice choice;
  union {
    int numberOfAxles;
    ITSVehicleDimensions vehicleDimensions;
    ITSVehicleWeightLimits vehicleWeightLimits;
    ITSAxleWeightLimits axleWeightLimits;
    ITSPassengerCapacity passengerCapacity;
    ITSExhaustEmissionValues exhaustEmissionValues;
    ITSDieselEmissionValues dieselEmissionValues;
    ITSSoundLevel soundLevel;
  } u;
} ITSVehicleCharacteristicsRanges_1;

extern const ASN1CType asn1_type_ITSVehicleCharacteristicsRanges_1[];

typedef struct ITSVehicleCharacteristicsRanges {
  ITSComparisonOperator comparisonOperator;
  ITSVehicleCharacteristicsRanges_1 limits;
} ITSVehicleCharacteristicsRanges;


extern const ASN1CType asn1_type_ITSVehicleCharacteristicsRanges[];

typedef struct ITSVehicleCharacteristicsRangesList {
  ITSVehicleCharacteristicsRanges *tab;
  size_t count;
} ITSVehicleCharacteristicsRangesList;

extern const ASN1CType asn1_type_ITSVehicleCharacteristicsRangesList[];

typedef struct ITSTractorCharacteristics {
  BOOL equalTo_option;
  ITSVehicleCharacteristicsFixValuesList equalTo;
  BOOL notEqualTo_option;
  ITSVehicleCharacteristicsFixValuesList notEqualTo;
  BOOL ranges_option;
  ITSVehicleCharacteristicsRangesList ranges;
} ITSTractorCharacteristics;


extern const ASN1CType asn1_type_ITSTractorCharacteristics[];

typedef struct ITSTrailerCharacteristicsFixValuesList {
  ITSVehicleCharacteristicsFixValues *tab;
  size_t count;
} ITSTrailerCharacteristicsFixValuesList;

extern const ASN1CType asn1_type_ITSTrailerCharacteristicsFixValuesList[];

typedef struct ITSTrailerCharacteristicsRangesList {
  ITSVehicleCharacteristicsRanges *tab;
  size_t count;
} ITSTrailerCharacteristicsRangesList;

extern const ASN1CType asn1_type_ITSTrailerCharacteristicsRangesList[];

typedef struct ITSTrailerCharacteristics {
  BOOL equalTo_option;
  ITSTrailerCharacteristicsFixValuesList equalTo;
  BOOL notEqualTo_option;
  ITSTrailerCharacteristicsFixValuesList notEqualTo;
  BOOL ranges_option;
  ITSTrailerCharacteristicsRangesList ranges;
} ITSTrailerCharacteristics;


extern const ASN1CType asn1_type_ITSTrailerCharacteristics[];

typedef struct ITSTrailerCharacteristicsList {
  ITSTrailerCharacteristics *tab;
  size_t count;
} ITSTrailerCharacteristicsList;

extern const ASN1CType asn1_type_ITSTrailerCharacteristicsList[];

typedef ITSTractorCharacteristics ITSTrainCharacteristics;

extern const ASN1CType asn1_type_ITSTrainCharacteristics[];

typedef struct ITSCompleteVehicleCharacteristics {
  BOOL tractor_option;
  ITSTractorCharacteristics tractor;
  BOOL trailer_option;
  ITSTrailerCharacteristicsList trailer;
  BOOL train_option;
  ITSTrainCharacteristics train;
} ITSCompleteVehicleCharacteristics;


extern const ASN1CType asn1_type_ITSCompleteVehicleCharacteristics[];

typedef struct ITSVehicleCharacteristicsList {
  ITSCompleteVehicleCharacteristics *tab;
  size_t count;
} ITSVehicleCharacteristicsList;

extern const ASN1CType asn1_type_ITSVehicleCharacteristicsList[];

typedef int ITSDriverCharacteristics;

enum {
  ITSDriverCharacteristics_unexperiencedDrivers = 0,
  ITSDriverCharacteristics_experiencedDrivers = 1,
  ITSDriverCharacteristics_rfu1 = 2,
  ITSDriverCharacteristics_rfu2 = 3,
};

extern const ASN1CType asn1_type_ITSDriverCharacteristics[];

typedef int ITSVcClass;

enum {
  ITSVcClass_classA = 0,
  ITSVcClass_classB = 1,
  ITSVcClass_classC = 2,
  ITSVcClass_classD = 3,
  ITSVcClass_classE = 4,
  ITSVcClass_classF = 5,
  ITSVcClass_classG = 6,
  ITSVcClass_classH = 7,
};

extern const ASN1CType asn1_type_ITSVcClass[];

typedef int ITSVcOption;

enum {
  ITSVcOption_none = 0,
  ITSVcOption_a = 1,
  ITSVcOption_b = 2,
  ITSVcOption_c = 3,
  ITSVcOption_d = 4,
  ITSVcOption_e = 5,
  ITSVcOption_f = 6,
  ITSVcOption_g = 7,
};

extern const ASN1CType asn1_type_ITSVcOption[];

typedef struct ITSInternationalSign_applicablePeriod_1 {
  int yearRangeStartYear;
  int yearRangeEndYear;
} ITSInternationalSign_applicablePeriod_1;


extern const ASN1CType asn1_type_ITSInternationalSign_applicablePeriod_1[];

typedef struct ITSMonthDay {
  int month;
  int day;
} ITSMonthDay;


extern const ASN1CType asn1_type_ITSMonthDay[];

typedef struct ITSInternationalSign_applicablePeriod_2 {
  ITSMonthDay dateRangeStartMonthDay;
  ITSMonthDay dateRangeEndMonthDay;
} ITSInternationalSign_applicablePeriod_2;


extern const ASN1CType asn1_type_ITSInternationalSign_applicablePeriod_2[];

typedef ASN1BitString ITSRepeatingPeriodDayTypes;

extern const ASN1CType asn1_type_ITSRepeatingPeriodDayTypes[];

typedef struct ITSHoursMinutes {
  int hours;
  int mins;
} ITSHoursMinutes;


extern const ASN1CType asn1_type_ITSHoursMinutes[];

typedef struct ITSInternationalSign_applicablePeriod_3 {
  ITSHoursMinutes timeRangeStartTime;
  ITSHoursMinutes timeRangeEndTime;
} ITSInternationalSign_applicablePeriod_3;


extern const ASN1CType asn1_type_ITSInternationalSign_applicablePeriod_3[];

typedef ASN1BitString ITSDayOfWeek;

extern const ASN1CType asn1_type_ITSDayOfWeek[];

typedef struct ITSInternationalSign_applicablePeriod {
  BOOL year_option;
  ITSInternationalSign_applicablePeriod_1 year;
  BOOL month_day_option;
  ITSInternationalSign_applicablePeriod_2 month_day;
  BOOL repeatingPeriodDayTypes_option;
  ITSRepeatingPeriodDayTypes repeatingPeriodDayTypes;
  BOOL hourMinutes_option;
  ITSInternationalSign_applicablePeriod_3 hourMinutes;
  BOOL dateRangeOfWeek_option;
  ITSDayOfWeek dateRangeOfWeek;
  BOOL durationHourMinute_option;
  ITSHoursMinutes durationHourMinute;
} ITSInternationalSign_applicablePeriod;


extern const ASN1CType asn1_type_ITSInternationalSign_applicablePeriod[];

typedef struct ITSValidityPeriods {
  ITSInternationalSign_applicablePeriod *tab;
  size_t count;
} ITSValidityPeriods;

extern const ASN1CType asn1_type_ITSValidityPeriods[];

typedef int ITSRSCUnit;

enum {
  ITSRSCUnit_kmperh = 0,
  ITSRSCUnit_milesperh = 1,
  ITSRSCUnit_kilometer = 2,
  ITSRSCUnit_meter = 3,
  ITSRSCUnit_decimeter = 4,
  ITSRSCUnit_centimeter = 5,
  ITSRSCUnit_mile = 6,
  ITSRSCUnit_yard = 7,
  ITSRSCUnit_foot = 8,
  ITSRSCUnit_minutesOfTime = 9,
  ITSRSCUnit_tonnes = 10,
  ITSRSCUnit_hundredkg = 11,
  ITSRSCUnit_pound = 12,
  ITSRSCUnit_rateOfIncline = 13,
};

extern const ASN1CType asn1_type_ITSRSCUnit[];

typedef struct ITSVcCode {
  ITSVcClass roadSignClass;
  int roadSignCode;
  ITSVcOption vcOption;
  BOOL validity_option;
  ITSValidityPeriods validity;
  BOOL value_option;
  int value;
  BOOL unit_option;
  ITSRSCUnit unit;
} ITSVcCode;


extern const ASN1CType asn1_type_ITSVcCode[];

typedef enum ITSISO14823Code_1 {
  ITSISO14823Code_1_dangerWarning,
  ITSISO14823Code_1_regulatory,
  ITSISO14823Code_1_informative,
} ITSISO14823Code_1;

extern const ASN1CType asn1_type_ITSISO14823Code_1[];

typedef enum ITSISO14823Code_2 {
  ITSISO14823Code_2_publicFacilities,
} ITSISO14823Code_2;

extern const ASN1CType asn1_type_ITSISO14823Code_2[];

typedef enum ITSISO14823Code_3 {
  ITSISO14823Code_3_ambientCondition,
  ITSISO14823Code_3_roadCondition,
} ITSISO14823Code_3;

extern const ASN1CType asn1_type_ITSISO14823Code_3[];

typedef enum ITSISO14823Code_4 {
  ITSISO14823Code_4_supplementaryPanelAndAdditionalPanel,
} ITSISO14823Code_4;

extern const ASN1CType asn1_type_ITSISO14823Code_4[];

typedef enum {
  ITSISO14823Code_5_trafficSignPictogram,
  ITSISO14823Code_5_publicFacilitiesPictogram,
  ITSISO14823Code_5_ambientOrRoadConditionPictogram,
  ITSISO14823Code_5_supplementaryPanel,
} ITSISO14823Code_5_choice;

typedef struct ITSISO14823Code_5 {
  ITSISO14823Code_5_choice choice;
  union {
    ITSISO14823Code_1 trafficSignPictogram;
    ITSISO14823Code_2 publicFacilitiesPictogram;
    ITSISO14823Code_3 ambientOrRoadConditionPictogram;
    ITSISO14823Code_4 supplementaryPanel;
  } u;
} ITSISO14823Code_5;

extern const ASN1CType asn1_type_ITSISO14823Code_5[];

typedef struct ITSISO14823Code_6 {
  int nature;
  int serialNumber;
} ITSISO14823Code_6;


extern const ASN1CType asn1_type_ITSISO14823Code_6[];

typedef struct ITSISO14823Code_7 {
  BOOL countryCode_option;
  ASN1String countryCode;
  ITSISO14823Code_5 serviceCategoryCode;
  ITSISO14823Code_6 pictogramCategoryCode;
} ITSISO14823Code_7;


extern const ASN1CType asn1_type_ITSISO14823Code_7[];

typedef ITSInternationalSign_applicablePeriod ITSInternationalSign_exemptedApplicablePeriod;

extern const ASN1CType asn1_type_ITSInternationalSign_exemptedApplicablePeriod[];

typedef int ITSInternationalSign_directionalFlowOfLane;

enum {
  ITSInternationalSign_directionalFlowOfLane_sDL = 1,
  ITSInternationalSign_directionalFlowOfLane_sLT = 2,
  ITSInternationalSign_directionalFlowOfLane_sRT = 3,
  ITSInternationalSign_directionalFlowOfLane_lTO = 4,
  ITSInternationalSign_directionalFlowOfLane_rTO = 5,
  ITSInternationalSign_directionalFlowOfLane_cLL = 6,
  ITSInternationalSign_directionalFlowOfLane_cRI = 7,
  ITSInternationalSign_directionalFlowOfLane_oVL = 8,
};

extern const ASN1CType asn1_type_ITSInternationalSign_directionalFlowOfLane[];

typedef int ITSCode_Units_2;

enum {
  ITSCode_Units_2_kmperh = 0,
  ITSCode_Units_2_milesperh = 1,
  ITSCode_Units_2_kilometre = 2,
  ITSCode_Units_2_metre = 3,
  ITSCode_Units_2_decimetre = 4,
  ITSCode_Units_2_centimetre = 5,
  ITSCode_Units_2_mile = 6,
  ITSCode_Units_2_yard = 7,
  ITSCode_Units_2_foot = 8,
  ITSCode_Units_2_minutesOfTime = 9,
  ITSCode_Units_2_tonnes = 10,
  ITSCode_Units_2_hundredkg = 11,
  ITSCode_Units_2_pound = 12,
  ITSCode_Units_2_rateOfIncline = 13,
  ITSCode_Units_2_durationinminutes = 14,
};

extern const ASN1CType asn1_type_ITSCode_Units_2[];

typedef struct ITSDistance {
  int value;
  ITSCode_Units_2 unit;
} ITSDistance;


extern const ASN1CType asn1_type_ITSDistance[];

typedef int ITSCode_Units_4;

enum {
  ITSCode_Units_4_kmperh = 0,
  ITSCode_Units_4_milesperh = 1,
  ITSCode_Units_4_kilometre = 2,
  ITSCode_Units_4_metre = 3,
  ITSCode_Units_4_decimetre = 4,
  ITSCode_Units_4_centimetre = 5,
  ITSCode_Units_4_mile = 6,
  ITSCode_Units_4_yard = 7,
  ITSCode_Units_4_foot = 8,
  ITSCode_Units_4_minutesOfTime = 9,
  ITSCode_Units_4_tonnes = 10,
  ITSCode_Units_4_hundredkg = 11,
  ITSCode_Units_4_pound = 12,
  ITSCode_Units_4_rateOfIncline = 13,
  ITSCode_Units_4_durationinminutes = 14,
};

extern const ASN1CType asn1_type_ITSCode_Units_4[];

typedef struct ITSWeight {
  int value;
  ITSCode_Units_4 unit;
} ITSWeight;


extern const ASN1CType asn1_type_ITSWeight[];

typedef struct ITSInternationalSign_applicableVehicleDimensions {
  BOOL vehicleHeight_option;
  ITSDistance vehicleHeight;
  BOOL vehicleWidth_option;
  ITSDistance vehicleWidth;
  BOOL vehicleLength_option;
  ITSDistance vehicleLength;
  BOOL vehicleWeight_option;
  ITSWeight vehicleWeight;
} ITSInternationalSign_applicableVehicleDimensions;


extern const ASN1CType asn1_type_ITSInternationalSign_applicableVehicleDimensions[];

typedef int ITSCode_Units_1;

enum {
  ITSCode_Units_1_kmperh = 0,
  ITSCode_Units_1_milesperh = 1,
  ITSCode_Units_1_kilometre = 2,
  ITSCode_Units_1_metre = 3,
  ITSCode_Units_1_decimetre = 4,
  ITSCode_Units_1_centimetre = 5,
  ITSCode_Units_1_mile = 6,
  ITSCode_Units_1_yard = 7,
  ITSCode_Units_1_foot = 8,
  ITSCode_Units_1_minutesOfTime = 9,
  ITSCode_Units_1_tonnes = 10,
  ITSCode_Units_1_hundredkg = 11,
  ITSCode_Units_1_pound = 12,
  ITSCode_Units_1_rateOfIncline = 13,
  ITSCode_Units_1_durationinminutes = 14,
};

extern const ASN1CType asn1_type_ITSCode_Units_1[];

typedef struct ITSInternationalSign_speedLimits {
  BOOL speedLimitMax_option;
  int speedLimitMax;
  BOOL speedLimitMin_option;
  int speedLimitMin;
  ITSCode_Units_1 unit;
} ITSInternationalSign_speedLimits;


extern const ASN1CType asn1_type_ITSInternationalSign_speedLimits[];

typedef int ITSInternationalSign_rateOfIncline;

extern const ASN1CType asn1_type_ITSInternationalSign_rateOfIncline[];

typedef ITSDistance ITSInternationalSign_distanceBetweenVehicles;

extern const ASN1CType asn1_type_ITSInternationalSign_distanceBetweenVehicles[];

typedef int ITSDestinationType;

enum {
  ITSDestinationType_none = 0,
  ITSDestinationType_importantArea = 1,
  ITSDestinationType_principalArea = 2,
  ITSDestinationType_generalArea = 3,
  ITSDestinationType_wellKnownPoint = 4,
  ITSDestinationType_country = 5,
  ITSDestinationType_city = 6,
  ITSDestinationType_street = 7,
  ITSDestinationType_industrialArea = 8,
  ITSDestinationType_historicArea = 9,
  ITSDestinationType_touristicArea = 10,
  ITSDestinationType_culturalArea = 11,
  ITSDestinationType_touristicRoute = 12,
  ITSDestinationType_recommendedRoute = 13,
  ITSDestinationType_touristicAttraction = 14,
  ITSDestinationType_geographicArea = 15,
};

extern const ASN1CType asn1_type_ITSDestinationType[];

typedef enum ITSGddStructure_1 {
  ITSGddStructure_1_dangerWarning,
  ITSGddStructure_1_regulatory,
  ITSGddStructure_1_informative,
} ITSGddStructure_1;

extern const ASN1CType asn1_type_ITSGddStructure_1[];

typedef enum ITSGddStructure_2 {
  ITSGddStructure_2_publicFacilities,
} ITSGddStructure_2;

extern const ASN1CType asn1_type_ITSGddStructure_2[];

typedef enum ITSGddStructure_3 {
  ITSGddStructure_3_ambientCondition,
  ITSGddStructure_3_roadCondition,
} ITSGddStructure_3;

extern const ASN1CType asn1_type_ITSGddStructure_3[];

typedef enum {
  ITSGddStructure_4_trafficSignPictogram,
  ITSGddStructure_4_publicFacilitiesPictogram,
  ITSGddStructure_4_ambientOrRoadConditionPictogram,
} ITSGddStructure_4_choice;

typedef struct ITSGddStructure_4 {
  ITSGddStructure_4_choice choice;
  union {
    ITSGddStructure_1 trafficSignPictogram;
    ITSGddStructure_2 publicFacilitiesPictogram;
    ITSGddStructure_3 ambientOrRoadConditionPictogram;
  } u;
} ITSGddStructure_4;

extern const ASN1CType asn1_type_ITSGddStructure_4[];

typedef struct ITSGddStructure_5 {
  int nature;
  int serialNumber;
} ITSGddStructure_5;


extern const ASN1CType asn1_type_ITSGddStructure_5[];

typedef struct ITSGddStructure_6 {
  BOOL countryCode_option;
  ASN1String countryCode;
  ITSGddStructure_4 serviceCategoryCode;
  ITSGddStructure_5 pictogramCategoryCode;
} ITSGddStructure_6;


extern const ASN1CType asn1_type_ITSGddStructure_6[];

typedef struct ITSInternationalSign_section {
  BOOL startingPointLength_option;
  ITSDistance startingPointLength;
  BOOL continuityLength_option;
  ITSDistance continuityLength;
} ITSInternationalSign_section;


extern const ASN1CType asn1_type_ITSInternationalSign_section[];

typedef int ITSInternationalSign_numberOfLane;

extern const ASN1CType asn1_type_ITSInternationalSign_numberOfLane[];

typedef enum {
  ITSGddAttribute_dtm,
  ITSGddAttribute_edt,
  ITSGddAttribute_dfl,
  ITSGddAttribute_ved,
  ITSGddAttribute_spe,
  ITSGddAttribute_roi,
  ITSGddAttribute_dbv,
  ITSGddAttribute_ddd,
  ITSGddAttribute_set,
  ITSGddAttribute_nol,
} ITSGddAttribute_choice;

typedef struct ITSGddAttribute {
  ITSGddAttribute_choice choice;
  union {
    ITSInternationalSign_applicablePeriod dtm;
    ITSInternationalSign_exemptedApplicablePeriod edt;
    ITSInternationalSign_directionalFlowOfLane dfl;
    ITSInternationalSign_applicableVehicleDimensions ved;
    ITSInternationalSign_speedLimits spe;
    ITSInternationalSign_rateOfIncline roi;
    ITSInternationalSign_distanceBetweenVehicles dbv;
    struct ITSInternationalSign_destinationInformation * ddd;
    ITSInternationalSign_section set;
    ITSInternationalSign_numberOfLane nol;
  } u;
} ITSGddAttribute;

extern const ASN1CType asn1_type_ITSGddAttribute[];

typedef struct ITSGddAttributes {
  ITSGddAttribute *tab;
  size_t count;
} ITSGddAttributes;

extern const ASN1CType asn1_type_ITSGddAttributes[];

typedef struct ITSGddStructure {
  ITSGddStructure_6 pictogramCode;
  BOOL attributes_option;
  ITSGddAttributes attributes;
} ITSGddStructure;


extern const ASN1CType asn1_type_ITSGddStructure[];

typedef struct ITSDestinationPlace {
  ITSDestinationType destType;
  BOOL destRSCode_option;
  ITSGddStructure destRSCode;
  BOOL destBlob_option;
  ASN1String destBlob;
  BOOL placeNameIdentification_option;
  int placeNameIdentification;
  BOOL placeNameText_option;
  ASN1String placeNameText;
} ITSDestinationPlace;


extern const ASN1CType asn1_type_ITSDestinationPlace[];

typedef struct ITSDestinationPlaces {
  ITSDestinationPlace *tab;
  size_t count;
} ITSDestinationPlaces;

extern const ASN1CType asn1_type_ITSDestinationPlaces[];

typedef int ITSDestinationRoadType;

enum {
  ITSDestinationRoadType_none = 0,
  ITSDestinationRoadType_nationalHighway = 1,
  ITSDestinationRoadType_localHighway = 2,
  ITSDestinationRoadType_tollExpresswayMotorway = 3,
  ITSDestinationRoadType_internationalHighway = 4,
  ITSDestinationRoadType_highway = 5,
  ITSDestinationRoadType_expressway = 6,
  ITSDestinationRoadType_nationalRoad = 7,
  ITSDestinationRoadType_regionalProvincialRoad = 8,
  ITSDestinationRoadType_localRoad = 9,
  ITSDestinationRoadType_motorwayJunction = 10,
  ITSDestinationRoadType_diversion = 11,
  ITSDestinationRoadType_rfu1 = 12,
  ITSDestinationRoadType_rfu2 = 13,
  ITSDestinationRoadType_rfu3 = 14,
  ITSDestinationRoadType_rfu4 = 15,
};

extern const ASN1CType asn1_type_ITSDestinationRoadType[];

typedef struct ITSDestinationRoad {
  ITSDestinationRoadType derType;
  BOOL roadNumberIdentifier_option;
  int roadNumberIdentifier;
  BOOL roadNumberText_option;
  ASN1String roadNumberText;
} ITSDestinationRoad;


extern const ASN1CType asn1_type_ITSDestinationRoad[];

typedef struct ITSDestinationRoads {
  ITSDestinationRoad *tab;
  size_t count;
} ITSDestinationRoads;

extern const ASN1CType asn1_type_ITSDestinationRoads[];

typedef int ITSCode_Units_3;

enum {
  ITSCode_Units_3_kmperh = 0,
  ITSCode_Units_3_milesperh = 1,
  ITSCode_Units_3_kilometre = 2,
  ITSCode_Units_3_metre = 3,
  ITSCode_Units_3_decimetre = 4,
  ITSCode_Units_3_centimetre = 5,
  ITSCode_Units_3_mile = 6,
  ITSCode_Units_3_yard = 7,
  ITSCode_Units_3_foot = 8,
  ITSCode_Units_3_minutesOfTime = 9,
  ITSCode_Units_3_tonnes = 10,
  ITSCode_Units_3_hundredkg = 11,
  ITSCode_Units_3_pound = 12,
  ITSCode_Units_3_rateOfIncline = 13,
  ITSCode_Units_3_durationinminutes = 14,
};

extern const ASN1CType asn1_type_ITSCode_Units_3[];

typedef struct ITSDistanceOrDuration {
  int value;
  ITSCode_Units_3 unit;
} ITSDistanceOrDuration;


extern const ASN1CType asn1_type_ITSDistanceOrDuration[];

typedef struct ITSDDD_IO {
  int arrowDirection;
  BOOL destPlace_option;
  ITSDestinationPlaces destPlace;
  BOOL destRoad_option;
  ITSDestinationRoads destRoad;
  BOOL roadNumberIdentifier_option;
  int roadNumberIdentifier;
  BOOL streetName_option;
  int streetName;
  BOOL streetNameText_option;
  ASN1String streetNameText;
  BOOL distanceToDivergingPoint_option;
  ITSDistanceOrDuration distanceToDivergingPoint;
  BOOL distanceToDestinationPlace_option;
  ITSDistanceOrDuration distanceToDestinationPlace;
} ITSDDD_IO;


extern const ASN1CType asn1_type_ITSDDD_IO[];

typedef struct ITSDDD_IO_LIST {
  ITSDDD_IO *tab;
  size_t count;
} ITSDDD_IO_LIST;

extern const ASN1CType asn1_type_ITSDDD_IO_LIST[];

typedef struct ITSInternationalSign_destinationInformation {
  BOOL junctionDirection_option;
  int junctionDirection;
  BOOL roundaboutCwDirection_option;
  int roundaboutCwDirection;
  BOOL roundaboutCcwDirection_option;
  int roundaboutCcwDirection;
  ITSDDD_IO_LIST ioList;
} ITSInternationalSign_destinationInformation;


extern const ASN1CType asn1_type_ITSInternationalSign_destinationInformation[];

typedef enum {
  ITSISO14823Attribute_dtm,
  ITSISO14823Attribute_edt,
  ITSISO14823Attribute_dfl,
  ITSISO14823Attribute_ved,
  ITSISO14823Attribute_spe,
  ITSISO14823Attribute_roi,
  ITSISO14823Attribute_dbv,
  ITSISO14823Attribute_ddd,
} ITSISO14823Attribute_choice;

typedef struct ITSISO14823Attribute {
  ITSISO14823Attribute_choice choice;
  union {
    ITSInternationalSign_applicablePeriod dtm;
    ITSInternationalSign_exemptedApplicablePeriod edt;
    ITSInternationalSign_directionalFlowOfLane dfl;
    ITSInternationalSign_applicableVehicleDimensions ved;
    ITSInternationalSign_speedLimits spe;
    ITSInternationalSign_rateOfIncline roi;
    ITSInternationalSign_distanceBetweenVehicles dbv;
    ITSInternationalSign_destinationInformation ddd;
  } u;
} ITSISO14823Attribute;

extern const ASN1CType asn1_type_ITSISO14823Attribute[];

typedef struct ITSISO14823Attributes {
  ITSISO14823Attribute *tab;
  size_t count;
} ITSISO14823Attributes;

extern const ASN1CType asn1_type_ITSISO14823Attributes[];

typedef struct ITSISO14823Code {
  ITSISO14823Code_7 pictogramCode;
  BOOL attributes_option;
  ITSISO14823Attributes attributes;
} ITSISO14823Code;


extern const ASN1CType asn1_type_ITSISO14823Code[];

typedef struct ITSAnyCatalogue {
  ITSProvider owner;
  int version;
  int pictogramCode;
  BOOL value_option;
  int value;
  BOOL unit_option;
  ITSRSCUnit unit;
  BOOL attributes_option;
  ITSISO14823Attributes attributes;
} ITSAnyCatalogue;


extern const ASN1CType asn1_type_ITSAnyCatalogue[];

typedef enum {
  ITSRSCode_1_viennaConvention,
  ITSRSCode_1_iso14823,
  ITSRSCode_1_itisCodes,
  ITSRSCode_1_anyCatalogue,
} ITSRSCode_1_choice;

typedef struct ITSRSCode_1 {
  ITSRSCode_1_choice choice;
  union {
    ITSVcCode viennaConvention;
    ITSISO14823Code iso14823;
    int itisCodes;
    ITSAnyCatalogue anyCatalogue;
  } u;
} ITSRSCode_1;

extern const ASN1CType asn1_type_ITSRSCode_1[];

typedef struct ITSRSCode {
  BOOL layoutComponentId_option;
  int layoutComponentId;
  ITSRSCode_1 code;
} ITSRSCode;


extern const ASN1CType asn1_type_ITSRSCode[];

typedef struct ITSRoadSignCodes {
  ITSRSCode *tab;
  size_t count;
} ITSRoadSignCodes;

extern const ASN1CType asn1_type_ITSRoadSignCodes[];

typedef struct ITSText {
  BOOL layoutComponentId_option;
  int layoutComponentId;
  ASN1BitString language;
  ASN1String textContent;
} ITSText;


extern const ASN1CType asn1_type_ITSText[];

typedef struct ITSConstraintTextLines1 {
  ITSText *tab;
  size_t count;
} ITSConstraintTextLines1;

extern const ASN1CType asn1_type_ITSConstraintTextLines1[];

typedef struct ITSGicPart {
  BOOL detectionZoneIds_option;
  ITSZoneIds detectionZoneIds;
  BOOL its_Rrid_option;
  ITSVarLengthNumber its_Rrid;
  BOOL relevanceZoneIds_option;
  ITSZoneIds relevanceZoneIds;
  BOOL direction_option;
  ITSDirection direction;
  BOOL driverAwarenessZoneIds_option;
  ITSZoneIds driverAwarenessZoneIds;
  BOOL minimumAwarenessTime_option;
  int minimumAwarenessTime;
  BOOL applicableLanes_option;
  ITSLanePositions applicableLanes;
  ITSIviType iviType;
  BOOL iviPurpose_option;
  ITSIviPurpose iviPurpose;
  BOOL laneStatus_option;
  ITSLaneStatus laneStatus;
  BOOL vehicleCharacteristics_option;
  ITSVehicleCharacteristicsList vehicleCharacteristics;
  BOOL driverCharacteristics_option;
  ITSDriverCharacteristics driverCharacteristics;
  BOOL layoutId_option;
  int layoutId;
  BOOL preStoredlayoutId_option;
  int preStoredlayoutId;
  ITSRoadSignCodes roadSignCodes;
  BOOL extraText_option;
  ITSConstraintTextLines1 extraText;
} ITSGicPart;


extern const ASN1CType asn1_type_ITSGicPart[];

typedef struct ITSGeneralIviContainer {
  ITSGicPart *tab;
  size_t count;
} ITSGeneralIviContainer;

extern const ASN1CType asn1_type_ITSGeneralIviContainer[];

typedef int ITSDefinitionAccuracy;

enum {
  ITSDefinitionAccuracy_oneCm = 0,
  ITSDefinitionAccuracy_twoCm = 1,
  ITSDefinitionAccuracy_fiveCm = 2,
  ITSDefinitionAccuracy_tenCm = 3,
  ITSDefinitionAccuracy_twentyCm = 4,
  ITSDefinitionAccuracy_fiftyCm = 5,
  ITSDefinitionAccuracy_oneMeter = 6,
  ITSDefinitionAccuracy_unavailable = 7,
};

extern const ASN1CType asn1_type_ITSDefinitionAccuracy[];

typedef BOOL ITSLaneMarkingStatus;

extern const ASN1CType asn1_type_ITSLaneMarkingStatus[];

typedef int ITSMarkingColour;

enum {
  ITSMarkingColour_white = 0,
  ITSMarkingColour_yellow = 1,
  ITSMarkingColour_orange = 2,
  ITSMarkingColour_red = 3,
  ITSMarkingColour_blue = 4,
  ITSMarkingColour_unavailable = 7,
};

extern const ASN1CType asn1_type_ITSMarkingColour[];

typedef int ITSLaneDelimitation;

enum {
  ITSLaneDelimitation_noDelimitation = 0,
  ITSLaneDelimitation_lowLaneSeparator = 1,
  ITSLaneDelimitation_highLaneSeparator = 2,
  ITSLaneDelimitation_wall = 3,
  ITSLaneDelimitation_curb = 4,
  ITSLaneDelimitation_unpaved = 5,
  ITSLaneDelimitation_guardrail = 6,
};

extern const ASN1CType asn1_type_ITSLaneDelimitation[];

typedef struct ITSLaneCharacteristics {
  ITSDefinitionAccuracy zoneDefinitionAccuracy;
  ITSLaneMarkingStatus existinglaneMarkingStatus;
  ITSMarkingColour newlaneMarkingColour;
  ITSLaneDelimitation laneDelimitationLeft;
  ITSLaneDelimitation laneDelimitationRight;
  ITSZid mergingWith;
} ITSLaneCharacteristics;


extern const ASN1CType asn1_type_ITSLaneCharacteristics[];

typedef int ITSFrictionCoefficient;

extern const ASN1CType asn1_type_ITSFrictionCoefficient[];

typedef int ITSMaterialType;

enum {
  ITSMaterialType_asphalt = 0,
  ITSMaterialType_concrete = 1,
  ITSMaterialType_cobblestone = 2,
  ITSMaterialType_gravel = 3,
  ITSMaterialType_unavailable = 7,
};

extern const ASN1CType asn1_type_ITSMaterialType[];

typedef int ITSWearLevel;

enum {
  ITSWearLevel_New = 0,
  ITSWearLevel_good = 1,
  ITSWearLevel_bad = 2,
  ITSWearLevel_hasPotholes = 3,
  ITSWearLevel_unavailable = 7,
};

extern const ASN1CType asn1_type_ITSWearLevel[];

typedef int ITSBankingAngle;

extern const ASN1CType asn1_type_ITSBankingAngle[];

typedef struct ITSRoadSurfaceStaticCharacteristics {
  ITSFrictionCoefficient frictionCoefficient;
  ITSMaterialType material;
  ITSWearLevel wear;
  ITSBankingAngle avBankingAngle;
} ITSRoadSurfaceStaticCharacteristics;


extern const ASN1CType asn1_type_ITSRoadSurfaceStaticCharacteristics[];

typedef int ITSCondition;

enum {
  ITSCondition_dry = 0,
  ITSCondition_moist = 1,
  ITSCondition_wet = 2,
  ITSCondition_standingWater = 3,
  ITSCondition_frost = 4,
  ITSCondition_ice = 5,
  ITSCondition_snow = 6,
  ITSCondition_slush = 7,
  ITSCondition_unvailable = 8,
};

extern const ASN1CType asn1_type_ITSCondition[];

typedef int ITSIVITemperature;

extern const ASN1CType asn1_type_ITSIVITemperature[];

typedef int ITSDepth;

extern const ASN1CType asn1_type_ITSDepth[];

typedef int ITSTreatmentType;

enum {
  ITSTreatmentType_no = 0,
  ITSTreatmentType_antiskid = 1,
  ITSTreatmentType_anti_icing = 2,
  ITSTreatmentType_de_icing = 3,
  ITSTreatmentType_unavailable = 7,
};

extern const ASN1CType asn1_type_ITSTreatmentType[];

typedef struct ITSRoadSurfaceDynamicCharacteristics {
  ITSCondition condition;
  ITSIVITemperature temperature;
  ITSDepth iceOrWaterDepth;
  ITSTreatmentType treatment;
} ITSRoadSurfaceDynamicCharacteristics;


extern const ASN1CType asn1_type_ITSRoadSurfaceDynamicCharacteristics[];

typedef struct ITSLaneInformation {
  ITSLanePosition laneNumber;
  ITSDirection direction;
  BOOL validity_option;
  ITSInternationalSign_applicablePeriod validity;
  ITSLaneType laneType;
  BOOL laneTypeQualifier_option;
  ITSCompleteVehicleCharacteristics laneTypeQualifier;
  ITSLaneStatus laneStatus;
  BOOL laneWidth_option;
  ITSLaneWidth laneWidth;
  BOOL detectionZoneIds_option;
  ITSZoneIds detectionZoneIds;
  BOOL relevanceZoneIds_option;
  ITSZoneIds relevanceZoneIds;
  BOOL laneCharacteristics_option;
  ITSLaneCharacteristics laneCharacteristics;
  BOOL laneSurfaceStaticCharacteristics_option;
  ITSRoadSurfaceStaticCharacteristics laneSurfaceStaticCharacteristics;
  BOOL laneSurfaceDynamicCharacteristics_option;
  ITSRoadSurfaceDynamicCharacteristics laneSurfaceDynamicCharacteristics;
} ITSLaneInformation;


extern const ASN1CType asn1_type_ITSLaneInformation[];

typedef struct ITSLaneConfiguration {
  ITSLaneInformation *tab;
  size_t count;
} ITSLaneConfiguration;

extern const ASN1CType asn1_type_ITSLaneConfiguration[];

typedef struct ITSRccPart {
  ITSZoneIds relevanceZoneIds;
  ITSRoadType roadType;
  ITSLaneConfiguration laneConfiguration;
} ITSRccPart;


extern const ASN1CType asn1_type_ITSRccPart[];

typedef struct ITSRoadConfigurationContainer {
  ITSRccPart *tab;
  size_t count;
} ITSRoadConfigurationContainer;

extern const ASN1CType asn1_type_ITSRoadConfigurationContainer[];

typedef struct ITSTextLines {
  ITSText *tab;
  size_t count;
} ITSTextLines;

extern const ASN1CType asn1_type_ITSTextLines[];

typedef struct ITSTcPart {
  BOOL detectionZoneIds_option;
  ITSZoneIds detectionZoneIds;
  ITSZoneIds relevanceZoneIds;
  BOOL direction_option;
  ITSDirection direction;
  BOOL driverAwarenessZoneIds_option;
  ITSZoneIds driverAwarenessZoneIds;
  BOOL minimumAwarenessTime_option;
  int minimumAwarenessTime;
  BOOL applicableLanes_option;
  ITSLanePositions applicableLanes;
  BOOL layoutId_option;
  int layoutId;
  BOOL preStoredlayoutId_option;
  int preStoredlayoutId;
  BOOL text_option;
  ITSTextLines text;
  ASN1String data;
  BOOL iviType_option;
  ITSIviType iviType;
  BOOL laneStatus_option;
  ITSLaneStatus laneStatus;
  BOOL vehicleCharacteristics_option;
  ITSVehicleCharacteristicsList vehicleCharacteristics;
} ITSTcPart;


extern const ASN1CType asn1_type_ITSTcPart[];

typedef struct ITSTextContainer {
  ITSTcPart *tab;
  size_t count;
} ITSTextContainer;

extern const ASN1CType asn1_type_ITSTextContainer[];

typedef struct ITSLayoutComponent {
  int layoutComponentId;
  int height;
  int width;
  int x;
  int y;
  int textScripting;
} ITSLayoutComponent;


extern const ASN1CType asn1_type_ITSLayoutComponent[];

typedef struct ITSLayoutComponents {
  ITSLayoutComponent *tab;
  size_t count;
} ITSLayoutComponents;

extern const ASN1CType asn1_type_ITSLayoutComponents[];

typedef struct ITSLayoutContainer {
  int layoutId;
  BOOL height_option;
  int height;
  BOOL width_option;
  int width;
  ITSLayoutComponents layoutComponents;
} ITSLayoutContainer;


extern const ASN1CType asn1_type_ITSLayoutContainer[];

typedef int ITSPriorityLevel;

extern const ASN1CType asn1_type_ITSPriorityLevel[];

typedef struct ITSSaeAutomationLevels {
  ITSSaeAutomationLevel *tab;
  size_t count;
} ITSSaeAutomationLevels;

extern const ASN1CType asn1_type_ITSSaeAutomationLevels[];

typedef int ITSGapBetweenVehicles;

extern const ASN1CType asn1_type_ITSGapBetweenVehicles[];

typedef struct ITSConstraintTextLines2 {
  ITSText *tab;
  size_t count;
} ITSConstraintTextLines2;

extern const ASN1CType asn1_type_ITSConstraintTextLines2[];

typedef struct ITSAutomatedVehicleRule {
  ITSPriorityLevel priority;
  ITSSaeAutomationLevels allowedSaeAutomationLevels;
  BOOL minGapBetweenVehicles_option;
  ITSGapBetweenVehicles minGapBetweenVehicles;
  BOOL recGapBetweenVehicles_option;
  ITSGapBetweenVehicles recGapBetweenVehicles;
  BOOL automatedVehicleMaxSpeedLimit_option;
  ITSSpeedValue automatedVehicleMaxSpeedLimit;
  BOOL automatedVehicleMinSpeedLimit_option;
  ITSSpeedValue automatedVehicleMinSpeedLimit;
  BOOL automatedVehicleSpeedRecommendation_option;
  ITSSpeedValue automatedVehicleSpeedRecommendation;
  BOOL roadSignCodes_option;
  ITSRoadSignCodes roadSignCodes;
  BOOL extraText_option;
  ITSConstraintTextLines2 extraText;
} ITSAutomatedVehicleRule;


extern const ASN1CType asn1_type_ITSAutomatedVehicleRule[];

typedef struct ITSAutomatedVehicleRules {
  ITSAutomatedVehicleRule *tab;
  size_t count;
} ITSAutomatedVehicleRules;

extern const ASN1CType asn1_type_ITSAutomatedVehicleRules[];

typedef int ITSMaxNoOfVehicles;

extern const ASN1CType asn1_type_ITSMaxNoOfVehicles[];

typedef int ITSMaxLenghtOfPlatoon;

extern const ASN1CType asn1_type_ITSMaxLenghtOfPlatoon[];

typedef struct ITSPlatooningRule {
  ITSPriorityLevel priority;
  ITSSaeAutomationLevels allowedSaeAutomationLevels;
  BOOL maxNoOfVehicles_option;
  ITSMaxNoOfVehicles maxNoOfVehicles;
  BOOL maxLenghtOfPlatoon_option;
  ITSMaxLenghtOfPlatoon maxLenghtOfPlatoon;
  BOOL minGapBetweenVehicles_option;
  ITSGapBetweenVehicles minGapBetweenVehicles;
  BOOL platoonMaxSpeedLimit_option;
  ITSSpeedValue platoonMaxSpeedLimit;
  BOOL platoonMinSpeedLimit_option;
  ITSSpeedValue platoonMinSpeedLimit;
  BOOL platoonSpeedRecommendation_option;
  ITSSpeedValue platoonSpeedRecommendation;
  BOOL roadSignCodes_option;
  ITSRoadSignCodes roadSignCodes;
  BOOL extraText_option;
  ITSConstraintTextLines2 extraText;
} ITSPlatooningRule;


extern const ASN1CType asn1_type_ITSPlatooningRule[];

typedef struct ITSPlatooningRules {
  ITSPlatooningRule *tab;
  size_t count;
} ITSPlatooningRules;

extern const ASN1CType asn1_type_ITSPlatooningRules[];

typedef struct ITSAvcPart {
  BOOL detectionZoneIds_option;
  ITSZoneIds detectionZoneIds;
  ITSZoneIds relevanceZoneIds;
  BOOL direction_option;
  ITSDirection direction;
  BOOL applicableLanes_option;
  ITSLanePositions applicableLanes;
  BOOL vehicleCharacteristics_option;
  ITSVehicleCharacteristicsList vehicleCharacteristics;
  BOOL automatedVehicleRules_option;
  ITSAutomatedVehicleRules automatedVehicleRules;
  BOOL platooningRules_option;
  ITSPlatooningRules platooningRules;
} ITSAvcPart;


extern const ASN1CType asn1_type_ITSAvcPart[];

typedef struct ITSAutomatedVehicleContainer {
  ITSAvcPart *tab;
  size_t count;
} ITSAutomatedVehicleContainer;

extern const ASN1CType asn1_type_ITSAutomatedVehicleContainer[];

typedef struct ITSLaneIds {
  ITSIdentifier1B *tab;
  size_t count;
} ITSLaneIds;

extern const ASN1CType asn1_type_ITSLaneIds[];

typedef struct ITSMlcPart {
  ITSZid zoneId;
  BOOL laneIds_option;
  ITSLaneIds laneIds;
} ITSMlcPart;


extern const ASN1CType asn1_type_ITSMlcPart[];

typedef struct ITSMlcParts {
  ITSMlcPart *tab;
  size_t count;
} ITSMlcParts;

extern const ASN1CType asn1_type_ITSMlcParts[];

typedef struct ITSMapLocationContainer {
  ITSMapReference reference;
  ITSMlcParts parts;
} ITSMapLocationContainer;


extern const ASN1CType asn1_type_ITSMapLocationContainer[];

typedef struct ITSRscPart {
  BOOL detectionZoneIds_option;
  ITSZoneIds detectionZoneIds;
  ITSZoneIds relevanceZoneIds;
  BOOL direction_option;
  ITSDirection direction;
  BOOL roadSurfaceStaticCharacteristics_option;
  ITSRoadSurfaceStaticCharacteristics roadSurfaceStaticCharacteristics;
  BOOL roadSurfaceDynamicCharacteristics_option;
  ITSRoadSurfaceDynamicCharacteristics roadSurfaceDynamicCharacteristics;
} ITSRscPart;


extern const ASN1CType asn1_type_ITSRscPart[];

typedef struct ITSRoadSurfaceContainer {
  ITSRscPart *tab;
  size_t count;
} ITSRoadSurfaceContainer;

extern const ASN1CType asn1_type_ITSRoadSurfaceContainer[];

typedef int ITSContentId;

extern const ASN1CType asn1_type_ITSContentId[];

typedef struct ITSSupportItem {
  ITSContentId id;
  ASN1OpenType content;
} ITSSupportItem;


extern const ASN1CType asn1_type_ITSSupportItem[];

typedef struct ITSSupportItems {
  ITSSupportItem *tab;
  size_t count;
} ITSSupportItems;

extern const ASN1CType asn1_type_ITSSupportItems[];

typedef struct ITSInfrastructureSupportInformation {
  BOOL baseOid_option;
  ASN1RelativeOID baseOid;
  ITSSupportItems supportList;
} ITSInfrastructureSupportInformation;


extern const ASN1CType asn1_type_ITSInfrastructureSupportInformation[];

typedef struct ITSIscPart {
  BOOL detectionZoneIds_option;
  ITSZoneIds detectionZoneIds;
  ITSZoneIds relevanceZoneIds;
  BOOL direction_option;
  ITSDirection direction;
  ITSInfrastructureSupportInformation infrastructureSupport;
} ITSIscPart;


extern const ASN1CType asn1_type_ITSIscPart[];

typedef struct ITSInfrastructureSupportContainer {
  ITSIscPart *tab;
  size_t count;
} ITSInfrastructureSupportContainer;

extern const ASN1CType asn1_type_ITSInfrastructureSupportContainer[];

typedef enum {
  ITSIviContainer_glc,
  ITSIviContainer_giv,
  ITSIviContainer_rcc,
  ITSIviContainer_tc,
  ITSIviContainer_lac,
  ITSIviContainer_avc,
  ITSIviContainer_mlc,
  ITSIviContainer_rsc,
  ITSIviContainer_isc,
} ITSIviContainer_choice;

typedef struct ITSIviContainer {
  ITSIviContainer_choice choice;
  union {
    ITSGeographicLocationContainer glc;
    ITSGeneralIviContainer giv;
    ITSRoadConfigurationContainer rcc;
    ITSTextContainer tc;
    ITSLayoutContainer lac;
    ITSAutomatedVehicleContainer avc;
    ITSMapLocationContainer mlc;
    ITSRoadSurfaceContainer rsc;
    ITSInfrastructureSupportContainer isc;
  } u;
} ITSIviContainer;

extern const ASN1CType asn1_type_ITSIviContainer[];

typedef struct ITSIviContainers {
  ITSIviContainer *tab;
  size_t count;
} ITSIviContainers;

extern const ASN1CType asn1_type_ITSIviContainers[];

typedef struct ITSIviStructure {
  ITSIviManagementContainer mandatory;
  BOOL optional_option;
  ITSIviContainers optional;
} ITSIviStructure;


extern const ASN1CType asn1_type_ITSIviStructure[];

typedef struct ITSIVIM {
  ITSItsPduHeader header;
  ITSIviStructure ivi;
} ITSIVIM;


extern const ASN1CType asn1_type_ITSIVIM[];

typedef int ITSRequestID;

extern const ASN1CType asn1_type_ITSRequestID[];

typedef enum ITSPriorityRequestType {
  ITSPriorityRequestType_priorityRequestTypeReserved,
  ITSPriorityRequestType_priorityRequest,
  ITSPriorityRequestType_priorityRequestUpdate,
  ITSPriorityRequestType_priorityCancellation,
} ITSPriorityRequestType;

extern const ASN1CType asn1_type_ITSPriorityRequestType[];

typedef enum {
  ITSIntersectionAccessPoint_lane,
  ITSIntersectionAccessPoint_approach,
  ITSIntersectionAccessPoint_connection,
} ITSIntersectionAccessPoint_choice;

typedef struct ITSIntersectionAccessPoint {
  ITSIntersectionAccessPoint_choice choice;
  union {
    ITSLaneID lane;
    ITSApproachID approach;
    ITSLaneConnectionID connection;
  } u;
} ITSIntersectionAccessPoint;

extern const ASN1CType asn1_type_ITSIntersectionAccessPoint[];

typedef struct ITSRegionalExtension_24 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_24;


extern const ASN1CType asn1_type_ITSRegionalExtension_24[];

typedef struct ITSSignalRequest_1 {
  ITSRegionalExtension_24 *tab;
  size_t count;
} ITSSignalRequest_1;

extern const ASN1CType asn1_type_ITSSignalRequest_1[];

typedef struct ITSSignalRequest {
  ITSIntersectionReferenceID id;
  ITSRequestID requestID;
  ITSPriorityRequestType requestType;
  ITSIntersectionAccessPoint inBoundLane;
  BOOL outBoundLane_option;
  ITSIntersectionAccessPoint outBoundLane;
  BOOL regional_option;
  ITSSignalRequest_1 regional;
} ITSSignalRequest;


extern const ASN1CType asn1_type_ITSSignalRequest[];

typedef struct ITSRegionalExtension_25 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_25;


extern const ASN1CType asn1_type_ITSRegionalExtension_25[];

typedef struct ITSSignalRequestPackage_1 {
  ITSRegionalExtension_25 *tab;
  size_t count;
} ITSSignalRequestPackage_1;

extern const ASN1CType asn1_type_ITSSignalRequestPackage_1[];

typedef struct ITSSignalRequestPackage {
  ITSSignalRequest request;
  BOOL minute_option;
  ITSMinuteOfTheYear minute;
  BOOL second_option;
  ITSDSecond second;
  BOOL duration_option;
  ITSDSecond duration;
  BOOL regional_option;
  ITSSignalRequestPackage_1 regional;
} ITSSignalRequestPackage;


extern const ASN1CType asn1_type_ITSSignalRequestPackage[];

typedef struct ITSSignalRequestList {
  ITSSignalRequestPackage *tab;
  size_t count;
} ITSSignalRequestList;

extern const ASN1CType asn1_type_ITSSignalRequestList[];

typedef ASN1String ITSTemporaryID;

extern const ASN1CType asn1_type_ITSTemporaryID[];

typedef enum {
  ITSVehicleID_entityID,
  ITSVehicleID_stationID,
} ITSVehicleID_choice;

typedef struct ITSVehicleID {
  ITSVehicleID_choice choice;
  union {
    ITSTemporaryID entityID;
    ITSStationID stationID;
  } u;
} ITSVehicleID;

extern const ASN1CType asn1_type_ITSVehicleID[];

typedef enum ITSBasicVehicleRole {
  ITSBasicVehicleRole_basicVehicle,
  ITSBasicVehicleRole_publicTransport,
  ITSBasicVehicleRole_specialTransport,
  ITSBasicVehicleRole_dangerousGoods,
  ITSBasicVehicleRole_roadWork,
  ITSBasicVehicleRole_roadRescue,
  ITSBasicVehicleRole_emergency,
  ITSBasicVehicleRole_safetyCar,
  ITSBasicVehicleRole_none_unknown,
  ITSBasicVehicleRole_truck,
  ITSBasicVehicleRole_motorcycle,
  ITSBasicVehicleRole_roadSideSource,
  ITSBasicVehicleRole_police,
  ITSBasicVehicleRole_fire,
  ITSBasicVehicleRole_ambulance,
  ITSBasicVehicleRole_dot,
  ITSBasicVehicleRole_transit,
  ITSBasicVehicleRole_slowMoving,
  ITSBasicVehicleRole_stopNgo,
  ITSBasicVehicleRole_cyclist,
  ITSBasicVehicleRole_pedestrian,
  ITSBasicVehicleRole_nonMotorized,
  ITSBasicVehicleRole_military,
  ITSBasicVehicleRole_tram,
} ITSBasicVehicleRole;

extern const ASN1CType asn1_type_ITSBasicVehicleRole[];

typedef enum ITSRequestSubRole {
  ITSRequestSubRole_requestSubRoleUnKnown,
  ITSRequestSubRole_requestSubRole1,
  ITSRequestSubRole_requestSubRole2,
  ITSRequestSubRole_requestSubRole3,
  ITSRequestSubRole_requestSubRole4,
  ITSRequestSubRole_requestSubRole5,
  ITSRequestSubRole_requestSubRole6,
  ITSRequestSubRole_requestSubRole7,
  ITSRequestSubRole_requestSubRole8,
  ITSRequestSubRole_requestSubRole9,
  ITSRequestSubRole_requestSubRole10,
  ITSRequestSubRole_requestSubRole11,
  ITSRequestSubRole_requestSubRole12,
  ITSRequestSubRole_requestSubRole13,
  ITSRequestSubRole_requestSubRole14,
  ITSRequestSubRole_requestSubRoleReserved,
} ITSRequestSubRole;

extern const ASN1CType asn1_type_ITSRequestSubRole[];

typedef enum ITSRequestImportanceLevel {
  ITSRequestImportanceLevel_requestImportanceLevelUnKnown,
  ITSRequestImportanceLevel_requestImportanceLevel1,
  ITSRequestImportanceLevel_requestImportanceLevel2,
  ITSRequestImportanceLevel_requestImportanceLevel3,
  ITSRequestImportanceLevel_requestImportanceLevel4,
  ITSRequestImportanceLevel_requestImportanceLevel5,
  ITSRequestImportanceLevel_requestImportanceLevel6,
  ITSRequestImportanceLevel_requestImportanceLevel7,
  ITSRequestImportanceLevel_requestImportanceLevel8,
  ITSRequestImportanceLevel_requestImportanceLevel9,
  ITSRequestImportanceLevel_requestImportanceLevel10,
  ITSRequestImportanceLevel_requestImportanceLevel11,
  ITSRequestImportanceLevel_requestImportanceLevel12,
  ITSRequestImportanceLevel_requestImportanceLevel13,
  ITSRequestImportanceLevel_requestImportanceLevel14,
  ITSRequestImportanceLevel_requestImportanceReserved,
} ITSRequestImportanceLevel;

extern const ASN1CType asn1_type_ITSRequestImportanceLevel[];

typedef enum ITSVehicleType {
  ITSVehicleType_none,
  ITSVehicleType_unknown,
  ITSVehicleType_special,
  ITSVehicleType_moto,
  ITSVehicleType_car,
  ITSVehicleType_carOther,
  ITSVehicleType_bus,
  ITSVehicleType_axleCnt2,
  ITSVehicleType_axleCnt3,
  ITSVehicleType_axleCnt4,
  ITSVehicleType_axleCnt4Trailer,
  ITSVehicleType_axleCnt5Trailer,
  ITSVehicleType_axleCnt6Trailer,
  ITSVehicleType_axleCnt5MultiTrailer,
  ITSVehicleType_axleCnt6MultiTrailer,
  ITSVehicleType_axleCnt7MultiTrailer,
} ITSVehicleType;

extern const ASN1CType asn1_type_ITSVehicleType[];

typedef struct ITSRegionalExtension_20 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_20;


extern const ASN1CType asn1_type_ITSRegionalExtension_20[];

typedef struct ITSRequestorType {
  ITSBasicVehicleRole role;
  BOOL subrole_option;
  ITSRequestSubRole subrole;
  BOOL request_option;
  ITSRequestImportanceLevel request;
  BOOL iso3883_option;
  ITSIso3833VehicleType iso3883;
  BOOL hpmsType_option;
  ITSVehicleType hpmsType;
  BOOL regional_option;
  ITSRegionalExtension_20 regional;
} ITSRequestorType;


extern const ASN1CType asn1_type_ITSRequestorType[];

typedef enum ITSTransmissionState {
  ITSTransmissionState_neutral,
  ITSTransmissionState_park,
  ITSTransmissionState_forwardGears,
  ITSTransmissionState_reverseGears,
  ITSTransmissionState_reserved1,
  ITSTransmissionState_reserved2,
  ITSTransmissionState_reserved3,
  ITSTransmissionState_unavailable,
} ITSTransmissionState;

extern const ASN1CType asn1_type_ITSTransmissionState[];

typedef struct ITSTransmissionAndSpeed {
  ITSTransmissionState transmisson;
  ITSVelocity speed;
} ITSTransmissionAndSpeed;


extern const ASN1CType asn1_type_ITSTransmissionAndSpeed[];

typedef struct ITSRequestorPositionVector {
  ITSPosition3D position;
  BOOL heading_option;
  ITSAngle heading;
  BOOL speed_option;
  ITSTransmissionAndSpeed speed;
} ITSRequestorPositionVector;


extern const ASN1CType asn1_type_ITSRequestorPositionVector[];

typedef ASN1BitString ITSTransitVehicleStatus;

extern const ASN1CType asn1_type_ITSTransitVehicleStatus[];

typedef enum ITSTransitVehicleOccupancy {
  ITSTransitVehicleOccupancy_occupancyUnknown,
  ITSTransitVehicleOccupancy_occupancyEmpty,
  ITSTransitVehicleOccupancy_occupancyVeryLow,
  ITSTransitVehicleOccupancy_occupancyLow,
  ITSTransitVehicleOccupancy_occupancyMed,
  ITSTransitVehicleOccupancy_occupancyHigh,
  ITSTransitVehicleOccupancy_occupancyNearlyFull,
  ITSTransitVehicleOccupancy_occupancyFull,
} ITSTransitVehicleOccupancy;

extern const ASN1CType asn1_type_ITSTransitVehicleOccupancy[];

typedef int ITSDeltaTime;

extern const ASN1CType asn1_type_ITSDeltaTime[];

typedef struct ITSRegionalExtension_19 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_19;


extern const ASN1CType asn1_type_ITSRegionalExtension_19[];

typedef struct ITSRequestorDescription_1 {
  ITSRegionalExtension_19 *tab;
  size_t count;
} ITSRequestorDescription_1;

extern const ASN1CType asn1_type_ITSRequestorDescription_1[];

typedef int ITSReportingPoint;

extern const ASN1CType asn1_type_ITSReportingPoint[];

typedef int ITSR09PriorityLevel;

extern const ASN1CType asn1_type_ITSR09PriorityLevel[];

typedef int ITSTrainLength;

extern const ASN1CType asn1_type_ITSTrainLength[];

typedef unsigned int ITSRouteNumber;

extern const ASN1CType asn1_type_ITSRouteNumber[];

typedef unsigned int ITSLineNumber;

extern const ASN1CType asn1_type_ITSLineNumber[];

typedef int ITSTransitDirection;

extern const ASN1CType asn1_type_ITSTransitDirection[];

typedef unsigned int ITSTourNumber;

extern const ASN1CType asn1_type_ITSTourNumber[];

typedef unsigned int ITSVersionId;

extern const ASN1CType asn1_type_ITSVersionId[];

typedef struct ITSOcitRequestorDescriptionContainer {
  BOOL reportingPoint_option;
  ITSReportingPoint reportingPoint;
  BOOL priorityLevel_option;
  ITSR09PriorityLevel priorityLevel;
  BOOL length_option;
  ITSTrainLength length;
  BOOL route_option;
  ITSRouteNumber route;
  BOOL line_option;
  ITSLineNumber line;
  BOOL direction_option;
  ITSTransitDirection direction;
  BOOL tour_option;
  ITSTourNumber tour;
  BOOL version_option;
  ITSVersionId version;
} ITSOcitRequestorDescriptionContainer;


extern const ASN1CType asn1_type_ITSOcitRequestorDescriptionContainer[];

typedef struct ITSRequestorDescription {
  ITSVehicleID id;
  BOOL type_option;
  ITSRequestorType type;
  BOOL position_option;
  ITSRequestorPositionVector position;
  BOOL name_option;
  ITSDescriptiveName name;
  BOOL routeName_option;
  ITSDescriptiveName routeName;
  BOOL transitStatus_option;
  ITSTransitVehicleStatus transitStatus;
  BOOL transitOccupancy_option;
  ITSTransitVehicleOccupancy transitOccupancy;
  BOOL transitSchedule_option;
  ITSDeltaTime transitSchedule;
  BOOL regional_option;
  ITSRequestorDescription_1 regional;
  BOOL ocit_option;
  ITSOcitRequestorDescriptionContainer ocit;
} ITSRequestorDescription;


extern const ASN1CType asn1_type_ITSRequestorDescription[];

typedef struct ITSRegionalExtension_4 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_4;


extern const ASN1CType asn1_type_ITSRegionalExtension_4[];

typedef struct ITSSignalRequestMessage_1 {
  ITSRegionalExtension_4 *tab;
  size_t count;
} ITSSignalRequestMessage_1;

extern const ASN1CType asn1_type_ITSSignalRequestMessage_1[];

typedef struct ITSSignalRequestMessage {
  BOOL timeStamp_option;
  ITSMinuteOfTheYear timeStamp;
  ITSDSecond second;
  BOOL sequenceNumber_option;
  ITSMsgCount sequenceNumber;
  BOOL requests_option;
  ITSSignalRequestList requests;
  ITSRequestorDescription requestor;
  BOOL regional_option;
  ITSSignalRequestMessage_1 regional;
} ITSSignalRequestMessage;


extern const ASN1CType asn1_type_ITSSignalRequestMessage[];

typedef struct ITSSREM {
  ITSItsPduHeader header;
  ITSSignalRequestMessage srm;
} ITSSREM;


extern const ASN1CType asn1_type_ITSSREM[];

typedef struct ITSSignalRequesterInfo {
  ITSVehicleID id;
  ITSRequestID request;
  ITSMsgCount sequenceNumber;
  BOOL role_option;
  ITSBasicVehicleRole role;
  BOOL typeData_option;
  ITSRequestorType typeData;
} ITSSignalRequesterInfo;


extern const ASN1CType asn1_type_ITSSignalRequesterInfo[];

typedef enum ITSPrioritizationResponseStatus {
  ITSPrioritizationResponseStatus_unknown,
  ITSPrioritizationResponseStatus_requested,
  ITSPrioritizationResponseStatus_processing,
  ITSPrioritizationResponseStatus_watchOtherTraffic,
  ITSPrioritizationResponseStatus_granted,
  ITSPrioritizationResponseStatus_rejected,
  ITSPrioritizationResponseStatus_maxPresence,
  ITSPrioritizationResponseStatus_reserviceLocked,
} ITSPrioritizationResponseStatus;

extern const ASN1CType asn1_type_ITSPrioritizationResponseStatus[];

typedef struct ITSRegionalExtension_27 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_27;


extern const ASN1CType asn1_type_ITSRegionalExtension_27[];

typedef struct ITSSignalStatusPackage_1 {
  ITSRegionalExtension_27 *tab;
  size_t count;
} ITSSignalStatusPackage_1;

extern const ASN1CType asn1_type_ITSSignalStatusPackage_1[];

typedef struct ITSSignalStatusPackage {
  BOOL requester_option;
  ITSSignalRequesterInfo requester;
  ITSIntersectionAccessPoint inboundOn;
  BOOL outboundOn_option;
  ITSIntersectionAccessPoint outboundOn;
  BOOL minute_option;
  ITSMinuteOfTheYear minute;
  BOOL second_option;
  ITSDSecond second;
  BOOL duration_option;
  ITSDSecond duration;
  ITSPrioritizationResponseStatus status;
  BOOL regional_option;
  ITSSignalStatusPackage_1 regional;
} ITSSignalStatusPackage;


extern const ASN1CType asn1_type_ITSSignalStatusPackage[];

typedef struct ITSSignalStatusPackageList {
  ITSSignalStatusPackage *tab;
  size_t count;
} ITSSignalStatusPackageList;

extern const ASN1CType asn1_type_ITSSignalStatusPackageList[];

typedef struct ITSRegionalExtension_26 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_26;


extern const ASN1CType asn1_type_ITSRegionalExtension_26[];

typedef struct ITSSignalStatus_1 {
  ITSRegionalExtension_26 *tab;
  size_t count;
} ITSSignalStatus_1;

extern const ASN1CType asn1_type_ITSSignalStatus_1[];

typedef struct ITSSignalStatus {
  ITSMsgCount sequenceNumber;
  ITSIntersectionReferenceID id;
  ITSSignalStatusPackageList sigStatus;
  BOOL regional_option;
  ITSSignalStatus_1 regional;
} ITSSignalStatus;


extern const ASN1CType asn1_type_ITSSignalStatus[];

typedef struct ITSSignalStatusList {
  ITSSignalStatus *tab;
  size_t count;
} ITSSignalStatusList;

extern const ASN1CType asn1_type_ITSSignalStatusList[];

typedef struct ITSRegionalExtension_5 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_5;


extern const ASN1CType asn1_type_ITSRegionalExtension_5[];

typedef struct ITSSignalStatusMessage_1 {
  ITSRegionalExtension_5 *tab;
  size_t count;
} ITSSignalStatusMessage_1;

extern const ASN1CType asn1_type_ITSSignalStatusMessage_1[];

typedef struct ITSSignalStatusMessage {
  BOOL timeStamp_option;
  ITSMinuteOfTheYear timeStamp;
  ITSDSecond second;
  BOOL sequenceNumber_option;
  ITSMsgCount sequenceNumber;
  ITSSignalStatusList status;
  BOOL regional_option;
  ITSSignalStatusMessage_1 regional;
} ITSSignalStatusMessage;


extern const ASN1CType asn1_type_ITSSignalStatusMessage[];

typedef struct ITSSSEM {
  ITSItsPduHeader header;
  ITSSignalStatusMessage ssm;
} ITSSSEM;


extern const ASN1CType asn1_type_ITSSSEM[];

typedef enum ITSRTCM_Revision {
  ITSRTCM_Revision_unknown,
  ITSRTCM_Revision_rtcmRev2,
  ITSRTCM_Revision_rtcmRev3,
  ITSRTCM_Revision_reserved,
} ITSRTCM_Revision;

extern const ASN1CType asn1_type_ITSRTCM_Revision[];

typedef int ITSDYear;

extern const ASN1CType asn1_type_ITSDYear[];

typedef int ITSDMonth;

extern const ASN1CType asn1_type_ITSDMonth[];

typedef int ITSDDay;

extern const ASN1CType asn1_type_ITSDDay[];

typedef int ITSDHour;

extern const ASN1CType asn1_type_ITSDHour[];

typedef int ITSDMinute;

extern const ASN1CType asn1_type_ITSDMinute[];

typedef int ITSDOffset;

extern const ASN1CType asn1_type_ITSDOffset[];

typedef struct ITSDDateTime {
  BOOL year_option;
  ITSDYear year;
  BOOL month_option;
  ITSDMonth month;
  BOOL day_option;
  ITSDDay day;
  BOOL hour_option;
  ITSDHour hour;
  BOOL minute_option;
  ITSDMinute minute;
  BOOL second_option;
  ITSDSecond second;
  BOOL offset_option;
  ITSDOffset offset;
} ITSDDateTime;


extern const ASN1CType asn1_type_ITSDDateTime[];

typedef int ITSHeadingDSRC;

extern const ASN1CType asn1_type_ITSHeadingDSRC[];

typedef int ITSSemiMajorAxisAccuracy;

extern const ASN1CType asn1_type_ITSSemiMajorAxisAccuracy[];

typedef int ITSSemiMinorAxisAccuracy;

extern const ASN1CType asn1_type_ITSSemiMinorAxisAccuracy[];

typedef int ITSSemiMajorAxisOrientation;

extern const ASN1CType asn1_type_ITSSemiMajorAxisOrientation[];

typedef struct ITSPositionalAccuracy {
  ITSSemiMajorAxisAccuracy semiMajor;
  ITSSemiMinorAxisAccuracy semiMinor;
  ITSSemiMajorAxisOrientation orientation;
} ITSPositionalAccuracy;


extern const ASN1CType asn1_type_ITSPositionalAccuracy[];

typedef enum ITSTimeConfidence {
  ITSTimeConfidence_unavailable,
  ITSTimeConfidence_time_100_000,
  ITSTimeConfidence_time_050_000,
  ITSTimeConfidence_time_020_000,
  ITSTimeConfidence_time_010_000,
  ITSTimeConfidence_time_002_000,
  ITSTimeConfidence_time_001_000,
  ITSTimeConfidence_time_000_500,
  ITSTimeConfidence_time_000_200,
  ITSTimeConfidence_time_000_100,
  ITSTimeConfidence_time_000_050,
  ITSTimeConfidence_time_000_020,
  ITSTimeConfidence_time_000_010,
  ITSTimeConfidence_time_000_005,
  ITSTimeConfidence_time_000_002,
  ITSTimeConfidence_time_000_001,
  ITSTimeConfidence_time_000_000_5,
  ITSTimeConfidence_time_000_000_2,
  ITSTimeConfidence_time_000_000_1,
  ITSTimeConfidence_time_000_000_05,
  ITSTimeConfidence_time_000_000_02,
  ITSTimeConfidence_time_000_000_01,
  ITSTimeConfidence_time_000_000_005,
  ITSTimeConfidence_time_000_000_002,
  ITSTimeConfidence_time_000_000_001,
  ITSTimeConfidence_time_000_000_000_5,
  ITSTimeConfidence_time_000_000_000_2,
  ITSTimeConfidence_time_000_000_000_1,
  ITSTimeConfidence_time_000_000_000_05,
  ITSTimeConfidence_time_000_000_000_02,
  ITSTimeConfidence_time_000_000_000_01,
  ITSTimeConfidence_time_000_000_000_005,
  ITSTimeConfidence_time_000_000_000_002,
  ITSTimeConfidence_time_000_000_000_001,
  ITSTimeConfidence_time_000_000_000_000_5,
  ITSTimeConfidence_time_000_000_000_000_2,
  ITSTimeConfidence_time_000_000_000_000_1,
  ITSTimeConfidence_time_000_000_000_000_05,
  ITSTimeConfidence_time_000_000_000_000_02,
  ITSTimeConfidence_time_000_000_000_000_01,
} ITSTimeConfidence;

extern const ASN1CType asn1_type_ITSTimeConfidence[];

typedef enum ITSPositionConfidence {
  ITSPositionConfidence_unavailable,
  ITSPositionConfidence_a500m,
  ITSPositionConfidence_a200m,
  ITSPositionConfidence_a100m,
  ITSPositionConfidence_a50m,
  ITSPositionConfidence_a20m,
  ITSPositionConfidence_a10m,
  ITSPositionConfidence_a5m,
  ITSPositionConfidence_a2m,
  ITSPositionConfidence_a1m,
  ITSPositionConfidence_a50cm,
  ITSPositionConfidence_a20cm,
  ITSPositionConfidence_a10cm,
  ITSPositionConfidence_a5cm,
  ITSPositionConfidence_a2cm,
  ITSPositionConfidence_a1cm,
} ITSPositionConfidence;

extern const ASN1CType asn1_type_ITSPositionConfidence[];

typedef enum ITSElevationConfidence {
  ITSElevationConfidence_unavailable,
  ITSElevationConfidence_elev_500_00,
  ITSElevationConfidence_elev_200_00,
  ITSElevationConfidence_elev_100_00,
  ITSElevationConfidence_elev_050_00,
  ITSElevationConfidence_elev_020_00,
  ITSElevationConfidence_elev_010_00,
  ITSElevationConfidence_elev_005_00,
  ITSElevationConfidence_elev_002_00,
  ITSElevationConfidence_elev_001_00,
  ITSElevationConfidence_elev_000_50,
  ITSElevationConfidence_elev_000_20,
  ITSElevationConfidence_elev_000_10,
  ITSElevationConfidence_elev_000_05,
  ITSElevationConfidence_elev_000_02,
  ITSElevationConfidence_elev_000_01,
} ITSElevationConfidence;

extern const ASN1CType asn1_type_ITSElevationConfidence[];

typedef struct ITSPositionConfidenceSet {
  ITSPositionConfidence pos;
  ITSElevationConfidence elevation;
} ITSPositionConfidenceSet;


extern const ASN1CType asn1_type_ITSPositionConfidenceSet[];

typedef enum ITSHeadingConfidenceDSRC {
  ITSHeadingConfidenceDSRC_unavailable,
  ITSHeadingConfidenceDSRC_prec10deg,
  ITSHeadingConfidenceDSRC_prec05deg,
  ITSHeadingConfidenceDSRC_prec01deg,
  ITSHeadingConfidenceDSRC_prec0_1deg,
  ITSHeadingConfidenceDSRC_prec0_05deg,
  ITSHeadingConfidenceDSRC_prec0_01deg,
  ITSHeadingConfidenceDSRC_prec0_0125deg,
} ITSHeadingConfidenceDSRC;

extern const ASN1CType asn1_type_ITSHeadingConfidenceDSRC[];

typedef enum ITSThrottleConfidence {
  ITSThrottleConfidence_unavailable,
  ITSThrottleConfidence_prec10percent,
  ITSThrottleConfidence_prec1percent,
  ITSThrottleConfidence_prec0_5percent,
} ITSThrottleConfidence;

extern const ASN1CType asn1_type_ITSThrottleConfidence[];

typedef struct ITSSpeedandHeadingandThrottleConfidence {
  ITSHeadingConfidenceDSRC heading;
  ITSSpeedConfidenceDSRC speed;
  ITSThrottleConfidence throttle;
} ITSSpeedandHeadingandThrottleConfidence;


extern const ASN1CType asn1_type_ITSSpeedandHeadingandThrottleConfidence[];

typedef struct ITSFullPositionVector {
  BOOL utcTime_option;
  ITSDDateTime utcTime;
  ITSLongitude Long;
  ITSLatitude lat;
  BOOL elevation_option;
  ITSElevation elevation;
  BOOL heading_option;
  ITSHeadingDSRC heading;
  BOOL speed_option;
  ITSTransmissionAndSpeed speed;
  BOOL posAccuracy_option;
  ITSPositionalAccuracy posAccuracy;
  BOOL timeConfidence_option;
  ITSTimeConfidence timeConfidence;
  BOOL posConfidence_option;
  ITSPositionConfidenceSet posConfidence;
  BOOL speedConfidence_option;
  ITSSpeedandHeadingandThrottleConfidence speedConfidence;
} ITSFullPositionVector;


extern const ASN1CType asn1_type_ITSFullPositionVector[];

typedef ASN1BitString ITSGNSSstatus;

extern const ASN1CType asn1_type_ITSGNSSstatus[];

typedef int ITSOffset_B09;

extern const ASN1CType asn1_type_ITSOffset_B09[];

typedef struct ITSAntennaOffsetSet {
  ITSOffset_B12 antOffsetX;
  ITSOffset_B09 antOffsetY;
  ITSOffset_B10 antOffsetZ;
} ITSAntennaOffsetSet;


extern const ASN1CType asn1_type_ITSAntennaOffsetSet[];

typedef struct ITSRTCMheader {
  ITSGNSSstatus status;
  ITSAntennaOffsetSet offsetSet;
} ITSRTCMheader;


extern const ASN1CType asn1_type_ITSRTCMheader[];

typedef ASN1String ITSRTCMmessage;

extern const ASN1CType asn1_type_ITSRTCMmessage[];

typedef struct ITSRTCMmessageList {
  ITSRTCMmessage *tab;
  size_t count;
} ITSRTCMmessageList;

extern const ASN1CType asn1_type_ITSRTCMmessageList[];

typedef struct ITSRegionalExtension_2 {
  ITSRegionId regionId;
  ASN1OpenType regExtValue;
} ITSRegionalExtension_2;


extern const ASN1CType asn1_type_ITSRegionalExtension_2[];

typedef struct ITSRTCMcorrections_1 {
  ITSRegionalExtension_2 *tab;
  size_t count;
} ITSRTCMcorrections_1;

extern const ASN1CType asn1_type_ITSRTCMcorrections_1[];

typedef struct ITSRTCMcorrections {
  ITSMsgCount msgCnt;
  ITSRTCM_Revision rev;
  BOOL timeStamp_option;
  ITSMinuteOfTheYear timeStamp;
  BOOL anchorPoint_option;
  ITSFullPositionVector anchorPoint;
  BOOL rtcmHeader_option;
  ITSRTCMheader rtcmHeader;
  ITSRTCMmessageList msgs;
  BOOL regional_option;
  ITSRTCMcorrections_1 regional;
} ITSRTCMcorrections;


extern const ASN1CType asn1_type_ITSRTCMcorrections[];

typedef struct ITSRTCMEM {
  ITSItsPduHeader header;
  ITSRTCMcorrections rtcmc;
} ITSRTCMEM;


extern const ASN1CType asn1_type_ITSRTCMEM[];

typedef struct ITSImzmContainer {
  ITSInterferenceManagementZones interferenceManagementZones;
} ITSImzmContainer;


extern const ASN1CType asn1_type_ITSImzmContainer[];

typedef struct ITSImzmParameters {
  ITSBasicContainer basicContainer;
  ITSImzmContainer imzmContainer;
} ITSImzmParameters;


extern const ASN1CType asn1_type_ITSImzmParameters[];

typedef struct ITSInterferenceManagementZoneMessage {
  ITSGenerationDeltaTime generationDeltaTime;
  ITSImzmParameters imzmParameters;
} ITSInterferenceManagementZoneMessage;


extern const ASN1CType asn1_type_ITSInterferenceManagementZoneMessage[];

typedef struct ITSIMZM {
  ITSItsPduHeader header;
  ITSInterferenceManagementZoneMessage imzm;
} ITSIMZM;


extern const ASN1CType asn1_type_ITSIMZM[];

typedef enum {
  ITSNodeOffsetPointZ_node_Z1,
  ITSNodeOffsetPointZ_node_Z2,
  ITSNodeOffsetPointZ_node_Z3,
  ITSNodeOffsetPointZ_node_Z4,
  ITSNodeOffsetPointZ_node_Z5,
  ITSNodeOffsetPointZ_node_Z6,
} ITSNodeOffsetPointZ_choice;

typedef struct ITSNodeOffsetPointZ {
  ITSNodeOffsetPointZ_choice choice;
  union {
    ITSOffset_B10 node_Z1;
    ITSOffset_B11 node_Z2;
    ITSOffset_B12 node_Z3;
    ITSOffset_B13 node_Z4;
    ITSOffset_B14 node_Z5;
    ITSOffset_B16 node_Z6;
  } u;
} ITSNodeOffsetPointZ;

extern const ASN1CType asn1_type_ITSNodeOffsetPointZ[];

typedef struct ITSOffsetPoint {
  ITSNodeOffsetPointXY nodeOffsetPointXY;
  BOOL nodeOffsetPointZ_option;
  ITSNodeOffsetPointZ nodeOffsetPointZ;
} ITSOffsetPoint;


extern const ASN1CType asn1_type_ITSOffsetPoint[];

typedef int ITSSemiRangeLength;

enum {
  ITSSemiRangeLength_zeroPointOneMeter = 1,
  ITSSemiRangeLength_oneMeter = 10,
};

extern const ASN1CType asn1_type_ITSSemiRangeLength[];

typedef int ITSWGS84AngleValue;

enum {
  ITSWGS84AngleValue_wgs84North = 0,
  ITSWGS84AngleValue_wgs84East = 900,
  ITSWGS84AngleValue_wgs84South = 1800,
  ITSWGS84AngleValue_wgs84West = 2700,
  ITSWGS84AngleValue_unavailable = 3601,
};

extern const ASN1CType asn1_type_ITSWGS84AngleValue[];

typedef struct ITSAreaRectangle {
  BOOL nodeCenterPoint_option;
  ITSOffsetPoint nodeCenterPoint;
  ITSSemiRangeLength semiMajorRangeLength;
  ITSSemiRangeLength semiMinorRangeLength;
  ITSWGS84AngleValue semiMajorRangeOrientation;
  BOOL semiHeight_option;
  ITSSemiRangeLength semiHeight;
} ITSAreaRectangle;


extern const ASN1CType asn1_type_ITSAreaRectangle[];

typedef int ITSRadius;

enum {
  ITSRadius_zeroPointOneMeter = 1,
  ITSRadius_oneMeter = 10,
};

extern const ASN1CType asn1_type_ITSRadius[];

typedef struct ITSAreaCircular {
  BOOL nodeCenterPoint_option;
  ITSOffsetPoint nodeCenterPoint;
  ITSRadius radius;
} ITSAreaCircular;


extern const ASN1CType asn1_type_ITSAreaCircular[];

typedef struct ITSPolyPointList {
  ITSOffsetPoint *tab;
  size_t count;
} ITSPolyPointList;

extern const ASN1CType asn1_type_ITSPolyPointList[];

typedef struct ITSAreaPolygon {
  ITSPolyPointList polyPointList;
} ITSAreaPolygon;


extern const ASN1CType asn1_type_ITSAreaPolygon[];

typedef struct ITSIMZMAreaEllipse {
  BOOL nodeCenterPoint_option;
  ITSOffsetPoint nodeCenterPoint;
  ITSSemiRangeLength semiMajorRangeLength;
  ITSSemiRangeLength semiMinorRangeLength;
  ITSWGS84AngleValue semiMajorRangeOrientation;
} ITSIMZMAreaEllipse;


extern const ASN1CType asn1_type_ITSIMZMAreaEllipse[];

typedef enum {
  ITSInterferenceManagementZoneShape_rectangle,
  ITSInterferenceManagementZoneShape_circle,
  ITSInterferenceManagementZoneShape_polygon,
  ITSInterferenceManagementZoneShape_ellipse,
} ITSInterferenceManagementZoneShape_choice;

typedef struct ITSInterferenceManagementZoneShape {
  ITSInterferenceManagementZoneShape_choice choice;
  union {
    ITSAreaRectangle rectangle;
    ITSAreaCircular circle;
    ITSAreaPolygon polygon;
    ITSIMZMAreaEllipse ellipse;
  } u;
} ITSInterferenceManagementZoneShape;

extern const ASN1CType asn1_type_ITSInterferenceManagementZoneShape[];

typedef struct ITSZoneDefinition {
  ITSLatitude interferenceManagementZoneLatitude;
  ITSLongitude interferenceManagementZoneLongitude;
  BOOL interferenceManagementZoneRadius_option;
  ITSProtectedZoneRadius interferenceManagementZoneRadius;
  BOOL interferenceManagementZoneID_option;
  ITSProtectedZoneId interferenceManagementZoneID;
  BOOL interferenceManagementZoneShape_option;
  ITSInterferenceManagementZoneShape interferenceManagementZoneShape;
} ITSZoneDefinition;


extern const ASN1CType asn1_type_ITSZoneDefinition[];

typedef enum {
  ITSInterferenceManagementMitigationType_unavailable,
  ITSInterferenceManagementMitigationType_mitigationForTechnologies,
} ITSInterferenceManagementMitigationType_choice;

typedef struct ITSInterferenceManagementMitigationType {
  ITSInterferenceManagementMitigationType_choice choice;
  union {
    ITSMitigationForTechnologies mitigationForTechnologies;
  } u;
} ITSInterferenceManagementMitigationType;

extern const ASN1CType asn1_type_ITSInterferenceManagementMitigationType[];

typedef int ITSPoiType;

extern const ASN1CType asn1_type_ITSPoiType[];

typedef struct ITSWrappedPoiInformationBlock {
  ITSPoiType poiType;
  ASN1OpenType poiBlock;
} ITSWrappedPoiInformationBlock;


extern const ASN1CType asn1_type_ITSWrappedPoiInformationBlock[];

typedef struct ITSWrappedPoiInformationBlocks {
  ITSWrappedPoiInformationBlock *tab;
  size_t count;
} ITSWrappedPoiInformationBlocks;

extern const ASN1CType asn1_type_ITSWrappedPoiInformationBlocks[];

typedef struct ITSPOIM {
  ITSItsPduHeader header;
  ITSWrappedPoiInformationBlocks payload;
} ITSPOIM;


extern const ASN1CType asn1_type_ITSPOIM[];

typedef struct ITSBLOCK_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Content;
} ITSBLOCK_TYPE;


extern const ASN1CType asn1_type_ITSBLOCK_TYPE[];

#define ITSparkingAvailability 1

typedef struct ITSPoiBlockManagementContainer {
  ITSProvider serviceProviderId;
  ITSIdentifier2B blockIdentificationNumber;
  ITSTimestampIts timestamp;
  BOOL linkedIvims_option;
  ITSIvimReferences linkedIvims;
  BOOL linkedMapems_option;
  ITSMapReferences linkedMapems;
} ITSPoiBlockManagementContainer;


extern const ASN1CType asn1_type_ITSPoiBlockManagementContainer[];

typedef struct ITSTimeOfDay {
  int hours;
  int mins;
} ITSTimeOfDay;


extern const ASN1CType asn1_type_ITSTimeOfDay[];

typedef struct ITSPeriod {
  ITSDayOfWeek days;
  ITSTimeOfDay opening;
  ITSTimeOfDay closing;
} ITSPeriod;


extern const ASN1CType asn1_type_ITSPeriod[];

typedef struct ITSPeriods {
  ITSPeriod *tab;
  size_t count;
} ITSPeriods;

extern const ASN1CType asn1_type_ITSPeriods[];

typedef struct ITSGeneralParkingPlaceContainer {
  ITSGeoPosition position;
  ASN1String name;
  BOOL openingPeriods_option;
  ITSPeriods openingPeriods;
  BOOL address_option;
  ASN1String address;
  BOOL phoneNumber_option;
  ASN1String phoneNumber;
  BOOL website_option;
  ASN1String website;
} ITSGeneralParkingPlaceContainer;


extern const ASN1CType asn1_type_ITSGeneralParkingPlaceContainer[];

typedef int ITSOpeningStatus;

enum {
  ITSOpeningStatus_closed = 0,
  ITSOpeningStatus_open = 1,
  ITSOpeningStatus_subscribersOnly = 2,
  ITSOpeningStatus_full = 3,
  ITSOpeningStatus_unknown = 15,
};

extern const ASN1CType asn1_type_ITSOpeningStatus[];

typedef int ITSOccupancyRate;

enum {
  ITSOccupancyRate_unavailable = 101,
};

extern const ASN1CType asn1_type_ITSOccupancyRate[];

typedef int ITSOccupancyTrend;

enum {
  ITSOccupancyTrend_decreasing = 0,
  ITSOccupancyTrend_decreasingQuickly = 1,
  ITSOccupancyTrend_decreasingSlowly = 2,
  ITSOccupancyTrend_increasing = 3,
  ITSOccupancyTrend_increasingQuickly = 4,
  ITSOccupancyTrend_increasingSlowly = 5,
  ITSOccupancyTrend_stable = 6,
  ITSOccupancyTrend_variable = 7,
  ITSOccupancyTrend_unknown = 15,
};

extern const ASN1CType asn1_type_ITSOccupancyTrend[];

typedef int ITSNumberOfSpaces;

enum {
  ITSNumberOfSpaces_unavailable = 101,
};

extern const ASN1CType asn1_type_ITSNumberOfSpaces[];

typedef struct ITSOccupancyInformation {
  ITSOccupancyRate rate;
  ITSOccupancyTrend trend;
  ITSNumberOfSpaces freeSpaces;
  ITSNumberOfSpaces totalSpaces;
  ITSConfidenceLevel confidence;
} ITSOccupancyInformation;


extern const ASN1CType asn1_type_ITSOccupancyInformation[];

typedef struct ITSParkingStatus_1 {
  ITSEuVehicleCategoryCode *tab;
  size_t count;
} ITSParkingStatus_1;

extern const ASN1CType asn1_type_ITSParkingStatus_1[];

typedef struct ITSParkingStatus_2 {
  ITSParkingReservationType *tab;
  size_t count;
} ITSParkingStatus_2;

extern const ASN1CType asn1_type_ITSParkingStatus_2[];

typedef struct ITSParkingStatus_3 {
  ITSLoadType *tab;
  size_t count;
} ITSParkingStatus_3;

extern const ASN1CType asn1_type_ITSParkingStatus_3[];

typedef int ITSParkingFeeType;

enum {
  ITSParkingFeeType_timeDependentFee = 0,
  ITSParkingFeeType_flatFee = 1,
  ITSParkingFeeType_subscription = 2,
};

extern const ASN1CType asn1_type_ITSParkingFeeType[];

typedef struct ITSParkingStatus_4 {
  ITSParkingFeeType *tab;
  size_t count;
} ITSParkingStatus_4;

extern const ASN1CType asn1_type_ITSParkingStatus_4[];

typedef struct ITSParkingStatus_5 {
  ITSParkingOccupancyInfo *tab;
  size_t count;
} ITSParkingStatus_5;

extern const ASN1CType asn1_type_ITSParkingStatus_5[];

typedef struct ITSParkingStatus {
  BOOL vehicleTypes_option;
  ITSParkingStatus_1 vehicleTypes;
  BOOL reservationTypes_option;
  ITSParkingStatus_2 reservationTypes;
  BOOL loadTypes_option;
  ITSParkingStatus_3 loadTypes;
  BOOL parkingFeeTypes_option;
  ITSParkingStatus_4 parkingFeeTypes;
  BOOL occupancyTypes_option;
  ITSParkingStatus_5 occupancyTypes;
  ITSOccupancyInformation currentOccupancy;
} ITSParkingStatus;


extern const ASN1CType asn1_type_ITSParkingStatus[];

typedef struct ITSParkingStatusList {
  ITSParkingStatus *tab;
  size_t count;
} ITSParkingStatusList;

extern const ASN1CType asn1_type_ITSParkingStatusList[];

typedef struct ITSParkingStatusContainer {
  ITSOpeningStatus currentFacilityStatus;
  BOOL currentOccupancy_option;
  ITSOccupancyInformation currentOccupancy;
  BOOL detailedStatus_option;
  ITSParkingStatusList detailedStatus;
} ITSParkingStatusContainer;


extern const ASN1CType asn1_type_ITSParkingStatusContainer[];

typedef struct ITSParkingArea_1 {
  ITSEuVehicleCategoryCode *tab;
  size_t count;
} ITSParkingArea_1;

extern const ASN1CType asn1_type_ITSParkingArea_1[];

typedef struct ITSParkingArea_2 {
  ITSEngineCharacteristics *tab;
  size_t count;
} ITSParkingArea_2;

extern const ASN1CType asn1_type_ITSParkingArea_2[];

typedef struct ITSParkingArea_3 {
  ITSLoadType *tab;
  size_t count;
} ITSParkingArea_3;

extern const ASN1CType asn1_type_ITSParkingArea_3[];

typedef struct ITSParkingArea_4 {
  ITSLoadType *tab;
  size_t count;
} ITSParkingArea_4;

extern const ASN1CType asn1_type_ITSParkingArea_4[];

typedef struct ITSParkingArea_5 {
  ITSParkingReservationType *tab;
  size_t count;
} ITSParkingArea_5;

extern const ASN1CType asn1_type_ITSParkingArea_5[];

typedef struct ITSParkingArea_6 {
  ITSDeltaPosition *tab;
  size_t count;
} ITSParkingArea_6;

extern const ASN1CType asn1_type_ITSParkingArea_6[];

typedef struct ITSParkingArea_7 {
  ITSIdentifier2B *tab;
  size_t count;
} ITSParkingArea_7;

extern const ASN1CType asn1_type_ITSParkingArea_7[];

typedef struct ITSParkingSpacesBasic {
  ITSParkingSpaceDetailed *tab;
  size_t count;
} ITSParkingSpacesBasic;

extern const ASN1CType asn1_type_ITSParkingSpacesBasic[];

typedef struct ITSParkingSpacesDetailed {
  ITSParkingSpaceDetailed *tab;
  size_t count;
} ITSParkingSpacesDetailed;

extern const ASN1CType asn1_type_ITSParkingSpacesDetailed[];

typedef struct ITSParkingArea {
  ITSIdentifier2B id;
  ITSOccupancyInformation currentOccupancy;
  ITSGeoPosition location;
  int level;
  ITSParkingAreaArrangementType arrangementType;
  BOOL boundary_option;
  ITSDeltaPositions boundary;
  BOOL orientation_option;
  ITSWgs84Angle orientation;
  BOOL accessViaLane_option;
  ITSIdentifier2B accessViaLane;
  ITSParkingArea_1 allowedVehicleCategories;
  BOOL notAllowedEngineCharacteristics_option;
  ITSParkingArea_2 notAllowedEngineCharacteristics;
  BOOL allowedLoadTypes_option;
  ITSParkingArea_3 allowedLoadTypes;
  BOOL notAllowedLoadTypes_option;
  ITSParkingArea_4 notAllowedLoadTypes;
  BOOL heightRestriction_option;
  ITSVehicleHeight heightRestriction;
  BOOL reservationType_option;
  ITSParkingArea_5 reservationType;
  BOOL pricingInformation_option;
  ASN1String pricingInformation;
  BOOL paymentInformation_option;
  ASN1String paymentInformation;
  BOOL bookingContactInfo_option;
  ASN1String bookingContactInfo;
  BOOL accessCharachteristics_option;
  ASN1String accessCharachteristics;
  BOOL freeSpacesPosition_option;
  ITSParkingArea_6 freeSpacesPosition;
  BOOL freespacesId_option;
  ITSParkingArea_7 freespacesId;
  BOOL spacesBasic_option;
  ITSParkingSpacesBasic spacesBasic;
  BOOL spacesDetailed_option;
  ITSParkingSpacesDetailed spacesDetailed;
} ITSParkingArea;


extern const ASN1CType asn1_type_ITSParkingArea[];

typedef struct ITSParkingAreas {
  ITSParkingArea *tab;
  size_t count;
} ITSParkingAreas;

extern const ASN1CType asn1_type_ITSParkingAreas[];

typedef struct ITSParkingSupplyCapabilitiesContainer {
  ITSParkingAreas *tab;
  size_t count;
} ITSParkingSupplyCapabilitiesContainer;

extern const ASN1CType asn1_type_ITSParkingSupplyCapabilitiesContainer[];

typedef struct ITSRelatedPoiInfoBlock {
  ITSPoiType poiInfoBlockType;
  ITSProvider serviceProviderId;
  ITSIdentifier2B blockIdentificationNumber;
  BOOL timestamp_option;
  ITSTimestampIts timestamp;
} ITSRelatedPoiInfoBlock;


extern const ASN1CType asn1_type_ITSRelatedPoiInfoBlock[];

typedef struct ITSRelatedPoiInfoBlockContainer {
  ITSRelatedPoiInfoBlock *tab;
  size_t count;
} ITSRelatedPoiInfoBlockContainer;

extern const ASN1CType asn1_type_ITSRelatedPoiInfoBlockContainer[];

typedef struct ITSParkingAvailabilityBlock {
  ITSPoiBlockManagementContainer managementContainer;
  ITSGeneralParkingPlaceContainer placeInfo;
  ITSParkingStatusContainer aggregatedstatus;
  BOOL detailedstatus_option;
  ITSParkingSupplyCapabilitiesContainer detailedstatus;
  BOOL relatedPoi_option;
  ITSRelatedPoiInfoBlockContainer relatedPoi;
} ITSParkingAvailabilityBlock;


extern const ASN1CType asn1_type_ITSParkingAvailabilityBlock[];

typedef int ITSTimeReference;

enum {
  ITSTimeReference_oneMilliSec = 1,
};

extern const ASN1CType asn1_type_ITSTimeReference[];

typedef struct ITSItsStationPosition {
  ITSStationID stationID;
  BOOL laneID_option;
  ITSLaneID laneID;
  BOOL nodeXY_option;
  ITSNodeOffsetPointXY nodeXY;
  BOOL timeReference_option;
  ITSTimeReference timeReference;
} ITSItsStationPosition;


extern const ASN1CType asn1_type_ITSItsStationPosition[];

typedef struct ITSItsStationPositionList {
  ITSItsStationPosition *tab;
  size_t count;
} ITSItsStationPositionList;

extern const ASN1CType asn1_type_ITSItsStationPositionList[];

typedef struct ITSConnectionManeuverAssist_addGrpC {
  BOOL itsStationPosition_option;
  ITSItsStationPositionList itsStationPosition;
} ITSConnectionManeuverAssist_addGrpC;


extern const ASN1CType asn1_type_ITSConnectionManeuverAssist_addGrpC[];

typedef struct ITSConnectionTrajectory_addGrpC {
  ITSNodeSetXY nodes;
  ITSLaneConnectionID connectionID;
} ITSConnectionTrajectory_addGrpC;


extern const ASN1CType asn1_type_ITSConnectionTrajectory_addGrpC[];

typedef struct ITSPrioritizationResponse {
  ITSStationID stationID;
  ITSPrioritizationResponseStatus priorState;
  ITSSignalGroupID signalGroup;
} ITSPrioritizationResponse;


extern const ASN1CType asn1_type_ITSPrioritizationResponse[];

typedef struct ITSPrioritizationResponseList {
  ITSPrioritizationResponse *tab;
  size_t count;
} ITSPrioritizationResponseList;

extern const ASN1CType asn1_type_ITSPrioritizationResponseList[];

typedef struct ITSIntersectionState_addGrpC {
  BOOL activePrioritizations_option;
  ITSPrioritizationResponseList activePrioritizations;
} ITSIntersectionState_addGrpC;


extern const ASN1CType asn1_type_ITSIntersectionState_addGrpC[];

typedef struct ITSLaneAttributes_addGrpC {
  BOOL maxVehicleHeight_option;
  ITSVehicleHeight maxVehicleHeight;
  BOOL maxVehicleWeight_option;
  ITSVehicleMass maxVehicleWeight;
} ITSLaneAttributes_addGrpC;


extern const ASN1CType asn1_type_ITSLaneAttributes_addGrpC[];

typedef struct ITSSignalHeadLocation {
  ITSNodeOffsetPointXY nodeXY;
  ITSDeltaAltitude nodeZ;
  ITSSignalGroupID signalGroupID;
} ITSSignalHeadLocation;


extern const ASN1CType asn1_type_ITSSignalHeadLocation[];

typedef struct ITSSignalHeadLocationList {
  ITSSignalHeadLocation *tab;
  size_t count;
} ITSSignalHeadLocationList;

extern const ASN1CType asn1_type_ITSSignalHeadLocationList[];

typedef struct ITSMapData_addGrpC {
  BOOL signalHeadLocations_option;
  ITSSignalHeadLocationList signalHeadLocations;
} ITSMapData_addGrpC;


extern const ASN1CType asn1_type_ITSMapData_addGrpC[];

typedef enum ITSExceptionalCondition {
  ITSExceptionalCondition_unknown,
  ITSExceptionalCondition_publicTransportPriority,
  ITSExceptionalCondition_emergencyVehiclePriority,
  ITSExceptionalCondition_trainPriority,
  ITSExceptionalCondition_bridgeOpen,
  ITSExceptionalCondition_vehicleHeight,
  ITSExceptionalCondition_weather,
  ITSExceptionalCondition_trafficJam,
  ITSExceptionalCondition_tunnelClosure,
  ITSExceptionalCondition_meteringActive,
  ITSExceptionalCondition_truckPriority,
  ITSExceptionalCondition_bicyclePlatoonPriority,
  ITSExceptionalCondition_vehiclePlatoonPriority,
} ITSExceptionalCondition;

extern const ASN1CType asn1_type_ITSExceptionalCondition[];

typedef struct ITSMovementEvent_addGrpC {
  BOOL stateChangeReason_option;
  ITSExceptionalCondition stateChangeReason;
} ITSMovementEvent_addGrpC;


extern const ASN1CType asn1_type_ITSMovementEvent_addGrpC[];

typedef enum ITSPtvRequestType {
  ITSPtvRequestType_preRequest,
  ITSPtvRequestType_mainRequest,
  ITSPtvRequestType_doorCloseRequest,
  ITSPtvRequestType_cancelRequest,
  ITSPtvRequestType_emergencyRequest,
} ITSPtvRequestType;

extern const ASN1CType asn1_type_ITSPtvRequestType[];

typedef struct ITSNode {
  ASN1Integer id;
  BOOL lane_option;
  ITSLaneID lane;
  BOOL connectionID_option;
  ITSLaneConnectionID connectionID;
  BOOL intersectionID_option;
  ITSIntersectionID intersectionID;
} ITSNode;


extern const ASN1CType asn1_type_ITSNode[];

typedef struct ITSNodeLink {
  ITSNode *tab;
  size_t count;
} ITSNodeLink;

extern const ASN1CType asn1_type_ITSNodeLink[];

typedef struct ITSNodeAttributeSet_addGrpC {
  BOOL ptvRequest_option;
  ITSPtvRequestType ptvRequest;
  BOOL nodeLink_option;
  ITSNodeLink nodeLink;
  BOOL node_option;
  ITSNode node;
} ITSNodeAttributeSet_addGrpC;


extern const ASN1CType asn1_type_ITSNodeAttributeSet_addGrpC[];

typedef struct ITSPosition3D_addGrpC {
  ITSAltitude altitude;
} ITSPosition3D_addGrpC;


extern const ASN1CType asn1_type_ITSPosition3D_addGrpC[];

typedef enum ITSEmissionType {
  ITSEmissionType_euro1,
  ITSEmissionType_euro2,
  ITSEmissionType_euro3,
  ITSEmissionType_euro4,
  ITSEmissionType_euro5,
  ITSEmissionType_euro6,
} ITSEmissionType;

extern const ASN1CType asn1_type_ITSEmissionType[];

typedef int ITSFuelType;

extern const ASN1CType asn1_type_ITSFuelType[];

typedef struct ITSRestrictionUserType_addGrpC {
  BOOL emission_option;
  ITSEmissionType emission;
  BOOL fuel_option;
  ITSFuelType fuel;
} ITSRestrictionUserType_addGrpC;


extern const ASN1CType asn1_type_ITSRestrictionUserType_addGrpC[];

typedef enum ITSBatteryStatus {
  ITSBatteryStatus_unknown,
  ITSBatteryStatus_critical,
  ITSBatteryStatus_low,
  ITSBatteryStatus_good,
} ITSBatteryStatus;

extern const ASN1CType asn1_type_ITSBatteryStatus[];

typedef struct ITSRequestorDescription_addGrpC {
  BOOL fuel_option;
  ITSFuelType fuel;
  BOOL batteryStatus_option;
  ITSBatteryStatus batteryStatus;
} ITSRequestorDescription_addGrpC;


extern const ASN1CType asn1_type_ITSRequestorDescription_addGrpC[];

typedef enum ITSRejectedReason {
  ITSRejectedReason_unknown,
  ITSRejectedReason_exceptionalCondition,
  ITSRejectedReason_maxWaitingTimeExceeded,
  ITSRejectedReason_ptPriorityDisabled,
  ITSRejectedReason_higherPTPriorityGranted,
  ITSRejectedReason_vehicleTrackingUnknown,
} ITSRejectedReason;

extern const ASN1CType asn1_type_ITSRejectedReason[];

typedef struct ITSSignalStatusPackage_addGrpC {
  BOOL synchToSchedule_option;
  ITSDeltaTime synchToSchedule;
  BOOL rejectedReason_option;
  ITSRejectedReason rejectedReason;
} ITSSignalStatusPackage_addGrpC;


extern const ASN1CType asn1_type_ITSSignalStatusPackage_addGrpC[];

typedef struct ITSREG_EXT_ID_AND_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Type;
} ITSREG_EXT_ID_AND_TYPE;


extern const ASN1CType asn1_type_ITSREG_EXT_ID_AND_TYPE[];

#define ITSunknownFuel 0

#define ITSgasoline 1

#define ITSethanol 2

#define ITSdiesel 3

#define ITSelectric 4

#define ITShybrid 5

#define ITShydrogen 6

#define ITSnatGasLiquid 7

#define ITSnatGasComp 8

#define ITSpropane 9

#define ITSnoRegion 0

#define ITSaddGrpA 1

#define ITSaddGrpB 2

#define ITSaddGrpC 3

typedef int ITSDSRCVehicleHeight;

extern const ASN1CType asn1_type_ITSDSRCVehicleHeight[];

typedef struct ITSAbsolutePosition {
  ITSLatitude latitude;
  ITSLongitude longitude;
} ITSAbsolutePosition;


extern const ASN1CType asn1_type_ITSAbsolutePosition[];

typedef struct ITSAbsolutePositions {
  ITSAbsolutePosition *tab;
  size_t count;
} ITSAbsolutePositions;

extern const ASN1CType asn1_type_ITSAbsolutePositions[];

typedef struct ITSAbsolutePositionWAltitude {
  ITSLatitude latitude;
  ITSLongitude longitude;
  ITSAltitude altitude;
} ITSAbsolutePositionWAltitude;


extern const ASN1CType asn1_type_ITSAbsolutePositionWAltitude[];

typedef struct ITSAbsolutePositionsWAltitude {
  ITSAbsolutePositionWAltitude *tab;
  size_t count;
} ITSAbsolutePositionsWAltitude;

extern const ASN1CType asn1_type_ITSAbsolutePositionsWAltitude[];

typedef struct ITSCONTENT_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Content;
} ITSCONTENT_TYPE;


extern const ASN1CType asn1_type_ITSCONTENT_TYPE[];

#define ITSdummyId 0

#define ITStest1 1

typedef struct ITSAttributeIdList {
  int *tab;
  size_t count;
} ITSAttributeIdList;

extern const ASN1CType asn1_type_ITSAttributeIdList[];

typedef ITSInt1 ITSActualNumberOfPassengers;

#define asn1_type_ITSActualNumberOfPassengers asn1_type_ITSInt1

typedef struct ITSAddRq {
  int attributeId;
  ASN1Integer value;
} ITSAddRq;


extern const ASN1CType asn1_type_ITSAddRq[];

typedef int ITSChannelId;

enum {
  ITSChannelId_obu = 0,
  ITSChannelId_sam1 = 1,
  ITSChannelId_sam2 = 2,
  ITSChannelId_icc = 3,
  ITSChannelId_display = 4,
  ITSChannelId_buzzer = 5,
  ITSChannelId_printer = 6,
  ITSChannelId_serialInterface = 7,
  ITSChannelId_parallelInterface = 8,
  ITSChannelId_gPS = 9,
  ITSChannelId_tachograph = 10,
  ITSChannelId_privateUse1 = 11,
  ITSChannelId_privateUse2 = 12,
  ITSChannelId_privateUse3 = 13,
  ITSChannelId_privateUse4 = 14,
  ITSChannelId_privateUse5 = 15,
  ITSChannelId_bluetooth = 16,
};

extern const ASN1CType asn1_type_ITSChannelId[];

typedef struct ITSChannelRq {
  ITSChannelId channelId;
  ASN1String apdu;
} ITSChannelRq;


extern const ASN1CType asn1_type_ITSChannelRq[];

typedef struct ITSChannelRs {
  ITSChannelId channelId;
  ASN1String apdu;
} ITSChannelRs;


extern const ASN1CType asn1_type_ITSChannelRs[];

typedef struct ITSCopyRq {
  int destinationEID;
  ITSAttributeIdList attributeIdList;
} ITSCopyRq;


extern const ASN1CType asn1_type_ITSCopyRq[];

typedef ASN1String ITSPayUnit;

extern const ASN1CType asn1_type_ITSPayUnit[];

typedef struct ITSPaymentFee {
  ITSInt2 paymentFeeAmount;
  ITSPayUnit paymentFeeUnit;
} ITSPaymentFee;


extern const ASN1CType asn1_type_ITSPaymentFee[];

typedef struct ITSCreditRq {
  ITSPaymentFee refund;
  ASN1String nonce;
  int key;
} ITSCreditRq;


extern const ASN1CType asn1_type_ITSCreditRq[];

typedef ASN1String ITSResultFin;

extern const ASN1CType asn1_type_ITSResultFin[];

typedef struct ITSCreditRs {
  ITSResultFin creditResult;
  ASN1String creditAuthenticator;
} ITSCreditRs;


extern const ASN1CType asn1_type_ITSCreditRs[];

typedef struct ITSDebitRq {
  ITSPaymentFee debitPaymentFee;
  ASN1String nonce;
  int keyRef;
} ITSDebitRq;


extern const ASN1CType asn1_type_ITSDebitRq[];

typedef struct ITSDebitRs {
  ITSResultFin debitResult;
  ASN1String debitAuthenticator;
} ITSDebitRs;


extern const ASN1CType asn1_type_ITSDebitRs[];

typedef struct ITSGetInstanceRq {
  int posOfFirstInstance;
  int posOfLastInstance;
  ITSAttributeIdList attributeIdList;
} ITSGetInstanceRq;


extern const ASN1CType asn1_type_ITSGetInstanceRq[];

typedef struct ITSGetStampedRq {
  ITSAttributeIdList attributeIdList;
  ASN1String nonce;
  int keyRef;
} ITSGetStampedRq;


extern const ASN1CType asn1_type_ITSGetStampedRq[];

typedef int ITSSetMMIRq;

enum {
  ITSSetMMIRq_ok = 0,
  ITSSetMMIRq_nok = 1,
  ITSSetMMIRq_contactOperator = 2,
  ITSSetMMIRq_noSignalling = 255,
};

extern const ASN1CType asn1_type_ITSSetMMIRq[];

typedef struct ITSSubRq {
  int attributeId;
  ASN1Integer value;
} ITSSubRq;


extern const ASN1CType asn1_type_ITSSubRq[];

typedef ITSInt2 ITSCO2EmissionValue;

#define asn1_type_ITSCO2EmissionValue asn1_type_ITSInt2

typedef unsigned int ITSInt4;

extern const ASN1CType asn1_type_ITSInt4[];

typedef ITSInt4 ITSContractSerialNumber;

#define asn1_type_ITSContractSerialNumber asn1_type_ITSInt4

typedef ASN1String ITSContractAuthenticator;

extern const ASN1CType asn1_type_ITSContractAuthenticator[];

typedef struct ITSDateCompact {
  int year;
  int month;
  int day;
} ITSDateCompact;


extern const ASN1CType asn1_type_ITSDateCompact[];

typedef struct ITSContractValidity {
  ASN1String contractRestrictions;
  ITSDateCompact contractExpiryDate;
} ITSContractValidity;


extern const ASN1CType asn1_type_ITSContractValidity[];

typedef enum ITSLPN_1 {
  ITSLPN_1_latinAlphabetNo1,
  ITSLPN_1_latinAlphabetNo2,
  ITSLPN_1_latinAlphabetNo3,
  ITSLPN_1_latinAlphabetNo4,
  ITSLPN_1_latinCyrillicAlphabet,
  ITSLPN_1_latinArabicAlphabet,
  ITSLPN_1_latinGreekAlphabet,
  ITSLPN_1_latinHebrewAlphabet,
  ITSLPN_1_latinAlphabetNo5,
  ITSLPN_1_latinAlphabetNo6,
  ITSLPN_1_twoOctetBMP,
  ITSLPN_1_fourOctetCanonical,
  ITSLPN_1_reservedForUse1,
  ITSLPN_1_reservedForUse2,
  ITSLPN_1_reservedForUse3,
  ITSLPN_1_reservedForUse4,
  ITSLPN_1_reservedForUse5,
  ITSLPN_1_reservedForUse6,
  ITSLPN_1_reservedForUse7,
  ITSLPN_1_reservedForUse8,
  ITSLPN_1_reservedForUse9,
  ITSLPN_1_reservedForUse10,
  ITSLPN_1_reservedForUse11,
  ITSLPN_1_reservedForUse12,
  ITSLPN_1_reservedForUse13,
  ITSLPN_1_reservedForUse14,
  ITSLPN_1_reservedForUse15,
  ITSLPN_1_reservedForUse16,
  ITSLPN_1_reservedForUse17,
  ITSLPN_1_reservedForUse18,
  ITSLPN_1_reservedForUse19,
  ITSLPN_1_reservedForUse20,
  ITSLPN_1_reservedForUse21,
} ITSLPN_1;

extern const ASN1CType asn1_type_ITSLPN_1[];

typedef struct ITSLPN {
  ITSCountryCode countryCode;
  ITSLPN_1 alphabetIndicator;
  ASN1String licencePlateNumber;
} ITSLPN;


extern const ASN1CType asn1_type_ITSLPN[];

typedef ITSLPN ITSContractVehicle;

#define asn1_type_ITSContractVehicle asn1_type_ITSLPN

typedef int ITSDescriptiveCharacteristics;

enum {
  ITSDescriptiveCharacteristics_noEntry = 0,
  ITSDescriptiveCharacteristics_vehicleShape1 = 1,
  ITSDescriptiveCharacteristics_vehicleShape2 = 2,
  ITSDescriptiveCharacteristics_vehicleShape3 = 3,
  ITSDescriptiveCharacteristics_vehicleShape4 = 4,
  ITSDescriptiveCharacteristics_vehicleShape5 = 5,
  ITSDescriptiveCharacteristics_vehicleShape6 = 6,
  ITSDescriptiveCharacteristics_vehicleShape7 = 7,
  ITSDescriptiveCharacteristics_vehicleShape8 = 8,
  ITSDescriptiveCharacteristics_vehicleShape9 = 9,
  ITSDescriptiveCharacteristics_vehicleShape10 = 10,
  ITSDescriptiveCharacteristics_vehicleShape11 = 11,
  ITSDescriptiveCharacteristics_vehicleShape12 = 12,
  ITSDescriptiveCharacteristics_vehicleShape13 = 13,
  ITSDescriptiveCharacteristics_vehicleShape14 = 14,
  ITSDescriptiveCharacteristics_vehicleShape15 = 15,
  ITSDescriptiveCharacteristics_vehicleShape16 = 16,
  ITSDescriptiveCharacteristics_vehicleShape17 = 17,
  ITSDescriptiveCharacteristics_vehicleShape18 = 18,
  ITSDescriptiveCharacteristics_vehicleShape19 = 19,
  ITSDescriptiveCharacteristics_vehicleShape20 = 20,
  ITSDescriptiveCharacteristics_vehicleShape21 = 21,
  ITSDescriptiveCharacteristics_vehicleShape22 = 22,
  ITSDescriptiveCharacteristics_vehicleShape23 = 23,
  ITSDescriptiveCharacteristics_vehicleShape24 = 24,
  ITSDescriptiveCharacteristics_vehicleShape25 = 25,
  ITSDescriptiveCharacteristics_vehicleShape26 = 26,
  ITSDescriptiveCharacteristics_vehicleShape27 = 27,
  ITSDescriptiveCharacteristics_vehicleShape28 = 28,
  ITSDescriptiveCharacteristics_vehicleShape29 = 29,
  ITSDescriptiveCharacteristics_vehicleShape30 = 30,
  ITSDescriptiveCharacteristics_vehicleShape31 = 31,
  ITSDescriptiveCharacteristics_vehicleShape32 = 32,
  ITSDescriptiveCharacteristics_vehicleShape33 = 33,
  ITSDescriptiveCharacteristics_vehicleShape34 = 34,
  ITSDescriptiveCharacteristics_vehicleShape35 = 35,
  ITSDescriptiveCharacteristics_vehicleShape36 = 36,
  ITSDescriptiveCharacteristics_vehicleShape37 = 37,
  ITSDescriptiveCharacteristics_vehicleShape38 = 38,
  ITSDescriptiveCharacteristics_vehicleShape39 = 39,
  ITSDescriptiveCharacteristics_vehicleShape40 = 40,
  ITSDescriptiveCharacteristics_vehicleShape41 = 41,
  ITSDescriptiveCharacteristics_vehicleShape42 = 42,
  ITSDescriptiveCharacteristics_vehicleShape43 = 43,
  ITSDescriptiveCharacteristics_vehicleShape44 = 44,
  ITSDescriptiveCharacteristics_vehicleShape45 = 45,
  ITSDescriptiveCharacteristics_vehicleShape46 = 46,
  ITSDescriptiveCharacteristics_vehicleShape47 = 47,
  ITSDescriptiveCharacteristics_vehicleShape48 = 48,
  ITSDescriptiveCharacteristics_vehicleShape49 = 49,
  ITSDescriptiveCharacteristics_vehicleShape50 = 50,
};

extern const ASN1CType asn1_type_ITSDescriptiveCharacteristics[];

typedef struct ITSEfcDriverCharacteristics {
  ITSInt1 driverClass;
  ITSInt1 tripPurpose;
} ITSEfcDriverCharacteristics;


extern const ASN1CType asn1_type_ITSEfcDriverCharacteristics[];

typedef struct ITSEFC_ContextMark {
  ITSProvider contractProvider;
  ASN1String typeOfContract;
  int contextVersion;
} ITSEFC_ContextMark;


extern const ASN1CType asn1_type_ITSEFC_ContextMark[];

typedef struct ITSEngine {
  ITSInt2 engineCapacity;
  ITSInt2 enginePower;
} ITSEngine;


extern const ASN1CType asn1_type_ITSEngine[];

typedef ASN1String ITSEquipmentOBUId;

extern const ASN1CType asn1_type_ITSEquipmentOBUId[];

typedef ASN1BitString ITSEquipmentStatus;

extern const ASN1CType asn1_type_ITSEquipmentStatus[];

typedef int ITSFutureCharacteristics;

enum {
  ITSFutureCharacteristics_noEntry = 0,
  ITSFutureCharacteristics_airSuspension = 1,
};

extern const ASN1CType asn1_type_ITSFutureCharacteristics[];

typedef ASN1String ITSICC_Id;

extern const ASN1CType asn1_type_ITSICC_Id[];

typedef int ITSInt3;

extern const ASN1CType asn1_type_ITSInt3[];

typedef ASN1String ITSPersonalAccountNumber;

extern const ASN1CType asn1_type_ITSPersonalAccountNumber[];

typedef struct ITSPaymentMeans {
  ITSPersonalAccountNumber personalAccountNumber;
  ITSDateCompact paymentMeansExpiryDate;
  ASN1String pamentMeansUsageControl;
} ITSPaymentMeans;


extern const ASN1CType asn1_type_ITSPaymentMeans[];

typedef enum {
  ITSSignedValue_positive,
  ITSSignedValue_negative,
} ITSSignedValue_choice;

typedef struct ITSSignedValue {
  ITSSignedValue_choice choice;
  union {
    int positive;
    int negative;
  } u;
} ITSSignedValue;

extern const ASN1CType asn1_type_ITSSignedValue[];

typedef ITSSignedValue ITSPaymentMeansBalance;

#define asn1_type_ITSPaymentMeansBalance asn1_type_ITSSignedValue

typedef ITSPayUnit ITSPaymentMeansUnit;

#define asn1_type_ITSPaymentMeansUnit asn1_type_ITSPayUnit

typedef ASN1String ITSPaymentSecurityData;

extern const ASN1CType asn1_type_ITSPaymentSecurityData[];

typedef struct ITSPurseBalance {
  ITSSignedValue purseValue;
  ITSPayUnit purseUnit;
} ITSPurseBalance;


extern const ASN1CType asn1_type_ITSPurseBalance[];

typedef struct ITSReceiptContract {
  ITSProvider sessionContractProvider;
  ASN1String sessionTypeOfContract;
  ITSInt4 sessionContractSerialNumber;
} ITSReceiptContract;


extern const ASN1CType asn1_type_ITSReceiptContract[];

typedef struct ITSDateAndTime_1 {
  int hours;
  int mins;
  int double_secs;
} ITSDateAndTime_1;


extern const ASN1CType asn1_type_ITSDateAndTime_1[];

typedef struct ITSDateAndTime {
  ITSDateCompact timeDate;
  ITSDateAndTime_1 timeCompact;
} ITSDateAndTime;


extern const ASN1CType asn1_type_ITSDateAndTime[];

typedef struct ITSSessionLocation {
  BOOL ascendingKilometrage;
  int laneCodeNumber;
} ITSSessionLocation;


extern const ASN1CType asn1_type_ITSSessionLocation[];

typedef int ITSResultOp;

enum {
  ITSResultOp_correctTransaction = 0,
  ITSResultOp_obeStatusNotAccepted = 1,
  ITSResultOp_equipmentStatusNotAccepted = 2,
  ITSResultOp_contractNotInWhiteList = 3,
  ITSResultOp_contractIdentifierInBlackList = 4,
  ITSResultOp_contractIdentifierNotCorrect = 5,
  ITSResultOp_expiredContract = 6,
  ITSResultOp_contractRestrictionsNotFulfilled = 7,
  ITSResultOp_claimedVehicleCharacteristicsNotValid = 8,
  ITSResultOp_vehicleClassAuthenticationFailed = 9,
  ITSResultOp_entryVehicleClassDifferentFromExitVehicleClass = 10,
  ITSResultOp_entryReceiptMissing = 11,
  ITSResultOp_entryReceiptNotValid = 12,
  ITSResultOp_entryTollStationNotValid = 13,
  ITSResultOp_equipmentNotCertified = 14,
  ITSResultOp_timeDifference = 15,
  ITSResultOp_accessCredentialsNotAccepted = 16,
  ITSResultOp_contractAuthenticatorNotAccepted = 17,
  ITSResultOp_receiptAuthenticatorNotAccepted = 18,
  ITSResultOp_claimedVehicleCharacteristicsMissing = 19,
  ITSResultOp_paymentMeansNotAccepted = 20,
  ITSResultOp_paymentAuthenticatorNotAccepted = 21,
  ITSResultOp_paymentMeansInBlackList = 22,
  ITSResultOp_paymentMeansNotCorrect = 23,
  ITSResultOp_expiredPaymentMeans = 24,
  ITSResultOp_paymentMeansRestrictionsNotFulfilled = 25,
};

extern const ASN1CType asn1_type_ITSResultOp[];

typedef struct ITSReceiptData {
  ITSDateAndTime sessionTime;
  ITSProvider sessionServiceProvider;
  ITSInt2 locationOfStation;
  ITSSessionLocation sessionLocation;
  ITSInt1 sessionType;
  ITSResultOp sessionResult;
  ITSInt1 sessionTariffClass;
  ITSInt1 sessionClaimedClass;
  ITSPaymentFee sessionFee;
  ITSProvider sessionContractProvider;
  ASN1String sessionTypeOfContract;
  int sessionContextVersion;
  ASN1String receiptDataAuthenticator;
} ITSReceiptData;


extern const ASN1CType asn1_type_ITSReceiptData[];

typedef ITSReceiptData ITSReceiptData1;

#define asn1_type_ITSReceiptData1 asn1_type_ITSReceiptData

typedef ITSReceiptData ITSReceiptData2;

#define asn1_type_ITSReceiptData2 asn1_type_ITSReceiptData

typedef ITSInt3 ITSReceiptDistance;

#define asn1_type_ITSReceiptDistance asn1_type_ITSInt3

typedef struct ITSReceiptFinancialPart {
  ITSPersonalAccountNumber personalAccountNumber;
  ITSPaymentFee sessionPaymentFee;
  ITSPurseBalance sessionCurrentBalance;
  ITSInt4 receiptFinancialSerialNumber;
} ITSReceiptFinancialPart;


extern const ASN1CType asn1_type_ITSReceiptFinancialPart[];

typedef ITSICC_Id ITSReceiptICC_Id;

#define asn1_type_ITSReceiptICC_Id asn1_type_ITSICC_Id

typedef ASN1String ITSReceiptOBUId;

extern const ASN1CType asn1_type_ITSReceiptOBUId[];

typedef enum ITSEfcStationType {
  ITSEfcStationType_unspecified,
  ITSEfcStationType_closedEntryWithPayment,
  ITSEfcStationType_closedEntryWithoutPayment,
  ITSEfcStationType_closedTransit,
  ITSEfcStationType_closedExit,
  ITSEfcStationType_closedCredit,
  ITSEfcStationType_mixed,
  ITSEfcStationType_passage,
  ITSEfcStationType_checkpoint,
  ITSEfcStationType_reload,
  ITSEfcStationType_reservedForFutureCENUse1,
  ITSEfcStationType_reservedForFutureCENUse2,
  ITSEfcStationType_reservedForFutureCENUse3,
  ITSEfcStationType_reservedForFutureCENUse4,
  ITSEfcStationType_privateUse5,
  ITSEfcStationType_privateUse6,
} ITSEfcStationType;

extern const ASN1CType asn1_type_ITSEfcStationType[];

typedef struct ITSReceiptServicePart {
  ITSDateAndTime sessionTime;
  ITSProvider sessionServiceProvider;
  int stationLocation;
  ASN1BitString sessionLocation;
  ITSEfcStationType typeOfSession;
  ITSResultOp sessionResultOperational;
  ITSResultFin sessionResultFinancial;
} ITSReceiptServicePart;


extern const ASN1CType asn1_type_ITSReceiptServicePart[];

typedef ITSInt3 ITSReceiptServiceSerialNumber;

#define asn1_type_ITSReceiptServiceSerialNumber asn1_type_ITSInt3

typedef ASN1String ITSReceiptAuthenticator;

extern const ASN1CType asn1_type_ITSReceiptAuthenticator[];

typedef ASN1String ITSReceiptText;

extern const ASN1CType asn1_type_ITSReceiptText[];

typedef struct ITSSessionClass {
  ITSInt1 sessionTariffClass;
  ITSInt1 sessionClaimedClass;
} ITSSessionClass;


extern const ASN1CType asn1_type_ITSSessionClass[];

typedef int ITSTrailerAxles;

extern const ASN1CType asn1_type_ITSTrailerAxles[];

typedef struct ITSTrailerDetails {
  int trailerType;
  ITSTrailerAxles trailerAxles;
} ITSTrailerDetails;


extern const ASN1CType asn1_type_ITSTrailerDetails[];

typedef struct ITSEfcTrailerCharacteristics {
  ITSTrailerDetails trailerDetails;
  ITSInt2 trailerMaxLadenWeight;
  ITSInt2 trailerWeightUnladen;
} ITSEfcTrailerCharacteristics;


extern const ASN1CType asn1_type_ITSEfcTrailerCharacteristics[];

typedef ITSLPN ITSTrailerLicencePlateNumber;

#define asn1_type_ITSTrailerLicencePlateNumber asn1_type_ITSLPN

typedef struct ITSValidityOfContract {
  ASN1String issuerRestrictions;
  ITSDateCompact contractExpiryDate;
} ITSValidityOfContract;


extern const ASN1CType asn1_type_ITSValidityOfContract[];

typedef ASN1String ITSVehicleAuthenticator;

extern const ASN1CType asn1_type_ITSVehicleAuthenticator[];

typedef enum ITSVehicleAxles_1 {
  ITSVehicleAxles_1_notSpecified,
  ITSVehicleAxles_1_singleTyre,
  ITSVehicleAxles_1_dualTyres,
  ITSVehicleAxles_1_reservedForUse,
} ITSVehicleAxles_1;

extern const ASN1CType asn1_type_ITSVehicleAxles_1[];

typedef int ITSTractorAxles;

extern const ASN1CType asn1_type_ITSTractorAxles[];

typedef struct ITSVehicleAxles_2 {
  ITSTrailerAxles trailerAxles;
  ITSTractorAxles tractorAxles;
} ITSVehicleAxles_2;


extern const ASN1CType asn1_type_ITSVehicleAxles_2[];

typedef struct ITSVehicleAxles_3 {
  ITSVehicleAxles_1 tyreType;
  ITSVehicleAxles_2 numberOfAxles;
} ITSVehicleAxles_3;


extern const ASN1CType asn1_type_ITSVehicleAxles_3[];

typedef struct ITSVehicleAxles {
  ITSInt1 vehicleFirstAxleHeight;
  ITSVehicleAxles_3 vehicleAxlesNumber;
} ITSVehicleAxles;


extern const ASN1CType asn1_type_ITSVehicleAxles[];

typedef ITSInt1 ITSVehicleClass;

#define asn1_type_ITSVehicleClass asn1_type_ITSInt1

typedef ITSLPN ITSVehicleLicencePlateNumber;

#define asn1_type_ITSVehicleLicencePlateNumber asn1_type_ITSLPN

typedef struct ITSCS5 {
  ASN1String vin;
  ASN1BitString fill;
} ITSCS5;


extern const ASN1CType asn1_type_ITSCS5[];

typedef ITSCS5 ITSVehicleIdentificationNumber;

#define asn1_type_ITSVehicleIdentificationNumber asn1_type_ITSCS5

typedef struct ITSVehicleSpecificCharacteristics {
  ITSEnvironmentalCharacteristics environmentalCharacteristics;
  ITSEngineCharacteristics engineCharacteristics;
  ITSDescriptiveCharacteristics descriptiveCharacteristics;
  ITSFutureCharacteristics futureCharacteristics;
} ITSVehicleSpecificCharacteristics;


extern const ASN1CType asn1_type_ITSVehicleSpecificCharacteristics[];

typedef ITSInt4 ITSVehicleTotalDistance;

#define asn1_type_ITSVehicleTotalDistance asn1_type_ITSInt4

typedef ITSInt2 ITSVehicleWeightLaden;

#define asn1_type_ITSVehicleWeightLaden asn1_type_ITSInt2

typedef ITSInt2 ITSVehicleCurrentMaxTrainWeight;

#define asn1_type_ITSVehicleCurrentMaxTrainWeight asn1_type_ITSInt2

typedef int ITSCode_Units;

enum {
  ITSCode_Units_kmperh = 0,
  ITSCode_Units_milesperh = 1,
  ITSCode_Units_kilometre = 2,
  ITSCode_Units_metre = 3,
  ITSCode_Units_decimetre = 4,
  ITSCode_Units_centimetre = 5,
  ITSCode_Units_mile = 6,
  ITSCode_Units_yard = 7,
  ITSCode_Units_foot = 8,
  ITSCode_Units_minutesOfTime = 9,
  ITSCode_Units_tonnes = 10,
  ITSCode_Units_hundredkg = 11,
  ITSCode_Units_pound = 12,
  ITSCode_Units_rateOfIncline = 13,
  ITSCode_Units_durationinminutes = 14,
};

extern const ASN1CType asn1_type_ITSCode_Units[];

typedef int ITSPOIType;

extern const ASN1CType asn1_type_ITSPOIType[];

typedef struct ITSItsPOIHeader {
  ITSPOIType poiType;
  ITSTimestampIts timeStamp;
  BOOL relayCapable;
} ITSItsPOIHeader;


extern const ASN1CType asn1_type_ITSItsPOIHeader[];

typedef int ITSNumberStations;

extern const ASN1CType asn1_type_ITSNumberStations[];

typedef ASN1BitString ITSChargingSpotType;

extern const ASN1CType asn1_type_ITSChargingSpotType[];

typedef ASN1BitString ITSTypeOfReceptacle;

extern const ASN1CType asn1_type_ITSTypeOfReceptacle[];

typedef struct ITSSpotAvailability {
  int maxWaitingTimeMinutes;
  BOOL blocking;
} ITSSpotAvailability;


extern const ASN1CType asn1_type_ITSSpotAvailability[];

typedef struct ITSParkingPlacesData {
  ITSSpotAvailability *tab;
  size_t count;
} ITSParkingPlacesData;

extern const ASN1CType asn1_type_ITSParkingPlacesData[];

typedef struct ITSItsChargingSpotDataElements {
  ITSChargingSpotType type;
  BOOL evEquipmentID_option;
  ASN1String evEquipmentID;
  ITSTypeOfReceptacle typeOfReceptacle;
  ASN1String energyAvailability;
  BOOL parkingPlacesData_option;
  ITSParkingPlacesData parkingPlacesData;
} ITSItsChargingSpotDataElements;


extern const ASN1CType asn1_type_ITSItsChargingSpotDataElements[];

typedef struct ITSItsChargingSpots {
  ITSItsChargingSpotDataElements *tab;
  size_t count;
} ITSItsChargingSpots;

extern const ASN1CType asn1_type_ITSItsChargingSpots[];

typedef struct ITSItsChargingStationData {
  ITSStationID chargingStationID;
  BOOL utilityDistributorId_option;
  ASN1String utilityDistributorId;
  BOOL providerID_option;
  ASN1String providerID;
  ITSReferencePosition chargingStationLocation;
  BOOL address_option;
  ASN1String address;
  BOOL phoneNumber_option;
  ASN1String phoneNumber;
  ASN1String accessibility;
  BOOL digitalMap_option;
  ITSDigitalMap digitalMap;
  ASN1String openingDaysHours;
  ASN1String pricing;
  BOOL bookingContactInfo_option;
  ASN1String bookingContactInfo;
  BOOL payment_option;
  ASN1String payment;
  ITSItsChargingSpots chargingSpotsAvailable;
} ITSItsChargingStationData;


extern const ASN1CType asn1_type_ITSItsChargingStationData[];

typedef struct ITSItsEVCSNData_1 {
  ITSItsChargingStationData *tab;
  size_t count;
} ITSItsEVCSNData_1;

extern const ASN1CType asn1_type_ITSItsEVCSNData_1[];

typedef struct ITSItsEVCSNData {
  ITSNumberStations totalNumberOfStations;
  ITSItsEVCSNData_1 chargingStationsData;
} ITSItsEVCSNData;


extern const ASN1CType asn1_type_ITSItsEVCSNData[];

typedef struct ITSEVChargingSpotNotificationPOIMessage {
  ITSItsPOIHeader poiHeader;
  ITSItsEVCSNData evcsnData;
} ITSEVChargingSpotNotificationPOIMessage;


extern const ASN1CType asn1_type_ITSEVChargingSpotNotificationPOIMessage[];

typedef struct ITSEvcsnPdu {
  ITSItsPduHeader header;
  ITSEVChargingSpotNotificationPOIMessage evcsn;
} ITSEvcsnPdu;


extern const ASN1CType asn1_type_ITSEvcsnPdu[];

typedef struct ITSMessageRateRange {
  ITSMessageRateHz messageRateMin;
  ITSMessageRateHz messageRateMax;
} ITSMessageRateRange;


extern const ASN1CType asn1_type_ITSMessageRateRange[];

typedef struct ITSCpmManagementContainer {
  ITSTimestampIts referenceTime;
  ITSReferencePosition referencePosition;
  BOOL segmentationInfo_option;
  ITSMessageSegmentationInfo segmentationInfo;
  BOOL messageRateRange_option;
  ITSMessageRateRange messageRateRange;
} ITSCpmManagementContainer;


extern const ASN1CType asn1_type_ITSCpmManagementContainer[];

typedef int ITSCpmContainerId;

extern const ASN1CType asn1_type_ITSCpmContainerId[];

typedef struct ITSWrappedCpmContainer {
  ITSCpmContainerId containerId;
  ASN1OpenType containerData;
} ITSWrappedCpmContainer;


extern const ASN1CType asn1_type_ITSWrappedCpmContainer[];

typedef struct ITSWrappedCpmContainers {
  ITSWrappedCpmContainer *tab;
  size_t count;
} ITSWrappedCpmContainers;

extern const ASN1CType asn1_type_ITSWrappedCpmContainers[];

typedef ITSWrappedCpmContainers ITSConstraintWrappedCpmContainers;

extern const ASN1CType asn1_type_ITSConstraintWrappedCpmContainers[];

typedef struct ITSCpmPayload {
  ITSCpmManagementContainer managementContainer;
  ITSConstraintWrappedCpmContainers cpmContainers;
} ITSCpmPayload;


extern const ASN1CType asn1_type_ITSCpmPayload[];

typedef struct ITSCollectivePerceptionMessage {
  ITSItsPduHeader header;
  ITSCpmPayload payload;
} ITSCollectivePerceptionMessage;


extern const ASN1CType asn1_type_ITSCollectivePerceptionMessage[];

typedef struct ITSCPM_CONTAINER_ID_AND_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Type;
} ITSCPM_CONTAINER_ID_AND_TYPE;


extern const ASN1CType asn1_type_ITSCPM_CONTAINER_ID_AND_TYPE[];

#define ITSoriginatingVehicleContainer 1

#define ITSoriginatingRsuContainer 2

#define ITSsensorInformationContainer 3

#define ITSperceptionRegionContainer 4

#define ITSperceivedObjectContainer 5

typedef struct ITSTrailerDataSet {
  ITSTrailerData *tab;
  size_t count;
} ITSTrailerDataSet;

extern const ASN1CType asn1_type_ITSTrailerDataSet[];

typedef struct ITSOriginatingVehicleContainer {
  ITSWgs84Angle orientationAngle;
  BOOL pitchAngle_option;
  ITSCartesianAngle pitchAngle;
  BOOL rollAngle_option;
  ITSCartesianAngle rollAngle;
  BOOL trailerDataSet_option;
  ITSTrailerDataSet trailerDataSet;
} ITSOriginatingVehicleContainer;


extern const ASN1CType asn1_type_ITSOriginatingVehicleContainer[];

typedef struct ITSOriginatingRsuContainer {
  BOOL mapReference_option;
  ITSMapReference mapReference;
} ITSOriginatingRsuContainer;


extern const ASN1CType asn1_type_ITSOriginatingRsuContainer[];

typedef struct ITSSensorInformation {
  ITSIdentifier1B sensorId;
  ITSSensorType sensorType;
  BOOL perceptionRegionShape_option;
  ITSShape perceptionRegionShape;
  BOOL perceptionRegionConfidence_option;
  ITSConfidenceLevel perceptionRegionConfidence;
  BOOL shadowingApplies;
} ITSSensorInformation;


extern const ASN1CType asn1_type_ITSSensorInformation[];

typedef struct ITSSensorInformationContainer {
  ITSSensorInformation *tab;
  size_t count;
} ITSSensorInformationContainer;

extern const ASN1CType asn1_type_ITSSensorInformationContainer[];

typedef struct ITSPerceivedObjectIds {
  ITSIdentifier2B *tab;
  size_t count;
} ITSPerceivedObjectIds;

extern const ASN1CType asn1_type_ITSPerceivedObjectIds[];

typedef struct ITSPerceptionRegion {
  ITSDeltaTimeMilliSecondSigned measurementDeltaTime;
  ITSConfidenceLevel perceptionRegionConfidence;
  ITSShape perceptionRegionShape;
  BOOL shadowingApplies;
  BOOL sensorIdList_option;
  ITSSequenceOfIdentifier1B sensorIdList;
  BOOL numberOfPerceivedObjects_option;
  ITSCardinalNumber1B numberOfPerceivedObjects;
  BOOL perceivedObjectIds_option;
  ITSPerceivedObjectIds perceivedObjectIds;
} ITSPerceptionRegion;


extern const ASN1CType asn1_type_ITSPerceptionRegion[];

typedef struct ITSPerceptionRegionContainer {
  ITSPerceptionRegion *tab;
  size_t count;
} ITSPerceptionRegionContainer;

extern const ASN1CType asn1_type_ITSPerceptionRegionContainer[];

typedef struct ITSPerceivedObjects {
  ITSPerceivedObject *tab;
  size_t count;
} ITSPerceivedObjects;

extern const ASN1CType asn1_type_ITSPerceivedObjects[];

typedef struct ITSPerceivedObjectContainer {
  ITSCardinalNumber1B numberOfPerceivedObjects;
  ITSPerceivedObjects perceivedObjects;
} ITSPerceivedObjectContainer;


extern const ASN1CType asn1_type_ITSPerceivedObjectContainer[];

typedef int ITSUInt16;

extern const ASN1CType asn1_type_ITSUInt16[];

typedef unsigned int ITSUInt32;

extern const ASN1CType asn1_type_ITSUInt32[];

typedef struct ITSAvmE2EProtection {
  ITSUInt16 length;
  ITSUInt16 rollingCounter;
  ITSUInt32 dataID;
  ITSUInt32 crc32;
} ITSAvmE2EProtection;


extern const ASN1CType asn1_type_ITSAvmE2EProtection[];

typedef ITSUInt16 ITSRollingCounter;

#define asn1_type_ITSRollingCounter asn1_type_ITSUInt16

typedef struct ITSMIMDataControlField_1 {
  ITSRollingCounter *tab;
  size_t count;
} ITSMIMDataControlField_1;

extern const ASN1CType asn1_type_ITSMIMDataControlField_1[];

typedef ITSUInt16 ITSProprietaryExtensionField;

#define asn1_type_ITSProprietaryExtensionField asn1_type_ITSUInt16

typedef struct ITSMIMDataControlField {
  BOOL checksum_option;
  ITSUInt32 checksum;
  BOOL mimGenerationTime_option;
  ITSTimestampIts mimGenerationTime;
  ITSMIMDataControlField_1 rollingCounterFromMvm;
  BOOL proprietaryExtensionField_option;
  ITSProprietaryExtensionField proprietaryExtensionField;
} ITSMIMDataControlField;


extern const ASN1CType asn1_type_ITSMIMDataControlField[];

typedef ASN1String ITSSessionMissionID;

extern const ASN1CType asn1_type_ITSSessionMissionID[];

typedef ASN1String ITSAVMVehicleID;

extern const ASN1CType asn1_type_ITSAVMVehicleID[];

typedef ASN1String ITSFacilityID;

extern const ASN1CType asn1_type_ITSFacilityID[];

typedef struct ITSSystemManagementData {
  BOOL sessionID_option;
  ITSSessionMissionID sessionID;
  BOOL missionID_option;
  ITSSessionMissionID missionID;
  BOOL vehicleID_option;
  ITSAVMVehicleID vehicleID;
  BOOL facilityID_option;
  ITSFacilityID facilityID;
} ITSSystemManagementData;


extern const ASN1CType asn1_type_ITSSystemManagementData[];

typedef ASN1Integer ITSUInt64;

extern const ASN1CType asn1_type_ITSUInt64[];

typedef int ITSUInt8;

extern const ASN1CType asn1_type_ITSUInt8[];

typedef enum ITSVidRequestCommandEnum {
  ITSVidRequestCommandEnum_generateNewCode,
  ITSVidRequestCommandEnum_generateNewCodeAndPrepareForFlashing,
  ITSVidRequestCommandEnum_flashing,
  ITSVidRequestCommandEnum_successful,
} ITSVidRequestCommandEnum;

extern const ASN1CType asn1_type_ITSVidRequestCommandEnum[];

typedef struct ITSBlinking {
  ITSUInt64 vidRoPublicKey;
  ITSUInt8 codeLength;
  ITSVidRequestCommandEnum blinkingCommand;
} ITSBlinking;


extern const ASN1CType asn1_type_ITSBlinking[];

typedef enum {
  ITSVidRequest_blinking,
} ITSVidRequest_choice;

typedef struct ITSVidRequest {
  ITSVidRequest_choice choice;
  union {
    ITSBlinking blinking;
  } u;
} ITSVidRequest;

extern const ASN1CType asn1_type_ITSVidRequest[];

typedef int ITSHighResCurvature;

enum {
  ITSHighResCurvature_outOfRangeNegative = -32767,
  ITSHighResCurvature_straight = 0,
  ITSHighResCurvature_outOfRangePositive = 32767,
  ITSHighResCurvature_unavailable = -32768,
};

extern const ASN1CType asn1_type_ITSHighResCurvature[];

typedef struct ITSDrivingPermission {
  ITSTimestampIts expirationTime;
  ITSVelocityComponentValue velocityMax;
  ITSHighResCurvature curvatureMin;
  ITSHighResCurvature curvatureMax;
  ITSUInt32 checksum;
} ITSDrivingPermission;


extern const ASN1CType asn1_type_ITSDrivingPermission[];

typedef struct ITSSafetyTimeSyncRequest {
  ITSUInt16 challenge;
  ITSUInt32 checksum;
} ITSSafetyTimeSyncRequest;


extern const ASN1CType asn1_type_ITSSafetyTimeSyncRequest[];

typedef enum ITSDriveCommandActionEnum {
  ITSDriveCommandActionEnum_sleep,
  ITSDriveCommandActionEnum_initialize,
  ITSDriveCommandActionEnum_wait,
  ITSDriveCommandActionEnum_drive,
  ITSDriveCommandActionEnum_terminate,
} ITSDriveCommandActionEnum;

extern const ASN1CType asn1_type_ITSDriveCommandActionEnum[];

typedef enum ITSTerminateReasonEnum {
  ITSTerminateReasonEnum_proceed,
  ITSTerminateReasonEnum_destinationReached,
  ITSTerminateReasonEnum_infrastructureError,
  ITSTerminateReasonEnum_vehicleError,
  ITSTerminateReasonEnum_backend,
  ITSTerminateReasonEnum_vehicleIdentificationError,
} ITSTerminateReasonEnum;

extern const ASN1CType asn1_type_ITSTerminateReasonEnum[];

typedef enum ITSGearEnum {
  ITSGearEnum_park,
  ITSGearEnum_backwards,
  ITSGearEnum_neutral,
  ITSGearEnum_forwards,
  ITSGearEnum_unknown,
} ITSGearEnum;

extern const ASN1CType asn1_type_ITSGearEnum[];

typedef enum ITSDirectionIndicatorEnum {
  ITSDirectionIndicatorEnum_off,
  ITSDirectionIndicatorEnum_right,
  ITSDirectionIndicatorEnum_left,
  ITSDirectionIndicatorEnum_both,
  ITSDirectionIndicatorEnum_unknown,
} ITSDirectionIndicatorEnum;

extern const ASN1CType asn1_type_ITSDirectionIndicatorEnum[];

typedef enum ITSParkingBrakeRequestEnum {
  ITSParkingBrakeRequestEnum_disengage,
  ITSParkingBrakeRequestEnum_engage,
} ITSParkingBrakeRequestEnum;

extern const ASN1CType asn1_type_ITSParkingBrakeRequestEnum[];

typedef enum ITSMotorSystemEnum {
  ITSMotorSystemEnum_off,
  ITSMotorSystemEnum_on,
  ITSMotorSystemEnum_unknown,
} ITSMotorSystemEnum;

extern const ASN1CType asn1_type_ITSMotorSystemEnum[];

typedef enum ITSEmergencyStopEnum {
  ITSEmergencyStopEnum_inactive,
  ITSEmergencyStopEnum_precharge,
  ITSEmergencyStopEnum_active,
  ITSEmergencyStopEnum_tempError,
  ITSEmergencyStopEnum_suspend,
} ITSEmergencyStopEnum;

extern const ASN1CType asn1_type_ITSEmergencyStopEnum[];

typedef enum ITSInterlockEnum {
  ITSInterlockEnum_none,
  ITSInterlockEnum_zonalInterlock,
  ITSInterlockEnum_globalStop,
} ITSInterlockEnum;

extern const ASN1CType asn1_type_ITSInterlockEnum[];

typedef enum ITSVehicleHornRequestEnum {
  ITSVehicleHornRequestEnum_none,
  ITSVehicleHornRequestEnum_singleHorn,
  ITSVehicleHornRequestEnum_doubleHorn,
  ITSVehicleHornRequestEnum_holdHorn,
} ITSVehicleHornRequestEnum;

extern const ASN1CType asn1_type_ITSVehicleHornRequestEnum[];

typedef struct ITSDriveCommand {
  ITSDriveCommandActionEnum driveCommandAction;
  ITSTerminateReasonEnum terminateReason;
  BOOL gearRequest_option;
  ITSGearEnum gearRequest;
  BOOL directionIndicatorRequest_option;
  ITSDirectionIndicatorEnum directionIndicatorRequest;
  BOOL parkingBrakeRequest_option;
  ITSParkingBrakeRequestEnum parkingBrakeRequest;
  BOOL motorSystemRequest_option;
  ITSMotorSystemEnum motorSystemRequest;
  BOOL emergencyStopRequest_option;
  ITSEmergencyStopEnum emergencyStopRequest;
  BOOL interlockRequest_option;
  ITSInterlockEnum interlockRequest;
  BOOL hornRequest_option;
  ITSVehicleHornRequestEnum hornRequest;
} ITSDriveCommand;


extern const ASN1CType asn1_type_ITSDriveCommand[];

typedef int ITSCentimetre;

enum {
  ITSCentimetre_negativeOutOfRange = -524287,
  ITSCentimetre_positiveOutOfRange = 524287,
  ITSCentimetre_unavailable = -524288,
};

extern const ASN1CType asn1_type_ITSCentimetre[];

typedef int ITSPsi;

enum {
  ITSPsi_xDirection = 0,
  ITSPsi_outOfRange = 62832,
  ITSPsi_unavailable = 62833,
};

extern const ASN1CType asn1_type_ITSPsi[];

typedef struct ITSPose {
  ITSCentimetre x;
  ITSCentimetre y;
  ITSPsi psi;
} ITSPose;


extern const ASN1CType asn1_type_ITSPose[];

typedef struct ITSDetectedVehiclePose {
  ITSPose detectedPose;
  ITSTimestampIts poseMeasurementTime;
} ITSDetectedVehiclePose;


extern const ASN1CType asn1_type_ITSDetectedVehiclePose[];

typedef ITSUInt16 ITSWaypointIndex;

#define asn1_type_ITSWaypointIndex asn1_type_ITSUInt16

typedef struct ITSWayPoint {
  BOOL index_option;
  ITSWaypointIndex index;
  ITSPose wayPointPose;
  ITSVelocityComponentValue velocity;
  ITSHighResCurvature curvature;
  BOOL pitchAngle_option;
  ITSCartesianAngleValue pitchAngle;
} ITSWayPoint;


extern const ASN1CType asn1_type_ITSWayPoint[];

typedef struct ITSPathSnippet {
  ITSWayPoint *tab;
  size_t count;
} ITSPathSnippet;

extern const ASN1CType asn1_type_ITSPathSnippet[];

typedef struct ITSPathControl {
  BOOL pathSnippet_option;
  ITSPathSnippet pathSnippet;
  ITSCentimetre clearedDistanceOnPath;
  BOOL situationalVelocityLimit_option;
  ITSVelocityComponentValue situationalVelocityLimit;
} ITSPathControl;


extern const ASN1CType asn1_type_ITSPathControl[];

typedef enum ITSDriveDirectionEnum {
  ITSDriveDirectionEnum_forwards,
  ITSDriveDirectionEnum_backwards,
} ITSDriveDirectionEnum;

extern const ASN1CType asn1_type_ITSDriveDirectionEnum[];

typedef ITSLongitudinalAccelerationValue ITSControlAcceleration;

extern const ASN1CType asn1_type_ITSControlAcceleration[];

typedef struct ITSControlVelocity {
  ITSVelocityComponentValue velocity;
  BOOL distanceToStop_option;
  ITSCentimetre distanceToStop;
} ITSControlVelocity;


extern const ASN1CType asn1_type_ITSControlVelocity[];

typedef enum {
  ITSControlParameter_controlAcceleration,
  ITSControlParameter_controlVelocity,
} ITSControlParameter_choice;

typedef struct ITSControlParameter {
  ITSControlParameter_choice choice;
  union {
    ITSControlAcceleration controlAcceleration;
    ITSControlVelocity controlVelocity;
  } u;
} ITSControlParameter;

extern const ASN1CType asn1_type_ITSControlParameter[];

typedef struct ITSControlPoint {
  ITSHighResCurvature curvature;
  ITSControlParameter controlParameter;
} ITSControlPoint;


extern const ASN1CType asn1_type_ITSControlPoint[];

typedef struct ITSControlTrajectory {
  ITSControlPoint *tab;
  size_t count;
} ITSControlTrajectory;

extern const ASN1CType asn1_type_ITSControlTrajectory[];

typedef struct ITSStatePoint {
  ITSPose statePose;
  ITSVelocityComponentValue velocity;
} ITSStatePoint;


extern const ASN1CType asn1_type_ITSStatePoint[];

typedef struct ITSStateTrajectory {
  ITSStatePoint *tab;
  size_t count;
} ITSStateTrajectory;

extern const ASN1CType asn1_type_ITSStateTrajectory[];

typedef struct ITSTrajectoryControl {
  ITSTimestampIts timeReference;
  BOOL driveDirection_option;
  ITSDriveDirectionEnum driveDirection;
  ITSControlTrajectory controlTrajectory;
  BOOL stateTrajectory_option;
  ITSStateTrajectory stateTrajectory;
} ITSTrajectoryControl;


extern const ASN1CType asn1_type_ITSTrajectoryControl[];

typedef enum {
  ITSControlInterface_pathControl,
  ITSControlInterface_trajectoryControl,
} ITSControlInterface_choice;

typedef struct ITSControlInterface {
  ITSControlInterface_choice choice;
  union {
    ITSPathControl pathControl;
    ITSTrajectoryControl trajectoryControl;
  } u;
} ITSControlInterface;

extern const ASN1CType asn1_type_ITSControlInterface[];

typedef struct ITSMim {
  BOOL mimDataControlField_option;
  ITSMIMDataControlField mimDataControlField;
  BOOL systemManagementData_option;
  ITSSystemManagementData systemManagementData;
  BOOL vehicleIdentification_option;
  ITSVidRequest vehicleIdentification;
  BOOL drivingPermission_option;
  ITSDrivingPermission drivingPermission;
  BOOL safetyTimeSyncRequest_option;
  ITSSafetyTimeSyncRequest safetyTimeSyncRequest;
  BOOL driveCommand_option;
  ITSDriveCommand driveCommand;
  BOOL detectedVehiclePose_option;
  ITSDetectedVehiclePose detectedVehiclePose;
  BOOL controlInterface_option;
  ITSControlInterface controlInterface;
} ITSMim;


extern const ASN1CType asn1_type_ITSMim[];

typedef struct ITSMIM_1 {
  ITSMim *tab;
  size_t count;
} ITSMIM_1;

extern const ASN1CType asn1_type_ITSMIM_1[];

typedef struct ITSMIM {
  ITSItsPduHeader header;
  ITSAvmE2EProtection e2eProtection;
  ITSMIM_1 mims;
} ITSMIM;


extern const ASN1CType asn1_type_ITSMIM[];

typedef struct ITSMVMDataControlField_1 {
  ITSRollingCounter *tab;
  size_t count;
} ITSMVMDataControlField_1;

extern const ASN1CType asn1_type_ITSMVMDataControlField_1[];

typedef struct ITSMVMDataControlField {
  BOOL mvmGenerationTime_option;
  ITSTimestampIts mvmGenerationTime;
  ITSMVMDataControlField_1 rollingCounterFromMim;
  BOOL proprietaryExtensionField_option;
  ITSProprietaryExtensionField proprietaryExtensionField;
} ITSMVMDataControlField;


extern const ASN1CType asn1_type_ITSMVMDataControlField[];

typedef enum ITSOperationModeEnum {
  ITSOperationModeEnum_unknown,
  ITSOperationModeEnum_initializing,
  ITSOperationModeEnum_prepared,
  ITSOperationModeEnum_driving,
  ITSOperationModeEnum_terminating,
  ITSOperationModeEnum_suspend,
  ITSOperationModeEnum_tempError,
  ITSOperationModeEnum_humanInControl,
  ITSOperationModeEnum_stationHold,
} ITSOperationModeEnum;

extern const ASN1CType asn1_type_ITSOperationModeEnum[];

typedef enum ITSParkingBrakeStateEnum {
  ITSParkingBrakeStateEnum_unknown,
  ITSParkingBrakeStateEnum_engaging,
  ITSParkingBrakeStateEnum_engaged,
  ITSParkingBrakeStateEnum_disengaging,
  ITSParkingBrakeStateEnum_disengaged,
} ITSParkingBrakeStateEnum;

extern const ASN1CType asn1_type_ITSParkingBrakeStateEnum[];

typedef struct ITSVehicleState {
  BOOL vehicleStateGenerationTime_option;
  ITSTimestampIts vehicleStateGenerationTime;
  ITSOperationModeEnum operationMode;
  ITSGearEnum gearState;
  ITSDirectionIndicatorEnum directionIndicatorState;
  ITSParkingBrakeStateEnum parkingBrakeState;
  ITSMotorSystemEnum motorSystemState;
  ITSVelocityComponentValue currentVelocity;
  ITSHighResCurvature currentCurvature;
  BOOL secureStandstill;
  BOOL idxLastWayPoint_option;
  ITSWaypointIndex idxLastWayPoint;
  BOOL localizedPose_option;
  ITSPose localizedPose;
} ITSVehicleState;


extern const ASN1CType asn1_type_ITSVehicleState[];

typedef enum ITSVidVehicleStateEnum {
  ITSVidVehicleStateEnum_undefined,
  ITSVidVehicleStateEnum_ready,
  ITSVidVehicleStateEnum_lightFlashingInProgress,
  ITSVidVehicleStateEnum_lightFlashingCompleted,
  ITSVidVehicleStateEnum_lightFlashingFailed,
  ITSVidVehicleStateEnum_authorized,
} ITSVidVehicleStateEnum;

extern const ASN1CType asn1_type_ITSVidVehicleStateEnum[];

typedef struct ITSVidResponse {
  ITSVidVehicleStateEnum vidVehicleState;
  ITSUInt64 vidVehiclePublicKey;
} ITSVidResponse;


extern const ASN1CType asn1_type_ITSVidResponse[];

typedef struct ITSSafetyTimeSyncResponse {
  ITSUInt16 challenge;
  ITSTimestampIts vehicleSafetyClockReceiveTimestamp;
  ITSTimestampIts vehicleSafetyClockTransmitTimestamp;
  ITSUInt32 checksum;
} ITSSafetyTimeSyncResponse;


extern const ASN1CType asn1_type_ITSSafetyTimeSyncResponse[];

typedef struct ITSSafeVehicleTypeConfirmation {
  ASN1String vehicleType;
  ASN1String safetyProfile;
  ITSUInt32 checksum;
} ITSSafeVehicleTypeConfirmation;


extern const ASN1CType asn1_type_ITSSafeVehicleTypeConfirmation[];

typedef enum ITSVehCodeEnum {
  ITSVehCodeEnum_unspecified,
  ITSVehCodeEnum_pathNotDriveable,
  ITSVehCodeEnum_onboardVehicleFault,
  ITSVehCodeEnum_communicationFault,
  ITSVehCodeEnum_vehicleEgressFault,
} ITSVehCodeEnum;

extern const ASN1CType asn1_type_ITSVehCodeEnum[];

typedef ASN1String ITSDescription;

extern const ASN1CType asn1_type_ITSDescription[];

typedef struct ITSVehicleError {
  ITSTimestampIts time;
  ITSVehCodeEnum vehCode;
  ITSUInt8 customCode;
  BOOL description_option;
  ITSDescription description;
} ITSVehicleError;


extern const ASN1CType asn1_type_ITSVehicleError[];

typedef int ITSInt16;

extern const ASN1CType asn1_type_ITSInt16[];

typedef ITSInt16 ITSMillisecond16;

extern const ASN1CType asn1_type_ITSMillisecond16[];

typedef enum ITSSafetyViolationsEnum {
  ITSSafetyViolationsEnum_noViolation,
  ITSSafetyViolationsEnum_noDrivingPermissionReceived,
  ITSSafetyViolationsEnum_lastDrivingPermissionTooOld,
  ITSSafetyViolationsEnum_crcViolationClockSyncRequest,
  ITSSafetyViolationsEnum_crcViolationDrivingPermission,
  ITSSafetyViolationsEnum_expirationTimeViolation,
  ITSSafetyViolationsEnum_drivingDirectionMismatch,
  ITSSafetyViolationsEnum_velocityViolation,
  ITSSafetyViolationsEnum_curvatureMinViolation,
  ITSSafetyViolationsEnum_curvatureMaxViolation,
  ITSSafetyViolationsEnum_expirationTimeTooHigh,
  ITSSafetyViolationsEnum_monitoring,
} ITSSafetyViolationsEnum;

extern const ASN1CType asn1_type_ITSSafetyViolationsEnum[];

typedef struct ITSSafetyViolationsContainer {
  ITSSafetyViolationsEnum *tab;
  size_t count;
} ITSSafetyViolationsContainer;

extern const ASN1CType asn1_type_ITSSafetyViolationsContainer[];

typedef struct ITSVehicleSafetyFeedbackContainer {
  ITSMillisecond16 remainingTimeToStartBraking;
  ITSSafetyViolationsContainer safetyViolations;
  ITSTimestampIts currentVehicleSafetyClockTime;
} ITSVehicleSafetyFeedbackContainer;


extern const ASN1CType asn1_type_ITSVehicleSafetyFeedbackContainer[];

typedef struct ITSVehicleSafetyFeedback {
  ITSVehicleSafetyFeedbackContainer *tab;
  size_t count;
} ITSVehicleSafetyFeedback;

extern const ASN1CType asn1_type_ITSVehicleSafetyFeedback[];

typedef enum ITSBasicVehicleClassEnum {
  ITSBasicVehicleClassEnum_none,
  ITSBasicVehicleClassEnum_unknown,
  ITSBasicVehicleClassEnum_special,
  ITSBasicVehicleClassEnum_moto,
  ITSBasicVehicleClassEnum_car,
  ITSBasicVehicleClassEnum_carOther,
  ITSBasicVehicleClassEnum_bus,
  ITSBasicVehicleClassEnum_axleCnt2,
  ITSBasicVehicleClassEnum_axleCnt3,
  ITSBasicVehicleClassEnum_axleCnt4,
  ITSBasicVehicleClassEnum_axleCnt4Trailer,
  ITSBasicVehicleClassEnum_axleCnt5Trailer,
  ITSBasicVehicleClassEnum_axleCnt6Trailer,
  ITSBasicVehicleClassEnum_axleCnt5MultiTrailer,
  ITSBasicVehicleClassEnum_axleCnt6MultiTrailer,
  ITSBasicVehicleClassEnum_axleCnt7MultiTrailer,
} ITSBasicVehicleClassEnum;

extern const ASN1CType asn1_type_ITSBasicVehicleClassEnum[];

typedef int ITSRadPerSecond;

enum {
  ITSRadPerSecond_negativeOutOfRange = -32766,
  ITSRadPerSecond_positiveOutOfRange = 32766,
  ITSRadPerSecond_unavailable = -32767,
};

extern const ASN1CType asn1_type_ITSRadPerSecond[];

typedef struct ITSVehicleProperties {
  ITSBasicVehicleClassEnum basicVehicleClass;
  ITSCentimetre vehicleLength;
  ITSCentimetre vehicleWheelbase;
  ITSCentimetre vehicleRearOverhang;
  ITSCentimetre vehicleWidth;
  ITSCentimetre vehicleTireWidth;
  ITSCentimetre vehicleTrackWidth;
  ITSVehicleMass vehicleMass;
  ITSVelocityComponentValue vehicleSpeedLimit;
  ITSHighResCurvature vehicleCuvatureLimit;
  ITSRadPerSecond vehicleMaxAngularSteeringRate;
} ITSVehicleProperties;


extern const ASN1CType asn1_type_ITSVehicleProperties[];

typedef struct ITSMvm {
  BOOL mvmDataControlField_option;
  ITSMVMDataControlField mvmDataControlField;
  BOOL systemManagementData_option;
  ITSSystemManagementData systemManagementData;
  BOOL vehicleState_option;
  ITSVehicleState vehicleState;
  BOOL vidResponse_option;
  ITSVidResponse vidResponse;
  BOOL safetyTimeSyncResponse_option;
  ITSSafetyTimeSyncResponse safetyTimeSyncResponse;
  BOOL safeVehicleTypeConfirmation_option;
  ITSSafeVehicleTypeConfirmation safeVehicleTypeConfirmation;
  BOOL vehicleError_option;
  ITSVehicleError vehicleError;
  BOOL vehicleSafetyFeedback_option;
  ITSVehicleSafetyFeedback vehicleSafetyFeedback;
  BOOL vehicleProperties_option;
  ITSVehicleProperties vehicleProperties;
} ITSMvm;


extern const ASN1CType asn1_type_ITSMvm[];

typedef struct ITSMVM {
  ITSItsPduHeader header;
  ITSAvmE2EProtection e2eProtection;
  ITSMvm mvm;
} ITSMVM;


extern const ASN1CType asn1_type_ITSMVM[];

typedef ITSItsPduHeader ITSItsPduHeaderVam;

extern const ASN1CType asn1_type_ITSItsPduHeaderVam[];

typedef struct ITSVruHighFrequencyContainer {
  ITSWgs84Angle heading;
  ITSSpeed speed;
  ITSLongitudinalAcceleration longitudinalAcceleration;
  BOOL curvature_option;
  ITSCurvature curvature;
  BOOL curvatureCalculationMode_option;
  ITSCurvatureCalculationMode curvatureCalculationMode;
  BOOL yawRate_option;
  ITSYawRate yawRate;
  BOOL lateralAcceleration_option;
  ITSLateralAcceleration lateralAcceleration;
  BOOL verticalAcceleration_option;
  ITSVerticalAcceleration verticalAcceleration;
  BOOL vruLanePosition_option;
  ITSGeneralizedLanePosition vruLanePosition;
  BOOL environment_option;
  ITSVruEnvironment environment;
  BOOL movementControl_option;
  ITSVruMovementControl movementControl;
  BOOL orientation_option;
  ITSWgs84Angle orientation;
  BOOL rollAngle_option;
  ITSCartesianAngle rollAngle;
  BOOL deviceUsage_option;
  ITSVruDeviceUsage deviceUsage;
} ITSVruHighFrequencyContainer;


extern const ASN1CType asn1_type_ITSVruHighFrequencyContainer[];

typedef struct ITSVruLowFrequencyContainer {
  ITSVruProfileAndSubprofile profileAndSubprofile;
  BOOL sizeClass_option;
  ITSVruSizeClass sizeClass;
  BOOL exteriorLights_option;
  ITSVruExteriorLights exteriorLights;
} ITSVruLowFrequencyContainer;


extern const ASN1CType asn1_type_ITSVruLowFrequencyContainer[];

typedef struct ITSVruClusterInformationContainer {
  ITSVruClusterInformation vruClusterInformation;
} ITSVruClusterInformationContainer;


extern const ASN1CType asn1_type_ITSVruClusterInformationContainer[];

typedef struct ITSVruClusterOperationContainer {
  BOOL clusterJoinInfo_option;
  ITSClusterJoinInfo clusterJoinInfo;
  BOOL clusterLeaveInfo_option;
  ITSClusterLeaveInfo clusterLeaveInfo;
  BOOL clusterBreakupInfo_option;
  ITSClusterBreakupInfo clusterBreakupInfo;
  BOOL clusterIdChangeTimeInfo_option;
  ITSDeltaTimeQuarterSecond clusterIdChangeTimeInfo;
} ITSVruClusterOperationContainer;


extern const ASN1CType asn1_type_ITSVruClusterOperationContainer[];

typedef struct ITSVruMotionPredictionContainer {
  BOOL pathHistory_option;
  ITSPathHistory pathHistory;
  BOOL pathPrediction_option;
  ITSPathPredicted pathPrediction;
  BOOL safeDistance_option;
  ITSSequenceOfSafeDistanceIndication safeDistance;
  BOOL trajectoryInterceptionIndication_option;
  ITSSequenceOfTrajectoryInterceptionIndication trajectoryInterceptionIndication;
  BOOL accelerationChangeIndication_option;
  ITSAccelerationChangeIndication accelerationChangeIndication;
  BOOL headingChangeIndication_option;
  ITSHeadingChangeIndication headingChangeIndication;
  BOOL stabilityChangeIndication_option;
  ITSStabilityChangeIndication stabilityChangeIndication;
} ITSVruMotionPredictionContainer;


extern const ASN1CType asn1_type_ITSVruMotionPredictionContainer[];

typedef struct ITSVamParameters {
  ITSBasicContainer basicContainer;
  ITSVruHighFrequencyContainer vruHighFrequencyContainer;
  BOOL vruLowFrequencyContainer_option;
  ITSVruLowFrequencyContainer vruLowFrequencyContainer;
  BOOL vruClusterInformationContainer_option;
  ITSVruClusterInformationContainer vruClusterInformationContainer;
  BOOL vruClusterOperationContainer_option;
  ITSVruClusterOperationContainer vruClusterOperationContainer;
  BOOL vruMotionPredictionContainer_option;
  ITSVruMotionPredictionContainer vruMotionPredictionContainer;
} ITSVamParameters;


extern const ASN1CType asn1_type_ITSVamParameters[];

typedef struct ITSVruAwareness {
  ITSGenerationDeltaTime generationDeltaTime;
  ITSVamParameters vamParameters;
} ITSVruAwareness;


extern const ASN1CType asn1_type_ITSVruAwareness[];

typedef struct ITSVAM {
  ITSItsPduHeaderVam header;
  ITSVruAwareness vam;
} ITSVAM;


extern const ASN1CType asn1_type_ITSVAM[];

typedef enum ITSAckNackIndication {
  ITSAckNackIndication_aCK,
  ITSAckNackIndication_nACK,
} ITSAckNackIndication;

extern const ASN1CType asn1_type_ITSAckNackIndication[];

typedef struct ITSMediaTypeOfMDUs {
  BOOL startingMDU_option;
  ITSSequenceNumber startingMDU;
  BOOL endingMDU_option;
  ITSSequenceNumber endingMDU;
  ASN1String mediaType;
} ITSMediaTypeOfMDUs;


extern const ASN1CType asn1_type_ITSMediaTypeOfMDUs[];

typedef struct ITSMCDM_ManagementContainer_1 {
  ITSMediaTypeOfMDUs *tab;
  size_t count;
} ITSMCDM_ManagementContainer_1;

extern const ASN1CType asn1_type_ITSMCDM_ManagementContainer_1[];

typedef struct ITSURLOfMDUs {
  BOOL startingMDU_option;
  ITSSequenceNumber startingMDU;
  BOOL endingMDU_option;
  ITSSequenceNumber endingMDU;
  ASN1String url;
} ITSURLOfMDUs;


extern const ASN1CType asn1_type_ITSURLOfMDUs[];

typedef struct ITSMCDM_ManagementContainer_2 {
  ITSURLOfMDUs *tab;
  size_t count;
} ITSMCDM_ManagementContainer_2;

extern const ASN1CType asn1_type_ITSMCDM_ManagementContainer_2[];

typedef struct ITSMCDM_ManagementContainer {
  ITSActionID actionID;
  BOOL request_option;
  ITSRequestResponseIndication request;
  BOOL ack_option;
  ITSAckNackIndication ack;
  BOOL detectionTime_option;
  ITSTimestampIts detectionTime;
  ITSTimestampIts referenceTime;
  BOOL linkedDenm_option;
  ITSActionID linkedDenm;
  BOOL validityDuration_option;
  ITSValidityDuration validityDuration;
  BOOL stationType_option;
  ITSStationType stationType;
  unsigned int numberOfMDUs;
  unsigned int numberOfPDUs;
  unsigned int pduSequenceNumber;
  BOOL mediaTypes_option;
  ITSMCDM_ManagementContainer_1 mediaTypes;
  BOOL urls_option;
  ITSMCDM_ManagementContainer_2 urls;
  BOOL realTime;
  BOOL size_option;
  unsigned int size;
} ITSMCDM_ManagementContainer;


extern const ASN1CType asn1_type_ITSMCDM_ManagementContainer[];

typedef struct ITSMCDM_SituationContainer {
  ITSCauseCode eventType;
  BOOL linkedCause_option;
  ITSCauseCode linkedCause;
  BOOL authorizedPercentageLoss_option;
  int authorizedPercentageLoss;
  ITSInformationQuality informationQuality;
} ITSMCDM_SituationContainer;


extern const ASN1CType asn1_type_ITSMCDM_SituationContainer[];

typedef struct ITSMCDM_LocationContainer {
  ITSReferencePosition eventPosition;
} ITSMCDM_LocationContainer;


extern const ASN1CType asn1_type_ITSMCDM_LocationContainer[];

typedef struct ITSMCDM_ApplicationContainer {
  uint8_t dummy_field;
} ITSMCDM_ApplicationContainer;


extern const ASN1CType asn1_type_ITSMCDM_ApplicationContainer[];

typedef enum {
  ITSMultimediaDataUnit_mediaContentUTF8,
  ITSMultimediaDataUnit_mediaContentOctet,
} ITSMultimediaDataUnit_choice;

typedef struct ITSMultimediaDataUnit {
  ITSMultimediaDataUnit_choice choice;
  union {
    ASN1String mediaContentUTF8;
    ASN1String mediaContentOctet;
  } u;
} ITSMultimediaDataUnit;

extern const ASN1CType asn1_type_ITSMultimediaDataUnit[];

typedef struct ITSMCDM_MultimediaContainer {
  ITSMultimediaDataUnit *tab;
  size_t count;
} ITSMCDM_MultimediaContainer;

extern const ASN1CType asn1_type_ITSMCDM_MultimediaContainer[];

typedef struct ITSMcdmInfo {
  ITSMCDM_ManagementContainer management;
  BOOL situation_option;
  ITSMCDM_SituationContainer situation;
  BOOL location_option;
  ITSMCDM_LocationContainer location;
  BOOL application_option;
  ITSMCDM_ApplicationContainer application;
  BOOL multimedia_option;
  ITSMCDM_MultimediaContainer multimedia;
} ITSMcdmInfo;


extern const ASN1CType asn1_type_ITSMcdmInfo[];

typedef struct ITSMcdmPdu {
  ITSItsPduHeader header;
  ITSMcdmInfo mcdmInfo;
} ITSMcdmPdu;


extern const ASN1CType asn1_type_ITSMcdmPdu[];

typedef struct ITSPlatoonBasic {
  ITSStationType stationType;
  ITSReferencePosition referencePosition;
  ITSHeading heading;
  ITSGenerationDeltaTime generationDeltaTime;
} ITSPlatoonBasic;


extern const ASN1CType asn1_type_ITSPlatoonBasic[];

typedef enum ITSSymmAlgorithm {
  ITSSymmAlgorithm_aes128Ccm,
} ITSSymmAlgorithm;

extern const ASN1CType asn1_type_ITSSymmAlgorithm[];

typedef struct ITSEccP256CurvePoint_1 {
  ASN1String x;
  ASN1String y;
} ITSEccP256CurvePoint_1;


extern const ASN1CType asn1_type_ITSEccP256CurvePoint_1[];

typedef enum {
  ITSEccP256CurvePoint_x_only,
  ITSEccP256CurvePoint_fill,
  ITSEccP256CurvePoint_compressed_y_0,
  ITSEccP256CurvePoint_compressed_y_1,
  ITSEccP256CurvePoint_uncompressedP256,
} ITSEccP256CurvePoint_choice;

typedef struct ITSEccP256CurvePoint {
  ITSEccP256CurvePoint_choice choice;
  union {
    ASN1String x_only;
    ASN1String compressed_y_0;
    ASN1String compressed_y_1;
    ITSEccP256CurvePoint_1 uncompressedP256;
  } u;
} ITSEccP256CurvePoint;

extern const ASN1CType asn1_type_ITSEccP256CurvePoint[];

typedef enum {
  ITSBasePublicEncryptionKey_eciesNistP256,
  ITSBasePublicEncryptionKey_eciesBrainpoolP256r1,
} ITSBasePublicEncryptionKey_choice;

typedef struct ITSBasePublicEncryptionKey {
  ITSBasePublicEncryptionKey_choice choice;
  union {
    ITSEccP256CurvePoint eciesNistP256;
    ITSEccP256CurvePoint eciesBrainpoolP256r1;
  } u;
} ITSBasePublicEncryptionKey;

extern const ASN1CType asn1_type_ITSBasePublicEncryptionKey[];

typedef struct ITSPublicEncryptionKey {
  ITSSymmAlgorithm supportedSymmAlg;
  ITSBasePublicEncryptionKey publicKey;
} ITSPublicEncryptionKey;


extern const ASN1CType asn1_type_ITSPublicEncryptionKey[];

typedef int ITSPowerToMassRatio;

enum {
  ITSPowerToMassRatio_oneWperKg = 1,
  ITSPowerToMassRatio_outOfRange = 255,
  ITSPowerToMassRatio_unavailable = 256,
};

extern const ASN1CType asn1_type_ITSPowerToMassRatio[];

typedef int ITSLongitudinalHdAccelerationValue;

enum {
  ITSLongitudinalHdAccelerationValue_pointZeroOneMeterPerSecSquaredForward = 1,
  ITSLongitudinalHdAccelerationValue_pointZeroOneMeterPerSecSquaredBackward = -1,
  ITSLongitudinalHdAccelerationValue_unavailable = 1610,
};

extern const ASN1CType asn1_type_ITSLongitudinalHdAccelerationValue[];

typedef struct ITSVehicleConfiguration {
  ITSVehicleLength vehicleLength;
  ITSPowerToMassRatio powerToMassRatio;
  ITSLongitudinalHdAccelerationValue brakeCapacity;
} ITSVehicleConfiguration;


extern const ASN1CType asn1_type_ITSVehicleConfiguration[];

typedef enum ITSPlatooningLevel {
  ITSPlatooningLevel_platooning_level_A,
  ITSPlatooningLevel_platooning_level_B,
  ITSPlatooningLevel_platooning_level_C,
} ITSPlatooningLevel;

extern const ASN1CType asn1_type_ITSPlatooningLevel[];

typedef struct ITSJoinRequest {
  ITSStationID receiver;
  int numberOfTrucks;
  ITSPublicEncryptionKey responseKey;
  ITSVehicleConfiguration vehicleConfiguration;
  ITSPlatooningLevel platooningLevel;
} ITSJoinRequest;


extern const ASN1CType asn1_type_ITSJoinRequest[];

typedef enum {
  ITSSymmetricEncryptionKey_aes128Ccm,
} ITSSymmetricEncryptionKey_choice;

typedef struct ITSSymmetricEncryptionKey {
  ITSSymmetricEncryptionKey_choice choice;
  union {
    ASN1String aes128Ccm;
  } u;
} ITSSymmetricEncryptionKey;

extern const ASN1CType asn1_type_ITSSymmetricEncryptionKey[];

typedef enum ITSFrequencyChannel {
  ITSFrequencyChannel_cch,
  ITSFrequencyChannel_sch1,
  ITSFrequencyChannel_sch2,
  ITSFrequencyChannel_sch3,
  ITSFrequencyChannel_sch4,
  ITSFrequencyChannel_sch5,
  ITSFrequencyChannel_sch6,
} ITSFrequencyChannel;

extern const ASN1CType asn1_type_ITSFrequencyChannel[];

typedef ASN1String ITSPlatoonID;

extern const ASN1CType asn1_type_ITSPlatoonID[];

typedef int ITSPlatoonPosition;

enum {
  ITSPlatoonPosition_leader = 1,
  ITSPlatoonPosition_firstFollower = 2,
  ITSPlatoonPosition_unavailable = 32,
};

extern const ASN1CType asn1_type_ITSPlatoonPosition[];

typedef struct ITSJoinResponseInfo {
  ITSSymmetricEncryptionKey groupKey;
  ITSSymmetricEncryptionKey participantKey;
  ITSFrequencyChannel frequencyChannel;
  ITSPlatoonID platoonId;
  int maxNrOfVehiclesInPlatoon;
  ITSPlatoonPosition joiningAtPosition;
} ITSJoinResponseInfo;


extern const ASN1CType asn1_type_ITSJoinResponseInfo[];

typedef enum {
  ITSJoinResponse_1_notAllowedToJoin,
  ITSJoinResponse_1_allowedToJoin,
} ITSJoinResponse_1_choice;

typedef struct ITSJoinResponse_1 {
  ITSJoinResponse_1_choice choice;
  union {
    ITSJoinResponseInfo allowedToJoin;
  } u;
} ITSJoinResponse_1;

extern const ASN1CType asn1_type_ITSJoinResponse_1[];

typedef struct ITSJoinResponse {
  ITSStationID respondingTo;
  ITSJoinResponse_1 joinResponseStatus;
} ITSJoinResponse;


extern const ASN1CType asn1_type_ITSJoinResponse[];

typedef struct ITSKeyUpdate {
  ITSSymmetricEncryptionKey groupKey;
  ITSSymmetricEncryptionKey participantKey;
  ITSPlatoonID platoonId;
  ITSPlatoonPosition updatedPosition;
} ITSKeyUpdate;


extern const ASN1CType asn1_type_ITSKeyUpdate[];

typedef enum {
  ITSPlatoonManagementContainer_joinRequest,
  ITSPlatoonManagementContainer_joinResponse,
  ITSPlatoonManagementContainer_keyUpdate,
} ITSPlatoonManagementContainer_choice;

typedef struct ITSPlatoonManagementContainer {
  ITSPlatoonManagementContainer_choice choice;
  union {
    ITSJoinRequest joinRequest;
    ITSJoinResponse joinResponse;
    ITSKeyUpdate keyUpdate;
  } u;
} ITSPlatoonManagementContainer;

extern const ASN1CType asn1_type_ITSPlatoonManagementContainer[];

typedef struct ITSPMM {
  ITSItsPduHeader header;
  ITSPlatoonBasic basic;
  ITSPlatoonManagementContainer platoonManagementContainer;
} ITSPMM;


extern const ASN1CType asn1_type_ITSPMM[];

typedef ASN1String ITSPlatoonVehicleID;

extern const ASN1CType asn1_type_ITSPlatoonVehicleID[];

typedef int ITSHdAccelerationConfidence;

enum {
  ITSHdAccelerationConfidence_pointZeroOneMeterPerSecSquared = 1,
  ITSHdAccelerationConfidence_outOfRange = 1022,
  ITSHdAccelerationConfidence_unavailable = 1023,
};

extern const ASN1CType asn1_type_ITSHdAccelerationConfidence[];

typedef struct ITSLongitudinalHdAcceleration {
  ITSLongitudinalHdAccelerationValue longitudinalAccelerationValue;
  ITSHdAccelerationConfidence longitudinalAccelerationConfidence;
} ITSLongitudinalHdAcceleration;


extern const ASN1CType asn1_type_ITSLongitudinalHdAcceleration[];

typedef int ITSRoadInclination;

enum {
  ITSRoadInclination_pointOnePercentUp = 1,
  ITSRoadInclination_pointOnePercentDown = -1,
  ITSRoadInclination_unavailable = 32,
};

extern const ASN1CType asn1_type_ITSRoadInclination[];

typedef int ITSGrossCombinationVehicleWeight;

enum {
  ITSGrossCombinationVehicleWeight_tenKg = 1,
  ITSGrossCombinationVehicleWeight_outOfRange = 32766,
  ITSGrossCombinationVehicleWeight_unavailable = 32767,
};

extern const ASN1CType asn1_type_ITSGrossCombinationVehicleWeight[];

typedef int ITSDistanceToVehicleAhead;

enum {
  ITSDistanceToVehicleAhead_oneCm = 1,
  ITSDistanceToVehicleAhead_unavailable = 16383,
};

extern const ASN1CType asn1_type_ITSDistanceToVehicleAhead[];

typedef struct ITSVehicleAhead {
  ITSDistanceToVehicleAhead distance;
  ITSSpeedValue speed;
} ITSVehicleAhead;


extern const ASN1CType asn1_type_ITSVehicleAhead[];

typedef struct ITSLongitudinalControlContainer {
  ITSLongitudinalHdAcceleration currentLongitudinalAcceleration;
  ITSLongitudinalHdAccelerationValue predictedLongitudinalAcceleration;
  ITSSpeed longitudinalSpeed;
  ITSRoadInclination roadInclination;
  ITSGrossCombinationVehicleWeight grossCombinationVehicleWeight;
  ITSSpeed referenceSpeed;
  BOOL intruderAhead_option;
  ITSVehicleAhead intruderAhead;
  BOOL vehicleAhead_option;
  ITSVehicleAhead vehicleAhead;
} ITSLongitudinalControlContainer;


extern const ASN1CType asn1_type_ITSLongitudinalControlContainer[];

typedef int ITSLaneMarkingDistance;

enum {
  ITSLaneMarkingDistance_oneCm = 1,
  ITSLaneMarkingDistance_unavailable = 511,
};

extern const ASN1CType asn1_type_ITSLaneMarkingDistance[];

typedef struct ITSLateralControlContainer {
  ITSLateralAcceleration lateralAcceleration;
  ITSYawRate yawRate;
  ITSCurvature curvature;
  ITSLaneMarkingDistance distanceToLeftLaneMarking;
  ITSLaneMarkingDistance distanceToRightLaneMarking;
} ITSLateralControlContainer;


extern const ASN1CType asn1_type_ITSLateralControlContainer[];

typedef enum ITSReasonForSpeedOrGapAdjustment {
  ITSReasonForSpeedOrGapAdjustment_unknown,
  ITSReasonForSpeedOrGapAdjustment_safety,
  ITSReasonForSpeedOrGapAdjustment_efficiency,
  ITSReasonForSpeedOrGapAdjustment_trafficAhead,
  ITSReasonForSpeedOrGapAdjustment_intruder,
  ITSReasonForSpeedOrGapAdjustment_emergency,
  ITSReasonForSpeedOrGapAdjustment_leave,
  ITSReasonForSpeedOrGapAdjustment_cohesion,
} ITSReasonForSpeedOrGapAdjustment;

extern const ASN1CType asn1_type_ITSReasonForSpeedOrGapAdjustment[];

typedef struct ITSPlatoonStatusSharingContainer {
  int numberOfTrucks;
  BOOL platoonSpeed_option;
  ITSSpeed platoonSpeed;
  ITSPlatoonPosition platoonPosition;
  ITSPlatoonID platoonID;
  BOOL reasonForSpeedOrGapAdjustment_option;
  ITSReasonForSpeedOrGapAdjustment reasonForSpeedOrGapAdjustment;
} ITSPlatoonStatusSharingContainer;


extern const ASN1CType asn1_type_ITSPlatoonStatusSharingContainer[];

typedef struct ITSCohesionContainer {
  ITSSpeedValue requestedMaxSpeed;
  BOOL requestedMaxLongitudinalAcceleration_option;
  ITSLongitudinalHdAccelerationValue requestedMaxLongitudinalAcceleration;
} ITSCohesionContainer;


extern const ASN1CType asn1_type_ITSCohesionContainer[];

typedef struct ITSTacticalPlanningContainer {
  BOOL cohesionContainer_option;
  ITSCohesionContainer cohesionContainer;
} ITSTacticalPlanningContainer;


extern const ASN1CType asn1_type_ITSTacticalPlanningContainer[];

typedef enum ITSFrontSplit {
  ITSFrontSplit_unpreparedForFrontSplit,
  ITSFrontSplit_preparingForFrontSplit,
  ITSFrontSplit_preparedForFrontSplit,
} ITSFrontSplit;

extern const ASN1CType asn1_type_ITSFrontSplit[];

typedef struct ITSSplitStatus {
  ITSFrontSplit frontSplit;
  BOOL requestBackSplit;
} ITSSplitStatus;


extern const ASN1CType asn1_type_ITSSplitStatus[];

typedef struct ITSPlatoonControlContainer {
  ITSSequenceNumber sequenceNumber;
  ITSPlatoonVehicleID vehicleID;
  BOOL vehicleInFrontID_option;
  ITSPlatoonVehicleID vehicleInFrontID;
  ITSLongitudinalControlContainer longitudinalControlContainer;
  BOOL lateralControlContainer_option;
  ITSLateralControlContainer lateralControlContainer;
  ITSPlatoonStatusSharingContainer statusSharingContainer;
  BOOL vehicleConfiguration_option;
  ITSVehicleConfiguration vehicleConfiguration;
  BOOL tacticalPlanning_option;
  ITSTacticalPlanningContainer tacticalPlanning;
  BOOL splitStatus_option;
  ITSSplitStatus splitStatus;
} ITSPlatoonControlContainer;


extern const ASN1CType asn1_type_ITSPlatoonControlContainer[];

typedef struct ITSPCM {
  ITSItsPduHeader header;
  ITSPlatoonBasic basic;
  ITSPlatoonControlContainer platoonControlContainer;
} ITSPCM;


extern const ASN1CType asn1_type_ITSPCM[];

typedef enum ITSBrakeCapacityConfidence {
  ITSBrakeCapacityConfidence_unavailable,
} ITSBrakeCapacityConfidence;

extern const ASN1CType asn1_type_ITSBrakeCapacityConfidence[];

typedef int ITSMedType;

enum {
  ITSMedType_unknown = 0,
  ITSMedType_any = 1,
  ITSMedType_iso21212 = 2,
  ITSMedType_iso21213 = 3,
  ITSMedType_iso21214 = 4,
  ITSMedType_iso21215 = 5,
  ITSMedType_iso21216 = 6,
  ITSMedType_iso25112 = 7,
  ITSMedType_iso25113 = 8,
  ITSMedType_iso29283 = 9,
  ITSMedType_iso17515 = 10,
  ITSMedType_iso19079 = 11,
  ITSMedType_isoLTEV2X = 12,
  ITSMedType_iso15628 = 128,
  ITSMedType_can = 254,
  ITSMedType_ethernet = 255,
};

extern const ASN1CType asn1_type_ITSMedType[];

typedef int ITSRsvAdvPrtVersion;

enum {
  ITSRsvAdvPrtVersion_c_rsvAdvPrtVersion2016 = 3,
};

extern const ASN1CType asn1_type_ITSRsvAdvPrtVersion[];

typedef int ITSSrvAdvID;

extern const ASN1CType asn1_type_ITSSrvAdvID[];

typedef int ITSSrvAdvContentCount;

extern const ASN1CType asn1_type_ITSSrvAdvContentCount[];

typedef struct ITSSrvAdvChangeCount {
  ITSSrvAdvID saID;
  ITSSrvAdvContentCount contentCount;
} ITSSrvAdvChangeCount;


extern const ASN1CType asn1_type_ITSSrvAdvChangeCount[];

typedef int ITSRefExt;

extern const ASN1CType asn1_type_ITSRefExt[];

typedef struct ITSSrvAdvMsgHeaderExt {
  ITSRefExt extensionId;
  ASN1OpenType value;
} ITSSrvAdvMsgHeaderExt;


extern const ASN1CType asn1_type_ITSSrvAdvMsgHeaderExt[];

typedef struct ITSSrvAdvMsgHeaderExts {
  ITSSrvAdvMsgHeaderExt *tab;
  size_t count;
} ITSSrvAdvMsgHeaderExts;

extern const ASN1CType asn1_type_ITSSrvAdvMsgHeaderExts[];

typedef ITSVarLengthNumber ITSITSaid;

#define asn1_type_ITSITSaid asn1_type_ITSVarLengthNumber

typedef int ITSChannelIndex;

enum {
  ITSChannelIndex_notUsed = 0,
  ITSChannelIndex_firstEntry = 1,
};

extern const ASN1CType asn1_type_ITSChannelIndex[];

typedef int ITSCtxRef;

extern const ASN1CType asn1_type_ITSCtxRef[];

typedef struct ITSItsAidCtxRef {
  ITSITSaid itsaid;
  ITSCtxRef ctx;
} ITSItsAidCtxRef;


extern const ASN1CType asn1_type_ITSItsAidCtxRef[];

typedef struct ITSSamContext {
  ITSItsAidCtxRef itsaidCtxRef;
  ASN1OpenType context;
} ITSSamContext;


extern const ASN1CType asn1_type_ITSSamContext[];

typedef ITSSamContext ITSSystemServiceAndContext;

#define asn1_type_ITSSystemServiceAndContext asn1_type_ITSSamContext

typedef struct ITSSystemService {
  ITSSystemServiceAndContext *tab;
  size_t count;
} ITSSystemService;

extern const ASN1CType asn1_type_ITSSystemService[];

typedef int ITSPortNumber;

extern const ASN1CType asn1_type_ITSPortNumber[];

typedef ITSPortNumber ITSReplyAddress;

extern const ASN1CType asn1_type_ITSReplyAddress[];

typedef struct ITSServiceInfoExt {
  ITSRefExt extensionId;
  ASN1OpenType value;
} ITSServiceInfoExt;


extern const ASN1CType asn1_type_ITSServiceInfoExt[];

typedef struct ITSServiceInfoExts {
  ITSServiceInfoExt *tab;
  size_t count;
} ITSServiceInfoExts;

extern const ASN1CType asn1_type_ITSServiceInfoExts[];

typedef struct ITSChannelOptions {
  BOOL systemService_option;
  ITSSystemService systemService;
  BOOL serviceProviderPort_option;
  ITSReplyAddress serviceProviderPort;
  BOOL extensions_option;
  ITSServiceInfoExts extensions;
} ITSChannelOptions;


extern const ASN1CType asn1_type_ITSChannelOptions[];

typedef struct ITSServiceInfo {
  ITSITSaid serviceID;
  ITSChannelIndex channelIndex;
  ITSChannelOptions chOptions;
} ITSServiceInfo;


extern const ASN1CType asn1_type_ITSServiceInfo[];

typedef struct ITSServiceInfos {
  ITSServiceInfo *tab;
  size_t count;
} ITSServiceInfos;

extern const ASN1CType asn1_type_ITSServiceInfos[];

typedef int ITSOperatingClass80211;

extern const ASN1CType asn1_type_ITSOperatingClass80211[];

typedef int ITSChannelNumber80211;

extern const ASN1CType asn1_type_ITSChannelNumber80211[];

typedef int ITSTXpower80211;

extern const ASN1CType asn1_type_ITSTXpower80211[];

typedef struct ITSWsaChInfoDataRate {
  ASN1BitString adaptable;
  int dataRate;
} ITSWsaChInfoDataRate;


extern const ASN1CType asn1_type_ITSWsaChInfoDataRate[];

typedef struct ITSChannelInfoExt {
  ITSRefExt extensionId;
  ASN1OpenType value;
} ITSChannelInfoExt;


extern const ASN1CType asn1_type_ITSChannelInfoExt[];

typedef struct ITSChannelInfoExts {
  ITSChannelInfoExt *tab;
  size_t count;
} ITSChannelInfoExts;

extern const ASN1CType asn1_type_ITSChannelInfoExts[];

typedef struct ITSChInfoOptions {
  BOOL option1_option;
  BOOL option2_option;
  BOOL option3_option;
  BOOL option4_option;
  BOOL option5_option;
  BOOL option6_option;
  BOOL option7_option;
  BOOL extensions_option;
  ITSChannelInfoExts extensions;
} ITSChInfoOptions;


extern const ASN1CType asn1_type_ITSChInfoOptions[];

typedef struct ITSChannelInfo {
  ITSOperatingClass80211 operatingClass;
  ITSChannelNumber80211 channelNumber;
  ITSTXpower80211 powerLevel;
  ITSWsaChInfoDataRate dataRate;
  ITSChInfoOptions extensions;
} ITSChannelInfo;


extern const ASN1CType asn1_type_ITSChannelInfo[];

typedef struct ITSChannelInfos {
  ITSChannelInfo *tab;
  size_t count;
} ITSChannelInfos;

extern const ASN1CType asn1_type_ITSChannelInfos[];

typedef int ITSRouterLifetime;

extern const ASN1CType asn1_type_ITSRouterLifetime[];

typedef ASN1String ITSIpV6Prefix;

extern const ASN1CType asn1_type_ITSIpV6Prefix[];

typedef int ITSIpV6PrefixLength;

extern const ASN1CType asn1_type_ITSIpV6PrefixLength[];

typedef ASN1String ITSIPv6Address;

extern const ASN1CType asn1_type_ITSIPv6Address[];

typedef struct ITSRoutAdvertExt {
  ITSRefExt extensionId;
  ASN1OpenType value;
} ITSRoutAdvertExt;


extern const ASN1CType asn1_type_ITSRoutAdvertExt[];

typedef struct ITSRoutAdvertExts {
  ITSRoutAdvertExt *tab;
  size_t count;
} ITSRoutAdvertExts;

extern const ASN1CType asn1_type_ITSRoutAdvertExts[];

typedef struct ITSRoutingAdvertisement {
  ITSRouterLifetime lifetime;
  ITSIpV6Prefix ipPrefix;
  ITSIpV6PrefixLength ipPrefixLength;
  ITSIPv6Address defaultGateway;
  ITSIPv6Address primaryDns;
  ITSRoutAdvertExts extensions;
} ITSRoutingAdvertisement;


extern const ASN1CType asn1_type_ITSRoutingAdvertisement[];

typedef struct ITSSamBody {
  ITSSrvAdvChangeCount changeCount;
  BOOL extensions_option;
  ITSSrvAdvMsgHeaderExts extensions;
  BOOL serviceInfos_option;
  ITSServiceInfos serviceInfos;
  BOOL channelInfos_option;
  ITSChannelInfos channelInfos;
  BOOL routingAdvertisement_option;
  ITSRoutingAdvertisement routingAdvertisement;
} ITSSamBody;


extern const ASN1CType asn1_type_ITSSamBody[];

typedef struct ITSSam {
  ITSRsvAdvPrtVersion version;
  ITSSamBody body;
} ITSSam;


extern const ASN1CType asn1_type_ITSSam[];

typedef struct ITSSAEM {
  ITSItsPduHeader header;
  ITSSam sam;
} ITSSAEM;


extern const ASN1CType asn1_type_ITSSAEM[];

typedef struct ITSEXT_TYPE { /* object class definition */
  ASN1CType extRef;
  ASN1CType ExtValue;
} ITSEXT_TYPE;


extern const ASN1CType asn1_type_ITSEXT_TYPE[];

#define ITSc_Reserved 0

#define ITSc_TxPowerUsed80211 4

#define ITSc_2Dlocation 5

#define ITSc_3Dlocation 6

#define ITSc_advertiserID 7

#define ITSc_ProviderServContext 8

#define ITSc_IPv6Address 9

#define ITSc_servicePort 10

#define ITSc_ProviderMACaddress 11

#define ITSc_EDCAparameterSet 12

#define ITSc_SecondaryDNS 13

#define ITSc_GatewayMACaddress 14

#define ITSc_ChannelNumber80211 15

#define ITSc_DataRate80211 16

#define ITSc_RepeatRate 17

#define ITSc_CountryString 18

#define ITSc_RCPIthreshold 19

#define ITSc_WSAcountThreshold 20

#define ITSc_ChannelAccess 21

#define ITSc_WSAcountThresInt 22

#define ITSc_ChannelLoad 23

#define ITSc_LMtxCip 80

#define ITSc_LMrxCip 81

#define ITSc_LMchannelBusyRatio 82

#define ITSc_LMpacketID 83

#define ITSc_ExtendedChannelInfos 84

#define ITSc_SAMapplicationData 85

#define ITSc_ProtocolType 24

typedef int ITSDataRate80211;

extern const ASN1CType asn1_type_ITSDataRate80211[];

typedef int ITSLMchannelBusyRatio;

enum {
  ITSLMchannelBusyRatio_zeroPercent = 0,
  ITSLMchannelBusyRatio_halfPercent = 1,
  ITSLMchannelBusyRatio_onePercent = 2,
  ITSLMchannelBusyRatio_hundredPercent = 200,
  ITSLMchannelBusyRatio_unknown = 201,
};

extern const ASN1CType asn1_type_ITSLMchannelBusyRatio[];

typedef int ITSRepeatRate;

extern const ASN1CType asn1_type_ITSRepeatRate[];

typedef struct ITSSALatitude {
  ASN1BitString fillBit;
  int lat;
} ITSSALatitude;


extern const ASN1CType asn1_type_ITSSALatitude[];

typedef int ITSSALongitude;

extern const ASN1CType asn1_type_ITSSALongitude[];

typedef struct ITSTwoDLocation {
  ITSSALatitude latitude;
  ITSSALongitude longitude;
} ITSTwoDLocation;


extern const ASN1CType asn1_type_ITSTwoDLocation[];

typedef int ITSSAElevation;

extern const ASN1CType asn1_type_ITSSAElevation[];

typedef struct ITSThreeDLocation {
  ITSSALatitude latitude;
  ITSSALongitude longitude;
  ITSSAElevation elevation;
} ITSThreeDLocation;


extern const ASN1CType asn1_type_ITSThreeDLocation[];

typedef ASN1String ITSAdvertiserIdentifier;

extern const ASN1CType asn1_type_ITSAdvertiserIdentifier[];

typedef int ITSARFCN_ValueEUTRA_r9;

extern const ASN1CType asn1_type_ITSARFCN_ValueEUTRA_r9[];

typedef int ITSP_Max;

extern const ASN1CType asn1_type_ITSP_Max[];

typedef int ITSSL_Priority_r13;

extern const ASN1CType asn1_type_ITSSL_Priority_r13[];

typedef int ITSSL_TxPoolIdentity_r12;

extern const ASN1CType asn1_type_ITSSL_TxPoolIdentity_r12[];

typedef enum ITSMaxDataRateBytesPerSec_1 {
  ITSMaxDataRateBytesPerSec_1_bytes,
  ITSMaxDataRateBytesPerSec_1_kb,
  ITSMaxDataRateBytesPerSec_1_mb,
  ITSMaxDataRateBytesPerSec_1_gb,
} ITSMaxDataRateBytesPerSec_1;

extern const ASN1CType asn1_type_ITSMaxDataRateBytesPerSec_1[];

typedef struct ITSMaxDataRateBytesPerSec {
  int number;
  ITSMaxDataRateBytesPerSec_1 multiplier;
} ITSMaxDataRateBytesPerSec;


extern const ASN1CType asn1_type_ITSMaxDataRateBytesPerSec[];

typedef enum ITSMinimumTrafficPeriodicity {
  ITSMinimumTrafficPeriodicity_sf20,
  ITSMinimumTrafficPeriodicity_sf50,
  ITSMinimumTrafficPeriodicity_sf100,
  ITSMinimumTrafficPeriodicity_sf200,
  ITSMinimumTrafficPeriodicity_sf300,
  ITSMinimumTrafficPeriodicity_sf400,
  ITSMinimumTrafficPeriodicity_sf500,
  ITSMinimumTrafficPeriodicity_sf600,
  ITSMinimumTrafficPeriodicity_sf700,
  ITSMinimumTrafficPeriodicity_sf800,
  ITSMinimumTrafficPeriodicity_sf900,
  ITSMinimumTrafficPeriodicity_sf1000,
} ITSMinimumTrafficPeriodicity;

extern const ASN1CType asn1_type_ITSMinimumTrafficPeriodicity[];

typedef ASN1Null ITSSL_V2X_Preconfiguration_r14;

extern const ASN1CType asn1_type_ITSSL_V2X_Preconfiguration_r14[];

typedef struct ITSLTEv2xChannelInfo {
  BOOL txPoolEarfcn_option;
  ITSARFCN_ValueEUTRA_r9 txPoolEarfcn;
  BOOL pMax_option;
  ITSP_Max pMax;
  BOOL pppp_option;
  ITSSL_Priority_r13 pppp;
  BOOL txPool_option;
  ITSSL_TxPoolIdentity_r12 txPool;
  BOOL minMcs_option;
  int minMcs;
  BOOL maxMcs_option;
  int maxMcs;
  BOOL minPdb_option;
  int minPdb;
  BOOL mtu_option;
  int mtu;
  BOOL maxDataRate_option;
  ITSMaxDataRateBytesPerSec maxDataRate;
  BOOL minPeriodicity_option;
  ITSMinimumTrafficPeriodicity minPeriodicity;
  BOOL maxSpeed_option;
  int maxSpeed;
  BOOL maxRange_option;
  int maxRange;
  BOOL maxCbr_option;
  int maxCbr;
  BOOL preconfigInfo_option;
} ITSLTEv2xChannelInfo;


extern const ASN1CType asn1_type_ITSLTEv2xChannelInfo[];

#define ITSmaxSL_TxPool_r12 4

#define ITSmaxEARFCN2 262143

typedef struct ITSCHINFO_TYPE { /* object class definition */
  ASN1CType id;
  ASN1CType Type;
} ITSCHINFO_TYPE;


extern const ASN1CType asn1_type_ITSCHINFO_TYPE[];

#define ITSchInfoType_unknown 0

#define ITSchInfoType_any 1

#define ITSchInfoType_2G 2

#define ITSchInfoType_3G 3

#define ITSchInfoType_IR 4

#define ITSchInfoType_M5 5

#define ITSchInfoType_MM 6

#define ITSchInfoType_80216e 7

#define ITSchInfoType_HC_SDMA 8

#define ITSchInfoType_80220 9

#define ITSchInfoType_LTE 10

#define ITSchInfoType_6LowPan 11

#define ITSchInfoType_Cv2x 12

#define ITSchInfoType_15628 128

#define ITSchInfoType_CAN 254

#define ITSchInfoType_Ethernet 255

typedef struct ITSExtendedChannelInfo {
  ITSMedType medId;
  ASN1OpenType value;
} ITSExtendedChannelInfo;


extern const ASN1CType asn1_type_ITSExtendedChannelInfo[];

typedef struct ITSExtendedChannelInfos {
  ITSExtendedChannelInfo *tab;
  size_t count;
} ITSExtendedChannelInfos;

extern const ASN1CType asn1_type_ITSExtendedChannelInfos[];

typedef struct ITSProviderServiceContext {
  ASN1BitString fillBit;
  ASN1String psc;
} ITSProviderServiceContext;


extern const ASN1CType asn1_type_ITSProviderServiceContext[];

typedef int ITSServicePort;

extern const ASN1CType asn1_type_ITSServicePort[];

typedef ASN1String ITSMACaddress;

extern const ASN1CType asn1_type_ITSMACaddress[];

typedef ITSMACaddress ITSProviderMacAddress;

#define asn1_type_ITSProviderMacAddress asn1_type_ITSMACaddress

typedef int ITSRcpiThreshold;

extern const ASN1CType asn1_type_ITSRcpiThreshold[];

typedef int ITSWsaCountThreshold;

extern const ASN1CType asn1_type_ITSWsaCountThreshold[];

typedef int ITSWsaCountThresholdInterval;

extern const ASN1CType asn1_type_ITSWsaCountThresholdInterval[];

typedef ASN1String ITSSAMapplicationData;

extern const ASN1CType asn1_type_ITSSAMapplicationData[];

typedef struct ITSEdcaParameterRecord {
  int res;
  int aci;
  int acm;
  int aifsn;
  int ecwMax;
  int ecwMin;
  int txopLimit;
} ITSEdcaParameterRecord;


extern const ASN1CType asn1_type_ITSEdcaParameterRecord[];

typedef struct ITSEdcaParameterSet {
  ITSEdcaParameterRecord acbeRecord;
  ITSEdcaParameterRecord acbkRecord;
  ITSEdcaParameterRecord acviRecord;
  ITSEdcaParameterRecord acvoRecord;
} ITSEdcaParameterSet;


extern const ASN1CType asn1_type_ITSEdcaParameterSet[];

typedef int ITSChannelAccess80211;

enum {
  ITSChannelAccess80211_continuous = 0,
  ITSChannelAccess80211_alternatingTimeSlot0 = 1,
  ITSChannelAccess80211_alternatingTimeSlot1 = 2,
};

extern const ASN1CType asn1_type_ITSChannelAccess80211[];

typedef ITSIPv6Address ITSSecondaryDns;

#define asn1_type_ITSSecondaryDns asn1_type_ITSIPv6Address

typedef ITSMACaddress ITSGatewayMacAddress;

#define asn1_type_ITSGatewayMacAddress asn1_type_ITSMACaddress

typedef ITSVarLengthNumber ITSProtocolType;

#define asn1_type_ITSProtocolType asn1_type_ITSVarLengthNumber

typedef struct ITSSRMextension {
  ITSRefExt extensionId;
  ASN1OpenType value;
} ITSSRMextension;


extern const ASN1CType asn1_type_ITSSRMextension[];

typedef struct ITSSRMextensions {
  ITSSRMextension *tab;
  size_t count;
} ITSSRMextensions;

extern const ASN1CType asn1_type_ITSSRMextensions[];

typedef struct ITSSrmPrvChAllocReq {
  ITSITSaid *tab;
  size_t count;
} ITSSrmPrvChAllocReq;

extern const ASN1CType asn1_type_ITSSrmPrvChAllocReq[];

typedef struct ITSSrmPrivateChannelsRq {
  ITSPortNumber portDynSam;
  ITSSrmPrvChAllocReq allocReqs;
} ITSSrmPrivateChannelsRq;


extern const ASN1CType asn1_type_ITSSrmPrivateChannelsRq[];

typedef struct ITSSrmContext {
  ITSSamContext context;
  ITSPortNumber clientPort;
} ITSSrmContext;


extern const ASN1CType asn1_type_ITSSrmContext[];

typedef struct ITSSrmContexts {
  ITSSrmContext *tab;
  size_t count;
} ITSSrmContexts;

extern const ASN1CType asn1_type_ITSSrmContexts[];

typedef struct ITSSrmPrvChAllocConf {
  ITSITSaid *tab;
  size_t count;
} ITSSrmPrvChAllocConf;

extern const ASN1CType asn1_type_ITSSrmPrvChAllocConf[];

typedef struct ITSSrmBody {
  BOOL extensions_option;
  ITSSRMextensions extensions;
  BOOL prvChannelsRq_option;
  ITSSrmPrivateChannelsRq prvChannelsRq;
  BOOL contexts_option;
  ITSSrmContexts contexts;
  BOOL prvChannelsCf_option;
  ITSSrmPrvChAllocConf prvChannelsCf;
} ITSSrmBody;


extern const ASN1CType asn1_type_ITSSrmBody[];

typedef struct ITSSrm {
  ITSRsvAdvPrtVersion header;
  ITSSrmBody body;
} ITSSrm;


extern const ASN1CType asn1_type_ITSSrm[];

typedef struct ITSSA_CONTEXT { /* object class definition */
  ASN1CType itsaidCtxRef;
  ASN1CType ContextInfo;
} ITSSA_CONTEXT;


extern const ASN1CType asn1_type_ITSSA_CONTEXT[];

#define ITSc_ctxRefNull 0

#define ITSc_ctxRefMandApp 1

typedef ASN1Null ITSNullCtx;

extern const ASN1CType asn1_type_ITSNullCtx[];

typedef struct ITSMandAppCtx {
  ITSItsAidCtxRef *tab;
  size_t count;
} ITSMandAppCtx;

extern const ASN1CType asn1_type_ITSMandAppCtx[];

typedef struct ITSACKResponseService {
  int ackRespDelayAdjust;
  int ackRespDelayStdDev;
} ITSACKResponseService;


extern const ASN1CType asn1_type_ITSACKResponseService[];

typedef struct ITSRoadAngles {
  ITSHeading *tab;
  size_t count;
} ITSRoadAngles;

extern const ASN1CType asn1_type_ITSRoadAngles[];

typedef struct ITSITSRangingSAMAppData {
  int protocolVersion;
  ITSACKResponseService ackResponseService;
  BOOL groundAltitude_option;
  ITSAltitude groundAltitude;
  BOOL roadAngles_option;
  ITSRoadAngles roadAngles;
} ITSITSRangingSAMAppData;


extern const ASN1CType asn1_type_ITSITSRangingSAMAppData[];

typedef int ITSUint8_1;

extern const ASN1CType asn1_type_ITSUint8_1[];

typedef int ITSUint8;

extern const ASN1CType asn1_type_ITSUint8[];

typedef struct ITSChannelIdentifier {
  ASN1String countryString;
  ITSUint8 operatingClass;
  ITSUint8 channelNumber;
} ITSChannelIdentifier;


extern const ASN1CType asn1_type_ITSChannelIdentifier[];

typedef struct ITSAdvertiserPermissions {
  ITSChannelIdentifier *tab;
  size_t count;
} ITSAdvertiserPermissions;

extern const ASN1CType asn1_type_ITSAdvertiserPermissions[];

typedef ASN1Integer ITSPsid;

extern const ASN1CType asn1_type_ITSPsid[];

typedef struct ITSSequenceOfPsid {
  ITSPsid *tab;
  size_t count;
} ITSSequenceOfPsid;

extern const ASN1CType asn1_type_ITSSequenceOfPsid[];

typedef enum ITSEnumeratedEdcaIdentifier {
  ITSEnumeratedEdcaIdentifier_us_j2945_bsm,
} ITSEnumeratedEdcaIdentifier;

extern const ASN1CType asn1_type_ITSEnumeratedEdcaIdentifier[];

typedef struct ITSExplicitEdcaIdentifier {
  ITSUint8 qosInfo;
  ITSUint8 reserved;
  ASN1String set1;
  ASN1String set2;
  ASN1String set3;
  ASN1String set4;
} ITSExplicitEdcaIdentifier;


extern const ASN1CType asn1_type_ITSExplicitEdcaIdentifier[];

typedef enum {
  ITSEdcaIdentifier_Enum,
  ITSEdcaIdentifier_Explicit,
} ITSEdcaIdentifier_choice;

typedef struct ITSEdcaIdentifier {
  ITSEdcaIdentifier_choice choice;
  union {
    ITSEnumeratedEdcaIdentifier Enum;
    ITSExplicitEdcaIdentifier Explicit;
  } u;
} ITSEdcaIdentifier;

extern const ASN1CType asn1_type_ITSEdcaIdentifier[];

typedef struct ITSSequenceOfEdcaIdentifier {
  ITSEdcaIdentifier *tab;
  size_t count;
} ITSSequenceOfEdcaIdentifier;

extern const ASN1CType asn1_type_ITSSequenceOfEdcaIdentifier[];

typedef struct ITSChannelSpecificProviderPermission {
  ITSChannelIdentifier channelId;
  BOOL permittedPsids_option;
  ITSSequenceOfPsid permittedPsids;
  BOOL permittedEdcaParameters_option;
  ITSSequenceOfEdcaIdentifier permittedEdcaParameters;
  BOOL maximumTransmitPower_option;
  ITSUint8 maximumTransmitPower;
} ITSChannelSpecificProviderPermission;


extern const ASN1CType asn1_type_ITSChannelSpecificProviderPermission[];

typedef struct ITSProviderPermissions {
  ITSChannelSpecificProviderPermission *tab;
  size_t count;
} ITSProviderPermissions;

extern const ASN1CType asn1_type_ITSProviderPermissions[];

typedef struct ITSWsaSsp {
  ITSUint8_1 version;
  BOOL advertiserPermissions_option;
  ITSAdvertiserPermissions advertiserPermissions;
  BOOL providerPermissions_option;
  ITSProviderPermissions providerPermissions;
  BOOL restrictedClass_option;
  ASN1BitString restrictedClass;
} ITSWsaSsp;


extern const ASN1CType asn1_type_ITSWsaSsp[];

typedef int ITSUint3;

extern const ASN1CType asn1_type_ITSUint3[];

typedef int ITSUint16;

extern const ASN1CType asn1_type_ITSUint16[];

typedef unsigned int ITSUint32;

extern const ASN1CType asn1_type_ITSUint32[];

typedef ASN1Integer ITSUint64;

extern const ASN1CType asn1_type_ITSUint64[];

typedef struct ITSSequenceOfUint8 {
  ITSUint8 *tab;
  size_t count;
} ITSSequenceOfUint8;

extern const ASN1CType asn1_type_ITSSequenceOfUint8[];

typedef struct ITSSequenceOfUint16 {
  ITSUint16 *tab;
  size_t count;
} ITSSequenceOfUint16;

extern const ASN1CType asn1_type_ITSSequenceOfUint16[];

typedef ASN1String ITSOpaque;

extern const ASN1CType asn1_type_ITSOpaque[];

typedef ASN1String ITSHashedId3;

extern const ASN1CType asn1_type_ITSHashedId3[];

typedef struct ITSSequenceOfHashedId3 {
  ITSHashedId3 *tab;
  size_t count;
} ITSSequenceOfHashedId3;

extern const ASN1CType asn1_type_ITSSequenceOfHashedId3[];

typedef ASN1String ITSHashedId8;

extern const ASN1CType asn1_type_ITSHashedId8[];

typedef ASN1String ITSHashedId10;

extern const ASN1CType asn1_type_ITSHashedId10[];

typedef ASN1String ITSHashedId32;

extern const ASN1CType asn1_type_ITSHashedId32[];

typedef ITSUint32 ITSTime32;

extern const ASN1CType asn1_type_ITSTime32[];

typedef ITSUint64 ITSTime64;

#define asn1_type_ITSTime64 asn1_type_ITSUint64

typedef enum {
  ITSDuration_microseconds,
  ITSDuration_milliseconds,
  ITSDuration_seconds,
  ITSDuration_minutes,
  ITSDuration_hours,
  ITSDuration_sixtyHours,
  ITSDuration_years,
} ITSDuration_choice;

typedef struct ITSDuration {
  ITSDuration_choice choice;
  union {
    ITSUint16 microseconds;
    ITSUint16 milliseconds;
    ITSUint16 seconds;
    ITSUint16 minutes;
    ITSUint16 hours;
    ITSUint16 sixtyHours;
    ITSUint16 years;
  } u;
} ITSDuration;

extern const ASN1CType asn1_type_ITSDuration[];

typedef struct ITSValidityPeriod {
  ITSTime32 start;
  ITSDuration duration;
} ITSValidityPeriod;


extern const ASN1CType asn1_type_ITSValidityPeriod[];

typedef int ITSNinetyDegreeInt;

enum {
  ITSNinetyDegreeInt_min = -900000000,
  ITSNinetyDegreeInt_max = 900000000,
  ITSNinetyDegreeInt_unknown = 900000001,
};

extern const ASN1CType asn1_type_ITSNinetyDegreeInt[];

typedef ITSNinetyDegreeInt ITSDot2Latitude;

extern const ASN1CType asn1_type_ITSDot2Latitude[];

typedef int ITSOneEightyDegreeInt;

enum {
  ITSOneEightyDegreeInt_min = -1799999999,
  ITSOneEightyDegreeInt_max = 1800000000,
  ITSOneEightyDegreeInt_unknown = 1800000001,
};

extern const ASN1CType asn1_type_ITSOneEightyDegreeInt[];

typedef ITSOneEightyDegreeInt ITSDot2Longitude;

extern const ASN1CType asn1_type_ITSDot2Longitude[];

typedef struct ITSDot2TwoDLocation {
  ITSDot2Latitude latitude;
  ITSDot2Longitude longitude;
} ITSDot2TwoDLocation;


extern const ASN1CType asn1_type_ITSDot2TwoDLocation[];

typedef struct ITSCircularRegion {
  ITSDot2TwoDLocation center;
  ITSUint16 radius;
} ITSCircularRegion;


extern const ASN1CType asn1_type_ITSCircularRegion[];

typedef struct ITSRectangularRegion {
  ITSDot2TwoDLocation northWest;
  ITSDot2TwoDLocation southEast;
} ITSRectangularRegion;


extern const ASN1CType asn1_type_ITSRectangularRegion[];

typedef struct ITSSequenceOfRectangularRegion {
  ITSRectangularRegion *tab;
  size_t count;
} ITSSequenceOfRectangularRegion;

extern const ASN1CType asn1_type_ITSSequenceOfRectangularRegion[];

typedef struct ITSPolygonalRegion {
  ITSDot2TwoDLocation *tab;
  size_t count;
} ITSPolygonalRegion;

extern const ASN1CType asn1_type_ITSPolygonalRegion[];

typedef ITSUint16 ITSCountryOnly;

extern const ASN1CType asn1_type_ITSCountryOnly[];

typedef struct ITSCountryAndRegions {
  ITSCountryOnly countryOnly;
  ITSSequenceOfUint8 regions;
} ITSCountryAndRegions;


extern const ASN1CType asn1_type_ITSCountryAndRegions[];

typedef struct ITSRegionAndSubregions {
  ITSUint8 region;
  ITSSequenceOfUint16 subregions;
} ITSRegionAndSubregions;


extern const ASN1CType asn1_type_ITSRegionAndSubregions[];

typedef struct ITSSequenceOfRegionAndSubregions {
  ITSRegionAndSubregions *tab;
  size_t count;
} ITSSequenceOfRegionAndSubregions;

extern const ASN1CType asn1_type_ITSSequenceOfRegionAndSubregions[];

typedef struct ITSCountryAndSubregions {
  ITSCountryOnly country;
  ITSSequenceOfRegionAndSubregions regionAndSubregions;
} ITSCountryAndSubregions;


extern const ASN1CType asn1_type_ITSCountryAndSubregions[];

typedef enum {
  ITSIdentifiedRegion_countryOnly,
  ITSIdentifiedRegion_countryAndRegions,
  ITSIdentifiedRegion_countryAndSubregions,
} ITSIdentifiedRegion_choice;

typedef struct ITSIdentifiedRegion {
  ITSIdentifiedRegion_choice choice;
  union {
    ITSCountryOnly countryOnly;
    ITSCountryAndRegions countryAndRegions;
    ITSCountryAndSubregions countryAndSubregions;
  } u;
} ITSIdentifiedRegion;

extern const ASN1CType asn1_type_ITSIdentifiedRegion[];

typedef struct ITSSequenceOfIdentifiedRegion {
  ITSIdentifiedRegion *tab;
  size_t count;
} ITSSequenceOfIdentifiedRegion;

extern const ASN1CType asn1_type_ITSSequenceOfIdentifiedRegion[];

typedef enum {
  ITSGeographicRegion_circularRegion,
  ITSGeographicRegion_rectangularRegion,
  ITSGeographicRegion_polygonalRegion,
  ITSGeographicRegion_identifiedRegion,
} ITSGeographicRegion_choice;

typedef struct ITSGeographicRegion {
  ITSGeographicRegion_choice choice;
  union {
    ITSCircularRegion circularRegion;
    ITSSequenceOfRectangularRegion rectangularRegion;
    ITSPolygonalRegion polygonalRegion;
    ITSSequenceOfIdentifiedRegion identifiedRegion;
  } u;
} ITSGeographicRegion;

extern const ASN1CType asn1_type_ITSGeographicRegion[];

typedef ITSUint16 ITSDot2Elevation;

extern const ASN1CType asn1_type_ITSDot2Elevation[];

typedef struct ITSDot2ThreeDLocation {
  ITSDot2Latitude latitude;
  ITSDot2Longitude longitude;
  ITSDot2Elevation elevation;
} ITSDot2ThreeDLocation;


extern const ASN1CType asn1_type_ITSDot2ThreeDLocation[];

typedef int ITSNinetyDegreeInt_1;

enum {
  ITSNinetyDegreeInt_1_min = -900000000,
  ITSNinetyDegreeInt_1_max = 900000000,
  ITSNinetyDegreeInt_1_unknown = 900000001,
};

extern const ASN1CType asn1_type_ITSNinetyDegreeInt_1[];

typedef ITSNinetyDegreeInt_1 ITSKnownLatitude;

#define asn1_type_ITSKnownLatitude asn1_type_ITSNinetyDegreeInt_1

typedef int ITSNinetyDegreeInt_2;

enum {
  ITSNinetyDegreeInt_2_min = -900000000,
  ITSNinetyDegreeInt_2_max = 900000000,
  ITSNinetyDegreeInt_2_unknown = 900000001,
};

extern const ASN1CType asn1_type_ITSNinetyDegreeInt_2[];

typedef ITSNinetyDegreeInt_2 ITSUnknownLatitude;

#define asn1_type_ITSUnknownLatitude asn1_type_ITSNinetyDegreeInt_2

typedef int ITSOneEightyDegreeInt_1;

enum {
  ITSOneEightyDegreeInt_1_min = -1799999999,
  ITSOneEightyDegreeInt_1_max = 1800000000,
  ITSOneEightyDegreeInt_1_unknown = 1800000001,
};

extern const ASN1CType asn1_type_ITSOneEightyDegreeInt_1[];

typedef ITSOneEightyDegreeInt_1 ITSKnownLongitude;

#define asn1_type_ITSKnownLongitude asn1_type_ITSOneEightyDegreeInt_1

typedef int ITSOneEightyDegreeInt_2;

enum {
  ITSOneEightyDegreeInt_2_min = -1799999999,
  ITSOneEightyDegreeInt_2_max = 1800000000,
  ITSOneEightyDegreeInt_2_unknown = 1800000001,
};

extern const ASN1CType asn1_type_ITSOneEightyDegreeInt_2[];

typedef ITSOneEightyDegreeInt_2 ITSUnknownLongitude;

#define asn1_type_ITSUnknownLongitude asn1_type_ITSOneEightyDegreeInt_2

typedef struct ITSEcdsaP256Signature {
  ITSEccP256CurvePoint rSig;
  ASN1String sSig;
} ITSEcdsaP256Signature;


extern const ASN1CType asn1_type_ITSEcdsaP256Signature[];

typedef struct ITSEccP384CurvePoint_1 {
  ASN1String x;
  ASN1String y;
} ITSEccP384CurvePoint_1;


extern const ASN1CType asn1_type_ITSEccP384CurvePoint_1[];

typedef enum {
  ITSEccP384CurvePoint_x_only,
  ITSEccP384CurvePoint_fill,
  ITSEccP384CurvePoint_compressed_y_0,
  ITSEccP384CurvePoint_compressed_y_1,
  ITSEccP384CurvePoint_uncompressedP384,
} ITSEccP384CurvePoint_choice;

typedef struct ITSEccP384CurvePoint {
  ITSEccP384CurvePoint_choice choice;
  union {
    ASN1String x_only;
    ASN1String compressed_y_0;
    ASN1String compressed_y_1;
    ITSEccP384CurvePoint_1 uncompressedP384;
  } u;
} ITSEccP384CurvePoint;

extern const ASN1CType asn1_type_ITSEccP384CurvePoint[];

typedef struct ITSEcdsaP384Signature {
  ITSEccP384CurvePoint rSig;
  ASN1String sSig;
} ITSEcdsaP384Signature;


extern const ASN1CType asn1_type_ITSEcdsaP384Signature[];

typedef enum {
  ITSSignature_ecdsaNistP256Signature,
  ITSSignature_ecdsaBrainpoolP256r1Signature,
  ITSSignature_ecdsaBrainpoolP384r1Signature,
} ITSSignature_choice;

typedef struct ITSSignature {
  ITSSignature_choice choice;
  union {
    ITSEcdsaP256Signature ecdsaNistP256Signature;
    ITSEcdsaP256Signature ecdsaBrainpoolP256r1Signature;
    ITSEcdsaP384Signature ecdsaBrainpoolP384r1Signature;
  } u;
} ITSSignature;

extern const ASN1CType asn1_type_ITSSignature[];

typedef enum ITSHashAlgorithm {
  ITSHashAlgorithm_sha256,
  ITSHashAlgorithm_sha384,
} ITSHashAlgorithm;

extern const ASN1CType asn1_type_ITSHashAlgorithm[];

typedef struct ITSEciesP256EncryptedKey {
  ITSEccP256CurvePoint v;
  ASN1String c;
  ASN1String t;
} ITSEciesP256EncryptedKey;


extern const ASN1CType asn1_type_ITSEciesP256EncryptedKey[];

typedef enum {
  ITSEncryptionKey_Public,
  ITSEncryptionKey_symmetric,
} ITSEncryptionKey_choice;

typedef struct ITSEncryptionKey {
  ITSEncryptionKey_choice choice;
  union {
    ITSPublicEncryptionKey Public;
    ITSSymmetricEncryptionKey symmetric;
  } u;
} ITSEncryptionKey;

extern const ASN1CType asn1_type_ITSEncryptionKey[];

typedef enum {
  ITSPublicVerificationKey_ecdsaNistP256,
  ITSPublicVerificationKey_ecdsaBrainpoolP256r1,
  ITSPublicVerificationKey_ecdsaBrainpoolP384r1,
} ITSPublicVerificationKey_choice;

typedef struct ITSPublicVerificationKey {
  ITSPublicVerificationKey_choice choice;
  union {
    ITSEccP256CurvePoint ecdsaNistP256;
    ITSEccP256CurvePoint ecdsaBrainpoolP256r1;
    ITSEccP384CurvePoint ecdsaBrainpoolP384r1;
  } u;
} ITSPublicVerificationKey;

extern const ASN1CType asn1_type_ITSPublicVerificationKey[];

typedef ASN1String ITSBitmapSsp;

extern const ASN1CType asn1_type_ITSBitmapSsp[];

typedef enum {
  ITSServiceSpecificPermissions_opaque,
  ITSServiceSpecificPermissions_bitmapSsp,
} ITSServiceSpecificPermissions_choice;

typedef struct ITSServiceSpecificPermissions {
  ITSServiceSpecificPermissions_choice choice;
  union {
    ASN1String opaque;
    ITSBitmapSsp bitmapSsp;
  } u;
} ITSServiceSpecificPermissions;

extern const ASN1CType asn1_type_ITSServiceSpecificPermissions[];

typedef struct ITSPsidSsp {
  ITSPsid psid;
  BOOL ssp_option;
  ITSServiceSpecificPermissions ssp;
} ITSPsidSsp;


extern const ASN1CType asn1_type_ITSPsidSsp[];

typedef struct ITSSequenceOfPsidSsp {
  ITSPsidSsp *tab;
  size_t count;
} ITSSequenceOfPsidSsp;

extern const ASN1CType asn1_type_ITSSequenceOfPsidSsp[];

typedef struct ITSSequenceOfOctetString {
  ASN1String *tab;
  size_t count;
} ITSSequenceOfOctetString;

extern const ASN1CType asn1_type_ITSSequenceOfOctetString[];

typedef struct ITSBitmapSspRange {
  ASN1String sspValue;
  ASN1String sspBitmask;
} ITSBitmapSspRange;


extern const ASN1CType asn1_type_ITSBitmapSspRange[];

typedef enum {
  ITSSspRange_opaque,
  ITSSspRange_all,
  ITSSspRange_bitmapSspRange,
} ITSSspRange_choice;

typedef struct ITSSspRange {
  ITSSspRange_choice choice;
  union {
    ITSSequenceOfOctetString opaque;
    ITSBitmapSspRange bitmapSspRange;
  } u;
} ITSSspRange;

extern const ASN1CType asn1_type_ITSSspRange[];

typedef struct ITSPsidSspRange {
  ITSPsid psid;
  BOOL sspRange_option;
  ITSSspRange sspRange;
} ITSPsidSspRange;


extern const ASN1CType asn1_type_ITSPsidSspRange[];

typedef struct ITSSequenceOfPsidSspRange {
  ITSPsidSspRange *tab;
  size_t count;
} ITSSequenceOfPsidSspRange;

extern const ASN1CType asn1_type_ITSSequenceOfPsidSspRange[];

typedef ASN1String ITSSubjectAssurance;

extern const ASN1CType asn1_type_ITSSubjectAssurance[];

typedef ITSUint16 ITSCrlSeries;

#define asn1_type_ITSCrlSeries asn1_type_ITSUint16

typedef ITSUint16 ITSIValue;

#define asn1_type_ITSIValue asn1_type_ITSUint16

typedef ASN1String ITSHostname;

extern const ASN1CType asn1_type_ITSHostname[];

typedef ASN1String ITSLinkageValue;

extern const ASN1CType asn1_type_ITSLinkageValue[];

typedef struct ITSGroupLinkageValue {
  ASN1String jValue;
  ASN1String value;
} ITSGroupLinkageValue;


extern const ASN1CType asn1_type_ITSGroupLinkageValue[];

typedef ASN1String ITSLaId;

extern const ASN1CType asn1_type_ITSLaId[];

typedef ASN1String ITSLinkageSeed;

extern const ASN1CType asn1_type_ITSLinkageSeed[];

#ifdef  __cplusplus
}
#endif

#endif /* _FFASN1_ITSASN_H */
