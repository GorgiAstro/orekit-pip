#ifndef org_hipparchus_geometry_VectorFormat_H
#define org_hipparchus_geometry_VectorFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
  }
  namespace util {
    class Locale;
  }
  namespace text {
    class ParsePosition;
    class FieldPosition;
    class NumberFormat;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace geometry {
      class Vector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {

      class VectorFormat : public ::java::lang::Object {
       public:
        enum {
          mid_format_8f4014df8b545e23,
          mid_format_d63c028b54a2ec6c,
          mid_getAvailableLocales_81e8fdf65840780c,
          mid_getFormat_d34e2e8dd35583a0,
          mid_getPrefix_0090f7797e403f43,
          mid_getSeparator_0090f7797e403f43,
          mid_getSuffix_0090f7797e403f43,
          mid_parse_53f6a343d7e75f91,
          mid_parse_9afcbb599a8a8401,
          mid_parseCoordinates_8dfbb0f9e536d3df,
          mid_format_eea61c07cc9f1c82,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit VectorFormat(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        VectorFormat(const VectorFormat& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *DEFAULT_PREFIX;
        static ::java::lang::String *DEFAULT_SEPARATOR;
        static ::java::lang::String *DEFAULT_SUFFIX;

        ::java::lang::String format(const ::org::hipparchus::geometry::Vector &) const;
        ::java::lang::StringBuffer format(const ::org::hipparchus::geometry::Vector &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static JArray< ::java::util::Locale > getAvailableLocales();
        ::java::text::NumberFormat getFormat() const;
        ::java::lang::String getPrefix() const;
        ::java::lang::String getSeparator() const;
        ::java::lang::String getSuffix() const;
        ::org::hipparchus::geometry::Vector parse(const ::java::lang::String &) const;
        ::org::hipparchus::geometry::Vector parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      extern PyType_Def PY_TYPE_DEF(VectorFormat);
      extern PyTypeObject *PY_TYPE(VectorFormat);

      class t_VectorFormat {
      public:
        PyObject_HEAD
        VectorFormat object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_VectorFormat *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const VectorFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const VectorFormat&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
