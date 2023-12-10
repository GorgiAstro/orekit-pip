#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {

        ::java::lang::Class *PCA::class$ = NULL;
        jmethodID *PCA::mids$ = NULL;
        bool PCA::live$ = false;

        jclass PCA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/projection/PCA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_5c6137a1aec058a4] = env->getMethodID(cls, "<init>", "(IZZ)V");
            mids$[mid_fit_c12386fb64cc3d5c] = env->getMethodID(cls, "fit", "([[D)Lorg/hipparchus/stat/projection/PCA;");
            mids$[mid_fitAndTransform_557d9547e284535f] = env->getMethodID(cls, "fitAndTransform", "([[D)[[D");
            mids$[mid_getCenter_7cdc325af0834901] = env->getMethodID(cls, "getCenter", "()[D");
            mids$[mid_getComponents_43de1192439efa92] = env->getMethodID(cls, "getComponents", "()[[D");
            mids$[mid_getNumComponents_f2f64475e4580546] = env->getMethodID(cls, "getNumComponents", "()I");
            mids$[mid_getVariance_7cdc325af0834901] = env->getMethodID(cls, "getVariance", "()[D");
            mids$[mid_isBiasCorrection_e470b6d9e0d979db] = env->getMethodID(cls, "isBiasCorrection", "()Z");
            mids$[mid_isScale_e470b6d9e0d979db] = env->getMethodID(cls, "isScale", "()Z");
            mids$[mid_transform_557d9547e284535f] = env->getMethodID(cls, "transform", "([[D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PCA::PCA(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

        PCA::PCA(jint a0, jboolean a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c6137a1aec058a4, a0, a1, a2)) {}

        PCA PCA::fit(const JArray< JArray< jdouble > > & a0) const
        {
          return PCA(env->callObjectMethod(this$, mids$[mid_fit_c12386fb64cc3d5c], a0.this$));
        }

        JArray< JArray< jdouble > > PCA::fitAndTransform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_fitAndTransform_557d9547e284535f], a0.this$));
        }

        JArray< jdouble > PCA::getCenter() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenter_7cdc325af0834901]));
        }

        JArray< JArray< jdouble > > PCA::getComponents() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getComponents_43de1192439efa92]));
        }

        jint PCA::getNumComponents() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumComponents_f2f64475e4580546]);
        }

        JArray< jdouble > PCA::getVariance() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVariance_7cdc325af0834901]));
        }

        jboolean PCA::isBiasCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isBiasCorrection_e470b6d9e0d979db]);
        }

        jboolean PCA::isScale() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isScale_e470b6d9e0d979db]);
        }

        JArray< JArray< jdouble > > PCA::transform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_transform_557d9547e284535f], a0.this$));
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
      namespace projection {
        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_getCenter(t_PCA *self);
        static PyObject *t_PCA_getComponents(t_PCA *self);
        static PyObject *t_PCA_getNumComponents(t_PCA *self);
        static PyObject *t_PCA_getVariance(t_PCA *self);
        static PyObject *t_PCA_isBiasCorrection(t_PCA *self);
        static PyObject *t_PCA_isScale(t_PCA *self);
        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data);
        static PyObject *t_PCA_get__center(t_PCA *self, void *data);
        static PyObject *t_PCA_get__components(t_PCA *self, void *data);
        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data);
        static PyObject *t_PCA_get__scale(t_PCA *self, void *data);
        static PyObject *t_PCA_get__variance(t_PCA *self, void *data);
        static PyGetSetDef t_PCA__fields_[] = {
          DECLARE_GET_FIELD(t_PCA, biasCorrection),
          DECLARE_GET_FIELD(t_PCA, center),
          DECLARE_GET_FIELD(t_PCA, components),
          DECLARE_GET_FIELD(t_PCA, numComponents),
          DECLARE_GET_FIELD(t_PCA, scale),
          DECLARE_GET_FIELD(t_PCA, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PCA__methods_[] = {
          DECLARE_METHOD(t_PCA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, fit, METH_O),
          DECLARE_METHOD(t_PCA, fitAndTransform, METH_O),
          DECLARE_METHOD(t_PCA, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getNumComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isBiasCorrection, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isScale, METH_NOARGS),
          DECLARE_METHOD(t_PCA, transform, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PCA)[] = {
          { Py_tp_methods, t_PCA__methods_ },
          { Py_tp_init, (void *) t_PCA_init_ },
          { Py_tp_getset, t_PCA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PCA)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PCA, t_PCA, PCA);

        void t_PCA::install(PyObject *module)
        {
          installType(&PY_TYPE(PCA), &PY_TYPE_DEF(PCA), module, "PCA", 0);
        }

        void t_PCA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "class_", make_descriptor(PCA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "wrapfn_", make_descriptor(t_PCA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PCA::initializeClass, 1)))
            return NULL;
          return t_PCA::wrap_Object(PCA(((t_PCA *) arg)->object.this$));
        }
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PCA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = PCA(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jboolean a2;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "IZZ", &a0, &a1, &a2))
              {
                INT_CALL(object = PCA(a0, a1, a2));
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

        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          PCA result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fit(a0));
            return t_PCA::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "fit", arg);
          return NULL;
        }

        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fitAndTransform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "fitAndTransform", arg);
          return NULL;
        }

        static PyObject *t_PCA_getCenter(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return result.wrap();
        }

        static PyObject *t_PCA_getComponents(t_PCA *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PCA_getNumComponents(t_PCA *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumComponents());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PCA_getVariance(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVariance());
          return result.wrap();
        }

        static PyObject *t_PCA_isBiasCorrection(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isBiasCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_isScale(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isScale());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.transform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "transform", arg);
          return NULL;
        }

        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isBiasCorrection());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__center(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return value.wrap();
        }

        static PyObject *t_PCA_get__components(t_PCA *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumComponents());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PCA_get__scale(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isScale());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__variance(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVariance());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeInterpolator::class$ = NULL;
      jmethodID *PythonTimeInterpolator::mids$ = NULL;
      bool PythonTimeInterpolator::live$ = false;

      jclass PythonTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_88592e520a5e4f21] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_interpolate_a0ef66fd7887c0fd] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeInterpolator::PythonTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeInterpolator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args);
      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self);
      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data);
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeInterpolator, t_PythonTimeInterpolator, PythonTimeInterpolator);
      PyObject *t_PythonTimeInterpolator::wrap_Object(const PythonTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeInterpolator), &PY_TYPE_DEF(PythonTimeInterpolator), module, "PythonTimeInterpolator", 1);
      }

      void t_PythonTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "class_", make_descriptor(PythonTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "wrapfn_", make_descriptor(t_PythonTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeInterpolator::wrap_Object(PythonTimeInterpolator(((t_PythonTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/EstimatedIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *EstimatedIonosphericModel::class$ = NULL;
          jmethodID *EstimatedIonosphericModel::mids$ = NULL;
          bool EstimatedIonosphericModel::live$ = false;
          ::java::lang::String *EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT = NULL;

          jclass EstimatedIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/EstimatedIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3df0bf38b459d86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericMappingFunction;D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_00612b4611856fc4] = env->getMethodID(cls, "pathDelay", "(DD[D)D");
              mids$[mid_pathDelay_bf16cb994a5cc871] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_c824fdb3e595a2ae] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_78d4f8498e981bf5] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VERTICAL_TOTAL_ELECTRON_CONTENT = new ::java::lang::String(env->getStaticObjectField(cls, "VERTICAL_TOTAL_ELECTRON_CONTENT", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedIonosphericModel::EstimatedIonosphericModel(const ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3df0bf38b459d86, a0.this$, a1)) {}

          ::java::util::List EstimatedIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          jdouble EstimatedIonosphericModel::pathDelay(jdouble a0, jdouble a1, const JArray< jdouble > & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_00612b4611856fc4], a0, a1, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_bf16cb994a5cc871], a0.this$, a1, a2.this$));
          }

          jdouble EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_c824fdb3e595a2ae], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_78d4f8498e981bf5], a0.this$, a1.this$, a2, a3.this$));
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
        namespace ionosphere {
          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self);
          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args);
          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data);
          static PyGetSetDef t_EstimatedIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedIonosphericModel)[] = {
            { Py_tp_methods, t_EstimatedIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedIonosphericModel_init_ },
            { Py_tp_getset, t_EstimatedIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedIonosphericModel, t_EstimatedIonosphericModel, EstimatedIonosphericModel);

          void t_EstimatedIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedIonosphericModel), &PY_TYPE_DEF(EstimatedIonosphericModel), module, "EstimatedIonosphericModel", 0);
          }

          void t_EstimatedIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "class_", make_descriptor(EstimatedIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "wrapfn_", make_descriptor(t_EstimatedIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedIonosphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "VERTICAL_TOTAL_ELECTRON_CONTENT", make_descriptor(j2p(*EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT)));
          }

          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedIonosphericModel::wrap_Object(EstimatedIonosphericModel(((t_EstimatedIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction a0((jobject) NULL);
            jdouble a1;
            EstimatedIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EstimatedIonosphericModel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                JArray< jdouble > a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KD[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data)
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
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldEphemerisGenerator::class$ = NULL;
      jmethodID *FieldEphemerisGenerator::mids$ = NULL;
      bool FieldEphemerisGenerator::live$ = false;

      jclass FieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_39f09e653b07efff] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::FieldBoundedPropagator FieldEphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::FieldBoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_39f09e653b07efff]));
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
      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args);
      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self);
      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data);
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_FieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, generatedEphemeris),
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_FieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEphemerisGenerator, t_FieldEphemerisGenerator, FieldEphemerisGenerator);
      PyObject *t_FieldEphemerisGenerator::wrap_Object(const FieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEphemerisGenerator), &PY_TYPE_DEF(FieldEphemerisGenerator), module, "FieldEphemerisGenerator", 0);
      }

      void t_FieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "class_", make_descriptor(FieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "wrapfn_", make_descriptor(t_FieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldEphemerisGenerator::wrap_Object(FieldEphemerisGenerator(((t_FieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self)
      {
        ::org::orekit::propagation::FieldBoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultivariateOptimizer::mids$ = NULL;
      bool BaseMultivariateOptimizer::live$ = false;

      jclass BaseMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLowerBound_7cdc325af0834901] = env->getMethodID(cls, "getLowerBound", "()[D");
          mids$[mid_getStartPoint_7cdc325af0834901] = env->getMethodID(cls, "getStartPoint", "()[D");
          mids$[mid_getUpperBound_7cdc325af0834901] = env->getMethodID(cls, "getUpperBound", "()[D");
          mids$[mid_optimize_2543bc354d0aa7ca] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > BaseMultivariateOptimizer::getLowerBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLowerBound_7cdc325af0834901]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getStartPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStartPoint_7cdc325af0834901]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getUpperBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBound_7cdc325af0834901]));
      }

      ::java::lang::Object BaseMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_2543bc354d0aa7ca], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, lowerBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, startPoint),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, upperBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getStartPoint, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultivariateOptimizer, t_BaseMultivariateOptimizer, BaseMultivariateOptimizer);
      PyObject *t_BaseMultivariateOptimizer::wrap_Object(const BaseMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultivariateOptimizer), &PY_TYPE_DEF(BaseMultivariateOptimizer), module, "BaseMultivariateOptimizer", 0);
      }

      void t_BaseMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "class_", make_descriptor(BaseMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultivariateOptimizer::wrap_Object(BaseMultivariateOptimizer(((t_BaseMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartPoint());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerBound());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartPoint());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperBound());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProviderModifier::class$ = NULL;
      jmethodID *AttitudeProviderModifier::mids$ = NULL;
      bool AttitudeProviderModifier::live$ = false;

      jclass AttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::AttitudeProvider AttitudeProviderModifier::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self);
      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_AttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeProviderModifier, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_AttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProviderModifier)[] = {
        { Py_tp_methods, t_AttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(AttitudeProviderModifier, t_AttitudeProviderModifier, AttitudeProviderModifier);

      void t_AttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProviderModifier), &PY_TYPE_DEF(AttitudeProviderModifier), module, "AttitudeProviderModifier", 0);
      }

      void t_AttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "class_", make_descriptor(AttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "wrapfn_", make_descriptor(t_AttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_AttitudeProviderModifier::wrap_Object(AttitudeProviderModifier(((t_AttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/stream/Stream.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Arrays::class$ = NULL;
    jmethodID *Arrays::mids$ = NULL;
    bool Arrays::live$ = false;

    jclass Arrays::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Arrays");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asList_234aa90ee2d16639] = env->getStaticMethodID(cls, "asList", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_binarySearch_76fd1872bdb7a177] = env->getStaticMethodID(cls, "binarySearch", "([BB)I");
        mids$[mid_binarySearch_470e2979761090f3] = env->getStaticMethodID(cls, "binarySearch", "([CC)I");
        mids$[mid_binarySearch_f3a2a1b6041f5654] = env->getStaticMethodID(cls, "binarySearch", "([DD)I");
        mids$[mid_binarySearch_fe3be197f0a3fad6] = env->getStaticMethodID(cls, "binarySearch", "([FF)I");
        mids$[mid_binarySearch_791106768ea60ccf] = env->getStaticMethodID(cls, "binarySearch", "([II)I");
        mids$[mid_binarySearch_5bd36750b26c8f11] = env->getStaticMethodID(cls, "binarySearch", "([JJ)I");
        mids$[mid_binarySearch_11c9f0ca09e9a1b5] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_d5ae829e5e529654] = env->getStaticMethodID(cls, "binarySearch", "([SS)I");
        mids$[mid_binarySearch_e6a79a6354ddf6c2] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_binarySearch_14d6496267e3e078] = env->getStaticMethodID(cls, "binarySearch", "([BIIB)I");
        mids$[mid_binarySearch_dac3408c8e84411f] = env->getStaticMethodID(cls, "binarySearch", "([CIIC)I");
        mids$[mid_binarySearch_fdcd5d137f48eb75] = env->getStaticMethodID(cls, "binarySearch", "([DIID)I");
        mids$[mid_binarySearch_47998f71d1a88c38] = env->getStaticMethodID(cls, "binarySearch", "([FIIF)I");
        mids$[mid_binarySearch_583a145bae2e56ff] = env->getStaticMethodID(cls, "binarySearch", "([IIII)I");
        mids$[mid_binarySearch_963d9b0e2e776cd8] = env->getStaticMethodID(cls, "binarySearch", "([JIIJ)I");
        mids$[mid_binarySearch_9251887bb739094b] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;)I");
        mids$[mid_binarySearch_d3d4b6e50a1863a0] = env->getStaticMethodID(cls, "binarySearch", "([SIIS)I");
        mids$[mid_binarySearch_ed3b5ef5a6f3be11] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_baa420e9123f184d] = env->getStaticMethodID(cls, "compare", "([B[B)I");
        mids$[mid_compare_722a72033b68df72] = env->getStaticMethodID(cls, "compare", "([C[C)I");
        mids$[mid_compare_fe416a234af07512] = env->getStaticMethodID(cls, "compare", "([D[D)I");
        mids$[mid_compare_cd4eb7530284071c] = env->getStaticMethodID(cls, "compare", "([F[F)I");
        mids$[mid_compare_05ddcb51512740f6] = env->getStaticMethodID(cls, "compare", "([I[I)I");
        mids$[mid_compare_05974a320e030538] = env->getStaticMethodID(cls, "compare", "([J[J)I");
        mids$[mid_compare_3064f21e6f53a721] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I");
        mids$[mid_compare_dbc50d7826e5b924] = env->getStaticMethodID(cls, "compare", "([S[S)I");
        mids$[mid_compare_ad0f844af4393ee4] = env->getStaticMethodID(cls, "compare", "([Z[Z)I");
        mids$[mid_compare_0331c01e93701ad9] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_5600d9807ef938e4] = env->getStaticMethodID(cls, "compare", "([BII[BII)I");
        mids$[mid_compare_7e8f592e9833cd15] = env->getStaticMethodID(cls, "compare", "([CII[CII)I");
        mids$[mid_compare_65b89a3807dde15a] = env->getStaticMethodID(cls, "compare", "([DII[DII)I");
        mids$[mid_compare_1c877592ad1ee56a] = env->getStaticMethodID(cls, "compare", "([FII[FII)I");
        mids$[mid_compare_0279e31277a62c0b] = env->getStaticMethodID(cls, "compare", "([III[III)I");
        mids$[mid_compare_65da25236b6795e1] = env->getStaticMethodID(cls, "compare", "([JII[JII)I");
        mids$[mid_compare_d6347f3fc5a33688] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I");
        mids$[mid_compare_4394f3faabb4f993] = env->getStaticMethodID(cls, "compare", "([SII[SII)I");
        mids$[mid_compare_9b68319512dc43a5] = env->getStaticMethodID(cls, "compare", "([ZII[ZII)I");
        mids$[mid_compare_cb1a4da0acde8ce3] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_compareUnsigned_baa420e9123f184d] = env->getStaticMethodID(cls, "compareUnsigned", "([B[B)I");
        mids$[mid_compareUnsigned_05ddcb51512740f6] = env->getStaticMethodID(cls, "compareUnsigned", "([I[I)I");
        mids$[mid_compareUnsigned_05974a320e030538] = env->getStaticMethodID(cls, "compareUnsigned", "([J[J)I");
        mids$[mid_compareUnsigned_dbc50d7826e5b924] = env->getStaticMethodID(cls, "compareUnsigned", "([S[S)I");
        mids$[mid_compareUnsigned_5600d9807ef938e4] = env->getStaticMethodID(cls, "compareUnsigned", "([BII[BII)I");
        mids$[mid_compareUnsigned_0279e31277a62c0b] = env->getStaticMethodID(cls, "compareUnsigned", "([III[III)I");
        mids$[mid_compareUnsigned_65da25236b6795e1] = env->getStaticMethodID(cls, "compareUnsigned", "([JII[JII)I");
        mids$[mid_compareUnsigned_4394f3faabb4f993] = env->getStaticMethodID(cls, "compareUnsigned", "([SII[SII)I");
        mids$[mid_copyOf_9fc5790b73021b24] = env->getStaticMethodID(cls, "copyOf", "([BI)[B");
        mids$[mid_copyOf_2815f1640c315d20] = env->getStaticMethodID(cls, "copyOf", "([CI)[C");
        mids$[mid_copyOf_fd1288d34222cfa8] = env->getStaticMethodID(cls, "copyOf", "([DI)[D");
        mids$[mid_copyOf_aecf0ff2b03f8a50] = env->getStaticMethodID(cls, "copyOf", "([FI)[F");
        mids$[mid_copyOf_fbd6545ab638c2dd] = env->getStaticMethodID(cls, "copyOf", "([II)[I");
        mids$[mid_copyOf_a036faf087e6e86e] = env->getStaticMethodID(cls, "copyOf", "([JI)[J");
        mids$[mid_copyOf_4114e0fb3fb67c85] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;I)[Ljava/lang/Object;");
        mids$[mid_copyOf_e1b3f84730964aac] = env->getStaticMethodID(cls, "copyOf", "([SI)[S");
        mids$[mid_copyOf_295a0ae7b916e43d] = env->getStaticMethodID(cls, "copyOf", "([ZI)[Z");
        mids$[mid_copyOf_8ea29e823d1d75b2] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_0c8f5f8e7a2e708c] = env->getStaticMethodID(cls, "copyOfRange", "([BII)[B");
        mids$[mid_copyOfRange_1bd63ee99200d788] = env->getStaticMethodID(cls, "copyOfRange", "([CII)[C");
        mids$[mid_copyOfRange_27a40d66e0497a45] = env->getStaticMethodID(cls, "copyOfRange", "([DII)[D");
        mids$[mid_copyOfRange_82bb4c530d532258] = env->getStaticMethodID(cls, "copyOfRange", "([FII)[F");
        mids$[mid_copyOfRange_c717479d81ab06d6] = env->getStaticMethodID(cls, "copyOfRange", "([III)[I");
        mids$[mid_copyOfRange_6fa95f5fa0c7f50d] = env->getStaticMethodID(cls, "copyOfRange", "([JII)[J");
        mids$[mid_copyOfRange_e8c275a90f7ca17f] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;II)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_cd6a99c63c149abf] = env->getStaticMethodID(cls, "copyOfRange", "([SII)[S");
        mids$[mid_copyOfRange_5ddc01ca6df3fa2a] = env->getStaticMethodID(cls, "copyOfRange", "([ZII)[Z");
        mids$[mid_copyOfRange_566b6fdd010f4db0] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_deepEquals_9f5c36073a5f569a] = env->getStaticMethodID(cls, "deepEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_deepHashCode_6625a4feecabf811] = env->getStaticMethodID(cls, "deepHashCode", "([Ljava/lang/Object;)I");
        mids$[mid_deepToString_b7235b7698aa209a] = env->getStaticMethodID(cls, "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_equals_038dd22190ceb95d] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
        mids$[mid_equals_9d3cbdc03832bcd3] = env->getStaticMethodID(cls, "equals", "([C[C)Z");
        mids$[mid_equals_5418f6d9d0f17dae] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
        mids$[mid_equals_70b45f0447f4c6bc] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
        mids$[mid_equals_3f2e961d1ff5453d] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
        mids$[mid_equals_289f0db12278154e] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
        mids$[mid_equals_9f5c36073a5f569a] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_equals_297ade561ff86626] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
        mids$[mid_equals_2590426d9393e74a] = env->getStaticMethodID(cls, "equals", "([Z[Z)Z");
        mids$[mid_equals_09b281b89923b281] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z");
        mids$[mid_equals_d5af8f65e34c49cd] = env->getStaticMethodID(cls, "equals", "([BII[BII)Z");
        mids$[mid_equals_f3c046aa7ef86cfb] = env->getStaticMethodID(cls, "equals", "([CII[CII)Z");
        mids$[mid_equals_872910f0955c4d97] = env->getStaticMethodID(cls, "equals", "([DII[DII)Z");
        mids$[mid_equals_9a10c202483899bc] = env->getStaticMethodID(cls, "equals", "([FII[FII)Z");
        mids$[mid_equals_de02faf0b76b687b] = env->getStaticMethodID(cls, "equals", "([III[III)Z");
        mids$[mid_equals_99a79dfe15fa8f4b] = env->getStaticMethodID(cls, "equals", "([JII[JII)Z");
        mids$[mid_equals_6905057aeab93690] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;II)Z");
        mids$[mid_equals_1352239d687e4b43] = env->getStaticMethodID(cls, "equals", "([SII[SII)Z");
        mids$[mid_equals_d1547cf463b182ed] = env->getStaticMethodID(cls, "equals", "([ZII[ZII)Z");
        mids$[mid_equals_abe2e7ea6b3fd070] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z");
        mids$[mid_fill_44ff0cc32f9c294a] = env->getStaticMethodID(cls, "fill", "([BB)V");
        mids$[mid_fill_42d076c00da13d7a] = env->getStaticMethodID(cls, "fill", "([CC)V");
        mids$[mid_fill_caadaecfce5fba2f] = env->getStaticMethodID(cls, "fill", "([DD)V");
        mids$[mid_fill_88c139a773072406] = env->getStaticMethodID(cls, "fill", "([FF)V");
        mids$[mid_fill_5b34b0a91dcd935c] = env->getStaticMethodID(cls, "fill", "([ZZ)V");
        mids$[mid_fill_a88d02f4a2784662] = env->getStaticMethodID(cls, "fill", "([II)V");
        mids$[mid_fill_ae4b10d09d66eaa2] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;Ljava/lang/Object;)V");
        mids$[mid_fill_ed844b73e78822d0] = env->getStaticMethodID(cls, "fill", "([JJ)V");
        mids$[mid_fill_9cd31edef8e73899] = env->getStaticMethodID(cls, "fill", "([SS)V");
        mids$[mid_fill_61b091d379125aa0] = env->getStaticMethodID(cls, "fill", "([CIIC)V");
        mids$[mid_fill_4e51e80f532fe2ea] = env->getStaticMethodID(cls, "fill", "([ZIIZ)V");
        mids$[mid_fill_f959d0192b334e18] = env->getStaticMethodID(cls, "fill", "([BIIB)V");
        mids$[mid_fill_345b449c06ec9ea7] = env->getStaticMethodID(cls, "fill", "([DIID)V");
        mids$[mid_fill_47f8a1cb0b6c367e] = env->getStaticMethodID(cls, "fill", "([FIIF)V");
        mids$[mid_fill_b3ee0a9ff676bcfd] = env->getStaticMethodID(cls, "fill", "([IIII)V");
        mids$[mid_fill_bd41d01b7a349a04] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;IILjava/lang/Object;)V");
        mids$[mid_fill_f9676b3c09d63585] = env->getStaticMethodID(cls, "fill", "([JIIJ)V");
        mids$[mid_fill_4a8da8a57784889b] = env->getStaticMethodID(cls, "fill", "([SIIS)V");
        mids$[mid_hashCode_11d417f25cf33664] = env->getStaticMethodID(cls, "hashCode", "([B)I");
        mids$[mid_hashCode_eeb6c7fd19987667] = env->getStaticMethodID(cls, "hashCode", "([C)I");
        mids$[mid_hashCode_37221385ab42f822] = env->getStaticMethodID(cls, "hashCode", "([D)I");
        mids$[mid_hashCode_73d39ddfc8ced2fb] = env->getStaticMethodID(cls, "hashCode", "([F)I");
        mids$[mid_hashCode_5c5c9df37b0af581] = env->getStaticMethodID(cls, "hashCode", "([I)I");
        mids$[mid_hashCode_412058d2d7d76177] = env->getStaticMethodID(cls, "hashCode", "([J)I");
        mids$[mid_hashCode_6625a4feecabf811] = env->getStaticMethodID(cls, "hashCode", "([Ljava/lang/Object;)I");
        mids$[mid_hashCode_a5b2596176772f32] = env->getStaticMethodID(cls, "hashCode", "([S)I");
        mids$[mid_hashCode_1703eab2be7ceb7d] = env->getStaticMethodID(cls, "hashCode", "([Z)I");
        mids$[mid_mismatch_baa420e9123f184d] = env->getStaticMethodID(cls, "mismatch", "([B[B)I");
        mids$[mid_mismatch_722a72033b68df72] = env->getStaticMethodID(cls, "mismatch", "([C[C)I");
        mids$[mid_mismatch_fe416a234af07512] = env->getStaticMethodID(cls, "mismatch", "([D[D)I");
        mids$[mid_mismatch_cd4eb7530284071c] = env->getStaticMethodID(cls, "mismatch", "([F[F)I");
        mids$[mid_mismatch_05ddcb51512740f6] = env->getStaticMethodID(cls, "mismatch", "([I[I)I");
        mids$[mid_mismatch_05974a320e030538] = env->getStaticMethodID(cls, "mismatch", "([J[J)I");
        mids$[mid_mismatch_f88fe08b39f9016d] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;)I");
        mids$[mid_mismatch_dbc50d7826e5b924] = env->getStaticMethodID(cls, "mismatch", "([S[S)I");
        mids$[mid_mismatch_ad0f844af4393ee4] = env->getStaticMethodID(cls, "mismatch", "([Z[Z)I");
        mids$[mid_mismatch_0331c01e93701ad9] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_mismatch_5600d9807ef938e4] = env->getStaticMethodID(cls, "mismatch", "([BII[BII)I");
        mids$[mid_mismatch_7e8f592e9833cd15] = env->getStaticMethodID(cls, "mismatch", "([CII[CII)I");
        mids$[mid_mismatch_65b89a3807dde15a] = env->getStaticMethodID(cls, "mismatch", "([DII[DII)I");
        mids$[mid_mismatch_1c877592ad1ee56a] = env->getStaticMethodID(cls, "mismatch", "([FII[FII)I");
        mids$[mid_mismatch_0279e31277a62c0b] = env->getStaticMethodID(cls, "mismatch", "([III[III)I");
        mids$[mid_mismatch_65da25236b6795e1] = env->getStaticMethodID(cls, "mismatch", "([JII[JII)I");
        mids$[mid_mismatch_5198a56bbe74b433] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;II)I");
        mids$[mid_mismatch_4394f3faabb4f993] = env->getStaticMethodID(cls, "mismatch", "([SII[SII)I");
        mids$[mid_mismatch_9b68319512dc43a5] = env->getStaticMethodID(cls, "mismatch", "([ZII[ZII)I");
        mids$[mid_mismatch_cb1a4da0acde8ce3] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_parallelSort_9c4b35f0a6dc87f3] = env->getStaticMethodID(cls, "parallelSort", "([B)V");
        mids$[mid_parallelSort_819ed274952f967e] = env->getStaticMethodID(cls, "parallelSort", "([C)V");
        mids$[mid_parallelSort_ebc26dcaf4761286] = env->getStaticMethodID(cls, "parallelSort", "([D)V");
        mids$[mid_parallelSort_6f778634e7666a51] = env->getStaticMethodID(cls, "parallelSort", "([F)V");
        mids$[mid_parallelSort_3b603738d1eb3233] = env->getStaticMethodID(cls, "parallelSort", "([I)V");
        mids$[mid_parallelSort_f9329a87f434e224] = env->getStaticMethodID(cls, "parallelSort", "([J)V");
        mids$[mid_parallelSort_9e6c4f84b6360656] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;)V");
        mids$[mid_parallelSort_bc5c58ffe95d3159] = env->getStaticMethodID(cls, "parallelSort", "([S)V");
        mids$[mid_parallelSort_c7dfceeb041ab7ea] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_parallelSort_125b1e9f043b29f8] = env->getStaticMethodID(cls, "parallelSort", "([BII)V");
        mids$[mid_parallelSort_2df38be22737223f] = env->getStaticMethodID(cls, "parallelSort", "([CII)V");
        mids$[mid_parallelSort_d3508f432c1d798d] = env->getStaticMethodID(cls, "parallelSort", "([DII)V");
        mids$[mid_parallelSort_2483374c28b19287] = env->getStaticMethodID(cls, "parallelSort", "([FII)V");
        mids$[mid_parallelSort_32b3bfc37fd90cb0] = env->getStaticMethodID(cls, "parallelSort", "([III)V");
        mids$[mid_parallelSort_38536a459e4458c3] = env->getStaticMethodID(cls, "parallelSort", "([JII)V");
        mids$[mid_parallelSort_507df61b437bd28e] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;II)V");
        mids$[mid_parallelSort_4be8ab814ce91808] = env->getStaticMethodID(cls, "parallelSort", "([SII)V");
        mids$[mid_parallelSort_e59f8a294a0e4a05] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_sort_9c4b35f0a6dc87f3] = env->getStaticMethodID(cls, "sort", "([B)V");
        mids$[mid_sort_819ed274952f967e] = env->getStaticMethodID(cls, "sort", "([C)V");
        mids$[mid_sort_ebc26dcaf4761286] = env->getStaticMethodID(cls, "sort", "([D)V");
        mids$[mid_sort_6f778634e7666a51] = env->getStaticMethodID(cls, "sort", "([F)V");
        mids$[mid_sort_3b603738d1eb3233] = env->getStaticMethodID(cls, "sort", "([I)V");
        mids$[mid_sort_f9329a87f434e224] = env->getStaticMethodID(cls, "sort", "([J)V");
        mids$[mid_sort_776481ea23945f99] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;)V");
        mids$[mid_sort_bc5c58ffe95d3159] = env->getStaticMethodID(cls, "sort", "([S)V");
        mids$[mid_sort_c7dfceeb041ab7ea] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_sort_125b1e9f043b29f8] = env->getStaticMethodID(cls, "sort", "([BII)V");
        mids$[mid_sort_2df38be22737223f] = env->getStaticMethodID(cls, "sort", "([CII)V");
        mids$[mid_sort_d3508f432c1d798d] = env->getStaticMethodID(cls, "sort", "([DII)V");
        mids$[mid_sort_2483374c28b19287] = env->getStaticMethodID(cls, "sort", "([FII)V");
        mids$[mid_sort_32b3bfc37fd90cb0] = env->getStaticMethodID(cls, "sort", "([III)V");
        mids$[mid_sort_38536a459e4458c3] = env->getStaticMethodID(cls, "sort", "([JII)V");
        mids$[mid_sort_a6734ac7e6f0c15f] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;II)V");
        mids$[mid_sort_4be8ab814ce91808] = env->getStaticMethodID(cls, "sort", "([SII)V");
        mids$[mid_sort_e59f8a294a0e4a05] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_spliterator_a1c22ccd1221fd1f] = env->getStaticMethodID(cls, "spliterator", "([D)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_ff833f6f0ab534f3] = env->getStaticMethodID(cls, "spliterator", "([I)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_a9a7718b48cd0c00] = env->getStaticMethodID(cls, "spliterator", "([J)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_77d5ce28a6a64340] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;)Ljava/util/Spliterator;");
        mids$[mid_spliterator_01fb3a1929552b9c] = env->getStaticMethodID(cls, "spliterator", "([DII)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_7409018a011423c4] = env->getStaticMethodID(cls, "spliterator", "([III)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_2d0880e179480ac6] = env->getStaticMethodID(cls, "spliterator", "([JII)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_9cdf3fd48f941574] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;II)Ljava/util/Spliterator;");
        mids$[mid_stream_d042e1ca31d645c7] = env->getStaticMethodID(cls, "stream", "([D)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_df43cc70bb37f421] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
        mids$[mid_stream_e7ce36de34786223] = env->getStaticMethodID(cls, "stream", "([DII)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_5b6b7b0b64e5d930] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;II)Ljava/util/stream/Stream;");
        mids$[mid_toString_4989aa3fc6c2f181] = env->getStaticMethodID(cls, "toString", "([B)Ljava/lang/String;");
        mids$[mid_toString_7faef32e6b4dd67a] = env->getStaticMethodID(cls, "toString", "([C)Ljava/lang/String;");
        mids$[mid_toString_acc91b9da4f13835] = env->getStaticMethodID(cls, "toString", "([D)Ljava/lang/String;");
        mids$[mid_toString_17272fdbaca30cb0] = env->getStaticMethodID(cls, "toString", "([F)Ljava/lang/String;");
        mids$[mid_toString_e3f5ec408434fab9] = env->getStaticMethodID(cls, "toString", "([I)Ljava/lang/String;");
        mids$[mid_toString_5750fa194072b765] = env->getStaticMethodID(cls, "toString", "([J)Ljava/lang/String;");
        mids$[mid_toString_b7235b7698aa209a] = env->getStaticMethodID(cls, "toString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_toString_47ac1bd68b3d3354] = env->getStaticMethodID(cls, "toString", "([S)Ljava/lang/String;");
        mids$[mid_toString_e16e6978d0d1cf66] = env->getStaticMethodID(cls, "toString", "([Z)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List Arrays::asList(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_asList_234aa90ee2d16639], a0.this$));
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_76fd1872bdb7a177], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_470e2979761090f3], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_f3a2a1b6041f5654], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_fe3be197f0a3fad6], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_791106768ea60ccf], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_5bd36750b26c8f11], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_11c9f0ca09e9a1b5], a0.this$, a1.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_d5ae829e5e529654], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_e6a79a6354ddf6c2], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_14d6496267e3e078], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_dac3408c8e84411f], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_fdcd5d137f48eb75], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_47998f71d1a88c38], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_583a145bae2e56ff], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_963d9b0e2e776cd8], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_9251887bb739094b], a0.this$, a1, a2, a3.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_d3d4b6e50a1863a0], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3, const ::java::util::Comparator & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_ed3b5ef5a6f3be11], a0.this$, a1, a2, a3.this$, a4.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_baa420e9123f184d], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_722a72033b68df72], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_fe416a234af07512], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_cd4eb7530284071c], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_05ddcb51512740f6], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_05974a320e030538], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, const JArray< ::java::lang::Comparable > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_3064f21e6f53a721], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_dbc50d7826e5b924], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_ad0f844af4393ee4], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_0331c01e93701ad9], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_5600d9807ef938e4], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_7e8f592e9833cd15], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_65b89a3807dde15a], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_1c877592ad1ee56a], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_0279e31277a62c0b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_65da25236b6795e1], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2, const JArray< ::java::lang::Comparable > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_d6347f3fc5a33688], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_4394f3faabb4f993], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_9b68319512dc43a5], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_cb1a4da0acde8ce3], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_baa420e9123f184d], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_05ddcb51512740f6], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_05974a320e030538], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_dbc50d7826e5b924], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_5600d9807ef938e4], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_0279e31277a62c0b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_65da25236b6795e1], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_4394f3faabb4f993], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    JArray< jbyte > Arrays::copyOf(const JArray< jbyte > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_9fc5790b73021b24], a0.this$, a1));
    }

    JArray< jchar > Arrays::copyOf(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_2815f1640c315d20], a0.this$, a1));
    }

    JArray< jdouble > Arrays::copyOf(const JArray< jdouble > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_fd1288d34222cfa8], a0.this$, a1));
    }

    JArray< jfloat > Arrays::copyOf(const JArray< jfloat > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_aecf0ff2b03f8a50], a0.this$, a1));
    }

    JArray< jint > Arrays::copyOf(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_fbd6545ab638c2dd], a0.this$, a1));
    }

    JArray< jlong > Arrays::copyOf(const JArray< jlong > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_a036faf087e6e86e], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_4114e0fb3fb67c85], a0.this$, a1));
    }

    JArray< jshort > Arrays::copyOf(const JArray< jshort > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_e1b3f84730964aac], a0.this$, a1));
    }

    JArray< jboolean > Arrays::copyOf(const JArray< jboolean > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_295a0ae7b916e43d], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_8ea29e823d1d75b2], a0.this$, a1, a2.this$));
    }

    JArray< jbyte > Arrays::copyOfRange(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_0c8f5f8e7a2e708c], a0.this$, a1, a2));
    }

    JArray< jchar > Arrays::copyOfRange(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_1bd63ee99200d788], a0.this$, a1, a2));
    }

    JArray< jdouble > Arrays::copyOfRange(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_27a40d66e0497a45], a0.this$, a1, a2));
    }

    JArray< jfloat > Arrays::copyOfRange(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_82bb4c530d532258], a0.this$, a1, a2));
    }

    JArray< jint > Arrays::copyOfRange(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_c717479d81ab06d6], a0.this$, a1, a2));
    }

    JArray< jlong > Arrays::copyOfRange(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_6fa95f5fa0c7f50d], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_e8c275a90f7ca17f], a0.this$, a1, a2));
    }

    JArray< jshort > Arrays::copyOfRange(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_cd6a99c63c149abf], a0.this$, a1, a2));
    }

    JArray< jboolean > Arrays::copyOfRange(const JArray< jboolean > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_5ddc01ca6df3fa2a], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Class & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_566b6fdd010f4db0], a0.this$, a1, a2, a3.this$));
    }

    jboolean Arrays::deepEquals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_deepEquals_9f5c36073a5f569a], a0.this$, a1.this$);
    }

    jint Arrays::deepHashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_deepHashCode_6625a4feecabf811], a0.this$);
    }

    ::java::lang::String Arrays::deepToString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_deepToString_b7235b7698aa209a], a0.this$));
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_038dd22190ceb95d], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_9d3cbdc03832bcd3], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_5418f6d9d0f17dae], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_70b45f0447f4c6bc], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_3f2e961d1ff5453d], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_289f0db12278154e], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_9f5c36073a5f569a], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_297ade561ff86626], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_2590426d9393e74a], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_09b281b89923b281], a0.this$, a1.this$, a2.this$);
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d5af8f65e34c49cd], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f3c046aa7ef86cfb], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_872910f0955c4d97], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_9a10c202483899bc], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_de02faf0b76b687b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_99a79dfe15fa8f4b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_6905057aeab93690], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_1352239d687e4b43], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d1547cf463b182ed], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_abe2e7ea6b3fd070], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_44ff0cc32f9c294a], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_42d076c00da13d7a], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_caadaecfce5fba2f], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_88c139a773072406], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_5b34b0a91dcd935c], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_a88d02f4a2784662], a0.this$, a1);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_ae4b10d09d66eaa2], a0.this$, a1.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_ed844b73e78822d0], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_9cd31edef8e73899], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_61b091d379125aa0], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jint a1, jint a2, jboolean a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_4e51e80f532fe2ea], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_f959d0192b334e18], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_345b449c06ec9ea7], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_47f8a1cb0b6c367e], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_b3ee0a9ff676bcfd], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_bd41d01b7a349a04], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_f9676b3c09d63585], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_4a8da8a57784889b], a0.this$, a1, a2, a3);
    }

    jint Arrays::hashCode(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_11d417f25cf33664], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_eeb6c7fd19987667], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_37221385ab42f822], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_73d39ddfc8ced2fb], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_5c5c9df37b0af581], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_412058d2d7d76177], a0.this$);
    }

    jint Arrays::hashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_6625a4feecabf811], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_a5b2596176772f32], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_1703eab2be7ceb7d], a0.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_baa420e9123f184d], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_722a72033b68df72], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_fe416a234af07512], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_cd4eb7530284071c], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_05ddcb51512740f6], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_05974a320e030538], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_f88fe08b39f9016d], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_dbc50d7826e5b924], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_ad0f844af4393ee4], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_0331c01e93701ad9], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_5600d9807ef938e4], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_7e8f592e9833cd15], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_65b89a3807dde15a], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_1c877592ad1ee56a], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_0279e31277a62c0b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_65da25236b6795e1], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_5198a56bbe74b433], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_4394f3faabb4f993], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_9b68319512dc43a5], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_cb1a4da0acde8ce3], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_9c4b35f0a6dc87f3], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_819ed274952f967e], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_ebc26dcaf4761286], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_6f778634e7666a51], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_3b603738d1eb3233], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_f9329a87f434e224], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_9e6c4f84b6360656], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_bc5c58ffe95d3159], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_c7dfceeb041ab7ea], a0.this$, a1.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_125b1e9f043b29f8], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_2df38be22737223f], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d3508f432c1d798d], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_2483374c28b19287], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_32b3bfc37fd90cb0], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_38536a459e4458c3], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_507df61b437bd28e], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_4be8ab814ce91808], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_e59f8a294a0e4a05], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_9c4b35f0a6dc87f3], a0.this$);
    }

    void Arrays::sort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_819ed274952f967e], a0.this$);
    }

    void Arrays::sort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_ebc26dcaf4761286], a0.this$);
    }

    void Arrays::sort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_6f778634e7666a51], a0.this$);
    }

    void Arrays::sort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_3b603738d1eb3233], a0.this$);
    }

    void Arrays::sort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_f9329a87f434e224], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_776481ea23945f99], a0.this$);
    }

    void Arrays::sort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_bc5c58ffe95d3159], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_c7dfceeb041ab7ea], a0.this$, a1.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_125b1e9f043b29f8], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_2df38be22737223f], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d3508f432c1d798d], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_2483374c28b19287], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_32b3bfc37fd90cb0], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_38536a459e4458c3], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_a6734ac7e6f0c15f], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_4be8ab814ce91808], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_e59f8a294a0e4a05], a0.this$, a1, a2, a3.this$);
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_a1c22ccd1221fd1f], a0.this$));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_ff833f6f0ab534f3], a0.this$));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_a9a7718b48cd0c00], a0.this$));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_77d5ce28a6a64340], a0.this$));
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_01fb3a1929552b9c], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_7409018a011423c4], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_2d0880e179480ac6], a0.this$, a1, a2));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_9cdf3fd48f941574], a0.this$, a1, a2));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_d042e1ca31d645c7], a0.this$));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_df43cc70bb37f421], a0.this$));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_e7ce36de34786223], a0.this$, a1, a2));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_5b6b7b0b64e5d930], a0.this$, a1, a2));
    }

    ::java::lang::String Arrays::toString(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_4989aa3fc6c2f181], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_7faef32e6b4dd67a], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_acc91b9da4f13835], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_17272fdbaca30cb0], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_e3f5ec408434fab9], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_5750fa194072b765], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_b7235b7698aa209a], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_47ac1bd68b3d3354], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_e16e6978d0d1cf66], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Arrays__methods_[] = {
      DECLARE_METHOD(t_Arrays, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, asList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOfRange, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepEquals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepToString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, equals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, hashCode, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, mismatch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, parallelSort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, spliterator, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, stream, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, toString, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Arrays)[] = {
      { Py_tp_methods, t_Arrays__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Arrays)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Arrays, t_Arrays, Arrays);

    void t_Arrays::install(PyObject *module)
    {
      installType(&PY_TYPE(Arrays), &PY_TYPE_DEF(Arrays), module, "Arrays", 0);
    }

    void t_Arrays::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "class_", make_descriptor(Arrays::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "wrapfn_", make_descriptor(t_Arrays::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Arrays::initializeClass, 1)))
        return NULL;
      return t_Arrays::wrap_Object(Arrays(((t_Arrays *) arg)->object.this$));
    }
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Arrays::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::asList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asList", arg);
      return NULL;
    }

    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;
          jint result;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;
          jint result;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          jint result;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;
          jint result;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;
          jint result;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;
          jint result;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[ooK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;
          jint result;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;
          jint result;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;
          jint result;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;
          jint result;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;
          jint result;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;
          jint result;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          ::java::util::Comparator a4((jobject) NULL);
          PyTypeObject **p4;
          jint result;

          if (!parseArgs(args, "[oIIoK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::java::lang::Comparable > a1((jobject) NULL);
          PyTypeObject **p1;
          jint result;

          if (!parseArgs(args, "[K[K", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::java::lang::Comparable > a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[KII[KII", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2, &a3, &p3, ::java::lang::t_Comparable::parameters_, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          ::java::lang::Class a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &p2, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOf", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Class a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOfRange", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "[o[o", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepEquals(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "deepEquals", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "deepHashCode", arg);
      return NULL;
    }

    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepToString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "deepToString", arg);
      return NULL;
    }

    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jboolean result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5, a6));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(type, "equals", args, 2);
    }

    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jboolean > a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "[ZZ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          jboolean a3;

          if (!parseArgs(args, "[ZIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(type, "hashCode", args, 2);
    }

    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "mismatch", args);
      return NULL;
    }

    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "[K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;

          if (!parseArgs(args, "[KII", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "parallelSort", args);
      return NULL;
    }

    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "spliterator", args);
      return NULL;
    }

    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "stream", args);
      return NULL;
    }

    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
      }

      return callSuper(type, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SolidTides.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SolidTides::class$ = NULL;
        jmethodID *SolidTides::mids$ = NULL;
        bool SolidTides::live$ = false;
        jint SolidTides::DEFAULT_POINTS = (jint) 0;
        jdouble SolidTides::DEFAULT_STEP = (jdouble) 0;

        jclass SolidTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SolidTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b016086181b32719] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_init$_34b273274ee3b9aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;ZDILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, const ::org::orekit::utils::IERSConventions & a4, const ::org::orekit::time::UT1Scale & a5, const JArray< ::org::orekit::bodies::CelestialBody > & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b016086181b32719, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jboolean a4, jdouble a5, jint a6, const ::org::orekit::utils::IERSConventions & a7, const ::org::orekit::time::UT1Scale & a8, const JArray< ::org::orekit::bodies::CelestialBody > & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34b273274ee3b9aa, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7.this$, a8.this$, a9.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolidTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolidTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean SolidTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::stream::Stream SolidTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream SolidTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::java::util::List SolidTides::getParametersDrivers() const
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
      namespace gravity {
        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args);
        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self);
        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self);
        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg);
        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self);
        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data);
        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data);
        static PyGetSetDef t_SolidTides__fields_[] = {
          DECLARE_GET_FIELD(t_SolidTides, eventDetectors),
          DECLARE_GET_FIELD(t_SolidTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolidTides__methods_[] = {
          DECLARE_METHOD(t_SolidTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolidTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_SolidTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolidTides)[] = {
          { Py_tp_methods, t_SolidTides__methods_ },
          { Py_tp_init, (void *) t_SolidTides_init_ },
          { Py_tp_getset, t_SolidTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolidTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolidTides, t_SolidTides, SolidTides);

        void t_SolidTides::install(PyObject *module)
        {
          installType(&PY_TYPE(SolidTides), &PY_TYPE_DEF(SolidTides), module, "SolidTides", 0);
        }

        void t_SolidTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "class_", make_descriptor(SolidTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "wrapfn_", make_descriptor(t_SolidTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(SolidTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_POINTS", make_descriptor(SolidTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_STEP", make_descriptor(SolidTides::DEFAULT_STEP));
        }

        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolidTides::initializeClass, 1)))
            return NULL;
          return t_SolidTides::wrap_Object(SolidTides(((t_SolidTides *) arg)->object.this$));
        }
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolidTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::utils::IERSConventions a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::time::UT1Scale a5((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a6((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &p4, ::org::orekit::utils::t_IERSConventions::parameters_, &a5, &a6))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jboolean a4;
              jdouble a5;
              jint a6;
              ::org::orekit::utils::IERSConventions a7((jobject) NULL);
              PyTypeObject **p7;
              ::org::orekit::time::UT1Scale a8((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a9((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKZDIKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &p7, ::org::orekit::utils::t_IERSConventions::parameters_, &a8, &a9))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args)
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

        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data)
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
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitType::class$ = NULL;
      jmethodID *OrbitType::mids$ = NULL;
      bool OrbitType::live$ = false;
      ::java::lang::String *OrbitType::A = NULL;
      OrbitType *OrbitType::CARTESIAN = NULL;
      OrbitType *OrbitType::CIRCULAR = NULL;
      ::java::lang::String *OrbitType::ECC = NULL;
      ::java::lang::String *OrbitType::ECC_ANOM = NULL;
      ::java::lang::String *OrbitType::ECC_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::ECC_LON_ARG = NULL;
      OrbitType *OrbitType::EQUINOCTIAL = NULL;
      ::java::lang::String *OrbitType::E_X = NULL;
      ::java::lang::String *OrbitType::E_Y = NULL;
      ::java::lang::String *OrbitType::H_X = NULL;
      ::java::lang::String *OrbitType::H_Y = NULL;
      ::java::lang::String *OrbitType::INC = NULL;
      OrbitType *OrbitType::KEPLERIAN = NULL;
      ::java::lang::String *OrbitType::MEAN_ANOM = NULL;
      ::java::lang::String *OrbitType::MEAN_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::MEAN_LON_ARG = NULL;
      ::java::lang::String *OrbitType::PA = NULL;
      ::java::lang::String *OrbitType::POS_X = NULL;
      ::java::lang::String *OrbitType::POS_Y = NULL;
      ::java::lang::String *OrbitType::POS_Z = NULL;
      ::java::lang::String *OrbitType::RAAN = NULL;
      ::java::lang::String *OrbitType::TRUE_ANOM = NULL;
      ::java::lang::String *OrbitType::TRUE_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::TRUE_LON_ARG = NULL;
      ::java::lang::String *OrbitType::VEL_X = NULL;
      ::java::lang::String *OrbitType::VEL_Y = NULL;
      ::java::lang::String *OrbitType::VEL_Z = NULL;

      jclass OrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToFieldOrbit_169ee1c5c6f349b6] = env->getMethodID(cls, "convertToFieldOrbit", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_bb96a3ad0be008c8] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_4500563ec80cd676] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_getDrivers_a18265431e9bd8ef] = env->getMethodID(cls, "getDrivers", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/utils/ParameterDriversList;");
          mids$[mid_isPositionAngleBased_e470b6d9e0d979db] = env->getMethodID(cls, "isPositionAngleBased", "()Z");
          mids$[mid_mapArrayToOrbit_e270013e907a14a8] = env->getMethodID(cls, "mapArrayToOrbit", "([D[DLorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/frames/Frame;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_mapArrayToOrbit_a5da8c0112bdafc1] = env->getMethodID(cls, "mapArrayToOrbit", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_mapOrbitToArray_09b9ade5607cad5c] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapOrbitToArray_d9382506546fcee6] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[D[D)V");
          mids$[mid_normalize_83d39e35e31057b8] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_normalize_151b7a6b6cc171d4] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_valueOf_8aa54dfecca4ce2e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/OrbitType;");
          mids$[mid_values_0b1124046ca86020] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/OrbitType;");
          mids$[mid_scale_d8d4614324ef32ef] = env->getMethodID(cls, "scale", "(DLorg/orekit/orbits/Orbit;)[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new ::java::lang::String(env->getStaticObjectField(cls, "A", "Ljava/lang/String;"));
          CARTESIAN = new OrbitType(env->getStaticObjectField(cls, "CARTESIAN", "Lorg/orekit/orbits/OrbitType;"));
          CIRCULAR = new OrbitType(env->getStaticObjectField(cls, "CIRCULAR", "Lorg/orekit/orbits/OrbitType;"));
          ECC = new ::java::lang::String(env->getStaticObjectField(cls, "ECC", "Ljava/lang/String;"));
          ECC_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_ANOM", "Ljava/lang/String;"));
          ECC_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LAT_ARG", "Ljava/lang/String;"));
          ECC_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LON_ARG", "Ljava/lang/String;"));
          EQUINOCTIAL = new OrbitType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/orbits/OrbitType;"));
          E_X = new ::java::lang::String(env->getStaticObjectField(cls, "E_X", "Ljava/lang/String;"));
          E_Y = new ::java::lang::String(env->getStaticObjectField(cls, "E_Y", "Ljava/lang/String;"));
          H_X = new ::java::lang::String(env->getStaticObjectField(cls, "H_X", "Ljava/lang/String;"));
          H_Y = new ::java::lang::String(env->getStaticObjectField(cls, "H_Y", "Ljava/lang/String;"));
          INC = new ::java::lang::String(env->getStaticObjectField(cls, "INC", "Ljava/lang/String;"));
          KEPLERIAN = new OrbitType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/orbits/OrbitType;"));
          MEAN_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_ANOM", "Ljava/lang/String;"));
          MEAN_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LAT_ARG", "Ljava/lang/String;"));
          MEAN_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LON_ARG", "Ljava/lang/String;"));
          PA = new ::java::lang::String(env->getStaticObjectField(cls, "PA", "Ljava/lang/String;"));
          POS_X = new ::java::lang::String(env->getStaticObjectField(cls, "POS_X", "Ljava/lang/String;"));
          POS_Y = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Y", "Ljava/lang/String;"));
          POS_Z = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Z", "Ljava/lang/String;"));
          RAAN = new ::java::lang::String(env->getStaticObjectField(cls, "RAAN", "Ljava/lang/String;"));
          TRUE_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_ANOM", "Ljava/lang/String;"));
          TRUE_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LAT_ARG", "Ljava/lang/String;"));
          TRUE_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LON_ARG", "Ljava/lang/String;"));
          VEL_X = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_X", "Ljava/lang/String;"));
          VEL_Y = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Y", "Ljava/lang/String;"));
          VEL_Z = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Z", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertToFieldOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertToFieldOrbit_169ee1c5c6f349b6], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertType(const ::org::orekit::orbits::FieldOrbit & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertType_bb96a3ad0be008c8], a0.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::convertType(const ::org::orekit::orbits::Orbit & a0) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_convertType_4500563ec80cd676], a0.this$));
      }

      ::org::orekit::utils::ParameterDriversList OrbitType::getDrivers(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getDrivers_a18265431e9bd8ef], a0, a1.this$, a2.this$));
      }

      jboolean OrbitType::isPositionAngleBased() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPositionAngleBased_e470b6d9e0d979db]);
      }

      ::org::orekit::orbits::Orbit OrbitType::mapArrayToOrbit(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_e270013e907a14a8], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::mapArrayToOrbit(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_a5da8c0112bdafc1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_09b9ade5607cad5c], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_d9382506546fcee6], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::normalize(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::FieldOrbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_normalize_83d39e35e31057b8], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::normalize(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_normalize_151b7a6b6cc171d4], a0.this$, a1.this$));
      }

      OrbitType OrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8aa54dfecca4ce2e], a0.this$));
      }

      JArray< OrbitType > OrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_0b1124046ca86020]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self);
      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrbitType_values(PyTypeObject *type);
      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data);
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data);
      static PyGetSetDef t_OrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitType, positionAngleBased),
        DECLARE_GET_FIELD(t_OrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitType__methods_[] = {
        DECLARE_METHOD(t_OrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertToFieldOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertType, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, getDrivers, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, isPositionAngleBased, METH_NOARGS),
        DECLARE_METHOD(t_OrbitType, mapArrayToOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, mapOrbitToArray, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, normalize, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitType)[] = {
        { Py_tp_methods, t_OrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrbitType, t_OrbitType, OrbitType);
      PyObject *t_OrbitType::wrap_Object(const OrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitType), &PY_TYPE_DEF(OrbitType), module, "OrbitType", 0);
      }

      void t_OrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "class_", make_descriptor(OrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "wrapfn_", make_descriptor(t_OrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "A", make_descriptor(j2p(*OrbitType::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CARTESIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CARTESIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CIRCULAR", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CIRCULAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC", make_descriptor(j2p(*OrbitType::ECC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_ANOM", make_descriptor(j2p(*OrbitType::ECC_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LAT_ARG", make_descriptor(j2p(*OrbitType::ECC_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LON_ARG", make_descriptor(j2p(*OrbitType::ECC_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "EQUINOCTIAL", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_X", make_descriptor(j2p(*OrbitType::E_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_Y", make_descriptor(j2p(*OrbitType::E_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_X", make_descriptor(j2p(*OrbitType::H_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_Y", make_descriptor(j2p(*OrbitType::H_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "INC", make_descriptor(j2p(*OrbitType::INC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "KEPLERIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::KEPLERIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_ANOM", make_descriptor(j2p(*OrbitType::MEAN_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LAT_ARG", make_descriptor(j2p(*OrbitType::MEAN_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LON_ARG", make_descriptor(j2p(*OrbitType::MEAN_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "PA", make_descriptor(j2p(*OrbitType::PA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_X", make_descriptor(j2p(*OrbitType::POS_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Y", make_descriptor(j2p(*OrbitType::POS_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Z", make_descriptor(j2p(*OrbitType::POS_Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "RAAN", make_descriptor(j2p(*OrbitType::RAAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_ANOM", make_descriptor(j2p(*OrbitType::TRUE_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LAT_ARG", make_descriptor(j2p(*OrbitType::TRUE_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LON_ARG", make_descriptor(j2p(*OrbitType::TRUE_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_X", make_descriptor(j2p(*OrbitType::VEL_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Y", make_descriptor(j2p(*OrbitType::VEL_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Z", make_descriptor(j2p(*OrbitType::VEL_Z)));
      }

      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitType::initializeClass, 1)))
          return NULL;
        return t_OrbitType::wrap_Object(OrbitType(((t_OrbitType *) arg)->object.this$));
      }
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.convertToFieldOrbit(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertToFieldOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertType", args);
        return NULL;
      }

      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

        if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getDrivers(a0, a1, a2));
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDrivers", args);
        return NULL;
      }

      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 6:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            jdouble a4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "[D[DKkDk", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "[K[KKKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapArrayToOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);

            if (!parseArgs(args, "kK[D[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KK[K[K", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapOrbitToArray", args);
        return NULL;
      }

      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "normalize", args);
        return NULL;
      }

      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::OrbitType::valueOf(a0));
          return t_OrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrbitType_values(PyTypeObject *type)
      {
        JArray< OrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::OrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_OrbitType::wrap_jobject);
      }
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Gradient::class$ = NULL;
        jmethodID *Gradient::mids$ = NULL;
        bool Gradient::live$ = false;

        jclass Gradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Gradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d50646f27571013a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_b67fd0977346c69b] = env->getMethodID(cls, "<init>", "(D[D)V");
            mids$[mid_abs_4ed8e234724fadba] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acos_4ed8e234724fadba] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acosh_4ed8e234724fadba] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_b766d8418848fc11] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_18e14d8ad3d461ab] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asin_4ed8e234724fadba] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asinh_4ed8e234724fadba] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan_4ed8e234724fadba] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan2_b766d8418848fc11] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atanh_4ed8e234724fadba] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cbrt_4ed8e234724fadba] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ceil_4ed8e234724fadba] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_compose_c0842cb6f40fe64e] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_constant_39546ea18c226943] = env->getStaticMethodID(cls, "constant", "(ID)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_b766d8418848fc11] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_18e14d8ad3d461ab] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cos_4ed8e234724fadba] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cosh_4ed8e234724fadba] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_b766d8418848fc11] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_18e14d8ad3d461ab] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_4ed8e234724fadba] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_expm1_4ed8e234724fadba] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_floor_4ed8e234724fadba] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_36f1b6e993794a5b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_7cdc325af0834901] = env->getMethodID(cls, "getGradient", "()[D");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_29ffeeddaa7151a9] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPartialDerivative_b772323fc98b7293] = env->getMethodID(cls, "getPartialDerivative", "(I)D");
            mids$[mid_getPi_4ed8e234724fadba] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_b766d8418848fc11] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_a62e5d4409b0b474] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_b59fdbc487124843] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/Gradient;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_7fb20c065de2424d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_71c5daca8fe22baf] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_5a04786dd8440c75] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_2d33601efcd3883c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_0301c2004d04c4f1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_7f1485ace86e01e4] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log_4ed8e234724fadba] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log10_4ed8e234724fadba] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log1p_4ed8e234724fadba] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_b766d8418848fc11] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_18e14d8ad3d461ab] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_b2711a04f583f1d3] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_negate_4ed8e234724fadba] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_newInstance_18e14d8ad3d461ab] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_b766d8418848fc11] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_18e14d8ad3d461ab] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_b2711a04f583f1d3] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_ef4b2dc9bc2a300f] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_reciprocal_4ed8e234724fadba] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_b766d8418848fc11] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_18e14d8ad3d461ab] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rint_4ed8e234724fadba] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rootN_b2711a04f583f1d3] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_scalb_b2711a04f583f1d3] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sign_4ed8e234724fadba] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sin_4ed8e234724fadba] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_4ed8e234724fadba] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_4ed8e234724fadba] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_b766d8418848fc11] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_18e14d8ad3d461ab] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tan_4ed8e234724fadba] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tanh_4ed8e234724fadba] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_taylor_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_4ed8e234724fadba] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_4ed8e234724fadba] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ulp_4ed8e234724fadba] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_variable_df30a86b878f815c] = env->getStaticMethodID(cls, "variable", "(IID)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gradient::Gradient(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d50646f27571013a, a0.this$)) {}

        Gradient::Gradient(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b67fd0977346c69b, a0, a1.this$)) {}

        Gradient Gradient::abs() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_abs_4ed8e234724fadba]));
        }

        Gradient Gradient::acos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acos_4ed8e234724fadba]));
        }

        Gradient Gradient::acosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acosh_4ed8e234724fadba]));
        }

        Gradient Gradient::add(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::add(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_18e14d8ad3d461ab], a0));
        }

        Gradient Gradient::asin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asin_4ed8e234724fadba]));
        }

        Gradient Gradient::asinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asinh_4ed8e234724fadba]));
        }

        Gradient Gradient::atan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan_4ed8e234724fadba]));
        }

        Gradient Gradient::atan2(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan2_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::atanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atanh_4ed8e234724fadba]));
        }

        Gradient Gradient::cbrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cbrt_4ed8e234724fadba]));
        }

        Gradient Gradient::ceil() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ceil_4ed8e234724fadba]));
        }

        Gradient Gradient::compose(const JArray< jdouble > & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_compose_c0842cb6f40fe64e], a0.this$));
        }

        Gradient Gradient::constant(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_constant_39546ea18c226943], a0, a1));
        }

        Gradient Gradient::copySign(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::copySign(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_18e14d8ad3d461ab], a0));
        }

        Gradient Gradient::cos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cos_4ed8e234724fadba]));
        }

        Gradient Gradient::cosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cosh_4ed8e234724fadba]));
        }

        Gradient Gradient::divide(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::divide(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_18e14d8ad3d461ab], a0));
        }

        jboolean Gradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        Gradient Gradient::exp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_exp_4ed8e234724fadba]));
        }

        Gradient Gradient::expm1() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_expm1_4ed8e234724fadba]));
        }

        Gradient Gradient::floor() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_floor_4ed8e234724fadba]));
        }

        jint Gradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::GradientField Gradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::GradientField(env->callObjectMethod(this$, mids$[mid_getField_36f1b6e993794a5b]));
        }

        jint Gradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        JArray< jdouble > Gradient::getGradient() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGradient_7cdc325af0834901]));
        }

        jint Gradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        jdouble Gradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_29ffeeddaa7151a9], a0.this$);
        }

        jdouble Gradient::getPartialDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_b772323fc98b7293], a0);
        }

        Gradient Gradient::getPi() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_getPi_4ed8e234724fadba]));
        }

        jdouble Gradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        jdouble Gradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }

        jint Gradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        Gradient Gradient::hypot(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_hypot_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::linearCombination(const JArray< jdouble > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_a62e5d4409b0b474], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const JArray< Gradient > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_b59fdbc487124843], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_7fb20c065de2424d], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_71c5daca8fe22baf], a0, a1.this$, a2, a3.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_5a04786dd8440c75], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_2d33601efcd3883c], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5, const Gradient & a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_0301c2004d04c4f1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5, jdouble a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_7f1485ace86e01e4], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        Gradient Gradient::log() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log_4ed8e234724fadba]));
        }

        Gradient Gradient::log10() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log10_4ed8e234724fadba]));
        }

        Gradient Gradient::log1p() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log1p_4ed8e234724fadba]));
        }

        Gradient Gradient::multiply(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::multiply(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_18e14d8ad3d461ab], a0));
        }

        Gradient Gradient::multiply(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_b2711a04f583f1d3], a0));
        }

        Gradient Gradient::negate() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_negate_4ed8e234724fadba]));
        }

        Gradient Gradient::newInstance(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_newInstance_18e14d8ad3d461ab], a0));
        }

        Gradient Gradient::pow(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::pow(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_18e14d8ad3d461ab], a0));
        }

        Gradient Gradient::pow(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_b2711a04f583f1d3], a0));
        }

        Gradient Gradient::pow(jdouble a0, const Gradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_pow_ef4b2dc9bc2a300f], a0, a1.this$));
        }

        Gradient Gradient::reciprocal() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_reciprocal_4ed8e234724fadba]));
        }

        Gradient Gradient::remainder(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::remainder(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_18e14d8ad3d461ab], a0));
        }

        Gradient Gradient::rint() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rint_4ed8e234724fadba]));
        }

        Gradient Gradient::rootN(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rootN_b2711a04f583f1d3], a0));
        }

        Gradient Gradient::scalb(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_scalb_b2711a04f583f1d3], a0));
        }

        Gradient Gradient::sign() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sign_4ed8e234724fadba]));
        }

        Gradient Gradient::sin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sin_4ed8e234724fadba]));
        }

        ::org::hipparchus::util::FieldSinCos Gradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        Gradient Gradient::sinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sinh_4ed8e234724fadba]));
        }

        ::org::hipparchus::util::FieldSinhCosh Gradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        Gradient Gradient::sqrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sqrt_4ed8e234724fadba]));
        }

        Gradient Gradient::subtract(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_b766d8418848fc11], a0.this$));
        }

        Gradient Gradient::subtract(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_18e14d8ad3d461ab], a0));
        }

        Gradient Gradient::tan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tan_4ed8e234724fadba]));
        }

        Gradient Gradient::tanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tanh_4ed8e234724fadba]));
        }

        jdouble Gradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_f05cb8c6dfd5e0b9], a0.this$);
        }

        Gradient Gradient::toDegrees() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toDegrees_4ed8e234724fadba]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure Gradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a]));
        }

        Gradient Gradient::toRadians() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toRadians_4ed8e234724fadba]));
        }

        Gradient Gradient::ulp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ulp_4ed8e234724fadba]));
        }

        Gradient Gradient::variable(jint a0, jint a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_variable_df30a86b878f815c], a0, a1, a2));
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
    namespace analysis {
      namespace differentiation {
        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gradient_abs(t_Gradient *self);
        static PyObject *t_Gradient_acos(t_Gradient *self);
        static PyObject *t_Gradient_acosh(t_Gradient *self);
        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_asin(t_Gradient *self);
        static PyObject *t_Gradient_asinh(t_Gradient *self);
        static PyObject *t_Gradient_atan(t_Gradient *self);
        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_atanh(t_Gradient *self);
        static PyObject *t_Gradient_cbrt(t_Gradient *self);
        static PyObject *t_Gradient_ceil(t_Gradient *self);
        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_cos(t_Gradient *self);
        static PyObject *t_Gradient_cosh(t_Gradient *self);
        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_exp(t_Gradient *self);
        static PyObject *t_Gradient_expm1(t_Gradient *self);
        static PyObject *t_Gradient_floor(t_Gradient *self);
        static PyObject *t_Gradient_getExponent(t_Gradient *self);
        static PyObject *t_Gradient_getField(t_Gradient *self);
        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self);
        static PyObject *t_Gradient_getGradient(t_Gradient *self);
        static PyObject *t_Gradient_getOrder(t_Gradient *self);
        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_getPi(t_Gradient *self);
        static PyObject *t_Gradient_getReal(t_Gradient *self);
        static PyObject *t_Gradient_getValue(t_Gradient *self);
        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_log(t_Gradient *self);
        static PyObject *t_Gradient_log10(t_Gradient *self);
        static PyObject *t_Gradient_log1p(t_Gradient *self);
        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_negate(t_Gradient *self);
        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_reciprocal(t_Gradient *self);
        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_rint(t_Gradient *self);
        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_sign(t_Gradient *self);
        static PyObject *t_Gradient_sin(t_Gradient *self);
        static PyObject *t_Gradient_sinCos(t_Gradient *self);
        static PyObject *t_Gradient_sinh(t_Gradient *self);
        static PyObject *t_Gradient_sinhCosh(t_Gradient *self);
        static PyObject *t_Gradient_sqrt(t_Gradient *self);
        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_tan(t_Gradient *self);
        static PyObject *t_Gradient_tanh(t_Gradient *self);
        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_toDegrees(t_Gradient *self);
        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self);
        static PyObject *t_Gradient_toRadians(t_Gradient *self);
        static PyObject *t_Gradient_ulp(t_Gradient *self);
        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data);
        static PyGetSetDef t_Gradient__fields_[] = {
          DECLARE_GET_FIELD(t_Gradient, exponent),
          DECLARE_GET_FIELD(t_Gradient, field),
          DECLARE_GET_FIELD(t_Gradient, freeParameters),
          DECLARE_GET_FIELD(t_Gradient, gradient),
          DECLARE_GET_FIELD(t_Gradient, order),
          DECLARE_GET_FIELD(t_Gradient, pi),
          DECLARE_GET_FIELD(t_Gradient, real),
          DECLARE_GET_FIELD(t_Gradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Gradient__methods_[] = {
          DECLARE_METHOD(t_Gradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, add, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan2, METH_O),
          DECLARE_METHOD(t_Gradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, compose, METH_O),
          DECLARE_METHOD(t_Gradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, hypot, METH_O),
          DECLARE_METHOD(t_Gradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, log, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, newInstance, METH_O),
          DECLARE_METHOD(t_Gradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, rootN, METH_O),
          DECLARE_METHOD(t_Gradient, scalb, METH_O),
          DECLARE_METHOD(t_Gradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, taylor, METH_O),
          DECLARE_METHOD(t_Gradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gradient)[] = {
          { Py_tp_methods, t_Gradient__methods_ },
          { Py_tp_init, (void *) t_Gradient_init_ },
          { Py_tp_getset, t_Gradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gradient, t_Gradient, Gradient);

        void t_Gradient::install(PyObject *module)
        {
          installType(&PY_TYPE(Gradient), &PY_TYPE_DEF(Gradient), module, "Gradient", 0);
        }

        void t_Gradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "class_", make_descriptor(Gradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "wrapfn_", make_descriptor(t_Gradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gradient::initializeClass, 1)))
            return NULL;
          return t_Gradient::wrap_Object(Gradient(((t_Gradient *) arg)->object.this$));
        }
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = Gradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                INT_CALL(object = Gradient(a0, a1));
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

        static PyObject *t_Gradient_abs(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_Gradient_asin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_asinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_Gradient_atanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cbrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ceil(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::constant(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_Gradient_cos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Gradient_exp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_expm1(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_floor(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getExponent(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getField(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::GradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(result);
        }

        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getGradient(t_Gradient *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return result.wrap();
        }

        static PyObject *t_Gradient_getOrder(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              jdouble result;

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_Gradient_getPi(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getReal(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_getValue(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              JArray< Gradient > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient a6((jobject) NULL);
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              jdouble a6;
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_Gradient_log(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log10(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log1p(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Gradient_negate(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg)
        {
          jdouble a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          Gradient a1((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", Gradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::pow(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_Gradient_reciprocal(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_Gradient_rint(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_Gradient_sign(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinCos(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinhCosh(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sqrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_Gradient_tan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_tanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_Gradient_toDegrees(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_Gradient_toRadians(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ulp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::variable(a0, a1, a2));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }

        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::GradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return value.wrap();
        }

        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data)
        {
          Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_Gradient::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonAbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonAbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool PythonAbstractConstantThrustPropulsionModel::live$ = false;

          jclass PythonAbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_341fcef9a4126498] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getFlowRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_05c598bf3375e090] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_e912d21057defe63] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_17a952530a808943] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0afb6e76c9566061] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_31ec2b6903b76c9e] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_71c51b45829333ce] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractConstantThrustPropulsionModel::PythonAbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_341fcef9a4126498, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          void PythonAbstractConstantThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractConstantThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractConstantThrustPropulsionModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonAbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractConstantThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonAbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonAbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(PythonAbstractConstantThrustPropulsionModel, t_PythonAbstractConstantThrustPropulsionModel, PythonAbstractConstantThrustPropulsionModel);

          void t_PythonAbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(PythonAbstractConstantThrustPropulsionModel), module, "PythonAbstractConstantThrustPropulsionModel", 1);
          }

          void t_PythonAbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "class_", make_descriptor(PythonAbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonAbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractConstantThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getFlowRate", "()D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0 },
              { "getFlowRate", "([D)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4 },
              { "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6 },
              { "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7 },
              { "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9 },
            };
            env->registerNatives(cls, methods, 10);
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractConstantThrustPropulsionModel::wrap_Object(PythonAbstractConstantThrustPropulsionModel(((t_PythonAbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::lang::String a4((jobject) NULL);
            PythonAbstractConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
            {
              INT_CALL(object = PythonAbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "java/lang/Double.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadata::class$ = NULL;
            jmethodID *TdmMetadata::mids$ = NULL;
            bool TdmMetadata::live$ = false;

            jclass TdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEphemerisName_46ad99eaf34b9cef] = env->getMethodID(cls, "addEphemerisName", "(ILjava/lang/String;)V");
                mids$[mid_addParticipant_46ad99eaf34b9cef] = env->getMethodID(cls, "addParticipant", "(ILjava/lang/String;)V");
                mids$[mid_addReceiveDelay_987a5fb872043b12] = env->getMethodID(cls, "addReceiveDelay", "(ID)V");
                mids$[mid_addTransmitDelay_987a5fb872043b12] = env->getMethodID(cls, "addTransmitDelay", "(ID)V");
                mids$[mid_getAngleType_0e6582a7efa17f8f] = env->getMethodID(cls, "getAngleType", "()Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_getCorrectionAberrationDiurnal_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionAberrationDiurnal", "()D");
                mids$[mid_getCorrectionAberrationYearly_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionAberrationYearly", "()D");
                mids$[mid_getCorrectionAngle1_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionAngle1", "()D");
                mids$[mid_getCorrectionAngle2_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionAngle2", "()D");
                mids$[mid_getCorrectionDoppler_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionDoppler", "()D");
                mids$[mid_getCorrectionMagnitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionMagnitude", "()D");
                mids$[mid_getCorrectionRange_5fb18b378e5bf81a] = env->getMethodID(cls, "getCorrectionRange", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getCorrectionRcs_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionRcs", "()D");
                mids$[mid_getCorrectionReceive_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionReceive", "()D");
                mids$[mid_getCorrectionTransmit_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrectionTransmit", "()D");
                mids$[mid_getCorrectionsApplied_9b7340badba22846] = env->getMethodID(cls, "getCorrectionsApplied", "()Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_getDataQuality_4a340da992ad1d62] = env->getMethodID(cls, "getDataQuality", "()Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_getDataTypes_a6156df500549a58] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                mids$[mid_getDopplerCountBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getDopplerCountBias", "()D");
                mids$[mid_getDopplerCountScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getDopplerCountScale", "()D");
                mids$[mid_getEphemerisNames_d6753b7055940a54] = env->getMethodID(cls, "getEphemerisNames", "()Ljava/util/Map;");
                mids$[mid_getFreqOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getFreqOffset", "()D");
                mids$[mid_getIntegrationInterval_456d9a2f64d6b28d] = env->getMethodID(cls, "getIntegrationInterval", "()D");
                mids$[mid_getIntegrationRef_e6ffda0ed65382f1] = env->getMethodID(cls, "getIntegrationRef", "()Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_getInterpolationDegree_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                mids$[mid_getInterpolationMethod_0090f7797e403f43] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                mids$[mid_getMode_3f8e1b990482c3c8] = env->getMethodID(cls, "getMode", "()Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_getParticipants_d6753b7055940a54] = env->getMethodID(cls, "getParticipants", "()Ljava/util/Map;");
                mids$[mid_getPath_d8ead0d90ce828b0] = env->getMethodID(cls, "getPath", "()[I");
                mids$[mid_getPath1_d8ead0d90ce828b0] = env->getMethodID(cls, "getPath1", "()[I");
                mids$[mid_getPath2_d8ead0d90ce828b0] = env->getMethodID(cls, "getPath2", "()[I");
                mids$[mid_getRangeMode_e2146da89ec090a4] = env->getMethodID(cls, "getRangeMode", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_getRangeModulus_5fb18b378e5bf81a] = env->getMethodID(cls, "getRangeModulus", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getRangeUnits_629565d88137357c] = env->getMethodID(cls, "getRangeUnits", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_getRawCorrectionRange_456d9a2f64d6b28d] = env->getMethodID(cls, "getRawCorrectionRange", "()D");
                mids$[mid_getRawRangeModulus_456d9a2f64d6b28d] = env->getMethodID(cls, "getRawRangeModulus", "()D");
                mids$[mid_getReceiveBand_0090f7797e403f43] = env->getMethodID(cls, "getReceiveBand", "()Ljava/lang/String;");
                mids$[mid_getReceiveDelays_d6753b7055940a54] = env->getMethodID(cls, "getReceiveDelays", "()Ljava/util/Map;");
                mids$[mid_getReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimetagRef_8a5bcf997edee08a] = env->getMethodID(cls, "getTimetagRef", "()Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_getTrackId_0090f7797e403f43] = env->getMethodID(cls, "getTrackId", "()Ljava/lang/String;");
                mids$[mid_getTransmitBand_0090f7797e403f43] = env->getMethodID(cls, "getTransmitBand", "()Ljava/lang/String;");
                mids$[mid_getTransmitDelays_d6753b7055940a54] = env->getMethodID(cls, "getTransmitDelays", "()Ljava/util/Map;");
                mids$[mid_getTurnaroundDenominator_f2f64475e4580546] = env->getMethodID(cls, "getTurnaroundDenominator", "()I");
                mids$[mid_getTurnaroundNumerator_f2f64475e4580546] = env->getMethodID(cls, "getTurnaroundNumerator", "()I");
                mids$[mid_hasDopplerCountRollover_e470b6d9e0d979db] = env->getMethodID(cls, "hasDopplerCountRollover", "()Z");
                mids$[mid_setAngleType_984d46f302e9b054] = env->getMethodID(cls, "setAngleType", "(Lorg/orekit/files/ccsds/ndm/tdm/AngleType;)V");
                mids$[mid_setCorrectionAberrationDiurnal_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionAberrationDiurnal", "(D)V");
                mids$[mid_setCorrectionAberrationYearly_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionAberrationYearly", "(D)V");
                mids$[mid_setCorrectionAngle1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionAngle1", "(D)V");
                mids$[mid_setCorrectionAngle2_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionAngle2", "(D)V");
                mids$[mid_setCorrectionDoppler_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionDoppler", "(D)V");
                mids$[mid_setCorrectionMagnitude_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionMagnitude", "(D)V");
                mids$[mid_setCorrectionRcs_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionRcs", "(D)V");
                mids$[mid_setCorrectionReceive_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionReceive", "(D)V");
                mids$[mid_setCorrectionTransmit_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCorrectionTransmit", "(D)V");
                mids$[mid_setCorrectionsApplied_a5d93472fc995699] = env->getMethodID(cls, "setCorrectionsApplied", "(Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;)V");
                mids$[mid_setDataQuality_42421ed5da7fc944] = env->getMethodID(cls, "setDataQuality", "(Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;)V");
                mids$[mid_setDataTypes_65de9727799c5641] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                mids$[mid_setDopplerCountBias_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDopplerCountBias", "(D)V");
                mids$[mid_setDopplerCountRollover_50a2e0b139e80a58] = env->getMethodID(cls, "setDopplerCountRollover", "(Z)V");
                mids$[mid_setDopplerCountScale_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDopplerCountScale", "(D)V");
                mids$[mid_setEphemerisNames_8b4e3987d7532731] = env->getMethodID(cls, "setEphemerisNames", "(Ljava/util/Map;)V");
                mids$[mid_setFreqOffset_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFreqOffset", "(D)V");
                mids$[mid_setIntegrationInterval_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIntegrationInterval", "(D)V");
                mids$[mid_setIntegrationRef_b2ff161f33d465e1] = env->getMethodID(cls, "setIntegrationRef", "(Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;)V");
                mids$[mid_setInterpolationDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                mids$[mid_setInterpolationMethod_e939c6558ae8d313] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                mids$[mid_setMode_7061a7592bf52da5] = env->getMethodID(cls, "setMode", "(Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;)V");
                mids$[mid_setParticipants_8b4e3987d7532731] = env->getMethodID(cls, "setParticipants", "(Ljava/util/Map;)V");
                mids$[mid_setPath_3b603738d1eb3233] = env->getMethodID(cls, "setPath", "([I)V");
                mids$[mid_setPath1_3b603738d1eb3233] = env->getMethodID(cls, "setPath1", "([I)V");
                mids$[mid_setPath2_3b603738d1eb3233] = env->getMethodID(cls, "setPath2", "([I)V");
                mids$[mid_setRangeMode_70f75844a01d918c] = env->getMethodID(cls, "setRangeMode", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;)V");
                mids$[mid_setRangeUnits_0815bfffcdc67b75] = env->getMethodID(cls, "setRangeUnits", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;)V");
                mids$[mid_setRawCorrectionRange_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRawCorrectionRange", "(D)V");
                mids$[mid_setRawRangeModulus_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRawRangeModulus", "(D)V");
                mids$[mid_setReceiveBand_e939c6558ae8d313] = env->getMethodID(cls, "setReceiveBand", "(Ljava/lang/String;)V");
                mids$[mid_setReceiveDelays_8b4e3987d7532731] = env->getMethodID(cls, "setReceiveDelays", "(Ljava/util/Map;)V");
                mids$[mid_setReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimetagRef_1e44e5daa236bf14] = env->getMethodID(cls, "setTimetagRef", "(Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;)V");
                mids$[mid_setTrackId_e939c6558ae8d313] = env->getMethodID(cls, "setTrackId", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitBand_e939c6558ae8d313] = env->getMethodID(cls, "setTransmitBand", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitDelays_8b4e3987d7532731] = env->getMethodID(cls, "setTransmitDelays", "(Ljava/util/Map;)V");
                mids$[mid_setTurnaroundDenominator_0a2a1ac2721c0336] = env->getMethodID(cls, "setTurnaroundDenominator", "(I)V");
                mids$[mid_setTurnaroundNumerator_0a2a1ac2721c0336] = env->getMethodID(cls, "setTurnaroundNumerator", "(I)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmMetadata::TdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void TdmMetadata::addEphemerisName(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEphemerisName_46ad99eaf34b9cef], a0, a1.this$);
            }

            void TdmMetadata::addParticipant(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addParticipant_46ad99eaf34b9cef], a0, a1.this$);
            }

            void TdmMetadata::addReceiveDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addReceiveDelay_987a5fb872043b12], a0, a1);
            }

            void TdmMetadata::addTransmitDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addTransmitDelay_987a5fb872043b12], a0, a1);
            }

            ::org::orekit::files::ccsds::ndm::tdm::AngleType TdmMetadata::getAngleType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::AngleType(env->callObjectMethod(this$, mids$[mid_getAngleType_0e6582a7efa17f8f]));
            }

            jdouble TdmMetadata::getCorrectionAberrationDiurnal() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationDiurnal_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionAberrationYearly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationYearly_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionAngle1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle1_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionAngle2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle2_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionDoppler() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionDoppler_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionMagnitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionMagnitude_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionRange(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRange_5fb18b378e5bf81a], a0.this$);
            }

            jdouble TdmMetadata::getCorrectionRcs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRcs_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionReceive() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionReceive_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getCorrectionTransmit() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionTransmit_456d9a2f64d6b28d]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied TdmMetadata::getCorrectionsApplied() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied(env->callObjectMethod(this$, mids$[mid_getCorrectionsApplied_9b7340badba22846]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::DataQuality TdmMetadata::getDataQuality() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::DataQuality(env->callObjectMethod(this$, mids$[mid_getDataQuality_4a340da992ad1d62]));
            }

            ::java::util::List TdmMetadata::getDataTypes() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_a6156df500549a58]));
            }

            jdouble TdmMetadata::getDopplerCountBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountBias_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getDopplerCountScale() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountScale_456d9a2f64d6b28d]);
            }

            ::java::util::Map TdmMetadata::getEphemerisNames() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getEphemerisNames_d6753b7055940a54]));
            }

            jdouble TdmMetadata::getFreqOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getFreqOffset_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getIntegrationInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIntegrationInterval_456d9a2f64d6b28d]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference TdmMetadata::getIntegrationRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference(env->callObjectMethod(this$, mids$[mid_getIntegrationRef_e6ffda0ed65382f1]));
            }

            jint TdmMetadata::getInterpolationDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_f2f64475e4580546]);
            }

            ::java::lang::String TdmMetadata::getInterpolationMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TrackingMode TdmMetadata::getMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TrackingMode(env->callObjectMethod(this$, mids$[mid_getMode_3f8e1b990482c3c8]));
            }

            ::java::util::Map TdmMetadata::getParticipants() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParticipants_d6753b7055940a54]));
            }

            JArray< jint > TdmMetadata::getPath() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath_d8ead0d90ce828b0]));
            }

            JArray< jint > TdmMetadata::getPath1() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath1_d8ead0d90ce828b0]));
            }

            JArray< jint > TdmMetadata::getPath2() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath2_d8ead0d90ce828b0]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeMode TdmMetadata::getRangeMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeMode(env->callObjectMethod(this$, mids$[mid_getRangeMode_e2146da89ec090a4]));
            }

            jdouble TdmMetadata::getRangeModulus(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRangeModulus_5fb18b378e5bf81a], a0.this$);
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeUnits TdmMetadata::getRangeUnits() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeUnits(env->callObjectMethod(this$, mids$[mid_getRangeUnits_629565d88137357c]));
            }

            jdouble TdmMetadata::getRawCorrectionRange() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawCorrectionRange_456d9a2f64d6b28d]);
            }

            jdouble TdmMetadata::getRawRangeModulus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawRangeModulus_456d9a2f64d6b28d]);
            }

            ::java::lang::String TdmMetadata::getReceiveBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiveBand_0090f7797e403f43]));
            }

            ::java::util::Map TdmMetadata::getReceiveDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getReceiveDelays_d6753b7055940a54]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade TdmMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_aa70fdb14ae9305f]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStartTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStopTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_aaa854c403487cf3]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TimetagReference TdmMetadata::getTimetagRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TimetagReference(env->callObjectMethod(this$, mids$[mid_getTimetagRef_8a5bcf997edee08a]));
            }

            ::java::lang::String TdmMetadata::getTrackId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrackId_0090f7797e403f43]));
            }

            ::java::lang::String TdmMetadata::getTransmitBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransmitBand_0090f7797e403f43]));
            }

            ::java::util::Map TdmMetadata::getTransmitDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTransmitDelays_d6753b7055940a54]));
            }

            jint TdmMetadata::getTurnaroundDenominator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundDenominator_f2f64475e4580546]);
            }

            jint TdmMetadata::getTurnaroundNumerator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundNumerator_f2f64475e4580546]);
            }

            jboolean TdmMetadata::hasDopplerCountRollover() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasDopplerCountRollover_e470b6d9e0d979db]);
            }

            void TdmMetadata::setAngleType(const ::org::orekit::files::ccsds::ndm::tdm::AngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAngleType_984d46f302e9b054], a0.this$);
            }

            void TdmMetadata::setCorrectionAberrationDiurnal(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationDiurnal_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionAberrationYearly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationYearly_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionAngle1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle1_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionAngle2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle2_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionDoppler(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionDoppler_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionMagnitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionMagnitude_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionRcs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionRcs_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionReceive(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionReceive_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionTransmit(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionTransmit_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setCorrectionsApplied(const ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionsApplied_a5d93472fc995699], a0.this$);
            }

            void TdmMetadata::setDataQuality(const ::org::orekit::files::ccsds::ndm::tdm::DataQuality & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataQuality_42421ed5da7fc944], a0.this$);
            }

            void TdmMetadata::setDataTypes(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataTypes_65de9727799c5641], a0.this$);
            }

            void TdmMetadata::setDopplerCountBias(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountBias_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setDopplerCountRollover(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountRollover_50a2e0b139e80a58], a0);
            }

            void TdmMetadata::setDopplerCountScale(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountScale_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setEphemerisNames(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemerisNames_8b4e3987d7532731], a0.this$);
            }

            void TdmMetadata::setFreqOffset(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFreqOffset_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setIntegrationInterval(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationInterval_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setIntegrationRef(const ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationRef_b2ff161f33d465e1], a0.this$);
            }

            void TdmMetadata::setInterpolationDegree(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_0a2a1ac2721c0336], a0);
            }

            void TdmMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_e939c6558ae8d313], a0.this$);
            }

            void TdmMetadata::setMode(const ::org::orekit::files::ccsds::ndm::tdm::TrackingMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMode_7061a7592bf52da5], a0.this$);
            }

            void TdmMetadata::setParticipants(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setParticipants_8b4e3987d7532731], a0.this$);
            }

            void TdmMetadata::setPath(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath_3b603738d1eb3233], a0.this$);
            }

            void TdmMetadata::setPath1(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath1_3b603738d1eb3233], a0.this$);
            }

            void TdmMetadata::setPath2(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath2_3b603738d1eb3233], a0.this$);
            }

            void TdmMetadata::setRangeMode(const ::org::orekit::files::ccsds::ndm::tdm::RangeMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeMode_70f75844a01d918c], a0.this$);
            }

            void TdmMetadata::setRangeUnits(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnits & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeUnits_0815bfffcdc67b75], a0.this$);
            }

            void TdmMetadata::setRawCorrectionRange(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawCorrectionRange_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setRawRangeModulus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawRangeModulus_77e0f9a1f260e2e5], a0);
            }

            void TdmMetadata::setReceiveBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveBand_e939c6558ae8d313], a0.this$);
            }

            void TdmMetadata::setReceiveDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveDelays_8b4e3987d7532731], a0.this$);
            }

            void TdmMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_a455f3ff24eb0b47], a0.this$);
            }

            void TdmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartTime_e82d68cd9f886886], a0.this$);
            }

            void TdmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopTime_e82d68cd9f886886], a0.this$);
            }

            void TdmMetadata::setTimetagRef(const ::org::orekit::files::ccsds::ndm::tdm::TimetagReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimetagRef_1e44e5daa236bf14], a0.this$);
            }

            void TdmMetadata::setTrackId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTrackId_e939c6558ae8d313], a0.this$);
            }

            void TdmMetadata::setTransmitBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitBand_e939c6558ae8d313], a0.this$);
            }

            void TdmMetadata::setTransmitDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitDelays_8b4e3987d7532731], a0.this$);
            }

            void TdmMetadata::setTurnaroundDenominator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundDenominator_0a2a1ac2721c0336], a0);
            }

            void TdmMetadata::setTurnaroundNumerator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundNumerator_0a2a1ac2721c0336], a0);
            }

            void TdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
          namespace tdm {
            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data);
            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_TdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_TdmMetadata, angleType),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationDiurnal),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationYearly),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionDoppler),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionMagnitude),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionRcs),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionReceive),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionTransmit),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionsApplied),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataQuality),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataTypes),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountBias),
              DECLARE_SET_FIELD(t_TdmMetadata, dopplerCountRollover),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountScale),
              DECLARE_GETSET_FIELD(t_TdmMetadata, ephemerisNames),
              DECLARE_GETSET_FIELD(t_TdmMetadata, freqOffset),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationInterval),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationDegree),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationMethod),
              DECLARE_GETSET_FIELD(t_TdmMetadata, mode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, participants),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeMode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeUnits),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawCorrectionRange),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawRangeModulus),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, referenceFrame),
              DECLARE_GETSET_FIELD(t_TdmMetadata, startTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, stopTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, timetagRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, trackId),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundDenominator),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundNumerator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadata__methods_[] = {
              DECLARE_METHOD(t_TdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, addEphemerisName, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addParticipant, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addReceiveDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addTransmitDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, getAngleType, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationDiurnal, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationYearly, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionDoppler, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionMagnitude, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRcs, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionReceive, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionTransmit, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionsApplied, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataQuality, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataTypes, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountBias, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountScale, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getEphemerisNames, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getFreqOffset, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationInterval, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationDegree, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationMethod, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getParticipants, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getRangeUnits, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawCorrectionRange, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawRangeModulus, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStartTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStopTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTimetagRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTrackId, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundDenominator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundNumerator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, hasDopplerCountRollover, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, setAngleType, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationDiurnal, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationYearly, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionDoppler, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionMagnitude, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionRcs, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionReceive, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionTransmit, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionsApplied, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataQuality, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataTypes, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountBias, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountRollover, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountScale, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setEphemerisNames, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setFreqOffset, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationInterval, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationDegree, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationMethod, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setParticipants, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeUnits, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStartTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStopTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTimetagRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTrackId, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundDenominator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundNumerator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadata)[] = {
              { Py_tp_methods, t_TdmMetadata__methods_ },
              { Py_tp_init, (void *) t_TdmMetadata_init_ },
              { Py_tp_getset, t_TdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(TdmMetadata, t_TdmMetadata, TdmMetadata);

            void t_TdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadata), &PY_TYPE_DEF(TdmMetadata), module, "TdmMetadata", 0);
            }

            void t_TdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "class_", make_descriptor(TdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "wrapfn_", make_descriptor(t_TdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadata::initializeClass, 1)))
                return NULL;
              return t_TdmMetadata::wrap_Object(TdmMetadata(((t_TdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              TdmMetadata object((jobject) NULL);

              INT_CALL(object = TdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addEphemerisName(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEphemerisName", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addParticipant(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addParticipant", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addReceiveDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addReceiveDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addTransmitDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addTransmitDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCorrectionRange(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied result((jobject) NULL);
              OBJ_CALL(result = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(ObservationType));
            }

            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInterpolationMethod());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath1());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath2());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getRangeModulus(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTrackId());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasDopplerCountRollover());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::parameters_))
              {
                OBJ_CALL(self->object.setAngleType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAngleType", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationDiurnal(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationDiurnal", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationYearly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationYearly", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionDoppler(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionDoppler", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionMagnitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionMagnitude", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionRcs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionRcs", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionReceive(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionReceive", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionTransmit(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionTransmit", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::parameters_))
              {
                OBJ_CALL(self->object.setCorrectionsApplied(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionsApplied", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::parameters_))
              {
                OBJ_CALL(self->object.setDataQuality(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataQuality", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setDataTypes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataTypes", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountBias(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountBias", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountRollover(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountRollover", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountScale(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountScale", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setEphemerisNames(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemerisNames", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFreqOffset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFreqOffset", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIntegrationInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationInterval", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::parameters_))
              {
                OBJ_CALL(self->object.setIntegrationRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setInterpolationDegree(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInterpolationMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::parameters_))
              {
                OBJ_CALL(self->object.setMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setParticipants(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setParticipants", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::parameters_))
              {
                OBJ_CALL(self->object.setRangeMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::parameters_))
              {
                OBJ_CALL(self->object.setRangeUnits(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeUnits", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawCorrectionRange(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawRangeModulus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setReceiveBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setReceiveDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::parameters_))
              {
                OBJ_CALL(self->object.setTimetagRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimetagRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTrackId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTrackId", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTransmitBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setTransmitDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundDenominator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundDenominator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundNumerator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundNumerator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(value);
            }
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAngleType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "angleType", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationDiurnal(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationDiurnal", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationYearly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationYearly", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionDoppler(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionDoppler", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionMagnitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionMagnitude", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionRcs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionRcs", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionReceive(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionReceive", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionTransmit(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionTransmit", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
              OBJ_CALL(value = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(value);
            }
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &value))
                {
                  INT_CALL(self->object.setCorrectionsApplied(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionsApplied", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataQuality(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataQuality", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataTypes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataTypes", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountBias(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountBias", arg);
              return -1;
            }

            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setDopplerCountRollover(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountRollover", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountScale(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountScale", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setEphemerisNames(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemerisNames", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFreqOffset(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "freqOffset", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIntegrationInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationInterval", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntegrationRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setInterpolationDegree(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInterpolationMethod());
              return j2p(value);
            }
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInterpolationMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setParticipants(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "participants", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath1());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath2());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeMode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeUnits(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeUnits", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawCorrectionRange(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawCorrectionRange", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawRangeModulus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawRangeModulus", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setReceiveBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setReceiveDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimetagRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timetagRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTrackId());
              return j2p(value);
            }
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTrackId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "trackId", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTransmitBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setTransmitDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundDenominator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundDenominator", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundNumerator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundNumerator", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternion::class$ = NULL;
              jmethodID *ApmQuaternion::mids$ = NULL;
              bool ApmQuaternion::live$ = false;

              jclass ApmQuaternion::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_160aadf35481229b] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getQuaternion_db551426640930fe] = env->getMethodID(cls, "getQuaternion", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_getQuaternionDot_db551426640930fe] = env->getMethodID(cls, "getQuaternionDot", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_setQ_987a5fb872043b12] = env->getMethodID(cls, "setQ", "(ID)V");
                  mids$[mid_setQDot_987a5fb872043b12] = env->getMethodID(cls, "setQDot", "(ID)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmQuaternion::ApmQuaternion() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints ApmQuaternion::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_160aadf35481229b]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternion() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternion_db551426640930fe]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternionDot() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionDot_db551426640930fe]));
              }

              jboolean ApmQuaternion::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
              }

              void ApmQuaternion::setQ(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQ_987a5fb872043b12], a0, a1);
              }

              void ApmQuaternion::setQDot(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQDot_987a5fb872043b12], a0, a1);
              }

              void ApmQuaternion::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            namespace apm {
              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data);
              static PyGetSetDef t_ApmQuaternion__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternion, endpoints),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternion),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternionDot),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternion__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternion, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternion, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternionDot, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQ, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQDot, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternion)[] = {
                { Py_tp_methods, t_ApmQuaternion__methods_ },
                { Py_tp_init, (void *) t_ApmQuaternion_init_ },
                { Py_tp_getset, t_ApmQuaternion__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternion)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(ApmQuaternion, t_ApmQuaternion, ApmQuaternion);

              void t_ApmQuaternion::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternion), &PY_TYPE_DEF(ApmQuaternion), module, "ApmQuaternion", 0);
              }

              void t_ApmQuaternion::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "class_", make_descriptor(ApmQuaternion::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "wrapfn_", make_descriptor(t_ApmQuaternion::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternion::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternion::wrap_Object(ApmQuaternion(((t_ApmQuaternion *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternion::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds)
              {
                ApmQuaternion object((jobject) NULL);

                INT_CALL(object = ApmQuaternion());
                self->object = object;

                return 0;
              }

              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQ(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQ", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQDot(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQDot", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmQuaternion), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
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
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LazyLoadedCelestialBodies::class$ = NULL;
      jmethodID *LazyLoadedCelestialBodies::mids$ = NULL;
      bool LazyLoadedCelestialBodies::live$ = false;

      jclass LazyLoadedCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LazyLoadedCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_abc7f47ffa11a8b2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_addCelestialBodyLoader_6d7aad336ec9f802] = env->getMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_e939c6558ae8d313] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_96073c87872b7a97] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_7ae3461a92a43152] = env->getMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_e939c6558ae8d313] = env->getMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_7ae3461a92a43152] = env->getMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_e939c6558ae8d313] = env->getMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_29f199e59c05cc68] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_798caa59db6076aa] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_798caa59db6076aa] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_798caa59db6076aa] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_798caa59db6076aa] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_798caa59db6076aa] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_798caa59db6076aa] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_798caa59db6076aa] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_798caa59db6076aa] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_798caa59db6076aa] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_798caa59db6076aa] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_798caa59db6076aa] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_798caa59db6076aa] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_798caa59db6076aa] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedCelestialBodies::LazyLoadedCelestialBodies(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_abc7f47ffa11a8b2, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedCelestialBodies::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addCelestialBodyLoader_6d7aad336ec9f802], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_e939c6558ae8d313], a0.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_96073c87872b7a97], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_7ae3461a92a43152]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_e939c6558ae8d313], a0.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_7ae3461a92a43152]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_e939c6558ae8d313], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_29f199e59c05cc68], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_798caa59db6076aa]));
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
      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyGetSetDef t_LazyLoadedCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earth),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mars),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mercury),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, moon),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, neptune),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, pluto),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, saturn),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, sun),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, uranus),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addDefaultCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyCache, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedCelestialBodies)[] = {
        { Py_tp_methods, t_LazyLoadedCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedCelestialBodies_init_ },
        { Py_tp_getset, t_LazyLoadedCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedCelestialBodies, t_LazyLoadedCelestialBodies, LazyLoadedCelestialBodies);

      void t_LazyLoadedCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedCelestialBodies), &PY_TYPE_DEF(LazyLoadedCelestialBodies), module, "LazyLoadedCelestialBodies", 0);
      }

      void t_LazyLoadedCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "class_", make_descriptor(LazyLoadedCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "wrapfn_", make_descriptor(t_LazyLoadedCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedCelestialBodies::wrap_Object(LazyLoadedCelestialBodies(((t_LazyLoadedCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        LazyLoadedCelestialBodies object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedCelestialBodies(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *EphemerisOemWriter::class$ = NULL;
              jmethodID *EphemerisOemWriter::mids$ = NULL;
              bool EphemerisOemWriter::live$ = false;

              jclass EphemerisOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9c3601fb93873324] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_e65e411976c35f1d] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");
                  mids$[mid_writeSegment_c76a9787e69e8f92] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/general/EphemerisFile$EphemerisSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOemWriter::EphemerisOemWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c3601fb93873324, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void EphemerisOemWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_e65e411976c35f1d], a0.this$, a1.this$);
              }

              void EphemerisOemWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::general::EphemerisFile$EphemerisSegment & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_writeSegment_c76a9787e69e8f92], a0.this$, a1.this$);
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
          namespace odm {
            namespace oem {
              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args);
              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOemWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, write, METH_VARARGS),
                DECLARE_METHOD(t_EphemerisOemWriter, writeSegment, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOemWriter)[] = {
                { Py_tp_methods, t_EphemerisOemWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOemWriter, t_EphemerisOemWriter, EphemerisOemWriter);

              void t_EphemerisOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOemWriter), &PY_TYPE_DEF(EphemerisOemWriter), module, "EphemerisOemWriter", 0);
              }

              void t_EphemerisOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "class_", make_descriptor(EphemerisOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "wrapfn_", make_descriptor(t_EphemerisOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOemWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOemWriter::wrap_Object(EphemerisOemWriter(((t_EphemerisOemWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                EphemerisOemWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = EphemerisOemWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }

              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile$EphemerisSegment a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::general::EphemerisFile$EphemerisSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile$EphemerisSegment::parameters_))
                {
                  OBJ_CALL(self->object.writeSegment(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
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
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *UnivariateDifferentiableSolver::mids$ = NULL;
        bool UnivariateDifferentiableSolver::live$ = false;

        jclass UnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
    namespace analysis {
      namespace solvers {
        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableSolver, t_UnivariateDifferentiableSolver, UnivariateDifferentiableSolver);

        void t_UnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableSolver), &PY_TYPE_DEF(UnivariateDifferentiableSolver), module, "UnivariateDifferentiableSolver", 0);
        }

        void t_UnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "class_", make_descriptor(UnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_UnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableSolver::wrap_Object(UnivariateDifferentiableSolver(((t_UnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Header::class$ = NULL;
              jmethodID *SsrIgm07Header::mids$ = NULL;
              bool SsrIgm07Header::live$ = false;

              jclass SsrIgm07Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Header::SsrIgm07Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm07Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Header)[] = {
                { Py_tp_methods, t_SsrIgm07Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Header, t_SsrIgm07Header, SsrIgm07Header);

              void t_SsrIgm07Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Header), &PY_TYPE_DEF(SsrIgm07Header), module, "SsrIgm07Header", 0);
              }

              void t_SsrIgm07Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "class_", make_descriptor(SsrIgm07Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "wrapfn_", make_descriptor(t_SsrIgm07Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Header::wrap_Object(SsrIgm07Header(((t_SsrIgm07Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Header object((jobject) NULL);

                INT_CALL(object = SsrIgm07Header());
                self->object = object;

                return 0;
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
#include "org/orekit/forces/empirical/ParametricAcceleration.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *ParametricAcceleration::class$ = NULL;
        jmethodID *ParametricAcceleration::mids$ = NULL;
        bool ParametricAcceleration::live$ = false;

        jclass ParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/ParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fe8be0364ca74ee2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_0de0371c7296ad8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe8be0364ca74ee2, a0.this$, a1, a2.this$)) {}

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0de0371c7296ad8d, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        jboolean ParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::stream::Stream ParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream ParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::java::util::List ParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        void ParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
    namespace forces {
      namespace empirical {
        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg);
        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data);
        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data);
        static PyGetSetDef t_ParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_ParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_ParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_ParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_ParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParametricAcceleration)[] = {
          { Py_tp_methods, t_ParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_ParametricAcceleration_init_ },
          { Py_tp_getset, t_ParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ParametricAcceleration, t_ParametricAcceleration, ParametricAcceleration);

        void t_ParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(ParametricAcceleration), &PY_TYPE_DEF(ParametricAcceleration), module, "ParametricAcceleration", 0);
        }

        void t_ParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "class_", make_descriptor(ParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "wrapfn_", make_descriptor(t_ParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_ParametricAcceleration::wrap_Object(ParametricAcceleration(((t_ParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionMappingAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionMappingAdapter::mids$ = NULL;
          bool MultivariateFunctionMappingAdapter::live$ = false;

          jclass MultivariateFunctionMappingAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7446342e2d878270] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[D)V");
              mids$[mid_boundedToUnbounded_4b742fe429c22ba8] = env->getMethodID(cls, "boundedToUnbounded", "([D)[D");
              mids$[mid_unboundedToBounded_4b742fe429c22ba8] = env->getMethodID(cls, "unboundedToBounded", "([D)[D");
              mids$[mid_value_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionMappingAdapter::MultivariateFunctionMappingAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7446342e2d878270, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MultivariateFunctionMappingAdapter::boundedToUnbounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_boundedToUnbounded_4b742fe429c22ba8], a0.this$));
          }

          JArray< jdouble > MultivariateFunctionMappingAdapter::unboundedToBounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_unboundedToBounded_4b742fe429c22ba8], a0.this$));
          }

          jdouble MultivariateFunctionMappingAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_f05cb8c6dfd5e0b9], a0.this$);
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionMappingAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, boundedToUnbounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, unboundedToBounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionMappingAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionMappingAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionMappingAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionMappingAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionMappingAdapter, t_MultivariateFunctionMappingAdapter, MultivariateFunctionMappingAdapter);

          void t_MultivariateFunctionMappingAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionMappingAdapter), &PY_TYPE_DEF(MultivariateFunctionMappingAdapter), module, "MultivariateFunctionMappingAdapter", 0);
          }

          void t_MultivariateFunctionMappingAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "class_", make_descriptor(MultivariateFunctionMappingAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionMappingAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionMappingAdapter::wrap_Object(MultivariateFunctionMappingAdapter(((t_MultivariateFunctionMappingAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            MultivariateFunctionMappingAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MultivariateFunctionMappingAdapter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.boundedToUnbounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "boundedToUnbounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.unboundedToBounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "unboundedToBounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuver::class$ = NULL;
              jmethodID *AttitudeManeuver::mids$ = NULL;
              bool AttitudeManeuver::live$ = false;

              jclass AttitudeManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActuatorUsed_0090f7797e403f43] = env->getMethodID(cls, "getActuatorUsed", "()Ljava/lang/String;");
                  mids$[mid_getBeginTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeginTime", "()D");
                  mids$[mid_getDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEndTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getEndTime", "()D");
                  mids$[mid_getID_0090f7797e403f43] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_0090f7797e403f43] = env->getMethodID(cls, "getManPurpose", "()Ljava/lang/String;");
                  mids$[mid_getPrevID_0090f7797e403f43] = env->getMethodID(cls, "getPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTargetAttitude_24d2e432e376f9a0] = env->getMethodID(cls, "getTargetAttitude", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_getTargetMomFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getTargetMomFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTargetMomentum_17a952530a808943] = env->getMethodID(cls, "getTargetMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getTargetSpinRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getTargetSpinRate", "()D");
                  mids$[mid_setActuatorUsed_e939c6558ae8d313] = env->getMethodID(cls, "setActuatorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_setBeginTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBeginTime", "(D)V");
                  mids$[mid_setDuration_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEndTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEndTime", "(D)V");
                  mids$[mid_setID_e939c6558ae8d313] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_e939c6558ae8d313] = env->getMethodID(cls, "setManPurpose", "(Ljava/lang/String;)V");
                  mids$[mid_setPrevID_e939c6558ae8d313] = env->getMethodID(cls, "setPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTargetAttitude_897939f7cf621023] = env->getMethodID(cls, "setTargetAttitude", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
                  mids$[mid_setTargetMomFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setTargetMomFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTargetMomentum_a94622407b723689] = env->getMethodID(cls, "setTargetMomentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setTargetSpinRate_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTargetSpinRate", "(D)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeManeuver::AttitudeManeuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::java::lang::String AttitudeManeuver::getActuatorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActuatorUsed_0090f7797e403f43]));
              }

              jdouble AttitudeManeuver::getBeginTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeginTime_456d9a2f64d6b28d]);
              }

              jdouble AttitudeManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_456d9a2f64d6b28d]);
              }

              jdouble AttitudeManeuver::getEndTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEndTime_456d9a2f64d6b28d]);
              }

              ::java::lang::String AttitudeManeuver::getID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeManeuver::getManPurpose() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPurpose_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeManeuver::getPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevID_0090f7797e403f43]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeManeuver::getTargetAttitude() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getTargetAttitude_24d2e432e376f9a0]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeManeuver::getTargetMomFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTargetMomFrame_aa70fdb14ae9305f]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudeManeuver::getTargetMomentum() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetMomentum_17a952530a808943]));
              }

              jdouble AttitudeManeuver::getTargetSpinRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTargetSpinRate_456d9a2f64d6b28d]);
              }

              void AttitudeManeuver::setActuatorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActuatorUsed_e939c6558ae8d313], a0.this$);
              }

              void AttitudeManeuver::setBeginTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeginTime_77e0f9a1f260e2e5], a0);
              }

              void AttitudeManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_77e0f9a1f260e2e5], a0);
              }

              void AttitudeManeuver::setEndTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEndTime_77e0f9a1f260e2e5], a0);
              }

              void AttitudeManeuver::setID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeManeuver::setManPurpose(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_e939c6558ae8d313], a0.this$);
              }

              void AttitudeManeuver::setPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeManeuver::setTargetAttitude(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetAttitude_897939f7cf621023], a0.this$);
              }

              void AttitudeManeuver::setTargetMomFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomFrame_a455f3ff24eb0b47], a0.this$);
              }

              void AttitudeManeuver::setTargetMomentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomentum_a94622407b723689], a0.this$);
              }

              void AttitudeManeuver::setTargetSpinRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetSpinRate_77e0f9a1f260e2e5], a0);
              }

              void AttitudeManeuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            namespace acm {
              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args);
              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeManeuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, actuatorUsed),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, beginTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, duration),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, endTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, iD),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, manPurpose),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, prevID),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetAttitude),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomFrame),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomentum),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetSpinRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuver__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, getActuatorUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getBeginTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getEndTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetAttitude, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomentum, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetSpinRate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, setActuatorUsed, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setBeginTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setEndTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setManPurpose, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetAttitude, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomFrame, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomentum, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetSpinRate, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuver)[] = {
                { Py_tp_methods, t_AttitudeManeuver__methods_ },
                { Py_tp_init, (void *) t_AttitudeManeuver_init_ },
                { Py_tp_getset, t_AttitudeManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuver, t_AttitudeManeuver, AttitudeManeuver);

              void t_AttitudeManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuver), &PY_TYPE_DEF(AttitudeManeuver), module, "AttitudeManeuver", 0);
              }

              void t_AttitudeManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "class_", make_descriptor(AttitudeManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "wrapfn_", make_descriptor(t_AttitudeManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuver::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuver::wrap_Object(AttitudeManeuver(((t_AttitudeManeuver *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds)
              {
                AttitudeManeuver object((jobject) NULL);

                INT_CALL(object = AttitudeManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getActuatorUsed());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeginTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEndTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setActuatorUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActuatorUsed", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeginTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeginTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEndTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEndTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetAttitude(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetAttitude", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomentum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomentum", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTargetSpinRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetSpinRate", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeManeuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getActuatorUsed());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setActuatorUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actuatorUsed", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeginTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeginTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beginTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEndTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEndTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "endTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iD", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetAttitude(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetAttitude", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomentum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomentum", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTargetSpinRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetSpinRate", arg);
                return -1;
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
#include "org/orekit/gnss/YUMAParser.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *YUMAParser::class$ = NULL;
      jmethodID *YUMAParser::mids$ = NULL;
      bool YUMAParser::live$ = false;

      jclass YUMAParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/YUMAParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4573d2669211524d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_a6156df500549a58] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_a6156df500549a58] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_7ae3461a92a43152] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YUMAParser::YUMAParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      YUMAParser::YUMAParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4573d2669211524d, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List YUMAParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_a6156df500549a58]));
      }

      ::java::util::List YUMAParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_a6156df500549a58]));
      }

      ::java::lang::String YUMAParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
      }

      void YUMAParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_7ae3461a92a43152]);
      }

      void YUMAParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
      }

      jboolean YUMAParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self);
      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args);
      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self);
      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data);
      static PyGetSetDef t_YUMAParser__fields_[] = {
        DECLARE_GET_FIELD(t_YUMAParser, almanacs),
        DECLARE_GET_FIELD(t_YUMAParser, pRNNumbers),
        DECLARE_GET_FIELD(t_YUMAParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YUMAParser__methods_[] = {
        DECLARE_METHOD(t_YUMAParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_YUMAParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YUMAParser)[] = {
        { Py_tp_methods, t_YUMAParser__methods_ },
        { Py_tp_init, (void *) t_YUMAParser_init_ },
        { Py_tp_getset, t_YUMAParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YUMAParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(YUMAParser, t_YUMAParser, YUMAParser);

      void t_YUMAParser::install(PyObject *module)
      {
        installType(&PY_TYPE(YUMAParser), &PY_TYPE_DEF(YUMAParser), module, "YUMAParser", 0);
      }

      void t_YUMAParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "class_", make_descriptor(YUMAParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "wrapfn_", make_descriptor(t_YUMAParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YUMAParser::initializeClass, 1)))
          return NULL;
        return t_YUMAParser::wrap_Object(YUMAParser(((t_YUMAParser *) arg)->object.this$));
      }
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YUMAParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = YUMAParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = YUMAParser(a0, a1, a2));
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

      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinhCosh::class$ = NULL;
      jmethodID *SinhCosh::mids$ = NULL;
      bool SinhCosh::live$ = false;

      jclass SinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cosh_456d9a2f64d6b28d] = env->getMethodID(cls, "cosh", "()D");
          mids$[mid_difference_68d30f3213080026] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinh_456d9a2f64d6b28d] = env->getMethodID(cls, "sinh", "()D");
          mids$[mid_sum_68d30f3213080026] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinhCosh::cosh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosh_456d9a2f64d6b28d]);
      }

      SinhCosh SinhCosh::difference(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_68d30f3213080026], a0.this$, a1.this$));
      }

      jdouble SinhCosh::sinh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sinh_456d9a2f64d6b28d]);
      }

      SinhCosh SinhCosh::sum(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_68d30f3213080026], a0.this$, a1.this$));
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
      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinhCosh__methods_[] = {
        DECLARE_METHOD(t_SinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinhCosh)[] = {
        { Py_tp_methods, t_SinhCosh__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinhCosh, t_SinhCosh, SinhCosh);

      void t_SinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(SinhCosh), &PY_TYPE_DEF(SinhCosh), module, "SinhCosh", 0);
      }

      void t_SinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "class_", make_descriptor(SinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "wrapfn_", make_descriptor(t_SinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinhCosh::initializeClass, 1)))
          return NULL;
        return t_SinhCosh::wrap_Object(SinhCosh(((t_SinhCosh *) arg)->object.this$));
      }
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cosh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::difference(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sinh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::sum(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Number.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Number::class$ = NULL;
    jmethodID *Number::mids$ = NULL;
    bool Number::live$ = false;

    jclass Number::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Number");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Number::Number() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    jbyte Number::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
    }

    jdouble Number::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
    }

    jfloat Number::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
    }

    jint Number::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
    }

    jlong Number::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
    }

    jshort Number::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Number_byteValue(t_Number *self);
    static PyObject *t_Number_doubleValue(t_Number *self);
    static PyObject *t_Number_floatValue(t_Number *self);
    static PyObject *t_Number_intValue(t_Number *self);
    static PyObject *t_Number_longValue(t_Number *self);
    static PyObject *t_Number_shortValue(t_Number *self);

    static PyMethodDef t_Number__methods_[] = {
      DECLARE_METHOD(t_Number, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, byteValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, doubleValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, floatValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, intValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, longValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, shortValue, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Number)[] = {
      { Py_tp_methods, t_Number__methods_ },
      { Py_tp_init, (void *) t_Number_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Number)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Number, t_Number, Number);

    void t_Number::install(PyObject *module)
    {
      installType(&PY_TYPE(Number), &PY_TYPE_DEF(Number), module, "Number", 0);
    }

    void t_Number::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "class_", make_descriptor(Number::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "wrapfn_", make_descriptor(t_Number::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Number::initializeClass, 1)))
        return NULL;
      return t_Number::wrap_Object(Number(((t_Number *) arg)->object.this$));
    }
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Number::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds)
    {
      Number object((jobject) NULL);

      INT_CALL(object = Number());
      self->object = object;

      return 0;
    }

    static PyObject *t_Number_byteValue(t_Number *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.byteValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_doubleValue(t_Number *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.doubleValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_floatValue(t_Number *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.floatValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_intValue(t_Number *self)
    {
      jint result;
      OBJ_CALL(result = self->object.intValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_longValue(t_Number *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.longValue());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Number_shortValue(t_Number *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.shortValue());
      return PyLong_FromLong((long) result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System.h"
#include "java/util/Map.h"
#include "java/io/Console.h"
#include "java/io/InputStream.h"
#include "java/lang/System$Logger.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/Class.h"
#include "java/util/Properties.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System::class$ = NULL;
    jmethodID *System::mids$ = NULL;
    bool System::live$ = false;
    ::java::io::PrintStream *System::err = NULL;
    ::java::io::InputStream *System::in = NULL;
    ::java::io::PrintStream *System::out = NULL;

    jclass System::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System");

        mids$ = new jmethodID[max_mid];
        mids$[mid_arraycopy_9e5f031fb258de0f] = env->getStaticMethodID(cls, "arraycopy", "(Ljava/lang/Object;ILjava/lang/Object;II)V");
        mids$[mid_clearProperty_43625fc1c3d86afe] = env->getStaticMethodID(cls, "clearProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_console_50ef7c5b776e8124] = env->getStaticMethodID(cls, "console", "()Ljava/io/Console;");
        mids$[mid_currentTimeMillis_a27fc9afd27e559d] = env->getStaticMethodID(cls, "currentTimeMillis", "()J");
        mids$[mid_exit_0a2a1ac2721c0336] = env->getStaticMethodID(cls, "exit", "(I)V");
        mids$[mid_gc_7ae3461a92a43152] = env->getStaticMethodID(cls, "gc", "()V");
        mids$[mid_getLogger_53a85389a162bd1d] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;)Ljava/lang/System$Logger;");
        mids$[mid_getLogger_bd29d71e74afa8fc] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;");
        mids$[mid_getProperties_8fcd7e17991e6b9d] = env->getStaticMethodID(cls, "getProperties", "()Ljava/util/Properties;");
        mids$[mid_getProperty_43625fc1c3d86afe] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_01d87ea922ecee51] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getSecurityManager_5389a11f25f9457f] = env->getStaticMethodID(cls, "getSecurityManager", "()Ljava/lang/SecurityManager;");
        mids$[mid_getenv_d6753b7055940a54] = env->getStaticMethodID(cls, "getenv", "()Ljava/util/Map;");
        mids$[mid_getenv_43625fc1c3d86afe] = env->getStaticMethodID(cls, "getenv", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_identityHashCode_ac8c1b6f384391ef] = env->getStaticMethodID(cls, "identityHashCode", "(Ljava/lang/Object;)I");
        mids$[mid_lineSeparator_0090f7797e403f43] = env->getStaticMethodID(cls, "lineSeparator", "()Ljava/lang/String;");
        mids$[mid_load_e939c6558ae8d313] = env->getStaticMethodID(cls, "load", "(Ljava/lang/String;)V");
        mids$[mid_loadLibrary_e939c6558ae8d313] = env->getStaticMethodID(cls, "loadLibrary", "(Ljava/lang/String;)V");
        mids$[mid_mapLibraryName_43625fc1c3d86afe] = env->getStaticMethodID(cls, "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_nanoTime_a27fc9afd27e559d] = env->getStaticMethodID(cls, "nanoTime", "()J");
        mids$[mid_runFinalization_7ae3461a92a43152] = env->getStaticMethodID(cls, "runFinalization", "()V");
        mids$[mid_setErr_97a189d81f6ca857] = env->getStaticMethodID(cls, "setErr", "(Ljava/io/PrintStream;)V");
        mids$[mid_setIn_a51aa99816400fdd] = env->getStaticMethodID(cls, "setIn", "(Ljava/io/InputStream;)V");
        mids$[mid_setOut_97a189d81f6ca857] = env->getStaticMethodID(cls, "setOut", "(Ljava/io/PrintStream;)V");
        mids$[mid_setProperties_a950b5896038ed38] = env->getStaticMethodID(cls, "setProperties", "(Ljava/util/Properties;)V");
        mids$[mid_setProperty_01d87ea922ecee51] = env->getStaticMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_setSecurityManager_1760ec543b03c2bb] = env->getStaticMethodID(cls, "setSecurityManager", "(Ljava/lang/SecurityManager;)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new ::java::io::PrintStream(env->getStaticObjectField(cls, "err", "Ljava/io/PrintStream;"));
        in = new ::java::io::InputStream(env->getStaticObjectField(cls, "in", "Ljava/io/InputStream;"));
        out = new ::java::io::PrintStream(env->getStaticObjectField(cls, "out", "Ljava/io/PrintStream;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void System::arraycopy(const ::java::lang::Object & a0, jint a1, const ::java::lang::Object & a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_arraycopy_9e5f031fb258de0f], a0.this$, a1, a2.this$, a3, a4);
    }

    ::java::lang::String System::clearProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_clearProperty_43625fc1c3d86afe], a0.this$));
    }

    ::java::io::Console System::console()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::Console(env->callStaticObjectMethod(cls, mids$[mid_console_50ef7c5b776e8124]));
    }

    jlong System::currentTimeMillis()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_currentTimeMillis_a27fc9afd27e559d]);
    }

    void System::exit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_exit_0a2a1ac2721c0336], a0);
    }

    void System::gc()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_gc_7ae3461a92a43152]);
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_53a85389a162bd1d], a0.this$));
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0, const ::java::util::ResourceBundle & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_bd29d71e74afa8fc], a0.this$, a1.this$));
    }

    ::java::util::Properties System::getProperties()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Properties(env->callStaticObjectMethod(cls, mids$[mid_getProperties_8fcd7e17991e6b9d]));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_43625fc1c3d86afe], a0.this$));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_01d87ea922ecee51], a0.this$, a1.this$));
    }

    ::java::lang::SecurityManager System::getSecurityManager()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::SecurityManager(env->callStaticObjectMethod(cls, mids$[mid_getSecurityManager_5389a11f25f9457f]));
    }

    ::java::util::Map System::getenv()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getenv_d6753b7055940a54]));
    }

    ::java::lang::String System::getenv(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getenv_43625fc1c3d86afe], a0.this$));
    }

    jint System::identityHashCode(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_identityHashCode_ac8c1b6f384391ef], a0.this$);
    }

    ::java::lang::String System::lineSeparator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lineSeparator_0090f7797e403f43]));
    }

    void System::load(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_load_e939c6558ae8d313], a0.this$);
    }

    void System::loadLibrary(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_loadLibrary_e939c6558ae8d313], a0.this$);
    }

    ::java::lang::String System::mapLibraryName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_mapLibraryName_43625fc1c3d86afe], a0.this$));
    }

    jlong System::nanoTime()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_nanoTime_a27fc9afd27e559d]);
    }

    void System::runFinalization()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_runFinalization_7ae3461a92a43152]);
    }

    void System::setErr(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setErr_97a189d81f6ca857], a0.this$);
    }

    void System::setIn(const ::java::io::InputStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setIn_a51aa99816400fdd], a0.this$);
    }

    void System::setOut(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setOut_97a189d81f6ca857], a0.this$);
    }

    void System::setProperties(const ::java::util::Properties & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setProperties_a950b5896038ed38], a0.this$);
    }

    ::java::lang::String System::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_setProperty_01d87ea922ecee51], a0.this$, a1.this$));
    }

    void System::setSecurityManager(const ::java::lang::SecurityManager & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setSecurityManager_1760ec543b03c2bb], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_console(PyTypeObject *type);
    static PyObject *t_System_currentTimeMillis(PyTypeObject *type);
    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_gc(PyTypeObject *type);
    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getProperties(PyTypeObject *type);
    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getSecurityManager(PyTypeObject *type);
    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_lineSeparator(PyTypeObject *type);
    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_nanoTime(PyTypeObject *type);
    static PyObject *t_System_runFinalization(PyTypeObject *type);
    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_get__env(t_System *self, void *data);
    static int t_System_set__err(t_System *self, PyObject *arg, void *data);
    static int t_System_set__in(t_System *self, PyObject *arg, void *data);
    static int t_System_set__out(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__properties(t_System *self, void *data);
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__securityManager(t_System *self, void *data);
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data);
    static PyGetSetDef t_System__fields_[] = {
      DECLARE_GET_FIELD(t_System, env),
      DECLARE_SET_FIELD(t_System, err),
      DECLARE_SET_FIELD(t_System, in),
      DECLARE_SET_FIELD(t_System, out),
      DECLARE_GETSET_FIELD(t_System, properties),
      DECLARE_GETSET_FIELD(t_System, securityManager),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System__methods_[] = {
      DECLARE_METHOD(t_System, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, arraycopy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, clearProperty, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, console, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, currentTimeMillis, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, exit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, gc, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getLogger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperties, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getSecurityManager, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getenv, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, identityHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, lineSeparator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, load, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, loadLibrary, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, mapLibraryName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, nanoTime, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, runFinalization, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setErr, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setIn, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setOut, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperties, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setSecurityManager, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System)[] = {
      { Py_tp_methods, t_System__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System, t_System, System);

    void t_System::install(PyObject *module)
    {
      installType(&PY_TYPE(System), &PY_TYPE_DEF(System), module, "System", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "Logger", make_descriptor(&PY_TYPE_DEF(System$Logger)));
    }

    void t_System::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "class_", make_descriptor(System::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "wrapfn_", make_descriptor(t_System::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "boxfn_", make_descriptor(boxObject));
      env->getClass(System::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "err", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::err)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "in", make_descriptor(::java::io::t_InputStream::wrap_Object(*System::in)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "out", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::out)));
    }

    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System::initializeClass, 1)))
        return NULL;
      return t_System::wrap_Object(System(((t_System *) arg)->object.this$));
    }
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint a1;
      ::java::lang::Object a2((jobject) NULL);
      jint a3;
      jint a4;

      if (!parseArgs(args, "oIoII", &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(::java::lang::System::arraycopy(a0, a1, a2, a3, a4));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "arraycopy", args);
      return NULL;
    }

    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::clearProperty(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "clearProperty", arg);
      return NULL;
    }

    static PyObject *t_System_console(PyTypeObject *type)
    {
      ::java::io::Console result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::console());
      return ::java::io::t_Console::wrap_Object(result);
    }

    static PyObject *t_System_currentTimeMillis(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::currentTimeMillis());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(::java::lang::System::exit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "exit", arg);
      return NULL;
    }

    static PyObject *t_System_gc(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::gc());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0, a1));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLogger", args);
      return NULL;
    }

    static PyObject *t_System_getProperties(PyTypeObject *type)
    {
      ::java::util::Properties result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getProperties());
      return ::java::util::t_Properties::wrap_Object(result);
    }

    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getProperty", args);
      return NULL;
    }

    static PyObject *t_System_getSecurityManager(PyTypeObject *type)
    {
      ::java::lang::SecurityManager result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(result);
    }

    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = ::java::lang::System::getenv());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
        }
        break;
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getenv(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getenv", args);
      return NULL;
    }

    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::identityHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "identityHashCode", arg);
      return NULL;
    }

    static PyObject *t_System_lineSeparator(PyTypeObject *type)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::lineSeparator());
      return j2p(result);
    }

    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::load(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "load", arg);
      return NULL;
    }

    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::loadLibrary(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "loadLibrary", arg);
      return NULL;
    }

    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::mapLibraryName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "mapLibraryName", arg);
      return NULL;
    }

    static PyObject *t_System_nanoTime(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::nanoTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_runFinalization(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::runFinalization());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setErr(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setErr", arg);
      return NULL;
    }

    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setIn(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setIn", arg);
      return NULL;
    }

    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setOut(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setOut", arg);
      return NULL;
    }

    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Properties a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Properties::initializeClass, &a0, &p0, ::java::util::t_Properties::parameters_))
      {
        OBJ_CALL(::java::lang::System::setProperties(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setProperties", arg);
      return NULL;
    }

    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::System::setProperty(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "setProperty", args);
      return NULL;
    }

    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::SecurityManager a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setSecurityManager(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setSecurityManager", arg);
      return NULL;
    }

    static PyObject *t_System_get__env(t_System *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getenv());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static int t_System_set__err(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setErr(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "err", arg);
      return -1;
    }

    static int t_System_set__in(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::InputStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
        {
          INT_CALL(self->object.setIn(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "in", arg);
      return -1;
    }

    static int t_System_set__out(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setOut(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "out", arg);
      return -1;
    }

    static PyObject *t_System_get__properties(t_System *self, void *data)
    {
      ::java::util::Properties value((jobject) NULL);
      OBJ_CALL(value = self->object.getProperties());
      return ::java::util::t_Properties::wrap_Object(value);
    }
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Properties value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Properties::initializeClass, &value))
        {
          INT_CALL(self->object.setProperties(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "properties", arg);
      return -1;
    }

    static PyObject *t_System_get__securityManager(t_System *self, void *data)
    {
      ::java::lang::SecurityManager value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(value);
    }
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::SecurityManager value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &value))
        {
          INT_CALL(self->object.setSecurityManager(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "securityManager", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Tile::class$ = NULL;
          jmethodID *Tile::mids$ = NULL;
          bool Tile::live$ = false;

          jclass Tile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Tile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0c08089a650b1a1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getCenter_fabc97b1aefe5844] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getInterpolatedPoint_51d222534b5783a3] = env->getMethodID(cls, "getInterpolatedPoint", "(DD)Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getVertices_2b605abf7cfca084] = env->getMethodID(cls, "getVertices", "()[Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tile::Tile(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2, const ::org::orekit::bodies::GeodeticPoint & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0c08089a650b1a1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::orekit::bodies::GeodeticPoint Tile::getCenter() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getCenter_fabc97b1aefe5844]));
          }

          ::org::orekit::bodies::GeodeticPoint Tile::getInterpolatedPoint(jdouble a0, jdouble a1) const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getInterpolatedPoint_51d222534b5783a3], a0, a1));
          }

          JArray< ::org::orekit::bodies::GeodeticPoint > Tile::getVertices() const
          {
            return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_getVertices_2b605abf7cfca084]));
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
        namespace tessellation {
          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tile_getCenter(t_Tile *self);
          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args);
          static PyObject *t_Tile_getVertices(t_Tile *self);
          static PyObject *t_Tile_get__center(t_Tile *self, void *data);
          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data);
          static PyGetSetDef t_Tile__fields_[] = {
            DECLARE_GET_FIELD(t_Tile, center),
            DECLARE_GET_FIELD(t_Tile, vertices),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tile__methods_[] = {
            DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, getCenter, METH_NOARGS),
            DECLARE_METHOD(t_Tile, getInterpolatedPoint, METH_VARARGS),
            DECLARE_METHOD(t_Tile, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
            { Py_tp_methods, t_Tile__methods_ },
            { Py_tp_init, (void *) t_Tile_init_ },
            { Py_tp_getset, t_Tile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tile)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tile, t_Tile, Tile);

          void t_Tile::install(PyObject *module)
          {
            installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          }

          void t_Tile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
              return NULL;
            return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
          }
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
            Tile object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Tile(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Tile_getCenter(t_Tile *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getInterpolatedPoint(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterpolatedPoint", args);
            return NULL;
          }

          static PyObject *t_Tile_getVertices(t_Tile *self)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }

          static PyObject *t_Tile_get__center(t_Tile *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/AbstractFieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractFieldMatrix::class$ = NULL;
      jmethodID *AbstractFieldMatrix::mids$ = NULL;
      bool AbstractFieldMatrix::live$ = false;

      jclass AbstractFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_311c21c57522a65c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_8c5ca78361f003c1] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_cc77900a647586cf] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_1e209a76a9d04b27] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_4400509b3e197e37] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_8e5837651d169cc8] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_d29eb5ffff4844ca] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_cb8ea5461f14f705] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_61bcfe594fe45427] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_6ccec7d54d4aa14e] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_e4e0a9e5376069de] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_d29eb5ffff4844ca] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_cb8ea5461f14f705] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_61bcfe594fe45427] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_302187aa0259985a] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_05948e8f73a5c897] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_7e89936bdf79375b] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_e470b6d9e0d979db] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_311c21c57522a65c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_8c5ca78361f003c1] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_operate_f9019cec9923ca8a] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_585261c47f8bb8c7] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_cb8ea5461f14f705] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_f9019cec9923ca8a] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_311c21c57522a65c] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_585261c47f8bb8c7] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_0f878209c37822a8] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_0f878209c37822a8] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_72c49d7bd5abccf7] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_ab13d4a167ad2f09] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_8c5ca78361f003c1] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_72c49d7bd5abccf7] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_ab13d4a167ad2f09] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_ca8750336b496dca] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_311c21c57522a65c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_cc77900a647586cf] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkAdditionCompatible_3e03971cd3efa337] = env->getMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkSubtractionCompatible_3e03971cd3efa337] = env->getMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkMultiplicationCompatible_3e03971cd3efa337] = env->getMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkSubMatrixIndex_554afe894346d53f] = env->getMethodID(cls, "checkSubMatrixIndex", "(IIII)V");
          mids$[mid_checkSubMatrixIndex_fb1ccf2a5678b26e] = env->getMethodID(cls, "checkSubMatrixIndex", "([I[I)V");
          mids$[mid_checkRowIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "checkRowIndex", "(I)V");
          mids$[mid_checkColumnIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "checkColumnIndex", "(I)V");
          mids$[mid_extractField_a1d86eabf92290a4] = env->getStaticMethodID(cls, "extractField", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");
          mids$[mid_extractField_ed77e104ffd431b6] = env->getStaticMethodID(cls, "extractField", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_311c21c57522a65c], a0.this$));
      }

      void AbstractFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_cc77900a647586cf]));
      }

      void AbstractFieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_1e209a76a9d04b27], a0.this$, a1.this$, a2.this$);
      }

      void AbstractFieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_4400509b3e197e37], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_8e5837651d169cc8], a0, a1));
      }

      jboolean AbstractFieldMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_d29eb5ffff4844ca], a0));
      }

      jint AbstractFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_cb8ea5461f14f705], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_61bcfe594fe45427], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > AbstractFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_6ccec7d54d4aa14e]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_e4e0a9e5376069de], a0, a1));
      }

      ::org::hipparchus::Field AbstractFieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_d29eb5ffff4844ca], a0));
      }

      jint AbstractFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_cb8ea5461f14f705], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_61bcfe594fe45427], a0));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_302187aa0259985a], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_05948e8f73a5c897], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_7e89936bdf79375b]));
      }

      jint AbstractFieldMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean AbstractFieldMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_e470b6d9e0d979db]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_311c21c57522a65c], a0.this$));
      }

      void AbstractFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_f9019cec9923ca8a], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_585261c47f8bb8c7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_cb8ea5461f14f705], a0));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_f9019cec9923ca8a], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_311c21c57522a65c], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_585261c47f8bb8c7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_0f878209c37822a8], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_0f878209c37822a8], a0.this$));
      }

      void AbstractFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_72c49d7bd5abccf7], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_ab13d4a167ad2f09], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      void AbstractFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      void AbstractFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_72c49d7bd5abccf7], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_ab13d4a167ad2f09], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      void AbstractFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_ca8750336b496dca], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_311c21c57522a65c], a0.this$));
      }

      ::java::lang::String AbstractFieldMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_cc77900a647586cf]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data);
      static PyGetSetDef t_AbstractFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, data),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, field),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, square),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, trace),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldMatrix)[] = {
        { Py_tp_methods, t_AbstractFieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldMatrix, t_AbstractFieldMatrix, AbstractFieldMatrix);
      PyObject *t_AbstractFieldMatrix::wrap_Object(const AbstractFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldMatrix), &PY_TYPE_DEF(AbstractFieldMatrix), module, "AbstractFieldMatrix", 0);
      }

      void t_AbstractFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "class_", make_descriptor(AbstractFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "wrapfn_", make_descriptor(t_AbstractFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldMatrix::wrap_Object(AbstractFieldMatrix(((t_AbstractFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *MetadataKey::class$ = NULL;
          jmethodID *MetadataKey::mids$ = NULL;
          bool MetadataKey::live$ = false;
          MetadataKey *MetadataKey::COMMENT = NULL;
          MetadataKey *MetadataKey::TIME_SYSTEM = NULL;

          jclass MetadataKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/MetadataKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_f6faac1eea0db10c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Metadata;)Z");
              mids$[mid_valueOf_4f2d2fd275ae2a29] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/MetadataKey;");
              mids$[mid_values_e8e28154be4e8a98] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/MetadataKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              COMMENT = new MetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              TIME_SYSTEM = new MetadataKey(env->getStaticObjectField(cls, "TIME_SYSTEM", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean MetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::section::Metadata & a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_f6faac1eea0db10c], a0.this$, a1.this$, a2.this$);
          }

          MetadataKey MetadataKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4f2d2fd275ae2a29], a0.this$));
          }

          JArray< MetadataKey > MetadataKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< MetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e8e28154be4e8a98]));
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
        namespace section {
          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_MetadataKey_values(PyTypeObject *type);
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data);
          static PyGetSetDef t_MetadataKey__fields_[] = {
            DECLARE_GET_FIELD(t_MetadataKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MetadataKey__methods_[] = {
            DECLARE_METHOD(t_MetadataKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, process, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MetadataKey)[] = {
            { Py_tp_methods, t_MetadataKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MetadataKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MetadataKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(MetadataKey, t_MetadataKey, MetadataKey);
          PyObject *t_MetadataKey::wrap_Object(const MetadataKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MetadataKey::install(PyObject *module)
          {
            installType(&PY_TYPE(MetadataKey), &PY_TYPE_DEF(MetadataKey), module, "MetadataKey", 0);
          }

          void t_MetadataKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "class_", make_descriptor(MetadataKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "wrapfn_", make_descriptor(t_MetadataKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(MetadataKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "COMMENT", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "TIME_SYSTEM", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::TIME_SYSTEM)));
          }

          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MetadataKey::initializeClass, 1)))
              return NULL;
            return t_MetadataKey::wrap_Object(MetadataKey(((t_MetadataKey *) arg)->object.this$));
          }
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MetadataKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
            ::org::orekit::files::ccsds::section::Metadata a2((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.process(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            MetadataKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::valueOf(a0));
              return t_MetadataKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_MetadataKey_values(PyTypeObject *type)
          {
            JArray< MetadataKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::values());
            return JArray<jobject>(result.this$).wrap(t_MetadataKey::wrap_jobject);
          }
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservedMeasurement::class$ = NULL;
        jmethodID *ObservedMeasurement::mids$ = NULL;
        bool ObservedMeasurement::live$ = false;

        jclass ObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_fc816f44bfa3d437] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_9d5a7270ffb14a9e] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_7cdc325af0834901] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_0090f7797e403f43] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_a6156df500549a58] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getSatellites_a6156df500549a58] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_e470b6d9e0d979db] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_50a2e0b139e80a58] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ObservedMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_fc816f44bfa3d437], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement ObservedMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_9d5a7270ffb14a9e], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase ObservedMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_c188a3b50efa39a5], a0, a1, a2.this$));
        }

        JArray< jdouble > ObservedMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_7cdc325af0834901]));
        }

        jint ObservedMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        ::java::lang::String ObservedMeasurement::getMeasurementType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeasurementType_0090f7797e403f43]));
        }

        ::java::util::List ObservedMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_a6156df500549a58]));
        }

        ::java::util::List ObservedMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_a6156df500549a58]));
        }

        JArray< jdouble > ObservedMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901]));
        }

        jboolean ObservedMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_e470b6d9e0d979db]);
        }

        void ObservedMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_50a2e0b139e80a58], a0);
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
        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data);
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data);
        static PyGetSetDef t_ObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ObservedMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_ObservedMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_ObservedMeasurement, enabled),
          DECLARE_GET_FIELD(t_ObservedMeasurement, measurementType),
          DECLARE_GET_FIELD(t_ObservedMeasurement, modifiers),
          DECLARE_GET_FIELD(t_ObservedMeasurement, satellites),
          DECLARE_GET_FIELD(t_ObservedMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_ObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_ObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_ObservedMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getMeasurementType, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, setEnabled, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservedMeasurement)[] = {
          { Py_tp_methods, t_ObservedMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::ComparableMeasurement),
          NULL
        };

        DEFINE_TYPE(ObservedMeasurement, t_ObservedMeasurement, ObservedMeasurement);
        PyObject *t_ObservedMeasurement::wrap_Object(const ObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservedMeasurement), &PY_TYPE_DEF(ObservedMeasurement), module, "ObservedMeasurement", 0);
        }

        void t_ObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "class_", make_descriptor(ObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "wrapfn_", make_descriptor(t_ObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_ObservedMeasurement::wrap_Object(ObservedMeasurement(((t_ObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
          {
            OBJ_CALL(self->object.addModifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementType());
          return j2p(result);
        }

        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementType());
          return j2p(value);
        }

        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *ProcessEstimate::class$ = NULL;
        jmethodID *ProcessEstimate::mids$ = NULL;
        bool ProcessEstimate::live$ = false;

        jclass ProcessEstimate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/ProcessEstimate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6fdc3f317620caee] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_3ae1aa6ea43ccad8] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getCovariance_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getInnovationCovariance_7116bbecdd8ceb21] = env->getMethodID(cls, "getInnovationCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getKalmanGain_7116bbecdd8ceb21] = env->getMethodID(cls, "getKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getState_6d9adf1d5b463928] = env->getMethodID(cls, "getState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6fdc3f317620caee, a0, a1.this$, a2.this$)) {}

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::linear::RealMatrix & a5, const ::org::hipparchus::linear::RealMatrix & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3ae1aa6ea43ccad8, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getInnovationCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInnovationCovariance_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getKalmanGain_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealVector ProcessEstimate::getState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getState_6d9adf1d5b463928]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_7116bbecdd8ceb21]));
        }

        jdouble ProcessEstimate::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
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
    namespace filtering {
      namespace kalman {
        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data);
        static PyGetSetDef t_ProcessEstimate__fields_[] = {
          DECLARE_GET_FIELD(t_ProcessEstimate, covariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, innovationCovariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, kalmanGain),
          DECLARE_GET_FIELD(t_ProcessEstimate, measurementJacobian),
          DECLARE_GET_FIELD(t_ProcessEstimate, state),
          DECLARE_GET_FIELD(t_ProcessEstimate, stateTransitionMatrix),
          DECLARE_GET_FIELD(t_ProcessEstimate, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProcessEstimate__methods_[] = {
          DECLARE_METHOD(t_ProcessEstimate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getInnovationCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getState, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProcessEstimate)[] = {
          { Py_tp_methods, t_ProcessEstimate__methods_ },
          { Py_tp_init, (void *) t_ProcessEstimate_init_ },
          { Py_tp_getset, t_ProcessEstimate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProcessEstimate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProcessEstimate, t_ProcessEstimate, ProcessEstimate);

        void t_ProcessEstimate::install(PyObject *module)
        {
          installType(&PY_TYPE(ProcessEstimate), &PY_TYPE_DEF(ProcessEstimate), module, "ProcessEstimate", 0);
        }

        void t_ProcessEstimate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "class_", make_descriptor(ProcessEstimate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "wrapfn_", make_descriptor(t_ProcessEstimate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProcessEstimate::initializeClass, 1)))
            return NULL;
          return t_ProcessEstimate::wrap_Object(ProcessEstimate(((t_ProcessEstimate *) arg)->object.this$));
        }
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProcessEstimate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a5((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a6((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkkkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
