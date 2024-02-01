#ifndef org_orekit_utils_units_UnitsConverter_H
#define org_orekit_utils_units_UnitsConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
        class UnitsConverter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        class UnitsConverter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_978cb4fc5e2f4844,
            mid_convert_bf28ed64d6e8576b,
            mid_getFrom_b1bb36679ea369c9,
            mid_getTo_b1bb36679ea369c9,
            mid_toString_d2c8eb4129821f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnitsConverter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnitsConverter(const UnitsConverter& obj) : ::java::lang::Object(obj) {}

          static UnitsConverter *ARC_SECONDS_TO_RADIANS;
          static UnitsConverter *DAYS_TO_SECONDS;
          static UnitsConverter *IDENTITY;
          static UnitsConverter *KILOMETRES_2_TO_METRES_2;
          static UnitsConverter *KILOMETRES_TO_METRES;
          static UnitsConverter *KM3_P_S2_TO_M3_P_S2;
          static UnitsConverter *MILLI_ARC_SECONDS_TO_RADIANS;
          static UnitsConverter *MILLI_SECONDS_TO_SECONDS;
          static UnitsConverter *NANO_TESLAS_TO_TESLAS;
          static UnitsConverter *PERCENTS_TO_UNIT;

          UnitsConverter(const ::org::orekit::utils::units::Unit &, const ::org::orekit::utils::units::Unit &);

          jdouble convert(jdouble) const;
          ::org::orekit::utils::units::Unit getFrom() const;
          ::org::orekit::utils::units::Unit getTo() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        extern PyType_Def PY_TYPE_DEF(UnitsConverter);
        extern PyTypeObject *PY_TYPE(UnitsConverter);

        class t_UnitsConverter {
        public:
          PyObject_HEAD
          UnitsConverter object;
          static PyObject *wrap_Object(const UnitsConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
