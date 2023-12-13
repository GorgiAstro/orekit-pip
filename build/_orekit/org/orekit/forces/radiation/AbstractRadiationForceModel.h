#ifndef org_orekit_forces_radiation_AbstractRadiationForceModel_H
#define org_orekit_forces_radiation_AbstractRadiationForceModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
    }
    namespace forces {
      class ForceModel;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
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
            mid_addOccultingBody_fe488c9958f1d2fe,
            mid_addOccultingBody_d69eafd654818556,
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_getEventDetectors_14e21bf777ff0ccf,
            mid_getFieldEventDetectors_283ad33581c047a0,
            mid_getOccultingBodies_e62d3bb06d56d7e3,
            mid_getGeneralEclipseAngles_db4fc232a30d5f8e,
            mid_getGeneralEclipseAngles_1316a94eb2b77b43,
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
