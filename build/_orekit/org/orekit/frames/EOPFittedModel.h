#ifndef org_orekit_frames_EOPFittedModel_H
#define org_orekit_frames_EOPFittedModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class SecularAndHarmonic;
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
    namespace frames {

      class EOPFittedModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_bf629f60ffa6b55f,
          mid_getDUT1_f0e2f2bf075f7deb,
          mid_getDx_f0e2f2bf075f7deb,
          mid_getDy_f0e2f2bf075f7deb,
          mid_getXp_f0e2f2bf075f7deb,
          mid_getYp_f0e2f2bf075f7deb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EOPFittedModel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EOPFittedModel(const EOPFittedModel& obj) : ::java::lang::Object(obj) {}

        EOPFittedModel(const ::org::orekit::utils::SecularAndHarmonic &, const ::org::orekit::utils::SecularAndHarmonic &, const ::org::orekit::utils::SecularAndHarmonic &, const ::org::orekit::utils::SecularAndHarmonic &, const ::org::orekit::utils::SecularAndHarmonic &);

        ::org::orekit::utils::SecularAndHarmonic getDUT1() const;
        ::org::orekit::utils::SecularAndHarmonic getDx() const;
        ::org::orekit::utils::SecularAndHarmonic getDy() const;
        ::org::orekit::utils::SecularAndHarmonic getXp() const;
        ::org::orekit::utils::SecularAndHarmonic getYp() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EOPFittedModel);
      extern PyTypeObject *PY_TYPE(EOPFittedModel);

      class t_EOPFittedModel {
      public:
        PyObject_HEAD
        EOPFittedModel object;
        static PyObject *wrap_Object(const EOPFittedModel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
