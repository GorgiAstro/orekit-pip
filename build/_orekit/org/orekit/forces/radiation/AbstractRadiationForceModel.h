#ifndef org_orekit_forces_radiation_AbstractRadiationForceModel_H
#define org_orekit_forces_radiation_AbstractRadiationForceModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
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
    namespace bodies {
      class OneAxisEllipsoid;
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
            mid_addOccultingBody_7c502fc601af6f77,
            mid_addOccultingBody_d0e04e19947fa36d,
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_getEventDetectors_20f6d2b462aaef4b,
            mid_getFieldEventDetectors_361313cd1a9c693a,
            mid_getOccultingBodies_2afa36052df4765d,
            mid_getGeneralEclipseAngles_a99e86e606086333,
            mid_getGeneralEclipseAngles_e68fcbb33aff0d20,
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
