#ifndef org_orekit_frames_PythonLOF_H
#define org_orekit_frames_PythonLOF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOF;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
        }
      }
    }
    class Field;
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonLOF : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getName_3cffd47377eca18a,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_rotationFromInertial_9b71bf39454b4a07,
          mid_rotationFromInertial_1022f468fb3d1015,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonLOF(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonLOF(const PythonLOF& obj) : ::java::lang::Object(obj) {}

        PythonLOF();

        void finalize() const;
        ::java::lang::String getName() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonLOF);
      extern PyTypeObject *PY_TYPE(PythonLOF);

      class t_PythonLOF {
      public:
        PyObject_HEAD
        PythonLOF object;
        static PyObject *wrap_Object(const PythonLOF&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
