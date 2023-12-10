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
      class Propagator;
      namespace conversion {
        class PropagatorConverter;
      }
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
            mid_convert_b26c78fdb005126c,
            mid_convert_392814b1b1bbdd34,
            mid_convert_979b6b07281c1e27,
            mid_convert_b641a72d0c9694a7,
            mid_getAdaptedPropagator_46f8fd1706005d71,
            mid_getEvaluations_f2f64475e4580546,
            mid_getRMS_456d9a2f64d6b28d,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getObjectiveFunction_aaef55ff59f9c00e,
            mid_getModel_b196da25fd980476,
            mid_getTargetSize_f2f64475e4580546,
            mid_isOnlyPosition_e470b6d9e0d979db,
            mid_getSample_a6156df500549a58,
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
