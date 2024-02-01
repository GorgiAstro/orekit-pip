#ifndef org_hipparchus_geometry_VectorFormat_H
#define org_hipparchus_geometry_VectorFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
  }
  namespace text {
    class FieldPosition;
    class NumberFormat;
    class ParsePosition;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
    }
    namespace exception {
      class MathIllegalStateException;
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
          mid_format_531b485bbf82fc90,
          mid_format_dbd94d7f7c5c0aa8,
          mid_getAvailableLocales_faf2576acf90261b,
          mid_getFormat_525709eb5c5b5ea6,
          mid_getPrefix_d2c8eb4129821f0e,
          mid_getSeparator_d2c8eb4129821f0e,
          mid_getSuffix_d2c8eb4129821f0e,
          mid_parse_c1049084d032ffba,
          mid_parse_7e66ee88ae4979ad,
          mid_parseCoordinates_a4c7b2a3baeb8801,
          mid_format_a9f65f4bc646f3a9,
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
