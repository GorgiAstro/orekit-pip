#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        class DragSensitive;
        class DragForce;
      }
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
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
                mid_init$_50f6720994b70dff,
                mid_init$_6c0cbcb3ef93ae28,
                mid_init$_3dc53c05eb1b1dd7,
                mid_getAtmosphere_427d0c98c647ebb8,
                mid_getDrag_a2ccb814b74de707,
                mid_getEventDetectors_11e4ca8182c1933d,
                mid_getFieldEventDetectors_d3db121d9deb0312,
                mid_getRbar_9981f74b2d109da6,
                mid_getSpacecraft_e8bdc7a90adb886e,
                mid_getLLimits_5bf18b5e9ec57652,
                mid_getLLimits_15451c899b8436e1,
                mid_getParametersDriversWithoutMu_d751c1a57012b438,
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
