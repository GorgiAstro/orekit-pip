#ifndef org_orekit_forces_empirical_HarmonicAccelerationModel_H
#define org_orekit_forces_empirical_HarmonicAccelerationModel_H

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
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        class HarmonicAccelerationModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_dda4b4bb0ac4a0dc,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_init_0472264ad6f40bc2,
            mid_signedAmplitude_4ad317f7598a10a9,
            mid_signedAmplitude_810dcb8f9f5d191a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HarmonicAccelerationModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HarmonicAccelerationModel(const HarmonicAccelerationModel& obj) : ::java::lang::Object(obj) {}

          HarmonicAccelerationModel(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jdouble, jint);

          ::java::util::List getParametersDrivers() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::hipparchus::CalculusFieldElement signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          jdouble signedAmplitude(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {
        extern PyType_Def PY_TYPE_DEF(HarmonicAccelerationModel);
        extern PyTypeObject *PY_TYPE(HarmonicAccelerationModel);

        class t_HarmonicAccelerationModel {
        public:
          PyObject_HEAD
          HarmonicAccelerationModel object;
          static PyObject *wrap_Object(const HarmonicAccelerationModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
