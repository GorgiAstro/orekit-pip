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
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
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
            mid_init$_f4b0e27e7ecb64bf,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_init_14deaae988292d42,
            mid_signedAmplitude_6c8e6cd5d59063ae,
            mid_signedAmplitude_4222abdadde032f5,
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
