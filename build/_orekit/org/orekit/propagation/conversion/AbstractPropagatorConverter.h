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
            mid_convert_1085fbc3099561ad,
            mid_convert_ed49a95e057deeb1,
            mid_convert_8c138e9dd275b235,
            mid_convert_439cb7b3f99fe6c0,
            mid_getAdaptedPropagator_75ab23d3f479a59b,
            mid_getEvaluations_55546ef6a647f39b,
            mid_getRMS_b74f83833fdad017,
            mid_getFrame_2c51111cc6894ba1,
            mid_getModel_6a20d4ddc607b9bb,
            mid_getTargetSize_55546ef6a647f39b,
            mid_getSample_e62d3bb06d56d7e3,
            mid_isOnlyPosition_9ab94ac1dc23b105,
            mid_getObjectiveFunction_72c2cddd79f92b83,
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
