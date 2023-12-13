#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTAtmosphericDrag_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
    }
    namespace forces {
      namespace drag {
        class DragForce;
        class DragSensitive;
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
                mid_init$_deefd38e570563ff,
                mid_init$_0ce46920d2f2ff0a,
                mid_init$_ca5f27c92d1fb19a,
                mid_getAtmosphere_51e24dc1f47828d4,
                mid_getDrag_6a0d5872a8149beb,
                mid_getEventDetectors_14e21bf777ff0ccf,
                mid_getFieldEventDetectors_283ad33581c047a0,
                mid_getRbar_b74f83833fdad017,
                mid_getSpacecraft_bf04d13a51559009,
                mid_getLLimits_1abf2eee80dffc68,
                mid_getLLimits_9b6fd6b3a2b07f62,
                mid_getParametersDriversWithoutMu_e62d3bb06d56d7e3,
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
