#ifndef org_orekit_errors_OrekitMessages_H
#define org_orekit_errors_OrekitMessages_H

#include "java/lang/Enum.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
  namespace orekit {
    namespace errors {
      class OrekitMessages;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class OrekitMessages : public ::java::lang::Enum {
       public:
        enum {
          mid_getLocalizedString_bab3be9b232acc5a,
          mid_getSourceString_0090f7797e403f43,
          mid_valueOf_b2403a9fc6183395,
          mid_values_5596e855fb4dc890,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrekitMessages(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitMessages(const OrekitMessages& obj) : ::java::lang::Enum(obj) {}

        static OrekitMessages *ADDITIONAL_STATE_NAME_ALREADY_IN_USE;
        static OrekitMessages *ALMOST_CRITICALLY_INCLINED_ORBIT;
        static OrekitMessages *ALMOST_EQUATORIAL_ORBIT;
        static OrekitMessages *ALTITUDE_BELOW_ALLOWED_THRESHOLD;
        static OrekitMessages *ANGLE_TYPE_NOT_SUPPORTED;
        static OrekitMessages *ATTEMPT_TO_GENERATE_MALFORMED_FILE;
        static OrekitMessages *ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND;
        static OrekitMessages *CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF;
        static OrekitMessages *CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME;
        static OrekitMessages *CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT;
        static OrekitMessages *CANNOT_COMPUTE_LAGRANGIAN;
        static OrekitMessages *CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES;
        static OrekitMessages *CANNOT_FIND_SATELLITE_IN_SYSTEM;
        static OrekitMessages *CANNOT_PARSE_BOTH_TAU_AND_GAMMA;
        static OrekitMessages *CANNOT_PARSE_GNSS_DATA;
        static OrekitMessages *CANNOT_PARSE_SOURCETABLE;
        static OrekitMessages *CANNOT_START_PROPAGATION_FROM_INFINITY;
        static OrekitMessages *CCSDS_DATE_INVALID_LENGTH_TIME_FIELD;
        static OrekitMessages *CCSDS_DATE_INVALID_PREAMBLE_FIELD;
        static OrekitMessages *CCSDS_DATE_MISSING_AGENCY_EPOCH;
        static OrekitMessages *CCSDS_DIFFERENT_LVLH_DEFINITION;
        static OrekitMessages *CCSDS_INCOMPATIBLE_KEYS_BOTH_USED;
        static OrekitMessages *CCSDS_INCOMPLETE_DATA;
        static OrekitMessages *CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES;
        static OrekitMessages *CCSDS_INCONSISTENT_TIME_SYSTEMS;
        static OrekitMessages *CCSDS_INVALID_FRAME;
        static OrekitMessages *CCSDS_INVALID_ROTATION_SEQUENCE;
        static OrekitMessages *CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION;
        static OrekitMessages *CCSDS_MANEUVER_MISSING_TIME;
        static OrekitMessages *CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS;
        static OrekitMessages *CCSDS_MISSING_KEYWORD;
        static OrekitMessages *CCSDS_MISSING_SENSOR_INDEX;
        static OrekitMessages *CCSDS_SENSOR_INDEX_ALREADY_USED;
        static OrekitMessages *CCSDS_TDM_KEYWORD_NOT_FOUND;
        static OrekitMessages *CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER;
        static OrekitMessages *CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED;
        static OrekitMessages *CCSDS_TIME_SYSTEM_NOT_READ_YET;
        static OrekitMessages *CCSDS_UNEXPECTED_KEYWORD;
        static OrekitMessages *CCSDS_UNKNOWN_ATTITUDE_TYPE;
        static OrekitMessages *CCSDS_UNKNOWN_CONVENTIONS;
        static OrekitMessages *CCSDS_UNKNOWN_GM;
        static OrekitMessages *CCSDS_UNKNOWN_SPACECRAFT_MASS;
        static OrekitMessages *CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE;
        static OrekitMessages *CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL;
        static OrekitMessages *CLOCK_FILE_UNSUPPORTED_VERSION;
        static OrekitMessages *CONNECTION_ERROR;
        static OrekitMessages *CORRUPTED_FILE;
        static OrekitMessages *CPF_UNEXPECTED_END_OF_FILE;
        static OrekitMessages *CRD_UNEXPECTED_END_OF_FILE;
        static OrekitMessages *DATA_ROOT_DIRECTORY_DOES_NOT_EXIST;
        static OrekitMessages *DATES_MISMATCH;
        static OrekitMessages *DIFFERENT_STATE_DEFINITION;
        static OrekitMessages *DIFFERENT_TIME_OF_CLOSEST_APPROACH;
        static OrekitMessages *DIMENSION_INCONSISTENT_WITH_PARAMETERS;
        static OrekitMessages *DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD;
        static OrekitMessages *DSST_NEWCOMB_OPERATORS_COMPUTATION;
        static OrekitMessages *DSST_SPR_SHADOW_INCONSISTENT;
        static OrekitMessages *DSST_VMNS_COEFFICIENT_ERROR_MS;
        static OrekitMessages *DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE;
        static OrekitMessages *END_OF_ENCODED_MESSAGE;
        static OrekitMessages *EVENT_DATE_TOO_CLOSE;
        static OrekitMessages *EXCEPTIONAL_DATA_CONTEXT;
        static OrekitMessages *FAILED_AUTHENTICATION;
        static OrekitMessages *FIND_ROOT;
        static OrekitMessages *FRAMES_MISMATCH;
        static OrekitMessages *FRAME_ALREADY_ATTACHED;
        static OrekitMessages *FRAME_ANCESTOR_OF_BOTH_FRAMES;
        static OrekitMessages *FRAME_ANCESTOR_OF_NEITHER_FRAME;
        static OrekitMessages *FRAME_NOT_ATTACHED;
        static OrekitMessages *FRAME_NO_NTH_ANCESTOR;
        static OrekitMessages *FUNCTION_NOT_IMPLEMENTED;
        static OrekitMessages *GNSS_PARITY_ERROR;
        static OrekitMessages *GRAVITY_FIELD_NORMALIZATION_UNDERFLOW;
        static OrekitMessages *HEADER_ALREADY_WRITTEN;
        static OrekitMessages *HEADER_NOT_WRITTEN;
        static OrekitMessages *HYPERBOLIC_ORBIT_NOT_HANDLED_AS;
        static OrekitMessages *INCOMPATIBLE_FRAMES;
        static OrekitMessages *INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS;
        static OrekitMessages *INCOMPATIBLE_UNITS;
        static OrekitMessages *INCOMPLETE_HEADER;
        static OrekitMessages *INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES;
        static OrekitMessages *INCONSISTENT_DATES_IN_IERS_FILE;
        static OrekitMessages *INCONSISTENT_EARTH_MOON_RATIO_IN_FILES;
        static OrekitMessages *INCONSISTENT_NUMBER_OF_ELEMENTS;
        static OrekitMessages *INCONSISTENT_NUMBER_OF_SATS;
        static OrekitMessages *INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE;
        static OrekitMessages *INCONSISTENT_SAMPLING_DATE;
        static OrekitMessages *INCONSISTENT_SATELLITE_SYSTEM;
        static OrekitMessages *INCONSISTENT_SELECTION;
        static OrekitMessages *INERTIAL_FORCE_MODEL_MISSING;
        static OrekitMessages *INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH;
        static OrekitMessages *INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION;
        static OrekitMessages *INTERNAL_ERROR;
        static OrekitMessages *INVALID_GNSS_DATA;
        static OrekitMessages *INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS;
        static OrekitMessages *INVALID_PARAMETER_RANGE;
        static OrekitMessages *INVALID_RANGE_INDICATOR_IN_CRD_FILE;
        static OrekitMessages *INVALID_SATELLITE_ID;
        static OrekitMessages *INVALID_SATELLITE_SYSTEM;
        static OrekitMessages *INVALID_TYPE_FOR_FUNCTION;
        static OrekitMessages *IRREGULAR_OR_INCOMPLETE_GRID;
        static OrekitMessages *ITRF_VERSIONS_PREFIX_ONLY;
        static OrekitMessages *KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE;
        static OrekitMessages *KLOBUCHAR_ALPHA_BETA_NOT_LOADED;
        static OrekitMessages *METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY;
        static OrekitMessages *MISMATCHED_FREQUENCIES;
        static OrekitMessages *MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES;
        static OrekitMessages *MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP;
        static OrekitMessages *MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE;
        static OrekitMessages *MISSING_HEADER;
        static OrekitMessages *MISSING_SECOND_TLE_LINE;
        static OrekitMessages *MISSING_SERIE_J_IN_FILE;
        static OrekitMessages *MISSING_STATION_DATA_FOR_EPOCH;
        static OrekitMessages *MISSING_VELOCITY;
        static OrekitMessages *MODIP_GRID_NOT_LOADED;
        static OrekitMessages *MOUNPOINT_ALREADY_CONNECTED;
        static OrekitMessages *MULTIPLE_INTERPOLATOR_USED;
        static OrekitMessages *MULTIPLE_SHOOTING_UNDERCONSTRAINED;
        static OrekitMessages *NEITHER_DIRECTORY_NOR_ZIP_OR_JAR;
        static OrekitMessages *NEQUICK_F2_FM3_NOT_LOADED;
        static OrekitMessages *NON_CHRONOLOGICALLY_SORTED_ENTRIES;
        static OrekitMessages *NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS;
        static OrekitMessages *NON_CHRONOLOGICAL_DATES_IN_FILE;
        static OrekitMessages *NON_COPLANAR_POINTS;
        static OrekitMessages *NON_DIFFERENT_DATES_FOR_OBSERVATIONS;
        static OrekitMessages *NON_EXISTENT_DATE;
        static OrekitMessages *NON_EXISTENT_DAY_NUMBER_IN_YEAR;
        static OrekitMessages *NON_EXISTENT_GEOMAGNETIC_MODEL;
        static OrekitMessages *NON_EXISTENT_HMS_TIME;
        static OrekitMessages *NON_EXISTENT_MONTH;
        static OrekitMessages *NON_EXISTENT_TIME;
        static OrekitMessages *NON_EXISTENT_WEEK_DATE;
        static OrekitMessages *NON_EXISTENT_YEAR_MONTH_DAY;
        static OrekitMessages *NON_PSEUDO_INERTIAL_FRAME;
        static OrekitMessages *NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES;
        static OrekitMessages *NON_RESETABLE_STATE;
        static OrekitMessages *NOT_A_DIRECTORY;
        static OrekitMessages *NOT_A_JPL_EPHEMERIDES_BINARY_FILE;
        static OrekitMessages *NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE;
        static OrekitMessages *NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE;
        static OrekitMessages *NOT_A_SUPPORTED_IERS_DATA_FILE;
        static OrekitMessages *NOT_A_SUPPORTED_SEM_ALMANAC_FILE;
        static OrekitMessages *NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE;
        static OrekitMessages *NOT_A_SUPPORTED_YUMA_ALMANAC_FILE;
        static OrekitMessages *NOT_ENOUGH_ATTITUDE_PROVIDERS;
        static OrekitMessages *NOT_ENOUGH_CACHED_NEIGHBORS;
        static OrekitMessages *NOT_ENOUGH_DATA;
        static OrekitMessages *NOT_ENOUGH_GNSS_FOR_DOP;
        static OrekitMessages *NOT_ENOUGH_PROPAGATORS;
        static OrekitMessages *NOT_POSITIVE_SPACECRAFT_MASS;
        static OrekitMessages *NOT_STRICTLY_POSITIVE;
        static OrekitMessages *NOT_TLE_LINES;
        static OrekitMessages *NOT_VALID_INTERNATIONAL_DESIGNATOR;
        static OrekitMessages *NO_CACHED_ENTRIES;
        static OrekitMessages *NO_DATA_GENERATED;
        static OrekitMessages *NO_DATA_IN_FILE;
        static OrekitMessages *NO_DATA_LOADED_FOR_CELESTIAL_BODY;
        static OrekitMessages *NO_EARTH_ORIENTATION_PARAMETERS;
        static OrekitMessages *NO_EARTH_ORIENTATION_PARAMETERS_LOADED;
        static OrekitMessages *NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE;
        static OrekitMessages *NO_EPOCH_IN_IONEX_HEADER;
        static OrekitMessages *NO_GRAVITY_FIELD_DATA_LOADED;
        static OrekitMessages *NO_IERS_UTC_TAI_HISTORY_DATA_LOADED;
        static OrekitMessages *NO_INTERPOLATOR_FOR_STATE_DEFINITION;
        static OrekitMessages *NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND;
        static OrekitMessages *NO_KLOBUCHAR_ALPHA_BETA_IN_FILE;
        static OrekitMessages *NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER;
        static OrekitMessages *NO_OCEAN_TIDE_DATA_LOADED;
        static OrekitMessages *NO_PROPAGATOR_CONFIGURED;
        static OrekitMessages *NO_REFERENCE_DATE_FOR_PARAMETER;
        static OrekitMessages *NO_SEM_ALMANAC_AVAILABLE;
        static OrekitMessages *NO_SOLAR_ACTIVITY_AT_DATE;
        static OrekitMessages *NO_SUCH_ITRF_FRAME;
        static OrekitMessages *NO_TEC_DATA_IN_FILES_FOR_DATE;
        static OrekitMessages *NO_TLE_DATA_AVAILABLE;
        static OrekitMessages *NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE;
        static OrekitMessages *NO_TLE_FOR_OBJECT;
        static OrekitMessages *NO_UNSCENTED_TRANSFORM_CONFIGURED;
        static OrekitMessages *NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE;
        static OrekitMessages *NO_YUMA_ALMANAC_AVAILABLE;
        static OrekitMessages *NULL_ARGUMENT;
        static OrekitMessages *NULL_PARENT_FOR_FRAME;
        static OrekitMessages *OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS;
        static OrekitMessages *OCEAN_TIDE_LOAD_DEFORMATION_LIMITS;
        static OrekitMessages *ORBITS_MUS_MISMATCH;
        static OrekitMessages *ORBIT_AND_ATTITUDE_DATES_MISMATCH;
        static OrekitMessages *ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE;
        static OrekitMessages *ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE;
        static OrekitMessages *ORBIT_TYPE_NOT_ALLOWED;
        static OrekitMessages *OUT_OF_RANGE_BODY_EPHEMERIDES_DATE;
        static OrekitMessages *OUT_OF_RANGE_DATE;
        static OrekitMessages *OUT_OF_RANGE_DERIVATION_ORDER;
        static OrekitMessages *OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER;
        static OrekitMessages *OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE;
        static OrekitMessages *OUT_OF_RANGE_SECONDS_NUMBER;
        static OrekitMessages *OUT_OF_RANGE_SECONDS_NUMBER_DETAIL;
        static OrekitMessages *OUT_OF_RANGE_TIME_TRANSFORM;
        static OrekitMessages *PARAMETER_NOT_SET;
        static OrekitMessages *PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET;
        static OrekitMessages *PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES;
        static OrekitMessages *POINT_INSIDE_ELLIPSOID;
        static OrekitMessages *POLAR_TRAJECTORY;
        static OrekitMessages *POSITIVE_FLOW_RATE;
        static OrekitMessages *SATELLITE_COLLIDED_WITH_TARGET;
        static OrekitMessages *SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD;
        static OrekitMessages *SINGULAR_JACOBIAN_FOR_ORBIT_TYPE;
        static OrekitMessages *SOURCETABLE_PARSE_ERROR;
        static OrekitMessages *SP3_INCOMPATIBLE_FILE_METADATA;
        static OrekitMessages *SP3_INCOMPATIBLE_SATELLITE_MEDATADA;
        static OrekitMessages *SP3_INVALID_HEADER_ENTRY;
        static OrekitMessages *SP3_NUMBER_OF_EPOCH_MISMATCH;
        static OrekitMessages *SP3_TOO_MANY_SATELLITES_FOR_VERSION;
        static OrekitMessages *SP3_UNSUPPORTED_VERSION;
        static OrekitMessages *STATE_AND_COVARIANCE_DATES_MISMATCH;
        static OrekitMessages *STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH;
        static OrekitMessages *STATE_JACOBIAN_NOT_6X6;
        static OrekitMessages *STATE_JACOBIAN_NOT_INITIALIZED;
        static OrekitMessages *STATION_NOT_FOUND;
        static OrekitMessages *STEC_INTEGRATION_DID_NOT_CONVERGE;
        static OrekitMessages *STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM;
        static OrekitMessages *STK_UNEXPECTED_END_OF_FILE;
        static OrekitMessages *STK_UNMAPPED_COORDINATE_SYSTEM;
        static OrekitMessages *STREAM_REQUIRES_NMEA_FIX;
        static OrekitMessages *TLE_CHECKSUM_ERROR;
        static OrekitMessages *TLE_INVALID_PARAMETER;
        static OrekitMessages *TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT;
        static OrekitMessages *TOO_LARGE_DATA_TYPE;
        static OrekitMessages *TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD;
        static OrekitMessages *TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL;
        static OrekitMessages *TOO_LARGE_ORDER_FOR_GRAVITY_FIELD;
        static OrekitMessages *TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH;
        static OrekitMessages *TOO_SMALL_SCALE_FOR_PARAMETER;
        static OrekitMessages *TRAJECTORY_INSIDE_BRILLOUIN_SPHERE;
        static OrekitMessages *TRAJECTORY_NOT_CROSSING_XZPLANE;
        static OrekitMessages *UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS;
        static OrekitMessages *UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS;
        static OrekitMessages *UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS;
        static OrekitMessages *UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY;
        static OrekitMessages *UNABLE_TO_COMPUTE_TLE;
        static OrekitMessages *UNABLE_TO_FIND_FILE;
        static OrekitMessages *UNABLE_TO_FIND_RESOURCE;
        static OrekitMessages *UNABLE_TO_GENERATE_NEW_DATA_AFTER;
        static OrekitMessages *UNABLE_TO_GENERATE_NEW_DATA_BEFORE;
        static OrekitMessages *UNABLE_TO_PARSE_ELEMENT_IN_FILE;
        static OrekitMessages *UNABLE_TO_PARSE_LINE_IN_FILE;
        static OrekitMessages *UNABLE_TO_READ_JPL_HEADER;
        static OrekitMessages *UNDEFINED_ABSOLUTE_PVCOORDINATES;
        static OrekitMessages *UNDEFINED_ORBIT;
        static OrekitMessages *UNEXPECTED_CONTENT_TYPE;
        static OrekitMessages *UNEXPECTED_DATA_AFTER_LINE_IN_FILE;
        static OrekitMessages *UNEXPECTED_DATA_AT_LINE_IN_FILE;
        static OrekitMessages *UNEXPECTED_END_OF_FILE;
        static OrekitMessages *UNEXPECTED_END_OF_FILE_AFTER_LINE;
        static OrekitMessages *UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER;
        static OrekitMessages *UNEXPECTED_FORMAT_FOR_ILRS_FILE;
        static OrekitMessages *UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH;
        static OrekitMessages *UNINITIALIZED_VALUE_FOR_KEY;
        static OrekitMessages *UNKNOWN_ADDITIONAL_STATE;
        static OrekitMessages *UNKNOWN_AUTHENTICATION_METHOD;
        static OrekitMessages *UNKNOWN_CARRIER_PHASE_CODE;
        static OrekitMessages *UNKNOWN_CLOCK_DATA_TYPE;
        static OrekitMessages *UNKNOWN_DATA_FORMAT;
        static OrekitMessages *UNKNOWN_ENCODED_MESSAGE_NUMBER;
        static OrekitMessages *UNKNOWN_HOST;
        static OrekitMessages *UNKNOWN_MONTH;
        static OrekitMessages *UNKNOWN_NAVIGATION_SYSTEM;
        static OrekitMessages *UNKNOWN_RINEX_FREQUENCY;
        static OrekitMessages *UNKNOWN_SATELLITE_ANTENNA_CODE;
        static OrekitMessages *UNKNOWN_SATELLITE_SYSTEM;
        static OrekitMessages *UNKNOWN_TIME_SYSTEM;
        static OrekitMessages *UNKNOWN_UNIT;
        static OrekitMessages *UNKNOWN_UTC_ID;
        static OrekitMessages *UNSUPPORTED_FILE_FORMAT;
        static OrekitMessages *UNSUPPORTED_FILE_FORMAT_VERSION;
        static OrekitMessages *UNSUPPORTED_FREQUENCY_FOR_ANTENNA;
        static OrekitMessages *UNSUPPORTED_LOCAL_ORBITAL_FRAME;
        static OrekitMessages *UNSUPPORTED_PARAMETER_NAME;
        static OrekitMessages *UNSUPPORTED_TIME_TRANSFORM;
        static OrekitMessages *UNSUPPORTED_TRANSFORM;
        static OrekitMessages *VALUE_NOT_FOUND;
        static OrekitMessages *VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE;
        static OrekitMessages *VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED;
        static OrekitMessages *WRONG_COLUMNS_NUMBER;
        static OrekitMessages *WRONG_DEGREE_OR_ORDER;
        static OrekitMessages *WRONG_EOP_INTERPOLATION_DEGREE;
        static OrekitMessages *WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION;
        static OrekitMessages *WRONG_NB_COMPONENTS;
        static OrekitMessages *WRONG_ORBIT_PARAMETERS_TYPE;
        static OrekitMessages *WRONG_PARSING_TYPE;

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
        static OrekitMessages valueOf(const ::java::lang::String &);
        static JArray< OrekitMessages > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(OrekitMessages);
      extern PyTypeObject *PY_TYPE(OrekitMessages);

      class t_OrekitMessages {
      public:
        PyObject_HEAD
        OrekitMessages object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OrekitMessages *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OrekitMessages&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OrekitMessages&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
