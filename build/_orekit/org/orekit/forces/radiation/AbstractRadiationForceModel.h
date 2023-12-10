#ifndef org_orekit_forces_radiation_AbstractRadiationForceModel_H
#define org_orekit_forces_radiation_AbstractRadiationForceModel_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
    }
    namespace forces {
      class ForceModel;
    }
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
    }
  }
  namespace hipparchus {
    class Field;
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
            mid_addOccultingBody_6d5ed18afc9cd8ba,
            mid_addOccultingBody_700c1b4c67b6f6c5,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getEventDetectors_a68a17dd093f796d,
            mid_getFieldEventDetectors_1328ddb491531a35,
            mid_getOccultingBodies_a6156df500549a58,
            mid_getGeneralEclipseAngles_515ed9c3398805a5,
            mid_getGeneralEclipseAngles_92b5a46fc0bf8ab7,
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
