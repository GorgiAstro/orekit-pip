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
          class IonosphericModel;
          class IonosphericMappingFunction;
        }
      }
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace utils {
      class ParameterDriver;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class EstimatedIonosphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_96bc38eb13551139,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_pathDelay_e3546a4ddcf1e47f,
              mid_pathDelay_77b03b61cb85f44d,
              mid_pathDelay_5e4bace87c721642,
              mid_pathDelay_0c51f26f37c66719,
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
