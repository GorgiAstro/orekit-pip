#ifndef org_orekit_attitudes_AttitudeBuilder_H
#define org_orekit_attitudes_AttitudeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
    }
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class AttitudeBuilder : public ::java::lang::Object {
       public:
        enum {
          mid_build_4329b81cdba13b7b,
          mid_build_76e687ee866bdc48,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AttitudeBuilder(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AttitudeBuilder(const AttitudeBuilder& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::attitudes::FieldAttitude build(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates &) const;
        ::org::orekit::attitudes::Attitude build(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::utils::TimeStampedAngularCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(AttitudeBuilder);
      extern PyTypeObject *PY_TYPE(AttitudeBuilder);

      class t_AttitudeBuilder {
      public:
        PyObject_HEAD
        AttitudeBuilder object;
        static PyObject *wrap_Object(const AttitudeBuilder&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
