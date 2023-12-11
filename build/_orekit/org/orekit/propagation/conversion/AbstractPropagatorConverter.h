#ifndef org_orekit_propagation_conversion_AbstractPropagatorConverter_H
#define org_orekit_propagation_conversion_AbstractPropagatorConverter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorConverter;
      }
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

        class AbstractPropagatorConverter : public ::java::lang::Object {
         public:
          enum {
            mid_convert_aca0727def0bdfc3,
            mid_convert_e823fa7f61b08ee5,
            mid_convert_45d78d4eb2e28b70,
            mid_convert_5aea72ca01fda79c,
            mid_getAdaptedPropagator_8d6cf3295e825916,
            mid_getEvaluations_412668abc8d889e9,
            mid_getRMS_557b8123390d8d0c,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getModel_e31bcbfb9203b3a6,
            mid_getObjectiveFunction_88ca328d89915cf7,
            mid_getTargetSize_412668abc8d889e9,
            mid_getSample_0d9551367f7ecdef,
            mid_isOnlyPosition_89b302893bdbe1f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractPropagatorConverter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractPropagatorConverter(const AbstractPropagatorConverter& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::propagation::Propagator convert(const ::java::util::List &, jboolean, const JArray< ::java::lang::String > &) const;
          ::org::orekit::propagation::Propagator convert(const ::java::util::List &, jboolean, const ::java::util::List &) const;
          ::org::orekit::propagation::Propagator convert(const ::org::orekit::propagation::Propagator &, jdouble, jint, const JArray< ::java::lang::String > &) const;
          ::org::orekit::propagation::Propagator convert(const ::org::orekit::propagation::Propagator &, jdouble, jint, const ::java::util::List &) const;
          ::org::orekit::propagation::Propagator getAdaptedPropagator() const;
          jint getEvaluations() const;
          jdouble getRMS() const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractPropagatorConverter);
        extern PyTypeObject *PY_TYPE(AbstractPropagatorConverter);

        class t_AbstractPropagatorConverter {
        public:
          PyObject_HEAD
          AbstractPropagatorConverter object;
          static PyObject *wrap_Object(const AbstractPropagatorConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
