#ifndef org_orekit_propagation_conversion_OsculatingToMeanElementsConverter_H
#define org_orekit_propagation_conversion_OsculatingToMeanElementsConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class Propagator;
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class OsculatingToMeanElementsConverter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_73bfa0df23e443ab,
            mid_convert_8fbfa58855031235,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OsculatingToMeanElementsConverter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OsculatingToMeanElementsConverter(const OsculatingToMeanElementsConverter& obj) : ::java::lang::Object(obj) {}

          OsculatingToMeanElementsConverter(const ::org::orekit::propagation::SpacecraftState &, jint, const ::org::orekit::propagation::Propagator &, jdouble);

          ::org::orekit::propagation::SpacecraftState convert() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(OsculatingToMeanElementsConverter);
        extern PyTypeObject *PY_TYPE(OsculatingToMeanElementsConverter);

        class t_OsculatingToMeanElementsConverter {
        public:
          PyObject_HEAD
          OsculatingToMeanElementsConverter object;
          static PyObject *wrap_Object(const OsculatingToMeanElementsConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
