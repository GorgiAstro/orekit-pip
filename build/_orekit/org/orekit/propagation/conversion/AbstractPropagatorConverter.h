#ifndef org_orekit_propagation_conversion_AbstractPropagatorConverter_H
#define org_orekit_propagation_conversion_AbstractPropagatorConverter_H

#include "java/lang/Object.h"

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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class AbstractPropagatorConverter : public ::java::lang::Object {
         public:
          enum {
            mid_convert_a2b4413ea9476c3c,
            mid_convert_4513d66a76c09bcc,
            mid_convert_e744c80c7015525e,
            mid_convert_47fabeaccf7f6a1b,
            mid_getAdaptedPropagator_8afbda2d6a487743,
            mid_getEvaluations_570ce0828f81a2c1,
            mid_getRMS_dff5885c2c873297,
            mid_getFrame_b86f9f61d97a7244,
            mid_getModel_9751b2e3b68b45ea,
            mid_getObjectiveFunction_18d8e6aab2238577,
            mid_getTargetSize_570ce0828f81a2c1,
            mid_isOnlyPosition_b108b35ef48e27bd,
            mid_getSample_2afa36052df4765d,
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
