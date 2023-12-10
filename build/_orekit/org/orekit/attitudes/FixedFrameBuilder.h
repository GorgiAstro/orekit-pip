#ifndef org_orekit_attitudes_FixedFrameBuilder_H
#define org_orekit_attitudes_FixedFrameBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
      class PVCoordinatesProvider;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class AttitudeBuilder;
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

      class FixedFrameBuilder : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b1992bd1bb70f476,
          mid_build_46e50d643ce38532,
          mid_build_d2838fa0adea33de,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FixedFrameBuilder(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FixedFrameBuilder(const FixedFrameBuilder& obj) : ::java::lang::Object(obj) {}

        FixedFrameBuilder(const ::org::orekit::frames::Frame &);

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
      extern PyType_Def PY_TYPE_DEF(FixedFrameBuilder);
      extern PyTypeObject *PY_TYPE(FixedFrameBuilder);

      class t_FixedFrameBuilder {
      public:
        PyObject_HEAD
        FixedFrameBuilder object;
        static PyObject *wrap_Object(const FixedFrameBuilder&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
