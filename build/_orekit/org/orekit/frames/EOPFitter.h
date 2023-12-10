#ifndef org_orekit_frames_EOPFitter_H
#define org_orekit_frames_EOPFitter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class EOPFittedModel;
      class EOPHistory;
      class SingleParameterFitter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class EOPFitter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e1d68203223e692f,
          mid_fit_33e783273de11a73,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EOPFitter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EOPFitter(const EOPFitter& obj) : ::java::lang::Object(obj) {}

        EOPFitter(const ::org::orekit::frames::SingleParameterFitter &, const ::org::orekit::frames::SingleParameterFitter &, const ::org::orekit::frames::SingleParameterFitter &, const ::org::orekit::frames::SingleParameterFitter &, const ::org::orekit::frames::SingleParameterFitter &);

        ::org::orekit::frames::EOPFittedModel fit(const ::org::orekit::frames::EOPHistory &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EOPFitter);
      extern PyTypeObject *PY_TYPE(EOPFitter);

      class t_EOPFitter {
      public:
        PyObject_HEAD
        EOPFitter object;
        static PyObject *wrap_Object(const EOPFitter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif