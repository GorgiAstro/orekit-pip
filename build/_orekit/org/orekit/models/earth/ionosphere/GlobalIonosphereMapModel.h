#ifndef org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H
#define org_orekit_models_earth_ionosphere_GlobalIonosphereMapModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace time {
      class TimeScale;
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
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
              mid_init$_e939c6558ae8d313,
              mid_init$_657d44af0e952733,
              mid_init$_c3298cacdeeaf7cf,
              mid_getParametersDrivers_a6156df500549a58,
              mid_pathDelay_78d4f8498e981bf5,
              mid_pathDelay_c824fdb3e595a2ae,
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
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble pathDelay(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::frames::TopocentricFrame &, jdouble, const JArray< jdouble > &) const;
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
