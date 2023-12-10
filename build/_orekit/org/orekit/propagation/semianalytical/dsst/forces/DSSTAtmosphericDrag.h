#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace hipparchus {
    class Field;
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
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
}
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
                mid_init$_6cee8d78b22b267b,
                mid_init$_925428893a7d0d7a,
                mid_init$_4ee16ea79af9314b,
                mid_getAtmosphere_97b68f99073ea89d,
                mid_getDrag_013b7a196580bfdb,
                mid_getEventDetectors_a68a17dd093f796d,
                mid_getFieldEventDetectors_1328ddb491531a35,
                mid_getRbar_456d9a2f64d6b28d,
                mid_getSpacecraft_e36253101b741e3a,
                mid_getParametersDriversWithoutMu_a6156df500549a58,
                mid_getLLimits_4ece4b82b4394674,
                mid_getLLimits_f53f254b7878e0dd,
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
