#ifndef org_orekit_frames_PythonLOF_H
#define org_orekit_frames_PythonLOF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class LOF;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldRotation;
          class Rotation;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getName_1c1fa1e935d6cdcf,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          mid_rotationFromInertial_9c03210e4a66b8b3,
          mid_rotationFromInertial_8f928c19e9edde2b,
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
