#ifndef org_orekit_models_earth_ionosphere_EstimatedIonosphericModel_H
#define org_orekit_models_earth_ionosphere_EstimatedIonosphericModel_H

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
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericMappingFunction;
          class IonosphericModel;
        }
      }
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

          class EstimatedIonosphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c3df0bf38b459d86,
              mid_getParametersDrivers_a6156df500549a58,
              mid_pathDelay_00612b4611856fc4,
              mid_pathDelay_bf16cb994a5cc871,
              mid_pathDelay_c824fdb3e595a2ae,
              mid_pathDelay_78d4f8498e981bf5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EstimatedIonosphericModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EstimatedIonosphericModel(const EstimatedIonosphericModel& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *VERTICAL_TOTAL_ELECTRON_CONTENT;

            EstimatedIonosphericModel(const ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction &, jdouble);

            ::java::util::List getParametersDrivers() const;
            jdouble pathDelay(jdouble, jdouble, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::hipparchus::CalculusFieldElement &, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
          extern PyType_Def PY_TYPE_DEF(EstimatedIonosphericModel);
          extern PyTypeObject *PY_TYPE(EstimatedIonosphericModel);

          class t_EstimatedIonosphericModel {
          public:
            PyObject_HEAD
            EstimatedIonosphericModel object;
            static PyObject *wrap_Object(const EstimatedIonosphericModel&);
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
