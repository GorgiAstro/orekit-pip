#ifndef org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H
#define org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class TimeScale;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
              mid_init$_734b91ac30d5f9b4,
              mid_init$_da507b2a8ca38fd6,
              mid_init$_41d9572e040b2cb7,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_pathDelay_5e4bace87c721642,
              mid_pathDelay_0c51f26f37c66719,
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
