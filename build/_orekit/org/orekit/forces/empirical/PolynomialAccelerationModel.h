#ifndef org_orekit_forces_empirical_PolynomialAccelerationModel_H
#define org_orekit_forces_empirical_PolynomialAccelerationModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_78fab9ce536a813d,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_init_826b4eda94da4e78,
            mid_signedAmplitude_8bdf60d5551eceaf,
            mid_signedAmplitude_0b7191d207b9680f,
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
