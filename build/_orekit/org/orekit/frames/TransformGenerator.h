#ifndef org_orekit_frames_TransformGenerator_H
#define org_orekit_frames_TransformGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TransformProvider;
      class Transform;
    }
    namespace utils {
      class TimeStampedGenerator;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class TransformGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e7e56f3940bcbfd1,
          mid_generate_50850a0bb1306a34,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TransformGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TransformGenerator(const TransformGenerator& obj) : ::java::lang::Object(obj) {}

        TransformGenerator(jint, const ::org::orekit::frames::TransformProvider &, jdouble);

        ::java::util::List generate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(TransformGenerator);
      extern PyTypeObject *PY_TYPE(TransformGenerator);

      class t_TransformGenerator {
      public:
        PyObject_HEAD
        TransformGenerator object;
        static PyObject *wrap_Object(const TransformGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
