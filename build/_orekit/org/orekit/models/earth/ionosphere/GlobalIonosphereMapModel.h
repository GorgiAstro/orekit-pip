#ifndef org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H
#define org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H

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
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
    namespace time {
      class TimeScale;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class GlobalIonosphereMapModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f5ffdf29129ef90a,
              mid_init$_57dc6ad440197703,
              mid_init$_d8fcbe65f280bc96,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_pathDelay_e09499dc3d690830,
              mid_pathDelay_8fbdb07bb0b935f0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GlobalIonosphereMapModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GlobalIonosphereMapModel(const GlobalIonosphereMapModel& obj) : ::java::lang::Object(obj) {}

            GlobalIonosphereMapModel(const ::java::lang::String &);
            GlobalIonosphereMapModel(const ::org::orekit::time::TimeScale &, const JArray< ::org::orekit::data::DataSource > &);
            GlobalIonosphereMapModel(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);

            ::java::util::List getParametersDrivers() const;
            jdouble pathDelay(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          extern PyType_Def PY_TYPE_DEF(GlobalIonosphereMapModel);
          extern PyTypeObject *PY_TYPE(GlobalIonosphereMapModel);

          class t_GlobalIonosphereMapModel {
          public:
            PyObject_HEAD
            GlobalIonosphereMapModel object;
            static PyObject *wrap_Object(const GlobalIonosphereMapModel&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
