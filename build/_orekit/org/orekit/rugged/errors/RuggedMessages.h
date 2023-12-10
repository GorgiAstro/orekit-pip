#ifndef org_orekit_rugged_errors_RuggedMessages_H
#define org_orekit_rugged_errors_RuggedMessages_H

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
  namespace orekit {
    namespace rugged {
      namespace errors {
        class RuggedMessages;
      }
    }
  }
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class RuggedMessages : public ::java::lang::Enum {
         public:
          enum {
            mid_getLocalizedString_bab3be9b232acc5a,
            mid_getSourceString_0090f7797e403f43,
            mid_valueOf_f64d3eb28b165176,
            mid_values_09671380335c3a24,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuggedMessages(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuggedMessages(const RuggedMessages& obj) : ::java::lang::Enum(obj) {}

          static RuggedMessages *ABERRATION_OF_LIGHT_CORRECTION_REDEFINED;
          static RuggedMessages *ATMOSPHERIC_REFRACTION_REDEFINED;
          static RuggedMessages *CANNOT_PARSE_LINE;
          static RuggedMessages *DEBUG_DUMP_ACTIVATION_ERROR;
          static RuggedMessages *DEBUG_DUMP_ALREADY_ACTIVE;
          static RuggedMessages *DEBUG_DUMP_NOT_ACTIVE;
          static RuggedMessages *DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT;
          static RuggedMessages *DUPLICATED_PARAMETER_NAME;
          static RuggedMessages *EMPTY_TILE;
          static RuggedMessages *FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP;
          static RuggedMessages *INTERNAL_ERROR;
          static RuggedMessages *INVALID_RANGE_FOR_LINES;
          static RuggedMessages *INVALID_RUGGED_NAME;
          static RuggedMessages *INVALID_STEP;
          static RuggedMessages *LIGHT_TIME_CORRECTION_REDEFINED;
          static RuggedMessages *LINE_OF_SIGHT_DOES_NOT_REACH_GROUND;
          static RuggedMessages *LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE;
          static RuggedMessages *LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE;
          static RuggedMessages *LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE;
          static RuggedMessages *NOT_INTERPOLATOR_DUMP_DATA;
          static RuggedMessages *NO_DEM_DATA;
          static RuggedMessages *NO_LAYER_DATA;
          static RuggedMessages *NO_PARAMETERS_SELECTED;
          static RuggedMessages *NO_REFERENCE_MAPPINGS;
          static RuggedMessages *OUT_OF_TILE_ANGLES;
          static RuggedMessages *OUT_OF_TILE_INDICES;
          static RuggedMessages *OUT_OF_TIME_RANGE;
          static RuggedMessages *SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE;
          static RuggedMessages *SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES;
          static RuggedMessages *TILE_ALREADY_DEFINED;
          static RuggedMessages *TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED;
          static RuggedMessages *UNINITIALIZED_CONTEXT;
          static RuggedMessages *UNKNOWN_SENSOR;
          static RuggedMessages *UNKNOWN_TILE;
          static RuggedMessages *UNSUPPORTED_REFINING_CONTEXT;

          ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
          ::java::lang::String getSourceString() const;
          static RuggedMessages valueOf(const ::java::lang::String &);
          static JArray< RuggedMessages > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        extern PyType_Def PY_TYPE_DEF(RuggedMessages);
        extern PyTypeObject *PY_TYPE(RuggedMessages);

        class t_RuggedMessages {
        public:
          PyObject_HEAD
          RuggedMessages object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RuggedMessages *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RuggedMessages&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RuggedMessages&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
