#ifndef org_orekit_propagation_conversion_PropagatorConverter_H
#define org_orekit_propagation_conversion_PropagatorConverter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class Propagator;
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PropagatorConverter : public ::java::lang::Object {
         public:
          enum {
            mid_convert_aca0727def0bdfc3,
            mid_convert_e823fa7f61b08ee5,
            mid_convert_45d78d4eb2e28b70,
            mid_convert_5aea72ca01fda79c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PropagatorConverter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PropagatorConverter(const PropagatorConverter& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::propagation::Propagator convert(const ::java::util::List &, jboolean, const JArray< ::java::lang::String > &) const;
          ::org::orekit::propagation::Propagator convert(const ::java::util::List &, jboolean, const ::java::util::List &) const;
          ::org::orekit::propagation::Propagator convert(const ::org::orekit::propagation::Propagator &, jdouble, jint, const JArray< ::java::lang::String > &) const;
          ::org::orekit::propagation::Propagator convert(const ::org::orekit::propagation::Propagator &, jdouble, jint, const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(PropagatorConverter);
        extern PyTypeObject *PY_TYPE(PropagatorConverter);

        class t_PropagatorConverter {
        public:
          PyObject_HEAD
          PropagatorConverter object;
          static PyObject *wrap_Object(const PropagatorConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
