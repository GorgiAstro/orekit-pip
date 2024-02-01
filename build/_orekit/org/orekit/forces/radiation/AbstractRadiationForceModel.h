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
        class FieldEventDetector;
        class EventDetector;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace forces {
      class ForceModel;
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
    class List;
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
            mid_addOccultingBody_b708ea6c2876a9ef,
            mid_addOccultingBody_16b9140b7ad74f10,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_getOccultingBodies_d751c1a57012b438,
            mid_getGeneralEclipseAngles_f3b4c9095c8966a1,
            mid_getGeneralEclipseAngles_8fb3d659b51fb192,
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
