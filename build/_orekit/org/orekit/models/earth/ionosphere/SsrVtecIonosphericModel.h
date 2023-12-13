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
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
    namespace frames {
      class TopocentricFrame;
    }
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

          class SsrVtecIonosphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5bafb67a92804099,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_pathDelay_5e4bace87c721642,
              mid_pathDelay_0c51f26f37c66719,
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
