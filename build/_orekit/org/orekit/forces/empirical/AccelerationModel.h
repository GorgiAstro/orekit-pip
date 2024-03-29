#ifndef org_orekit_forces_empirical_AccelerationModel_H
#define org_orekit_forces_empirical_AccelerationModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
    namespace forces {
      namespace empirical {

        class AccelerationModel : public ::org::orekit::utils::ParameterDriversProvider {
         public:
          enum {
            mid_init_14deaae988292d42,
            mid_signedAmplitude_6c8e6cd5d59063ae,
            mid_signedAmplitude_4222abdadde032f5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AccelerationModel(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AccelerationModel(const AccelerationModel& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(AccelerationModel);
        extern PyTypeObject *PY_TYPE(AccelerationModel);

        class t_AccelerationModel {
        public:
          PyObject_HEAD
          AccelerationModel object;
          static PyObject *wrap_Object(const AccelerationModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
