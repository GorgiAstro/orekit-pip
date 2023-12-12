#ifndef org_orekit_forces_radiation_AbstractRadiationForceModel_H
#define org_orekit_forces_radiation_AbstractRadiationForceModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
    }
    namespace forces {
      class ForceModel;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
  }
  namespace hipparchus {
    class Field;
  }
}
namespace java {
  namespace util {
    class List;
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
    namespace forces {
      namespace radiation {

        class AbstractRadiationForceModel : public ::java::lang::Object {
         public:
          enum {
            mid_addOccultingBody_fee9aa8bf77f755f,
            mid_addOccultingBody_b94c0ae4ac2adae8,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_getOccultingBodies_0d9551367f7ecdef,
            mid_getGeneralEclipseAngles_4c10288a24106aac,
            mid_getGeneralEclipseAngles_e9034d16e917beab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractRadiationForceModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractRadiationForceModel(const AbstractRadiationForceModel& obj) : ::java::lang::Object(obj) {}

          void addOccultingBody(const ::org::orekit::bodies::OneAxisEllipsoid &) const;
          void addOccultingBody(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::java::util::List getOccultingBodies() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        extern PyType_Def PY_TYPE_DEF(AbstractRadiationForceModel);
        extern PyTypeObject *PY_TYPE(AbstractRadiationForceModel);

        class t_AbstractRadiationForceModel {
        public:
          PyObject_HEAD
          AbstractRadiationForceModel object;
          static PyObject *wrap_Object(const AbstractRadiationForceModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
