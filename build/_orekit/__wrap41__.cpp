#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/Stream.h"
#include "java/util/Comparator.h"
#include "java/util/function/Supplier.h"
#include "java/util/stream/Stream.h"
#include "java/util/Optional.h"
#include "java/util/stream/DoubleStream.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Stream::class$ = NULL;
      jmethodID *Stream::mids$ = NULL;
      bool Stream::live$ = false;

      jclass Stream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Stream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_concat_998b04527a7f50f0] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/Stream;Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
          mids$[mid_count_a27fc9afd27e559d] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_a68a17dd093f796d] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/Stream;");
          mids$[mid_empty_a68a17dd093f796d] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/Stream;");
          mids$[mid_findAny_c56b7edc0c3c7d86] = env->getMethodID(cls, "findAny", "()Ljava/util/Optional;");
          mids$[mid_findFirst_c56b7edc0c3c7d86] = env->getMethodID(cls, "findFirst", "()Ljava/util/Optional;");
          mids$[mid_generate_1476e234e65a8ad9] = env->getStaticMethodID(cls, "generate", "(Ljava/util/function/Supplier;)Ljava/util/stream/Stream;");
          mids$[mid_limit_efe008656a118eb2] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/Stream;");
          mids$[mid_max_a9410836db4e0853] = env->getMethodID(cls, "max", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_min_a9410836db4e0853] = env->getMethodID(cls, "min", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_of_df43cc70bb37f421] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_of_7c5de970421e460b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_ofNullable_7c5de970421e460b] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_skip_efe008656a118eb2] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/Stream;");
          mids$[mid_sorted_a68a17dd093f796d] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/Stream;");
          mids$[mid_sorted_37058ce9aee2114a] = env->getMethodID(cls, "sorted", "(Ljava/util/Comparator;)Ljava/util/stream/Stream;");
          mids$[mid_toArray_e81d7907eea7e008] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Stream Stream::concat(const Stream & a0, const Stream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_concat_998b04527a7f50f0], a0.this$, a1.this$));
      }

      jlong Stream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_a27fc9afd27e559d]);
      }

      Stream Stream::distinct() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_distinct_a68a17dd093f796d]));
      }

      Stream Stream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_empty_a68a17dd093f796d]));
      }

      ::java::util::Optional Stream::findAny() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findAny_c56b7edc0c3c7d86]));
      }

      ::java::util::Optional Stream::findFirst() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findFirst_c56b7edc0c3c7d86]));
      }

      Stream Stream::generate(const ::java::util::function::Supplier & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_generate_1476e234e65a8ad9], a0.this$));
      }

      Stream Stream::limit(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_limit_efe008656a118eb2], a0));
      }

      ::java::util::Optional Stream::max$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_max_a9410836db4e0853], a0.this$));
      }

      ::java::util::Optional Stream::min$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_min_a9410836db4e0853], a0.this$));
      }

      Stream Stream::of(const JArray< ::java::lang::Object > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_df43cc70bb37f421], a0.this$));
      }

      Stream Stream::of(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_7c5de970421e460b], a0.this$));
      }

      Stream Stream::ofNullable(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_7c5de970421e460b], a0.this$));
      }

      Stream Stream::skip(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_skip_efe008656a118eb2], a0));
      }

      Stream Stream::sorted() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_a68a17dd093f796d]));
      }

      Stream Stream::sorted(const ::java::util::Comparator & a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_37058ce9aee2114a], a0.this$));
      }

      JArray< ::java::lang::Object > Stream::toArray() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e81d7907eea7e008]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_count(t_Stream *self);
      static PyObject *t_Stream_distinct(t_Stream *self);
      static PyObject *t_Stream_empty(PyTypeObject *type);
      static PyObject *t_Stream_findAny(t_Stream *self);
      static PyObject *t_Stream_findFirst(t_Stream *self);
      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_toArray(t_Stream *self);
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data);
      static PyGetSetDef t_Stream__fields_[] = {
        DECLARE_GET_FIELD(t_Stream, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Stream__methods_[] = {
        DECLARE_METHOD(t_Stream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, of_, METH_VARARGS),
        DECLARE_METHOD(t_Stream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, count, METH_NOARGS),
        DECLARE_METHOD(t_Stream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_Stream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_Stream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_Stream, generate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, limit, METH_O),
        DECLARE_METHOD(t_Stream, max, METH_O),
        DECLARE_METHOD(t_Stream, min, METH_O),
        DECLARE_METHOD(t_Stream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, ofNullable, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, skip, METH_O),
        DECLARE_METHOD(t_Stream, sorted, METH_VARARGS),
        DECLARE_METHOD(t_Stream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Stream)[] = {
        { Py_tp_methods, t_Stream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Stream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Stream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Stream, t_Stream, Stream);
      PyObject *t_Stream::wrap_Object(const Stream& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Stream::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Stream::install(PyObject *module)
      {
        installType(&PY_TYPE(Stream), &PY_TYPE_DEF(Stream), module, "Stream", 0);
      }

      void t_Stream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "class_", make_descriptor(Stream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "wrapfn_", make_descriptor(t_Stream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Stream::initializeClass, 1)))
          return NULL;
        return t_Stream::wrap_Object(Stream(((t_Stream *) arg)->object.this$));
      }
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Stream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args)
      {
        Stream a0((jobject) NULL);
        PyTypeObject **p0;
        Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Stream result((jobject) NULL);

        if (!parseArgs(args, "KK", Stream::initializeClass, Stream::initializeClass, &a0, &p0, t_Stream::parameters_, &a1, &p1, t_Stream::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::concat(a0, a1));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_Stream_count(t_Stream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Stream_distinct(t_Stream *self)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_Stream::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_empty(PyTypeObject *type)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::Stream::empty());
        return t_Stream::wrap_Object(result);
      }

      static PyObject *t_Stream_findAny(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_findFirst(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::function::Supplier a0((jobject) NULL);
        PyTypeObject **p0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::generate(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "generate", arg);
        return NULL;
      }

      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.max$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "max", arg);
        return NULL;
      }

      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.min$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "min", arg);
        return NULL;
      }

      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::Object > a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "[o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        Stream result((jobject) NULL);

        if (!parseArg(arg, "o", &a0))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::ofNullable(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ofNullable", arg);
        return NULL;
      }

      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.sorted());
            return t_Stream::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(result = self->object.sorted(a0));
              return t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sorted", args);
        return NULL;
      }

      static PyObject *t_Stream_toArray(t_Stream *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WideLaneCombination::class$ = NULL;
          jmethodID *WideLaneCombination::mids$ = NULL;
          bool WideLaneCombination::live$ = false;

          jclass WideLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WideLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_17aea80d13f83b81] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_f4c99548ccdd1967] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_WideLaneCombination__methods_[] = {
            DECLARE_METHOD(t_WideLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WideLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WideLaneCombination)[] = {
            { Py_tp_methods, t_WideLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WideLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(WideLaneCombination, t_WideLaneCombination, WideLaneCombination);

          void t_WideLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(WideLaneCombination), &PY_TYPE_DEF(WideLaneCombination), module, "WideLaneCombination", 0);
          }

          void t_WideLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "class_", make_descriptor(WideLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "wrapfn_", make_descriptor(t_WideLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WideLaneCombination::initializeClass, 1)))
              return NULL;
            return t_WideLaneCombination::wrap_Object(WideLaneCombination(((t_WideLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WideLaneCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldBivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldBivariateFunction::mids$ = NULL;
      bool CalculusFieldBivariateFunction::live$ = false;

      jclass CalculusFieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_75c7ce7d33e7324b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_75c7ce7d33e7324b], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldBivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldBivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldBivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldBivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldBivariateFunction, t_CalculusFieldBivariateFunction, CalculusFieldBivariateFunction);
      PyObject *t_CalculusFieldBivariateFunction::wrap_Object(const CalculusFieldBivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldBivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldBivariateFunction), &PY_TYPE_DEF(CalculusFieldBivariateFunction), module, "CalculusFieldBivariateFunction", 0);
      }

      void t_CalculusFieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "class_", make_descriptor(CalculusFieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldBivariateFunction::wrap_Object(CalculusFieldBivariateFunction(((t_CalculusFieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/HashMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashMap::class$ = NULL;
    jmethodID *HashMap::mids$ = NULL;
    bool HashMap::live$ = false;

    jclass HashMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_8b4e3987d7532731] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_75c5b1de54fd54f2] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_containsKey_229c87223f486349] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_229c87223f486349] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_e9e1a6780fe94297] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_get_ed50a8b49b8274dc] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_286de79696ab0806] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_e9e1a6780fe94297] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_286de79696ab0806] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_8b4e3987d7532731] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_286de79696ab0806] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_ed50a8b49b8274dc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_f8c930c8a53ce61d] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_286de79696ab0806] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9f7c677a07c1445a] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_cfcfd130f9013e3e] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashMap::HashMap() : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    HashMap::HashMap(jint a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    HashMap::HashMap(const ::java::util::Map & a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_8b4e3987d7532731, a0.this$)) {}

    HashMap::HashMap(jint a0, jfloat a1) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_75c5b1de54fd54f2, a0, a1)) {}

    void HashMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    ::java::lang::Object HashMap::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean HashMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_229c87223f486349], a0.this$);
    }

    jboolean HashMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_229c87223f486349], a0.this$);
    }

    ::java::util::Set HashMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_e9e1a6780fe94297]));
    }

    ::java::lang::Object HashMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_ed50a8b49b8274dc], a0.this$));
    }

    ::java::lang::Object HashMap::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_286de79696ab0806], a0.this$, a1.this$));
    }

    jboolean HashMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Set HashMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_e9e1a6780fe94297]));
    }

    ::java::lang::Object HashMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_286de79696ab0806], a0.this$, a1.this$));
    }

    void HashMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_8b4e3987d7532731], a0.this$);
    }

    ::java::lang::Object HashMap::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_286de79696ab0806], a0.this$, a1.this$));
    }

    ::java::lang::Object HashMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_ed50a8b49b8274dc], a0.this$));
    }

    jboolean HashMap::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_f8c930c8a53ce61d], a0.this$, a1.this$);
    }

    ::java::lang::Object HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_286de79696ab0806], a0.this$, a1.this$));
    }

    jboolean HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9f7c677a07c1445a], a0.this$, a1.this$, a2.this$);
    }

    jint HashMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::util::Collection HashMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cfcfd130f9013e3e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args);
    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_clone(t_HashMap *self);
    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data);
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data);
    static PyGetSetDef t_HashMap__fields_[] = {
      DECLARE_GET_FIELD(t_HashMap, empty),
      DECLARE_GET_FIELD(t_HashMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashMap__methods_[] = {
      DECLARE_METHOD(t_HashMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashMap, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, get, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, keySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, put, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putAll, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, replace, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, size, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashMap)[] = {
      { Py_tp_methods, t_HashMap__methods_ },
      { Py_tp_init, (void *) t_HashMap_init_ },
      { Py_tp_getset, t_HashMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashMap)[] = {
      &PY_TYPE_DEF(::java::util::AbstractMap),
      NULL
    };

    DEFINE_TYPE(HashMap, t_HashMap, HashMap);
    PyObject *t_HashMap::wrap_Object(const HashMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_HashMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_HashMap::install(PyObject *module)
    {
      installType(&PY_TYPE(HashMap), &PY_TYPE_DEF(HashMap), module, "HashMap", 0);
    }

    void t_HashMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "class_", make_descriptor(HashMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "wrapfn_", make_descriptor(t_HashMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashMap::initializeClass, 1)))
        return NULL;
      return t_HashMap::wrap_Object(HashMap(((t_HashMap *) arg)->object.this$));
    }
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashMap object((jobject) NULL);

          INT_CALL(object = HashMap());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Map a0((jobject) NULL);
          PyTypeObject **p0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashMap(a0, a1));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashMap_clone(t_HashMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *SimpleCurveFitter::class$ = NULL;
      jmethodID *SimpleCurveFitter::mids$ = NULL;
      bool SimpleCurveFitter::live$ = false;

      jclass SimpleCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/SimpleCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_eea304be88bd541e] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/ParametricUnivariateFunction;[D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withMaxIterations_1466553bc64a9aa9] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withStartPoint_96f6373331c7f3b9] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_getProblem_23a9c25631fa37c2] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleCurveFitter SimpleCurveFitter::create(const ::org::hipparchus::analysis::ParametricUnivariateFunction & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_eea304be88bd541e], a0.this$, a1.this$));
      }

      SimpleCurveFitter SimpleCurveFitter::withMaxIterations(jint a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_1466553bc64a9aa9], a0));
      }

      SimpleCurveFitter SimpleCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_96f6373331c7f3b9], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg);

      static PyMethodDef t_SimpleCurveFitter__methods_[] = {
        DECLARE_METHOD(t_SimpleCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_SimpleCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleCurveFitter)[] = {
        { Py_tp_methods, t_SimpleCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(SimpleCurveFitter, t_SimpleCurveFitter, SimpleCurveFitter);

      void t_SimpleCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleCurveFitter), &PY_TYPE_DEF(SimpleCurveFitter), module, "SimpleCurveFitter", 0);
      }

      void t_SimpleCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "class_", make_descriptor(SimpleCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "wrapfn_", make_descriptor(t_SimpleCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleCurveFitter::initializeClass, 1)))
          return NULL;
        return t_SimpleCurveFitter::wrap_Object(SimpleCurveFitter(((t_SimpleCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::ParametricUnivariateFunction a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::ParametricUnivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::SimpleCurveFitter::create(a0, a1));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg)
      {
        jint a0;
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/inertia/InertialForces.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {

        ::java::lang::Class *InertialForces::class$ = NULL;
        jmethodID *InertialForces::mids$ = NULL;
        bool InertialForces::live$ = false;

        jclass InertialForces::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/inertia/InertialForces");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialForces::InertialForces(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D InertialForces::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D InertialForces::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean InertialForces::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::List InertialForces::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {
        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args);
        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self);
        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self);
        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data);
        static PyGetSetDef t_InertialForces__fields_[] = {
          DECLARE_GET_FIELD(t_InertialForces, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialForces__methods_[] = {
          DECLARE_METHOD(t_InertialForces, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_InertialForces, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_InertialForces, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialForces)[] = {
          { Py_tp_methods, t_InertialForces__methods_ },
          { Py_tp_init, (void *) t_InertialForces_init_ },
          { Py_tp_getset, t_InertialForces__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialForces)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InertialForces, t_InertialForces, InertialForces);

        void t_InertialForces::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialForces), &PY_TYPE_DEF(InertialForces), module, "InertialForces", 0);
        }

        void t_InertialForces::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "class_", make_descriptor(InertialForces::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "wrapfn_", make_descriptor(t_InertialForces::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialForces::initializeClass, 1)))
            return NULL;
          return t_InertialForces::wrap_Object(InertialForces(((t_InertialForces *) arg)->object.this$));
        }
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialForces::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          InertialForces object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            INT_CALL(object = InertialForces(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame$BaseEquipment::class$ = NULL;
          jmethodID *SpacecraftBodyFrame$BaseEquipment::mids$ = NULL;
          bool SpacecraftBodyFrame$BaseEquipment::live$ = false;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACC = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACTUATOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::AST = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::CSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::DSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ESA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::IMU_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::INSTRUMENT = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::MTA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::RW = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SC_BODY = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SENSOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::STARTRACKER = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::TAM = NULL;

          jclass SpacecraftBodyFrame$BaseEquipment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_6b893f9b2aec118a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_values_1c208ef2bdfa2dc3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ACC = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACC", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ACTUATOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACTUATOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              AST = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "AST", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              CSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "CSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              DSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "DSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ESA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ESA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              IMU_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "IMU_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              INSTRUMENT = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "INSTRUMENT", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              MTA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "MTA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              RW = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "RW", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SC_BODY = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SC_BODY", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SENSOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              STARTRACKER = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "STARTRACKER", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              TAM = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "TAM", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame$BaseEquipment::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame$BaseEquipment(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6b893f9b2aec118a], a0.this$));
          }

          JArray< SpacecraftBodyFrame$BaseEquipment > SpacecraftBodyFrame$BaseEquipment::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SpacecraftBodyFrame$BaseEquipment >(env->callStaticObjectMethod(cls, mids$[mid_values_1c208ef2bdfa2dc3]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame$BaseEquipment__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame$BaseEquipment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame$BaseEquipment__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, of_, METH_VARARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame$BaseEquipment)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame$BaseEquipment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SpacecraftBodyFrame$BaseEquipment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame$BaseEquipment)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame$BaseEquipment, t_SpacecraftBodyFrame$BaseEquipment, SpacecraftBodyFrame$BaseEquipment);
          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(const SpacecraftBodyFrame$BaseEquipment& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SpacecraftBodyFrame$BaseEquipment::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame$BaseEquipment), &PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment), module, "SpacecraftBodyFrame$BaseEquipment", 0);
          }

          void t_SpacecraftBodyFrame$BaseEquipment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "class_", make_descriptor(SpacecraftBodyFrame$BaseEquipment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "boxfn_", make_descriptor(boxObject));
            env->getClass(SpacecraftBodyFrame$BaseEquipment::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACC", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACTUATOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACTUATOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "AST", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::AST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "CSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::CSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "DSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::DSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ESA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ESA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "IMU_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::IMU_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "INSTRUMENT", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::INSTRUMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "MTA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::MTA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "RW", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::RW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SC_BODY", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SC_BODY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SENSOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SENSOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "STARTRACKER", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::STARTRACKER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "TAM", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::TAM)));
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(SpacecraftBodyFrame$BaseEquipment(((t_SpacecraftBodyFrame$BaseEquipment *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::valueOf(a0));
              return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type)
          {
            JArray< SpacecraftBodyFrame$BaseEquipment > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::values());
            return JArray<jobject>(result.this$).wrap(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject);
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *FDOA::class$ = NULL;
        jmethodID *FDOA::mids$ = NULL;
        bool FDOA::live$ = false;
        ::java::lang::String *FDOA::MEASUREMENT_TYPE = NULL;

        jclass FDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/FDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ce541f8235a5eb86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDOA::FDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_ce541f8235a5eb86, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation FDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_4a0fede0c03d79b0]));
        }

        ::org::orekit::estimation::measurements::GroundStation FDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_4a0fede0c03d79b0]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args);
        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self);
        static PyObject *t_FDOA_getSecondStation(t_FDOA *self);
        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data);
        static PyGetSetDef t_FDOA__fields_[] = {
          DECLARE_GET_FIELD(t_FDOA, primeStation),
          DECLARE_GET_FIELD(t_FDOA, secondStation),
          DECLARE_GET_FIELD(t_FDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDOA__methods_[] = {
          DECLARE_METHOD(t_FDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_FDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDOA)[] = {
          { Py_tp_methods, t_FDOA__methods_ },
          { Py_tp_init, (void *) t_FDOA_init_ },
          { Py_tp_getset, t_FDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(FDOA, t_FDOA, FDOA);
        PyObject *t_FDOA::wrap_Object(const FDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(FDOA), &PY_TYPE_DEF(FDOA), module, "FDOA", 0);
        }

        void t_FDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "class_", make_descriptor(FDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "wrapfn_", make_descriptor(t_FDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(FDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*FDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDOA::initializeClass, 1)))
            return NULL;
          return t_FDOA::wrap_Object(FDOA(((t_FDOA *) arg)->object.this$));
        }
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
          FDOA object((jobject) NULL);

          if (!parseArgs(args, "kkDkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = FDOA(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_FDOA_getSecondStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeCrossingDetector::class$ = NULL;
        jmethodID *LongitudeCrossingDetector::mids$ = NULL;
        bool LongitudeCrossingDetector::live$ = false;

        jclass LongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6e31a3b5da8ff979] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_167b63432f87d193] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_940814a1dcab100a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_813e3397ea926565] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeCrossingDetector::LongitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6e31a3b5da8ff979, a0.this$, a1)) {}

        LongitudeCrossingDetector::LongitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_167b63432f87d193, a0, a1, a2.this$, a3)) {}

        jdouble LongitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_940814a1dcab100a]));
        }

        jdouble LongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_456d9a2f64d6b28d]);
        }

        void LongitudeCrossingDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args);
        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeCrossingDetector, t_LongitudeCrossingDetector, LongitudeCrossingDetector);
        PyObject *t_LongitudeCrossingDetector::wrap_Object(const LongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeCrossingDetector), &PY_TYPE_DEF(LongitudeCrossingDetector), module, "LongitudeCrossingDetector", 0);
        }

        void t_LongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "class_", make_descriptor(LongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "wrapfn_", make_descriptor(t_LongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeCrossingDetector::wrap_Object(LongitudeCrossingDetector(((t_LongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *LocalizedODEFormats::class$ = NULL;
      jmethodID *LocalizedODEFormats::mids$ = NULL;
      bool LocalizedODEFormats::live$ = false;
      LocalizedODEFormats *LocalizedODEFormats::FIND_ROOT = NULL;
      LocalizedODEFormats *LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES = NULL;
      LocalizedODEFormats *LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY = NULL;
      LocalizedODEFormats *LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH = NULL;
      LocalizedODEFormats *LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNKNOWN_PARAMETER = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET = NULL;

      jclass LocalizedODEFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/LocalizedODEFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_04eb39e013401059] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/LocalizedODEFormats;");
          mids$[mid_values_819c82a3e08a1bd5] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/LocalizedODEFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FIND_ROOT = new LocalizedODEFormats(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          HOLE_BETWEEN_MODELS_TIME_RANGES = new LocalizedODEFormats(env->getStaticObjectField(cls, "HOLE_BETWEEN_MODELS_TIME_RANGES", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = new LocalizedODEFormats(env->getStaticObjectField(cls, "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MULTISTEP_STARTER_STOPPED_EARLY = new LocalizedODEFormats(env->getStaticObjectField(cls, "MULTISTEP_STARTER_STOPPED_EARLY", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          NAN_APPEARING_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "NAN_APPEARING_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          PROPAGATION_DIRECTION_MISMATCH = new LocalizedODEFormats(env->getStaticObjectField(cls, "PROPAGATION_DIRECTION_MISMATCH", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          TOO_SMALL_INTEGRATION_INTERVAL = new LocalizedODEFormats(env->getStaticObjectField(cls, "TOO_SMALL_INTEGRATION_INTERVAL", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNKNOWN_PARAMETER = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNKNOWN_PARAMETER", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNMATCHED_ODE_IN_EXPANDED_SET = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNMATCHED_ODE_IN_EXPANDED_SET", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedODEFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String LocalizedODEFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }

      LocalizedODEFormats LocalizedODEFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedODEFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_04eb39e013401059], a0.this$));
      }

      JArray< LocalizedODEFormats > LocalizedODEFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedODEFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_819c82a3e08a1bd5]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args);
      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self);
      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data);
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data);
      static PyGetSetDef t_LocalizedODEFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedODEFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedODEFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedODEFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedODEFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedODEFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedODEFormats)[] = {
        { Py_tp_methods, t_LocalizedODEFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedODEFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedODEFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedODEFormats, t_LocalizedODEFormats, LocalizedODEFormats);
      PyObject *t_LocalizedODEFormats::wrap_Object(const LocalizedODEFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedODEFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedODEFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedODEFormats), &PY_TYPE_DEF(LocalizedODEFormats), module, "LocalizedODEFormats", 0);
      }

      void t_LocalizedODEFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "class_", make_descriptor(LocalizedODEFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "wrapfn_", make_descriptor(t_LocalizedODEFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedODEFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "FIND_ROOT", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "HOLE_BETWEEN_MODELS_TIME_RANGES", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MULTISTEP_STARTER_STOPPED_EARLY", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "NAN_APPEARING_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "PROPAGATION_DIRECTION_MISMATCH", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "TOO_SMALL_INTEGRATION_INTERVAL", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNKNOWN_PARAMETER", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNKNOWN_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNMATCHED_ODE_IN_EXPANDED_SET", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET)));
      }

      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedODEFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedODEFormats::wrap_Object(LocalizedODEFormats(((t_LocalizedODEFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedODEFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedODEFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::valueOf(a0));
          return t_LocalizedODEFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedODEFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedODEFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *LazyLoadedGravityFields::class$ = NULL;
          jmethodID *LazyLoadedGravityFields::mids$ = NULL;
          bool LazyLoadedGravityFields::live$ = false;

          jclass LazyLoadedGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/LazyLoadedGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6cbb4bccf98d200d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addDefaultOceanTidesReaders_7ae3461a92a43152] = env->getMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_7ae3461a92a43152] = env->getMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_a19ff095f5dde418] = env->getMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_c27d2a7feed8b0f7] = env->getMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_7ae3461a92a43152] = env->getMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_7ae3461a92a43152] = env->getMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_6f5119332010876e] = env->getMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_f23a878f7162aa63] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_cd3e5e7b86486169] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_7fa94372497f9b33] = env->getMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_4a0f7788a82593c4] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_d3751d16c1e699b1] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_f25139d655c52fed] = env->getMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LazyLoadedGravityFields::LazyLoadedGravityFields(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6cbb4bccf98d200d, a0.this$, a1.this$)) {}

          void LazyLoadedGravityFields::addDefaultOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultOceanTidesReaders_7ae3461a92a43152]);
          }

          void LazyLoadedGravityFields::addDefaultPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultPotentialCoefficientsReaders_7ae3461a92a43152]);
          }

          void LazyLoadedGravityFields::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addOceanTidesReader_a19ff095f5dde418], a0.this$);
          }

          void LazyLoadedGravityFields::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPotentialCoefficientsReader_c27d2a7feed8b0f7], a0.this$);
          }

          void LazyLoadedGravityFields::clearOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearOceanTidesReaders_7ae3461a92a43152]);
          }

          void LazyLoadedGravityFields::clearPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearPotentialCoefficientsReaders_7ae3461a92a43152]);
          }

          void LazyLoadedGravityFields::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_configureOceanLoadDeformationCoefficients_6f5119332010876e], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_f23a878f7162aa63], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_cd3e5e7b86486169], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients LazyLoadedGravityFields::getOceanLoadDeformationCoefficients() const
          {
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callObjectMethod(this$, mids$[mid_getOceanLoadDeformationCoefficients_7fa94372497f9b33]));
          }

          ::java::util::List LazyLoadedGravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_4a0f7788a82593c4], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_d3751d16c1e699b1], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader LazyLoadedGravityFields::readGravityField(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callObjectMethod(this$, mids$[mid_readGravityField_f25139d655c52fed], a0, a1));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data);
          static PyGetSetDef t_LazyLoadedGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_LazyLoadedGravityFields, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LazyLoadedGravityFields__methods_[] = {
            DECLARE_METHOD(t_LazyLoadedGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addOceanTidesReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addPotentialCoefficientsReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, configureOceanLoadDeformationCoefficients, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanLoadDeformationCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, readGravityField, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGravityFields)[] = {
            { Py_tp_methods, t_LazyLoadedGravityFields__methods_ },
            { Py_tp_init, (void *) t_LazyLoadedGravityFields_init_ },
            { Py_tp_getset, t_LazyLoadedGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LazyLoadedGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LazyLoadedGravityFields, t_LazyLoadedGravityFields, LazyLoadedGravityFields);

          void t_LazyLoadedGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(LazyLoadedGravityFields), &PY_TYPE_DEF(LazyLoadedGravityFields), module, "LazyLoadedGravityFields", 0);
          }

          void t_LazyLoadedGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "class_", make_descriptor(LazyLoadedGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "wrapfn_", make_descriptor(t_LazyLoadedGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LazyLoadedGravityFields::initializeClass, 1)))
              return NULL;
            return t_LazyLoadedGravityFields::wrap_Object(LazyLoadedGravityFields(((t_LazyLoadedGravityFields *) arg)->object.this$));
          }
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LazyLoadedGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            LazyLoadedGravityFields object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LazyLoadedGravityFields(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(self->object.configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError((PyObject *) self, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRange::class$ = NULL;
        jmethodID *BistaticRange::mids$ = NULL;
        bool BistaticRange::live$ = false;
        ::java::lang::String *BistaticRange::MEASUREMENT_TYPE = NULL;

        jclass BistaticRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_09e77fb07b836cc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRange::BistaticRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_09e77fb07b836cc0, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_4a0fede0c03d79b0]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_4a0fede0c03d79b0]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args);
        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data);
        static PyGetSetDef t_BistaticRange__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRange, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRange, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRange__methods_[] = {
          DECLARE_METHOD(t_BistaticRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRange, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRange, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRange)[] = {
          { Py_tp_methods, t_BistaticRange__methods_ },
          { Py_tp_init, (void *) t_BistaticRange_init_ },
          { Py_tp_getset, t_BistaticRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRange, t_BistaticRange, BistaticRange);
        PyObject *t_BistaticRange::wrap_Object(const BistaticRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRange::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRange), &PY_TYPE_DEF(BistaticRange), module, "BistaticRange", 0);
        }

        void t_BistaticRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "class_", make_descriptor(BistaticRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "wrapfn_", make_descriptor(t_BistaticRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRange::initializeClass, 1)))
            return NULL;
          return t_BistaticRange::wrap_Object(BistaticRange(((t_BistaticRange *) arg)->object.this$));
        }
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1057::class$ = NULL;
              jmethodID *Rtcm1057::mids$ = NULL;
              bool Rtcm1057::live$ = false;

              jclass Rtcm1057::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_68ffe0e149823d38] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1057::Rtcm1057(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_68ffe0e149823d38, a0, a1.this$, a2.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args);
              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data);
              static PyGetSetDef t_Rtcm1057__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1057, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1057__methods_[] = {
                DECLARE_METHOD(t_Rtcm1057, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1057)[] = {
                { Py_tp_methods, t_Rtcm1057__methods_ },
                { Py_tp_init, (void *) t_Rtcm1057_init_ },
                { Py_tp_getset, t_Rtcm1057__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1057)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1057, t_Rtcm1057, Rtcm1057);
              PyObject *t_Rtcm1057::wrap_Object(const Rtcm1057& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1057::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1057::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1057), &PY_TYPE_DEF(Rtcm1057), module, "Rtcm1057", 0);
              }

              void t_Rtcm1057::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "class_", make_descriptor(Rtcm1057::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "wrapfn_", make_descriptor(t_Rtcm1057::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1057::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1057::wrap_Object(Rtcm1057(((t_Rtcm1057 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1057::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1057 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1057(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeWriter::class$ = NULL;
              jmethodID *AttitudeWriter::mids$ = NULL;
              bool AttitudeWriter::live$ = false;

              jclass AttitudeWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_017ab6921b418bb6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_3e82c67d69401a38] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeWriter::AttitudeWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a0, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_017ab6921b418bb6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void AttitudeWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_3e82c67d69401a38], a0.this$, a1.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args);

              static PyMethodDef t_AttitudeWriter__methods_[] = {
                DECLARE_METHOD(t_AttitudeWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeWriter)[] = {
                { Py_tp_methods, t_AttitudeWriter__methods_ },
                { Py_tp_init, (void *) t_AttitudeWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeWriter, t_AttitudeWriter, AttitudeWriter);

              void t_AttitudeWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeWriter), &PY_TYPE_DEF(AttitudeWriter), module, "AttitudeWriter", 0);
              }

              void t_AttitudeWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "class_", make_descriptor(AttitudeWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "wrapfn_", make_descriptor(t_AttitudeWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeWriter::initializeClass, 1)))
                  return NULL;
                return t_AttitudeWriter::wrap_Object(AttitudeWriter(((t_AttitudeWriter *) arg)->object.this$));
              }
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                AttitudeWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = AttitudeWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *UnscentedTransformProvider::class$ = NULL;
      jmethodID *UnscentedTransformProvider::mids$ = NULL;
      bool UnscentedTransformProvider::live$ = false;

      jclass UnscentedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/UnscentedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getWc_6d9adf1d5b463928] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_6d9adf1d5b463928] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unscentedTransform_701a8550e98fcc7d] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_6d9adf1d5b463928]));
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_6d9adf1d5b463928]));
      }

      JArray< ::org::hipparchus::linear::RealVector > UnscentedTransformProvider::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_701a8550e98fcc7d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args);
      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data);
      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data);
      static PyGetSetDef t_UnscentedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wc),
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UnscentedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_UnscentedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWc, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWm, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnscentedTransformProvider)[] = {
        { Py_tp_methods, t_UnscentedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UnscentedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnscentedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnscentedTransformProvider, t_UnscentedTransformProvider, UnscentedTransformProvider);

      void t_UnscentedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(UnscentedTransformProvider), &PY_TYPE_DEF(UnscentedTransformProvider), module, "UnscentedTransformProvider", 0);
      }

      void t_UnscentedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "class_", make_descriptor(UnscentedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "wrapfn_", make_descriptor(t_UnscentedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnscentedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_UnscentedTransformProvider::wrap_Object(UnscentedTransformProvider(((t_UnscentedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnscentedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }

      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonAbstractCovarianceMatrixProvider::mids$ = NULL;
        bool PythonAbstractCovarianceMatrixProvider::live$ = false;

        jclass PythonAbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractCovarianceMatrixProvider::PythonAbstractCovarianceMatrixProvider(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

        void PythonAbstractCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractCovarianceMatrixProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonAbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonAbstractCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractCovarianceMatrixProvider, t_PythonAbstractCovarianceMatrixProvider, PythonAbstractCovarianceMatrixProvider);

        void t_PythonAbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractCovarianceMatrixProvider), &PY_TYPE_DEF(PythonAbstractCovarianceMatrixProvider), module, "PythonAbstractCovarianceMatrixProvider", 1);
        }

        void t_PythonAbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "class_", make_descriptor(PythonAbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonAbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractCovarianceMatrixProvider::wrap_Object(PythonAbstractCovarianceMatrixProvider(((t_PythonAbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          PythonAbstractCovarianceMatrixProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractCovarianceMatrixProvider(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Product::class$ = NULL;
          jmethodID *Product::mids$ = NULL;
          bool Product::live$ = false;

          jclass Product::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Product");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_fbee47346230313b] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Product;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_14204d7f8c951f8b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Product;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_5d62632feda90f27] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Product::Product() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void Product::aggregate(const Product & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_fbee47346230313b], a0.this$);
          }

          void Product::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Product Product::copy() const
          {
            return Product(env->callObjectMethod(this$, mids$[mid_copy_14204d7f8c951f8b]));
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_5d62632feda90f27], a0.this$, a1.this$, a2, a3);
          }

          jlong Product::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Product::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Product::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg);
          static PyObject *t_Product_clear(t_Product *self, PyObject *args);
          static PyObject *t_Product_copy(t_Product *self, PyObject *args);
          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args);
          static PyObject *t_Product_getN(t_Product *self, PyObject *args);
          static PyObject *t_Product_getResult(t_Product *self, PyObject *args);
          static PyObject *t_Product_increment(t_Product *self, PyObject *args);
          static PyObject *t_Product_get__n(t_Product *self, void *data);
          static PyObject *t_Product_get__result(t_Product *self, void *data);
          static PyGetSetDef t_Product__fields_[] = {
            DECLARE_GET_FIELD(t_Product, n),
            DECLARE_GET_FIELD(t_Product, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Product__methods_[] = {
            DECLARE_METHOD(t_Product, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, aggregate, METH_O),
            DECLARE_METHOD(t_Product, clear, METH_VARARGS),
            DECLARE_METHOD(t_Product, copy, METH_VARARGS),
            DECLARE_METHOD(t_Product, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Product, getN, METH_VARARGS),
            DECLARE_METHOD(t_Product, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Product, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Product)[] = {
            { Py_tp_methods, t_Product__methods_ },
            { Py_tp_init, (void *) t_Product_init_ },
            { Py_tp_getset, t_Product__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Product)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Product, t_Product, Product);

          void t_Product::install(PyObject *module)
          {
            installType(&PY_TYPE(Product), &PY_TYPE_DEF(Product), module, "Product", 0);
          }

          void t_Product::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "class_", make_descriptor(Product::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "wrapfn_", make_descriptor(t_Product::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Product::initializeClass, 1)))
              return NULL;
            return t_Product::wrap_Object(Product(((t_Product *) arg)->object.this$));
          }
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Product::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds)
          {
            Product object((jobject) NULL);

            INT_CALL(object = Product());
            self->object = object;

            return 0;
          }

          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg)
          {
            Product a0((jobject) NULL);

            if (!parseArg(arg, "k", Product::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Product_clear(t_Product *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Product_copy(t_Product *self, PyObject *args)
          {
            Product result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Product::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Product_getN(t_Product *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Product_getResult(t_Product *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Product_increment(t_Product *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Product_get__n(t_Product *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Product_get__result(t_Product *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$EphemerisSegment::class$ = NULL;
        jmethodID *EphemerisFile$EphemerisSegment::mids$ = NULL;
        bool EphemerisFile$EphemerisSegment::live$ = false;

        jclass EphemerisFile$EphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$EphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_e29a1189b47e1aad] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ecec515dedcdf4ce] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::CartesianDerivativesFilter EphemerisFile$EphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
        }

        ::java::util::List EphemerisFile$EphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_c8fe21bcdac65bf6]));
        }

        jint EphemerisFile$EphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        jdouble EphemerisFile$EphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_e29a1189b47e1aad]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ecec515dedcdf4ce], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyGetSetDef t_EphemerisFile$EphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, frame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, start),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$EphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$EphemerisSegment)[] = {
          { Py_tp_methods, t_EphemerisFile$EphemerisSegment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$EphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$EphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$EphemerisSegment, t_EphemerisFile$EphemerisSegment, EphemerisFile$EphemerisSegment);
        PyObject *t_EphemerisFile$EphemerisSegment::wrap_Object(const EphemerisFile$EphemerisSegment& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$EphemerisSegment::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFile$EphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$EphemerisSegment), &PY_TYPE_DEF(EphemerisFile$EphemerisSegment), module, "EphemerisFile$EphemerisSegment", 0);
        }

        void t_EphemerisFile$EphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "class_", make_descriptor(EphemerisFile$EphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "wrapfn_", make_descriptor(t_EphemerisFile$EphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$EphemerisSegment::wrap_Object(EphemerisFile$EphemerisSegment(((t_EphemerisFile$EphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Header::class$ = NULL;
              jmethodID *SsrIgm06Header::mids$ = NULL;
              bool SsrIgm06Header::live$ = false;

              jclass SsrIgm06Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_isConsistencyMaintained_e470b6d9e0d979db] = env->getMethodID(cls, "isConsistencyMaintained", "()Z");
                  mids$[mid_isMelbourneWubbenaConsistencyMaintained_e470b6d9e0d979db] = env->getMethodID(cls, "isMelbourneWubbenaConsistencyMaintained", "()Z");
                  mids$[mid_setIsConsistencyMaintained_50a2e0b139e80a58] = env->getMethodID(cls, "setIsConsistencyMaintained", "(Z)V");
                  mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_50a2e0b139e80a58] = env->getMethodID(cls, "setIsMelbourneWubbenaConsistencyMaintained", "(Z)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Header::SsrIgm06Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jboolean SsrIgm06Header::isConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isConsistencyMaintained_e470b6d9e0d979db]);
              }

              jboolean SsrIgm06Header::isMelbourneWubbenaConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isMelbourneWubbenaConsistencyMaintained_e470b6d9e0d979db]);
              }

              void SsrIgm06Header::setIsConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsConsistencyMaintained_50a2e0b139e80a58], a0);
              }

              void SsrIgm06Header::setIsMelbourneWubbenaConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_50a2e0b139e80a58], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyGetSetDef t_SsrIgm06Header__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06Header, consistencyMaintained),
                DECLARE_GET_FIELD(t_SsrIgm06Header, melbourneWubbenaConsistencyMaintained),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, isConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, isMelbourneWubbenaConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, setIsConsistencyMaintained, METH_O),
                DECLARE_METHOD(t_SsrIgm06Header, setIsMelbourneWubbenaConsistencyMaintained, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Header)[] = {
                { Py_tp_methods, t_SsrIgm06Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Header_init_ },
                { Py_tp_getset, t_SsrIgm06Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Header, t_SsrIgm06Header, SsrIgm06Header);

              void t_SsrIgm06Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Header), &PY_TYPE_DEF(SsrIgm06Header), module, "SsrIgm06Header", 0);
              }

              void t_SsrIgm06Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "class_", make_descriptor(SsrIgm06Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "wrapfn_", make_descriptor(t_SsrIgm06Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Header::wrap_Object(SsrIgm06Header(((t_SsrIgm06Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Header object((jobject) NULL);

                INT_CALL(object = SsrIgm06Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsMelbourneWubbenaConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsMelbourneWubbenaConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalStateException::class$ = NULL;
      jmethodID *OrekitIllegalStateException::mids$ = NULL;
      bool OrekitIllegalStateException::live$ = false;

      jclass OrekitIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalStateException::OrekitIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalStateException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalStateException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalStateException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data);
      static PyGetSetDef t_OrekitIllegalStateException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalStateException)[] = {
        { Py_tp_methods, t_OrekitIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalStateException_init_ },
        { Py_tp_getset, t_OrekitIllegalStateException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalStateException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalStateException, t_OrekitIllegalStateException, OrekitIllegalStateException);

      void t_OrekitIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalStateException), &PY_TYPE_DEF(OrekitIllegalStateException), module, "OrekitIllegalStateException", 0);
      }

      void t_OrekitIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "class_", make_descriptor(OrekitIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "wrapfn_", make_descriptor(t_OrekitIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalStateException::wrap_Object(OrekitIllegalStateException(((t_OrekitIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalStateException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalStateException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeTroposphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeTroposphericDelayModifier::live$ = false;

          jclass TurnAroundRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8171254277c9834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeTroposphericDelayModifier::TurnAroundRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8171254277c9834a, a0.this$)) {}

          ::java::util::List TurnAroundRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void TurnAroundRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void TurnAroundRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeTroposphericDelayModifier, t_TurnAroundRangeTroposphericDelayModifier, TurnAroundRangeTroposphericDelayModifier);

          void t_TurnAroundRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeTroposphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeTroposphericDelayModifier), module, "TurnAroundRangeTroposphericDelayModifier", 0);
          }

          void t_TurnAroundRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "class_", make_descriptor(TurnAroundRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeTroposphericDelayModifier::wrap_Object(TurnAroundRangeTroposphericDelayModifier(((t_TurnAroundRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TurnAroundRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TurnAroundRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *FieldDSSTNewtonianAttractionContext::mids$ = NULL;
            bool FieldDSSTNewtonianAttractionContext::live$ = false;

            jclass FieldDSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGM_e6d4d3215c30992a] = env->getMethodID(cls, "getGM", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTNewtonianAttractionContext::getGM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGM_e6d4d3215c30992a]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_FieldDSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, gM),
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_FieldDSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTNewtonianAttractionContext, t_FieldDSSTNewtonianAttractionContext, FieldDSSTNewtonianAttractionContext);
            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_Object(const FieldDSSTNewtonianAttractionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTNewtonianAttractionContext), &PY_TYPE_DEF(FieldDSSTNewtonianAttractionContext), module, "FieldDSSTNewtonianAttractionContext", 0);
            }

            void t_FieldDSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "class_", make_descriptor(FieldDSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_FieldDSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTNewtonianAttractionContext::wrap_Object(FieldDSSTNewtonianAttractionContext(((t_FieldDSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Circle::class$ = NULL;
          jmethodID *Circle::mids$ = NULL;
          bool Circle::live$ = false;

          jclass Circle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Circle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c1cd2c1af3ffd51b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_00759efea5a3aae3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;D)V");
              mids$[mid_copySelf_15409f4dd57c6afd] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_emptyHyperplane_00b467b86e205579] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_getArc_dcf6ffb70606bae4] = env->getMethodID(cls, "getArc", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getInsideArc_ff776abf59c07ea1] = env->getMethodID(cls, "getInsideArc", "(Lorg/hipparchus/geometry/spherical/twod/Circle;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getOffset_80b2470b9511edd1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getOffset_726dc963fac3505e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getPhase_80b2470b9511edd1] = env->getMethodID(cls, "getPhase", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getPointAt_5f993a721a1d8c59] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPole_17a952530a808943] = env->getMethodID(cls, "getPole", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getReverse_15409f4dd57c6afd] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_6a5c6f9d2479f5e6] = env->getStaticMethodID(cls, "getTransform", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_getXAxis_17a952530a808943] = env->getMethodID(cls, "getXAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getYAxis_17a952530a808943] = env->getMethodID(cls, "getYAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_project_ac445dfe898b403a] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_a94622407b723689] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_7ae3461a92a43152] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_b99f508aafd89c77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_8e0fe0b556063cbf] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toSubSpace_681cfbcac47b4c3d] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_wholeHyperplane_00b467b86e205579] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_wholeSpace_b554ba4417ec0cb0] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Circle::Circle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1cd2c1af3ffd51b, a0.this$, a1)) {}

          Circle::Circle(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00759efea5a3aae3, a0.this$, a1.this$, a2)) {}

          Circle Circle::copySelf() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_copySelf_15409f4dd57c6afd]));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_00b467b86e205579]));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getArc(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getArc_dcf6ffb70606bae4], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getInsideArc(const Circle & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getInsideArc_ff776abf59c07ea1], a0.this$));
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_80b2470b9511edd1], a0.this$);
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_726dc963fac3505e], a0.this$);
          }

          jdouble Circle::getPhase(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_80b2470b9511edd1], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_5f993a721a1d8c59], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPole() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_17a952530a808943]));
          }

          Circle Circle::getReverse() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_getReverse_15409f4dd57c6afd]));
          }

          jdouble Circle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Circle::getTransform(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_6a5c6f9d2479f5e6], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getXAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getXAxis_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getYAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getYAxis_17a952530a808943]));
          }

          ::org::hipparchus::geometry::Point Circle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ac445dfe898b403a], a0.this$));
          }

          void Circle::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_a94622407b723689], a0.this$);
          }

          void Circle::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_7ae3461a92a43152]);
          }

          jboolean Circle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_b99f508aafd89c77], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Circle::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_toSpace_8e0fe0b556063cbf], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point Circle::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_681cfbcac47b4c3d], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_00b467b86e205579]));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet Circle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_b554ba4417ec0cb0]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Circle_copySelf(t_Circle *self);
          static PyObject *t_Circle_emptyHyperplane(t_Circle *self);
          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPole(t_Circle *self);
          static PyObject *t_Circle_getReverse(t_Circle *self);
          static PyObject *t_Circle_getTolerance(t_Circle *self);
          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_getXAxis(t_Circle *self);
          static PyObject *t_Circle_getYAxis(t_Circle *self);
          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_revertSelf(t_Circle *self);
          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_wholeHyperplane(t_Circle *self);
          static PyObject *t_Circle_wholeSpace(t_Circle *self);
          static PyObject *t_Circle_get__pole(t_Circle *self, void *data);
          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data);
          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data);
          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data);
          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data);
          static PyGetSetDef t_Circle__fields_[] = {
            DECLARE_GET_FIELD(t_Circle, pole),
            DECLARE_GET_FIELD(t_Circle, reverse),
            DECLARE_GET_FIELD(t_Circle, tolerance),
            DECLARE_GET_FIELD(t_Circle, xAxis),
            DECLARE_GET_FIELD(t_Circle, yAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Circle__methods_[] = {
            DECLARE_METHOD(t_Circle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getArc, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getInsideArc, METH_O),
            DECLARE_METHOD(t_Circle, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getPhase, METH_O),
            DECLARE_METHOD(t_Circle, getPointAt, METH_O),
            DECLARE_METHOD(t_Circle, getPole, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTransform, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, getXAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getYAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, project, METH_O),
            DECLARE_METHOD(t_Circle, reset, METH_O),
            DECLARE_METHOD(t_Circle, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Circle, toSpace, METH_O),
            DECLARE_METHOD(t_Circle, toSubSpace, METH_O),
            DECLARE_METHOD(t_Circle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Circle)[] = {
            { Py_tp_methods, t_Circle__methods_ },
            { Py_tp_init, (void *) t_Circle_init_ },
            { Py_tp_getset, t_Circle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Circle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Circle, t_Circle, Circle);

          void t_Circle::install(PyObject *module)
          {
            installType(&PY_TYPE(Circle), &PY_TYPE_DEF(Circle), module, "Circle", 0);
          }

          void t_Circle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "class_", make_descriptor(Circle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "wrapfn_", make_descriptor(t_Circle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Circle::initializeClass, 1)))
              return NULL;
            return t_Circle::wrap_Object(Circle(((t_Circle *) arg)->object.this$));
          }
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Circle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Circle(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
                jdouble a2;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Circle(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Circle_copySelf(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_emptyHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getArc(a0, a1));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getArc", args);
            return NULL;
          }

          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg)
          {
            Circle a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArg(arg, "k", Circle::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInsideArc(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInsideArc", arg);
            return NULL;
          }

          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPole(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getReverse(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_getTolerance(t_Circle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Circle::getTransform(a0));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError(type, "getTransform", arg);
            return NULL;
          }

          static PyObject *t_Circle_getXAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getYAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", arg);
            return NULL;
          }

          static PyObject *t_Circle_revertSelf(t_Circle *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSpace(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSubSpace(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_wholeHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_wholeSpace(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Circle_get__pole(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data)
          {
            Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Circle::wrap_Object(value);
          }

          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Loxodrome.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Loxodrome::class$ = NULL;
      jmethodID *Loxodrome::mids$ = NULL;
      bool Loxodrome::live$ = false;

      jclass Loxodrome::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Loxodrome");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e44c7e3973d8d7ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_99012ad18b805d28] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_getAltitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getAzimuth_456d9a2f64d6b28d] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getBody_940814a1dcab100a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
          mids$[mid_getPoint_fabc97b1aefe5844] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_pointAtDistance_e381e99dbfc90980] = env->getMethodID(cls, "pointAtDistance", "(D)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e44c7e3973d8d7ab, a0.this$, a1, a2.this$)) {}

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99012ad18b805d28, a0.this$, a1, a2.this$, a3)) {}

      jdouble Loxodrome::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_456d9a2f64d6b28d]);
      }

      jdouble Loxodrome::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_456d9a2f64d6b28d]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid Loxodrome::getBody() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_940814a1dcab100a]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_fabc97b1aefe5844]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::pointAtDistance(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_e381e99dbfc90980], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self);
      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg);
      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data);
      static PyGetSetDef t_Loxodrome__fields_[] = {
        DECLARE_GET_FIELD(t_Loxodrome, altitude),
        DECLARE_GET_FIELD(t_Loxodrome, azimuth),
        DECLARE_GET_FIELD(t_Loxodrome, body),
        DECLARE_GET_FIELD(t_Loxodrome, point),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Loxodrome__methods_[] = {
        DECLARE_METHOD(t_Loxodrome, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getBody, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, pointAtDistance, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Loxodrome)[] = {
        { Py_tp_methods, t_Loxodrome__methods_ },
        { Py_tp_init, (void *) t_Loxodrome_init_ },
        { Py_tp_getset, t_Loxodrome__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Loxodrome)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Loxodrome, t_Loxodrome, Loxodrome);

      void t_Loxodrome::install(PyObject *module)
      {
        installType(&PY_TYPE(Loxodrome), &PY_TYPE_DEF(Loxodrome), module, "Loxodrome", 0);
      }

      void t_Loxodrome::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "class_", make_descriptor(Loxodrome::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "wrapfn_", make_descriptor(t_Loxodrome::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Loxodrome::initializeClass, 1)))
          return NULL;
        return t_Loxodrome::wrap_Object(Loxodrome(((t_Loxodrome *) arg)->object.this$));
      }
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Loxodrome::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", arg);
        return NULL;
      }

      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }

      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractFieldODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractFieldODEStateInterpolator::mids$ = NULL;
        bool AbstractFieldODEStateInterpolator::live$ = false;

        jclass AbstractFieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_05327270bfa02fcd] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_5806de34f57ffd01] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");
            mids$[mid_getMapper_ac3e7c17676ea260] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_9c7dc3baaf8a762f] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/FieldEquationsMapper;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_create_36ffd6115f00e197] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_f1f1c5e26e98a1d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_f1f1c5e26e98a1d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_f1f1c5e26e98a1d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_05327270bfa02fcd], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_f1f1c5e26e98a1d9]));
        }

        jboolean AbstractFieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db]);
        }

        jboolean AbstractFieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        jboolean AbstractFieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db]);
        }

        AbstractFieldODEStateInterpolator AbstractFieldODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return AbstractFieldODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_5806de34f57ffd01], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractFieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractFieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEStateInterpolator, t_AbstractFieldODEStateInterpolator, AbstractFieldODEStateInterpolator);
        PyObject *t_AbstractFieldODEStateInterpolator::wrap_Object(const AbstractFieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEStateInterpolator), &PY_TYPE_DEF(AbstractFieldODEStateInterpolator), module, "AbstractFieldODEStateInterpolator", 0);
        }

        void t_AbstractFieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "class_", make_descriptor(AbstractFieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEStateInterpolator::wrap_Object(AbstractFieldODEStateInterpolator(((t_AbstractFieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          AbstractFieldODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractFieldODEStateInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStepHandler::class$ = NULL;
        jmethodID *ODEStepHandler::mids$ = NULL;
        bool ODEStepHandler::live$ = false;

        jclass ODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_100c57fd45963f6d] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_7f7ea329b6669cd2] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepHandler::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_100c57fd45963f6d], a0.this$);
        }

        void ODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_7f7ea329b6669cd2], a0.this$);
        }

        void ODEStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepHandler)[] = {
          { Py_tp_methods, t_ODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepHandler, t_ODEStepHandler, ODEStepHandler);

        void t_ODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepHandler), &PY_TYPE_DEF(ODEStepHandler), module, "ODEStepHandler", 0);
        }

        void t_ODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "class_", make_descriptor(ODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "wrapfn_", make_descriptor(t_ODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepHandler::wrap_Object(ODEStepHandler(((t_ODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SecondMoment::class$ = NULL;
          jmethodID *SecondMoment::mids$ = NULL;
          bool SecondMoment::live$ = false;

          jclass SecondMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SecondMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_98e08a33c6fbb84a] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_2c5885b2c79ad28e] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SecondMoment;");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SecondMoment::SecondMoment() : ::org::hipparchus::stat::descriptive::moment::FirstMoment(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void SecondMoment::aggregate(const SecondMoment & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_98e08a33c6fbb84a], a0.this$);
          }

          void SecondMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          SecondMoment SecondMoment::copy() const
          {
            return SecondMoment(env->callObjectMethod(this$, mids$[mid_copy_2c5885b2c79ad28e]));
          }

          jdouble SecondMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void SecondMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg);
          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data);
          static PyGetSetDef t_SecondMoment__fields_[] = {
            DECLARE_GET_FIELD(t_SecondMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SecondMoment__methods_[] = {
            DECLARE_METHOD(t_SecondMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, aggregate, METH_O),
            DECLARE_METHOD(t_SecondMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SecondMoment)[] = {
            { Py_tp_methods, t_SecondMoment__methods_ },
            { Py_tp_init, (void *) t_SecondMoment_init_ },
            { Py_tp_getset, t_SecondMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SecondMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::moment::FirstMoment),
            NULL
          };

          DEFINE_TYPE(SecondMoment, t_SecondMoment, SecondMoment);

          void t_SecondMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(SecondMoment), &PY_TYPE_DEF(SecondMoment), module, "SecondMoment", 0);
          }

          void t_SecondMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "class_", make_descriptor(SecondMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "wrapfn_", make_descriptor(t_SecondMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SecondMoment::initializeClass, 1)))
              return NULL;
            return t_SecondMoment::wrap_Object(SecondMoment(((t_SecondMoment *) arg)->object.this$));
          }
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SecondMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds)
          {
            SecondMoment object((jobject) NULL);

            INT_CALL(object = SecondMoment());
            self->object = object;

            return 0;
          }

          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg)
          {
            SecondMoment a0((jobject) NULL);

            if (!parseArg(arg, "k", SecondMoment::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args)
          {
            SecondMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SecondMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A::class$ = NULL;
          jmethodID *SubFrame4A::mids$ = NULL;
          bool SubFrame4A::live$ = false;

          jclass SubFrame4A::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_f2f64475e4580546] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_f2f64475e4580546] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_f2f64475e4580546] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_f2f64475e4580546] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_f2f64475e4580546] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_f2f64475e4580546] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved10_f2f64475e4580546] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReservedA09_f2f64475e4580546] = env->getMethodID(cls, "getReservedA09", "()I");
              mids$[mid_getReservedB09_f2f64475e4580546] = env->getMethodID(cls, "getReservedB09", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4A::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_f2f64475e4580546]);
          }

          jint SubFrame4A::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_f2f64475e4580546]);
          }

          jint SubFrame4A::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_f2f64475e4580546]);
          }

          jint SubFrame4A::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_f2f64475e4580546]);
          }

          jint SubFrame4A::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_f2f64475e4580546]);
          }

          jint SubFrame4A::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_f2f64475e4580546]);
          }

          jint SubFrame4A::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_f2f64475e4580546]);
          }

          jint SubFrame4A::getReservedA09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA09_f2f64475e4580546]);
          }

          jint SubFrame4A::getReservedB09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB09_f2f64475e4580546]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data);
          static PyGetSetDef t_SubFrame4A__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4A, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedA09),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedB09),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4A__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedA09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedB09, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A)[] = {
            { Py_tp_methods, t_SubFrame4A__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4A__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4A, t_SubFrame4A, SubFrame4A);

          void t_SubFrame4A::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A), &PY_TYPE_DEF(SubFrame4A), module, "SubFrame4A", 0);
          }

          void t_SubFrame4A::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "class_", make_descriptor(SubFrame4A::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "wrapfn_", make_descriptor(t_SubFrame4A::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A::wrap_Object(SubFrame4A(((t_SubFrame4A *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB09());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation::live$ = false;
            ::java::lang::String *MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass MarshallSolarActivityFutureEstimation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4bd4e55a4a09ee78] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_bc37664884b68042] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_accd1abae4481614] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_c635d45ddabaf0f1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_94e3788cacb1954b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_init$_a60010eee41f239f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_get24HoursKp_e912d21057defe63] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_e586dea4c0bad69b] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_e912d21057defe63] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_e912d21057defe63] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getFileDate_e6fc0227ed371052] = env->getMethodID(cls, "getFileDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateComponents;");
                mids$[mid_getInstantFlux_e912d21057defe63] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_e912d21057defe63] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getStrengthLevel_a653ffabf45c0f1b] = env->getMethodID(cls, "getStrengthLevel", "()Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_getThreeHourlyKP_e912d21057defe63] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_4bd4e55a4a09ee78, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_bc37664884b68042, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_accd1abae4481614, a0.this$, a1.this$, a2.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_c635d45ddabaf0f1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_94e3788cacb1954b, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_a60010eee41f239f, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            jdouble MarshallSolarActivityFutureEstimation::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_e912d21057defe63], a0.this$);
            }

            JArray< jdouble > MarshallSolarActivityFutureEstimation::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_e586dea4c0bad69b], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_e912d21057defe63], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_e912d21057defe63], a0.this$);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimation::getFileDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_e6fc0227ed371052], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_e912d21057defe63], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_e912d21057defe63], a0.this$);
            }

            ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation::getStrengthLevel() const
            {
              return ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel(env->callObjectMethod(this$, mids$[mid_getStrengthLevel_a653ffabf45c0f1b]));
            }

            jdouble MarshallSolarActivityFutureEstimation::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_e912d21057defe63], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, strengthLevel),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getFileDate, METH_O),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getStrengthLevel, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimation_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation, t_MarshallSolarActivityFutureEstimation, MarshallSolarActivityFutureEstimation);
            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_Object(const MarshallSolarActivityFutureEstimation& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation), module, "MarshallSolarActivityFutureEstimation", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "StrengthLevel", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel)));
            }

            void t_MarshallSolarActivityFutureEstimation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "class_", make_descriptor(MarshallSolarActivityFutureEstimation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation::wrap_Object(MarshallSolarActivityFutureEstimation(((t_MarshallSolarActivityFutureEstimation *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sK", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kK", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 8:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6, a7));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::DateComponents result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFileDate(a0));
                return ::org::orekit::time::t_DateComponents::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFileDate", arg);
              return NULL;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);
              OBJ_CALL(result = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel value((jobject) NULL);
              OBJ_CALL(value = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
