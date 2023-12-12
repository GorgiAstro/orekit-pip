#ifndef org_orekit_forces_empirical_PolynomialAccelerationModel_H
#define org_orekit_forces_empirical_PolynomialAccelerationModel_H

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

        class PolynomialAccelerationModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_031b0c4cf308c323,
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

          explicit PolynomialAccelerationModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialAccelerationModel(const PolynomialAccelerationModel& obj) : ::java::lang::Object(obj) {}

          PolynomialAccelerationModel(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jint);

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
        extern PyType_Def PY_TYPE_DEF(PolynomialAccelerationModel);
        extern PyTypeObject *PY_TYPE(PolynomialAccelerationModel);

        class t_PolynomialAccelerationModel {
        public:
          PyObject_HEAD
          PolynomialAccelerationModel object;
          static PyObject *wrap_Object(const PolynomialAccelerationModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
