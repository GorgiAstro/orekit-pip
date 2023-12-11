#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

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
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
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
                mid_init$_873d6049c2f7e1b1,
                mid_init$_a6cdc333049d7715,
                mid_init$_ce907123f94397c6,
                mid_getAtmosphere_344c414ab8fc3e7e,
                mid_getDrag_c60005f03b2de7af,
                mid_getEventDetectors_d7cce92225eb0db2,
                mid_getFieldEventDetectors_8130af76f6998f44,
                mid_getRbar_557b8123390d8d0c,
                mid_getSpacecraft_5af7812abe9360ec,
                mid_getLLimits_233f032b171b49d2,
                mid_getLLimits_8babb6fb34d6b24d,
                mid_getParametersDriversWithoutMu_0d9551367f7ecdef,
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
