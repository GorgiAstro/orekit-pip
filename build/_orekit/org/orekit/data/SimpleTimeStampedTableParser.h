#ifndef org_orekit_data_SimpleTimeStampedTableParser_H
#define org_orekit_data_SimpleTimeStampedTableParser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class SimpleTimeStampedTableParser$RowConverter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class SimpleTimeStampedTableParser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_5ecbee45ad4075cb,
          mid_parse_7b8887374449b257,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SimpleTimeStampedTableParser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SimpleTimeStampedTableParser(const SimpleTimeStampedTableParser& obj) : ::java::lang::Object(obj) {}

        SimpleTimeStampedTableParser(jint, const ::org::orekit::data::SimpleTimeStampedTableParser$RowConverter &);

        ::java::util::List parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(SimpleTimeStampedTableParser);
      extern PyTypeObject *PY_TYPE(SimpleTimeStampedTableParser);

      class t_SimpleTimeStampedTableParser {
      public:
        PyObject_HEAD
        SimpleTimeStampedTableParser object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SimpleTimeStampedTableParser *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SimpleTimeStampedTableParser&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SimpleTimeStampedTableParser&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
