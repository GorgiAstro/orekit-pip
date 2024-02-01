#ifndef org_orekit_models_earth_ionosphere_IonosphericModel_H
#define org_orekit_models_earth_ionosphere_IonosphericModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TopocentricFrame;
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
    namespace models {
      namespace earth {
        namespace ionosphere {

          class IonosphericModel : public ::org::orekit::utils::ParameterDriversProvider {
           public:
            enum {
              mid_pathDelay_c84aeff9124fe654,
              mid_pathDelay_d2f5e0e8b7e00e80,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IonosphericModel(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IonosphericModel(const IonosphericModel& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(IonosphericModel);
          extern PyTypeObject *PY_TYPE(IonosphericModel);

          class t_IonosphericModel {
          public:
            PyObject_HEAD
            IonosphericModel object;
            static PyObject *wrap_Object(const IonosphericModel&);
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
