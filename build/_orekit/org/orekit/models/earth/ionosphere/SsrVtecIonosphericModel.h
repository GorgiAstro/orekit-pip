#ifndef org_orekit_models_earth_ionosphere_SsrVtecIonosphericModel_H
#define org_orekit_models_earth_ionosphere_SsrVtecIonosphericModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {
              class SsrIm201;
            }
          }
        }
      }
    }
    namespace frames {
      class TopocentricFrame;
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

          class SsrVtecIonosphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_459c7bf428eba8f4,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_pathDelay_d2f5e0e8b7e00e80,
              mid_pathDelay_c84aeff9124fe654,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SsrVtecIonosphericModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SsrVtecIonosphericModel(const SsrVtecIonosphericModel& obj) : ::java::lang::Object(obj) {}

            SsrVtecIonosphericModel(const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 &);

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
          extern PyType_Def PY_TYPE_DEF(SsrVtecIonosphericModel);
          extern PyTypeObject *PY_TYPE(SsrVtecIonosphericModel);

          class t_SsrVtecIonosphericModel {
          public:
            PyObject_HEAD
            SsrVtecIonosphericModel object;
            static PyObject *wrap_Object(const SsrVtecIonosphericModel&);
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
