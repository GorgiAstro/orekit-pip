#ifndef org_orekit_data_PolynomialParser_H
#define org_orekit_data_PolynomialParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class PolynomialParser$Unit;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PolynomialParser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_028b46dcfde98587,
          mid_parse_5fc57a69c973af17,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PolynomialParser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PolynomialParser(const PolynomialParser& obj) : ::java::lang::Object(obj) {}

        PolynomialParser(jchar, const ::org::orekit::data::PolynomialParser$Unit &);

        JArray< jdouble > parse(const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PolynomialParser);
      extern PyTypeObject *PY_TYPE(PolynomialParser);

      class t_PolynomialParser {
      public:
        PyObject_HEAD
        PolynomialParser object;
        static PyObject *wrap_Object(const PolynomialParser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
