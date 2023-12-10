#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
    }
    namespace forces {
      namespace drag {
        class DragSensitive;
        class DragForce;
      }
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
  }
  namespace hipparchus {
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class DSSTAtmosphericDrag : public ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution {
             public:
              enum {
                mid_init$_8cf2088f47a57337,
                mid_init$_93fb7884d0731876,
                mid_init$_fbe0d84084597736,
                mid_getAtmosphere_5eed92b432f371c2,
                mid_getDrag_ab37bc06056a6237,
                mid_getEventDetectors_20f6d2b462aaef4b,
                mid_getFieldEventDetectors_361313cd1a9c693a,
                mid_getRbar_dff5885c2c873297,
                mid_getSpacecraft_2df1d9602f270c8d,
                mid_getLLimits_04690aaa2b6db52c,
                mid_getLLimits_7442885516ff2293,
                mid_getParametersDriversWithoutMu_2afa36052df4765d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTAtmosphericDrag(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTAtmosphericDrag(const DSSTAtmosphericDrag& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(obj) {}

              DSSTAtmosphericDrag(const ::org::orekit::forces::drag::DragForce &, jdouble);
              DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere &, const ::org::orekit::forces::drag::DragSensitive &, jdouble);
              DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere &, jdouble, jdouble, jdouble);

              ::org::orekit::models::earth::atmosphere::Atmosphere getAtmosphere() const;
              ::org::orekit::forces::drag::DragForce getDrag() const;
              ::java::util::stream::Stream getEventDetectors() const;
              ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
              jdouble getRbar() const;
              ::org::orekit::forces::drag::DragSensitive getSpacecraft() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            extern PyType_Def PY_TYPE_DEF(DSSTAtmosphericDrag);
            extern PyTypeObject *PY_TYPE(DSSTAtmosphericDrag);

            class t_DSSTAtmosphericDrag {
            public:
              PyObject_HEAD
              DSSTAtmosphericDrag object;
              static PyObject *wrap_Object(const DSSTAtmosphericDrag&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
