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
            mid_convert_1713a56b457259e7,
            mid_convert_94ab750de1114aab,
            mid_convert_ed6ecec71abaa7e7,
            mid_convert_f1a727d7b3be4da6,
            mid_getAdaptedPropagator_605fbba6f75c4d5a,
            mid_getEvaluations_d6ab429752e7c267,
            mid_getRMS_9981f74b2d109da6,
            mid_getFrame_cb151471db4570f0,
            mid_getObjectiveFunction_0a4097997512db0b,
            mid_getModel_b9638c47db64ddc7,
            mid_getSample_d751c1a57012b438,
            mid_isOnlyPosition_eee3de00fe971136,
            mid_getTargetSize_d6ab429752e7c267,
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
