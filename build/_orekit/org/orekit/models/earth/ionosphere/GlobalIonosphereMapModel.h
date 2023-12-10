#ifndef org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H
#define org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class TopocentricFrame;
    }
    namespace data {
      class DataProvidersManager;
      class DataSource;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class TimeScale;
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
    namespace models {
      namespace earth {
        namespace ionosphere {

          class GlobalIonosphereMapModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d0bc48d5b00dc40c,
              mid_init$_f7987dfd5a1a9569,
              mid_init$_c9696a3ab5455033,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_pathDelay_bea489d08473aa2e,
              mid_pathDelay_28325ab4dabb069a,
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
