#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/GLSMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *GLSMultipleLinearRegression::class$ = NULL;
        jmethodID *GLSMultipleLinearRegression::mids$ = NULL;
        bool GLSMultipleLinearRegression::live$ = false;

        jclass GLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/GLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newSampleData_cb88912e99c935c1] = env->getMethodID(cls, "newSampleData", "([D[[D[[D)V");
            mids$[mid_calculateBeta_3a10cc75bd070d84] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_f77d745f2128c391] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateErrorVariance_b74f83833fdad017] = env->getMethodID(cls, "calculateErrorVariance", "()D");
            mids$[mid_newCovarianceData_07adb42ffaa97d31] = env->getMethodID(cls, "newCovarianceData", "([[D)V");
            mids$[mid_getOmegaInverse_f77d745f2128c391] = env->getMethodID(cls, "getOmegaInverse", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLSMultipleLinearRegression::GLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void GLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_cb88912e99c935c1], a0.this$, a1.this$, a2.this$);
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
      namespace regression {
        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_GLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_GLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_GLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_GLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(GLSMultipleLinearRegression, t_GLSMultipleLinearRegression, GLSMultipleLinearRegression);

        void t_GLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(GLSMultipleLinearRegression), &PY_TYPE_DEF(GLSMultipleLinearRegression), module, "GLSMultipleLinearRegression", 0);
        }

        void t_GLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "class_", make_descriptor(GLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_GLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_GLSMultipleLinearRegression::wrap_Object(GLSMultipleLinearRegression(((t_GLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          GLSMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = GLSMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "[D[[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(GLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeInterpolator::class$ = NULL;
      jmethodID *FieldTimeInterpolator::mids$ = NULL;
      bool FieldTimeInterpolator::live$ = false;

      jclass FieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_b74f83833fdad017] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_4c468c3f574f12a9] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_596f2e40e2200071] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_1b1c8c532c82f5d0] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_f9931e17105657a3] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_b74f83833fdad017]);
      }

      jint FieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_55546ef6a647f39b]);
      }

      ::java::util::List FieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_e62d3bb06d56d7e3]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_4c468c3f574f12a9], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_596f2e40e2200071], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_1b1c8c532c82f5d0], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_f9931e17105657a3], a0.this$, a1.this$));
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
      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_FieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeInterpolator)[] = {
        { Py_tp_methods, t_FieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeInterpolator, t_FieldTimeInterpolator, FieldTimeInterpolator);
      PyObject *t_FieldTimeInterpolator::wrap_Object(const FieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeInterpolator), &PY_TYPE_DEF(FieldTimeInterpolator), module, "FieldTimeInterpolator", 0);
      }

      void t_FieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "class_", make_descriptor(FieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "wrapfn_", make_descriptor(t_FieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldTimeInterpolator::wrap_Object(FieldTimeInterpolator(((t_FieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringListConsumer::class$ = NULL;
            jmethodID *ParseToken$StringListConsumer::mids$ = NULL;
            bool ParseToken$StringListConsumer::live$ = false;

            jclass ParseToken$StringListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_0e7c3032c7c93ed3] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_0e7c3032c7c93ed3], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringListConsumer, t_ParseToken$StringListConsumer, ParseToken$StringListConsumer);

            void t_ParseToken$StringListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringListConsumer), &PY_TYPE_DEF(ParseToken$StringListConsumer), module, "ParseToken$StringListConsumer", 0);
            }

            void t_ParseToken$StringListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "class_", make_descriptor(ParseToken$StringListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringListConsumer::wrap_Object(ParseToken$StringListConsumer(((t_ParseToken$StringListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderKey::class$ = NULL;
          jmethodID *HeaderKey::mids$ = NULL;
          bool HeaderKey::live$ = false;
          HeaderKey *HeaderKey::CLASSIFICATION = NULL;
          HeaderKey *HeaderKey::COMMENT = NULL;
          HeaderKey *HeaderKey::CREATION_DATE = NULL;
          HeaderKey *HeaderKey::MESSAGE_ID = NULL;
          HeaderKey *HeaderKey::ORIGINATOR = NULL;

          jclass HeaderKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_149808c0cf85c37e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Header;)Z");
              mids$[mid_valueOf_ff1e64ac0d1e9c2e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/HeaderKey;");
              mids$[mid_values_d8fadf6e84e608fd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/HeaderKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLASSIFICATION = new HeaderKey(env->getStaticObjectField(cls, "CLASSIFICATION", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              COMMENT = new HeaderKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              CREATION_DATE = new HeaderKey(env->getStaticObjectField(cls, "CREATION_DATE", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              MESSAGE_ID = new HeaderKey(env->getStaticObjectField(cls, "MESSAGE_ID", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              ORIGINATOR = new HeaderKey(env->getStaticObjectField(cls, "ORIGINATOR", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean HeaderKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::section::Header & a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_149808c0cf85c37e], a0.this$, a1.this$, a2.this$);
          }

          HeaderKey HeaderKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return HeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ff1e64ac0d1e9c2e], a0.this$));
          }

          JArray< HeaderKey > HeaderKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< HeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d8fadf6e84e608fd]));
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
          static PyObject *t_HeaderKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderKey_of_(t_HeaderKey *self, PyObject *args);
          static PyObject *t_HeaderKey_process(t_HeaderKey *self, PyObject *args);
          static PyObject *t_HeaderKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_HeaderKey_values(PyTypeObject *type);
          static PyObject *t_HeaderKey_get__parameters_(t_HeaderKey *self, void *data);
          static PyGetSetDef t_HeaderKey__fields_[] = {
            DECLARE_GET_FIELD(t_HeaderKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HeaderKey__methods_[] = {
            DECLARE_METHOD(t_HeaderKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_HeaderKey, process, METH_VARARGS),
            DECLARE_METHOD(t_HeaderKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderKey)[] = {
            { Py_tp_methods, t_HeaderKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HeaderKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(HeaderKey, t_HeaderKey, HeaderKey);
          PyObject *t_HeaderKey::wrap_Object(const HeaderKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_HeaderKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_HeaderKey *self = (t_HeaderKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_HeaderKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_HeaderKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_HeaderKey *self = (t_HeaderKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_HeaderKey::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderKey), &PY_TYPE_DEF(HeaderKey), module, "HeaderKey", 0);
          }

          void t_HeaderKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "class_", make_descriptor(HeaderKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "wrapfn_", make_descriptor(t_HeaderKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(HeaderKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "CLASSIFICATION", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::CLASSIFICATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "COMMENT", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "CREATION_DATE", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::CREATION_DATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "MESSAGE_ID", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::MESSAGE_ID)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "ORIGINATOR", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::ORIGINATOR)));
          }

          static PyObject *t_HeaderKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderKey::initializeClass, 1)))
              return NULL;
            return t_HeaderKey::wrap_Object(HeaderKey(((t_HeaderKey *) arg)->object.this$));
          }
          static PyObject *t_HeaderKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HeaderKey_of_(t_HeaderKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_HeaderKey_process(t_HeaderKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
            ::org::orekit::files::ccsds::section::Header a2((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.process(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_HeaderKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            HeaderKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::HeaderKey::valueOf(a0));
              return t_HeaderKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_HeaderKey_values(PyTypeObject *type)
          {
            JArray< HeaderKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::HeaderKey::values());
            return JArray<jobject>(result.this$).wrap(t_HeaderKey::wrap_jobject);
          }
          static PyObject *t_HeaderKey_get__parameters_(t_HeaderKey *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3DFormat::class$ = NULL;
          jmethodID *Vector3DFormat::mids$ = NULL;
          bool Vector3DFormat::live$ = false;

          jclass Vector3DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_d047b7641facca84] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_4b712c2465e37e54] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector3DFormat_43a16a8b4506fabe] = env->getStaticMethodID(cls, "getVector3DFormat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_getVector3DFormat_1ae216ab37378c98] = env->getStaticMethodID(cls, "getVector3DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_parse_7a448fc80928d881] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_parse_1be531ac6832f604] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3DFormat::Vector3DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          Vector3DFormat::Vector3DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_d047b7641facca84, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector3DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_4b712c2465e37e54], a0.this$, a1.this$, a2.this$));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_43a16a8b4506fabe]));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_1ae216ab37378c98], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_7a448fc80928d881], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_1be531ac6832f604], a0.this$, a1.this$));
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
      namespace euclidean {
        namespace threed {
          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args);
          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data);
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data);
          static PyGetSetDef t_Vector3DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3DFormat, vector3DFormat),
            DECLARE_GET_FIELD(t_Vector3DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector3DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, getVector3DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3DFormat)[] = {
            { Py_tp_methods, t_Vector3DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector3DFormat_init_ },
            { Py_tp_getset, t_Vector3DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector3DFormat, t_Vector3DFormat, Vector3DFormat);
          PyObject *t_Vector3DFormat::wrap_Object(const Vector3DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector3DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector3DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3DFormat), &PY_TYPE_DEF(Vector3DFormat), module, "Vector3DFormat", 0);
          }

          void t_Vector3DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "class_", make_descriptor(Vector3DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "wrapfn_", make_descriptor(t_Vector3DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector3DFormat::wrap_Object(Vector3DFormat(((t_Vector3DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat object((jobject) NULL);

                INT_CALL(object = Vector3DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector3DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
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

          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat());
                return t_Vector3DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector3DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat(a0));
                  return t_Vector3DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector3DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data)
          {
            Vector3DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector3DFormat());
            return t_Vector3DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L1TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1TransformProvider::class$ = NULL;
      jmethodID *L1TransformProvider::mids$ = NULL;
      bool L1TransformProvider::live$ = false;

      jclass L1TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8e55d90b2c31e510] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
          mids$[mid_getStaticTransform_5f13614b572308e8] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_09ace34b8a3460b2] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1TransformProvider::L1TransformProvider(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e55d90b2c31e510, a0.this$, a1.this$)) {}

      ::org::orekit::frames::StaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_5f13614b572308e8], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_09ace34b8a3460b2], a0.this$));
      }

      ::org::orekit::frames::Transform L1TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform L1TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args);
      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args);

      static PyMethodDef t_L1TransformProvider__methods_[] = {
        DECLARE_METHOD(t_L1TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_L1TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1TransformProvider)[] = {
        { Py_tp_methods, t_L1TransformProvider__methods_ },
        { Py_tp_init, (void *) t_L1TransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1TransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(L1TransformProvider, t_L1TransformProvider, L1TransformProvider);

      void t_L1TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(L1TransformProvider), &PY_TYPE_DEF(L1TransformProvider), module, "L1TransformProvider", 0);
      }

      void t_L1TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "class_", make_descriptor(L1TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "wrapfn_", make_descriptor(t_L1TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1TransformProvider::initializeClass, 1)))
          return NULL;
        return t_L1TransformProvider::wrap_Object(L1TransformProvider(((t_L1TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1TransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1TransformProvider(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Rotation::class$ = NULL;
          jmethodID *Rotation::mids$ = NULL;
          bool Rotation::live$ = false;
          Rotation *Rotation::IDENTITY = NULL;

          jclass Rotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Rotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b651b5ef96594ce8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_9362f21bee0a3b93] = env->getMethodID(cls, "<init>", "([[DD)V");
              mids$[mid_init$_7005c718acc6ad99] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_f6f8af5f1648b06a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_1c51932bc6cfcbf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;DDD)V");
              mids$[mid_init$_e1234700c30e734e] = env->getMethodID(cls, "<init>", "(DDDDZ)V");
              mids$[mid_applyInverseTo_ee28de9af47f5c59] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyInverseTo_f21507e4850a184e] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyInverseTo_b15baa0161a4e9c7] = env->getMethodID(cls, "applyInverseTo", "([D[D)V");
              mids$[mid_applyTo_ee28de9af47f5c59] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyTo_f21507e4850a184e] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyTo_b15baa0161a4e9c7] = env->getMethodID(cls, "applyTo", "([D[D)V");
              mids$[mid_compose_6d8395e667c69471] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_composeInverse_6d8395e667c69471] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_distance_1fa547ea9a0201c5] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)D");
              mids$[mid_getAngle_b74f83833fdad017] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getAngles_400c30dc94b4a4c2] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[D");
              mids$[mid_getAxis_ff3972e7a0715932] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getMatrix_3b7b373db8e7887f] = env->getMethodID(cls, "getMatrix", "()[[D");
              mids$[mid_getQ0_b74f83833fdad017] = env->getMethodID(cls, "getQ0", "()D");
              mids$[mid_getQ1_b74f83833fdad017] = env->getMethodID(cls, "getQ1", "()D");
              mids$[mid_getQ2_b74f83833fdad017] = env->getMethodID(cls, "getQ2", "()D");
              mids$[mid_getQ3_b74f83833fdad017] = env->getMethodID(cls, "getQ3", "()D");
              mids$[mid_revert_ff298a39b3cae5da] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDENTITY = new Rotation(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/geometry/euclidean/threed/Rotation;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b651b5ef96594ce8, a0.this$, a1.this$)) {}

          Rotation::Rotation(const JArray< JArray< jdouble > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9362f21bee0a3b93, a0.this$, a1)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7005c718acc6ad99, a0.this$, a1, a2.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6f8af5f1648b06a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c51932bc6cfcbf6, a0.this$, a1.this$, a2, a3, a4)) {}

          Rotation::Rotation(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1234700c30e734e, a0, a1, a2, a3, a4)) {}

          Rotation Rotation::applyInverseTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_ee28de9af47f5c59], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_f21507e4850a184e], a0.this$));
          }

          void Rotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_b15baa0161a4e9c7], a0.this$, a1.this$);
          }

          Rotation Rotation::applyTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyTo_ee28de9af47f5c59], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyTo_f21507e4850a184e], a0.this$));
          }

          void Rotation::applyTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_b15baa0161a4e9c7], a0.this$, a1.this$);
          }

          Rotation Rotation::compose(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_compose_6d8395e667c69471], a0.this$, a1.this$));
          }

          Rotation Rotation::composeInverse(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_composeInverse_6d8395e667c69471], a0.this$, a1.this$));
          }

          jdouble Rotation::distance(const Rotation & a0, const Rotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_1fa547ea9a0201c5], a0.this$, a1.this$);
          }

          jdouble Rotation::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_b74f83833fdad017]);
          }

          JArray< jdouble > Rotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAngles_400c30dc94b4a4c2], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxis_ff3972e7a0715932], a0.this$));
          }

          JArray< JArray< jdouble > > Rotation::getMatrix() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getMatrix_3b7b373db8e7887f]));
          }

          jdouble Rotation::getQ0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ0_b74f83833fdad017]);
          }

          jdouble Rotation::getQ1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ1_b74f83833fdad017]);
          }

          jdouble Rotation::getQ2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ2_b74f83833fdad017]);
          }

          jdouble Rotation::getQ3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ3_b74f83833fdad017]);
          }

          Rotation Rotation::revert() const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_revert_ff298a39b3cae5da]));
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
      namespace euclidean {
        namespace threed {
          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_Rotation_getAngle(t_Rotation *self);
          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg);
          static PyObject *t_Rotation_getMatrix(t_Rotation *self);
          static PyObject *t_Rotation_getQ0(t_Rotation *self);
          static PyObject *t_Rotation_getQ1(t_Rotation *self);
          static PyObject *t_Rotation_getQ2(t_Rotation *self);
          static PyObject *t_Rotation_getQ3(t_Rotation *self);
          static PyObject *t_Rotation_revert(t_Rotation *self);
          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data);
          static PyGetSetDef t_Rotation__fields_[] = {
            DECLARE_GET_FIELD(t_Rotation, angle),
            DECLARE_GET_FIELD(t_Rotation, matrix),
            DECLARE_GET_FIELD(t_Rotation, q0),
            DECLARE_GET_FIELD(t_Rotation, q1),
            DECLARE_GET_FIELD(t_Rotation, q2),
            DECLARE_GET_FIELD(t_Rotation, q3),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Rotation__methods_[] = {
            DECLARE_METHOD(t_Rotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Rotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, getAxis, METH_O),
            DECLARE_METHOD(t_Rotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Rotation)[] = {
            { Py_tp_methods, t_Rotation__methods_ },
            { Py_tp_init, (void *) t_Rotation_init_ },
            { Py_tp_getset, t_Rotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Rotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Rotation, t_Rotation, Rotation);

          void t_Rotation::install(PyObject *module)
          {
            installType(&PY_TYPE(Rotation), &PY_TYPE_DEF(Rotation), module, "Rotation", 0);
          }

          void t_Rotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "class_", make_descriptor(Rotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "wrapfn_", make_descriptor(t_Rotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "boxfn_", make_descriptor(boxObject));
            env->getClass(Rotation::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "IDENTITY", make_descriptor(t_Rotation::wrap_Object(*Rotation::IDENTITY)));
          }

          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Rotation::initializeClass, 1)))
              return NULL;
            return t_Rotation::wrap_Object(Rotation(((t_Rotation *) arg)->object.this$));
          }
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Rotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);
                jdouble a1;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "[[DD", &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = Rotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "KKDDD", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jboolean a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "DDDDZ", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.compose(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.composeInverse(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            Rotation a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Rotation::initializeClass, Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Rotation::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAngle(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_Rotation_getMatrix(t_Rotation *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_getQ0(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ1(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ2(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ3(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_revert(t_Rotation *self)
          {
            Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Rotation::wrap_Object(result);
          }

          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ3());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombinationFactory::class$ = NULL;
          jmethodID *MeasurementCombinationFactory::mids$ = NULL;
          bool MeasurementCombinationFactory::live$ = false;

          jclass MeasurementCombinationFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getGRAPHICCombination_05eaead3f6c962c2] = env->getStaticMethodID(cls, "getGRAPHICCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GRAPHICCombination;");
              mids$[mid_getGeometryFreeCombination_121b9cf82dc3bdc3] = env->getStaticMethodID(cls, "getGeometryFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GeometryFreeCombination;");
              mids$[mid_getIonosphereFreeCombination_3545ecbb84db7a18] = env->getStaticMethodID(cls, "getIonosphereFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/IonosphereFreeCombination;");
              mids$[mid_getMelbourneWubbenaCombination_399e07cbc9c075f2] = env->getStaticMethodID(cls, "getMelbourneWubbenaCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination;");
              mids$[mid_getNarrowLaneCombination_3ce07ee6ddc5d392] = env->getStaticMethodID(cls, "getNarrowLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/NarrowLaneCombination;");
              mids$[mid_getPhaseMinusCodeCombination_1c5eaad33f9b1105] = env->getStaticMethodID(cls, "getPhaseMinusCodeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination;");
              mids$[mid_getWideLaneCombination_fd7b4de373a995c4] = env->getStaticMethodID(cls, "getWideLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/WideLaneCombination;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::GRAPHICCombination MeasurementCombinationFactory::getGRAPHICCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GRAPHICCombination(env->callStaticObjectMethod(cls, mids$[mid_getGRAPHICCombination_05eaead3f6c962c2], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination MeasurementCombinationFactory::getGeometryFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getGeometryFreeCombination_121b9cf82dc3bdc3], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination MeasurementCombinationFactory::getIonosphereFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getIonosphereFreeCombination_3545ecbb84db7a18], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination MeasurementCombinationFactory::getMelbourneWubbenaCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination(env->callStaticObjectMethod(cls, mids$[mid_getMelbourneWubbenaCombination_399e07cbc9c075f2], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination MeasurementCombinationFactory::getNarrowLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getNarrowLaneCombination_3ce07ee6ddc5d392], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination MeasurementCombinationFactory::getPhaseMinusCodeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination(env->callStaticObjectMethod(cls, mids$[mid_getPhaseMinusCodeCombination_1c5eaad33f9b1105], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::WideLaneCombination MeasurementCombinationFactory::getWideLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::WideLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getWideLaneCombination_fd7b4de373a995c4], a0.this$));
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
          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_MeasurementCombinationFactory__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombinationFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGRAPHICCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGeometryFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getIonosphereFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getMelbourneWubbenaCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getNarrowLaneCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getPhaseMinusCodeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getWideLaneCombination, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombinationFactory)[] = {
            { Py_tp_methods, t_MeasurementCombinationFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombinationFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombinationFactory, t_MeasurementCombinationFactory, MeasurementCombinationFactory);

          void t_MeasurementCombinationFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombinationFactory), &PY_TYPE_DEF(MeasurementCombinationFactory), module, "MeasurementCombinationFactory", 0);
          }

          void t_MeasurementCombinationFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "class_", make_descriptor(MeasurementCombinationFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "wrapfn_", make_descriptor(t_MeasurementCombinationFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombinationFactory::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombinationFactory::wrap_Object(MeasurementCombinationFactory(((t_MeasurementCombinationFactory *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombinationFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GRAPHICCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGRAPHICCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GRAPHICCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGRAPHICCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGeometryFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GeometryFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGeometryFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getIonosphereFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IonosphereFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIonosphereFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getMelbourneWubbenaCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_MelbourneWubbenaCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMelbourneWubbenaCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getNarrowLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_NarrowLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNarrowLaneCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getPhaseMinusCodeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_PhaseMinusCodeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPhaseMinusCodeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::WideLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getWideLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_WideLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getWideLaneCombination", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffect::class$ = NULL;
          jmethodID *PythonParametricModelEffect::mids$ = NULL;
          bool PythonParametricModelEffect::live$ = false;

          jclass PythonParametricModelEffect::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_b8971448fff75978] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffect::PythonParametricModelEffect() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonParametricModelEffect::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonParametricModelEffect::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonParametricModelEffect::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self);
          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args);
          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffect__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffect, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffect__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffect, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffect, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffect)[] = {
            { Py_tp_methods, t_PythonParametricModelEffect__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffect_init_ },
            { Py_tp_getset, t_PythonParametricModelEffect__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffect)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffect, t_PythonParametricModelEffect, PythonParametricModelEffect);

          void t_PythonParametricModelEffect::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffect), &PY_TYPE_DEF(PythonParametricModelEffect), module, "PythonParametricModelEffect", 1);
          }

          void t_PythonParametricModelEffect::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "class_", make_descriptor(PythonParametricModelEffect::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "wrapfn_", make_descriptor(t_PythonParametricModelEffect::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffect::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonParametricModelEffect_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffect_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffect::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffect::wrap_Object(PythonParametricModelEffect(((t_PythonParametricModelEffect *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffect::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffect object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffect());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args)
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

          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("evaluate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadata::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadata::mids$ = NULL;
              bool OrbitManeuverHistoryMetadata::live$ = false;
              ::org::orekit::files::ccsds::definitions::DutyCycleType *OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE = NULL;

              jclass OrbitManeuverHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_02135a6ef25adb4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getDcBodyFrame_24772727764a5aad] = env->getMethodID(cls, "getDcBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
                  mids$[mid_getDcBodyTrigger_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDcBodyTrigger", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcExecStart_c325492395d89b24] = env->getMethodID(cls, "getDcExecStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcExecStop_c325492395d89b24] = env->getMethodID(cls, "getDcExecStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcMaxCycles_55546ef6a647f39b] = env->getMethodID(cls, "getDcMaxCycles", "()I");
                  mids$[mid_getDcMinCycles_55546ef6a647f39b] = env->getMethodID(cls, "getDcMinCycles", "()I");
                  mids$[mid_getDcPhaseStartAngle_b74f83833fdad017] = env->getMethodID(cls, "getDcPhaseStartAngle", "()D");
                  mids$[mid_getDcPhaseStopAngle_b74f83833fdad017] = env->getMethodID(cls, "getDcPhaseStopAngle", "()D");
                  mids$[mid_getDcRefDir_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDcRefDir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcRefTime_c325492395d89b24] = env->getMethodID(cls, "getDcRefTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcTimePulseDuration_b74f83833fdad017] = env->getMethodID(cls, "getDcTimePulseDuration", "()D");
                  mids$[mid_getDcTimePulsePeriod_b74f83833fdad017] = env->getMethodID(cls, "getDcTimePulsePeriod", "()D");
                  mids$[mid_getDcType_e5e4c5e790c9f5ca] = env->getMethodID(cls, "getDcType", "()Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
                  mids$[mid_getDcWindowClose_c325492395d89b24] = env->getMethodID(cls, "getDcWindowClose", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcWindowOpen_c325492395d89b24] = env->getMethodID(cls, "getDcWindowOpen", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getGravitationalAssist_52253a5b5c02abfe] = env->getMethodID(cls, "getGravitationalAssist", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getManBasis_a516a2e871bea30b] = env->getMethodID(cls, "getManBasis", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_getManBasisID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManBasisID", "()Ljava/lang/String;");
                  mids$[mid_getManComposition_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManComposition", "()Ljava/util/List;");
                  mids$[mid_getManDeviceID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManDeviceID", "()Ljava/lang/String;");
                  mids$[mid_getManFrameEpoch_c325492395d89b24] = env->getMethodID(cls, "getManFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManID", "()Ljava/lang/String;");
                  mids$[mid_getManNextEpoch_c325492395d89b24] = env->getMethodID(cls, "getManNextEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManNextID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManNextID", "()Ljava/lang/String;");
                  mids$[mid_getManPredSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManPredSource", "()Ljava/lang/String;");
                  mids$[mid_getManPrevEpoch_c325492395d89b24] = env->getMethodID(cls, "getManPrevEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManPrevID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManPrevID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManPurpose", "()Ljava/util/List;");
                  mids$[mid_getManReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getManReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getManUnits_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManUnits", "()Ljava/util/List;");
                  mids$[mid_setDcBodyFrame_800c6f740bef7b6b] = env->getMethodID(cls, "setDcBodyFrame", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;)V");
                  mids$[mid_setDcBodyTrigger_1844f891addbac57] = env->getMethodID(cls, "setDcBodyTrigger", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcExecStart_02135a6ef25adb4b] = env->getMethodID(cls, "setDcExecStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcExecStop_02135a6ef25adb4b] = env->getMethodID(cls, "setDcExecStop", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcMaxCycles_44ed599e93e8a30c] = env->getMethodID(cls, "setDcMaxCycles", "(I)V");
                  mids$[mid_setDcMinCycles_44ed599e93e8a30c] = env->getMethodID(cls, "setDcMinCycles", "(I)V");
                  mids$[mid_setDcPhaseStartAngle_8ba9fe7a847cecad] = env->getMethodID(cls, "setDcPhaseStartAngle", "(D)V");
                  mids$[mid_setDcPhaseStopAngle_8ba9fe7a847cecad] = env->getMethodID(cls, "setDcPhaseStopAngle", "(D)V");
                  mids$[mid_setDcRefDir_1844f891addbac57] = env->getMethodID(cls, "setDcRefDir", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcRefTime_02135a6ef25adb4b] = env->getMethodID(cls, "setDcRefTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcTimePulseDuration_8ba9fe7a847cecad] = env->getMethodID(cls, "setDcTimePulseDuration", "(D)V");
                  mids$[mid_setDcTimePulsePeriod_8ba9fe7a847cecad] = env->getMethodID(cls, "setDcTimePulsePeriod", "(D)V");
                  mids$[mid_setDcType_0249fbee5d8c189b] = env->getMethodID(cls, "setDcType", "(Lorg/orekit/files/ccsds/definitions/DutyCycleType;)V");
                  mids$[mid_setDcWindowClose_02135a6ef25adb4b] = env->getMethodID(cls, "setDcWindowClose", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcWindowOpen_02135a6ef25adb4b] = env->getMethodID(cls, "setDcWindowOpen", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setGravitationalAssist_564458ee450fa323] = env->getMethodID(cls, "setGravitationalAssist", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setManBasis_44d71a583450b179] = env->getMethodID(cls, "setManBasis", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;)V");
                  mids$[mid_setManBasisID_734b91ac30d5f9b4] = env->getMethodID(cls, "setManBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setManComposition_0e7c3032c7c93ed3] = env->getMethodID(cls, "setManComposition", "(Ljava/util/List;)V");
                  mids$[mid_setManDeviceID_734b91ac30d5f9b4] = env->getMethodID(cls, "setManDeviceID", "(Ljava/lang/String;)V");
                  mids$[mid_setManFrameEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setManFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManID_734b91ac30d5f9b4] = env->getMethodID(cls, "setManID", "(Ljava/lang/String;)V");
                  mids$[mid_setManNextEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setManNextEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManNextID_734b91ac30d5f9b4] = env->getMethodID(cls, "setManNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPredSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setManPredSource", "(Ljava/lang/String;)V");
                  mids$[mid_setManPrevEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setManPrevEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManPrevID_734b91ac30d5f9b4] = env->getMethodID(cls, "setManPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_0e7c3032c7c93ed3] = env->getMethodID(cls, "setManPurpose", "(Ljava/util/List;)V");
                  mids$[mid_setManReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setManReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setManUnits_0e7c3032c7c93ed3] = env->getMethodID(cls, "setManUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_DC_TYPE = new ::org::orekit::files::ccsds::definitions::DutyCycleType(env->getStaticObjectField(cls, "DEFAULT_DC_TYPE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistoryMetadata::OrbitManeuverHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_02135a6ef25adb4b, a0.this$)) {}

              ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame OrbitManeuverHistoryMetadata::getDcBodyFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_getDcBodyFrame_24772727764a5aad]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcBodyTrigger() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcBodyTrigger_8b724f8b4fdad1a2]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStop_c325492395d89b24]));
              }

              jint OrbitManeuverHistoryMetadata::getDcMaxCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMaxCycles_55546ef6a647f39b]);
              }

              jint OrbitManeuverHistoryMetadata::getDcMinCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMinCycles_55546ef6a647f39b]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStartAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStartAngle_b74f83833fdad017]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStopAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStopAngle_b74f83833fdad017]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcRefDir() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcRefDir_8b724f8b4fdad1a2]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcRefTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcRefTime_c325492395d89b24]));
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulseDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulseDuration_b74f83833fdad017]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulsePeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulsePeriod_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::definitions::DutyCycleType OrbitManeuverHistoryMetadata::getDcType() const
              {
                return ::org::orekit::files::ccsds::definitions::DutyCycleType(env->callObjectMethod(this$, mids$[mid_getDcType_e5e4c5e790c9f5ca]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowClose() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowClose_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowOpen() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowOpen_c325492395d89b24]));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade OrbitManeuverHistoryMetadata::getGravitationalAssist() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getGravitationalAssist_52253a5b5c02abfe]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis OrbitManeuverHistoryMetadata::getManBasis() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis(env->callObjectMethod(this$, mids$[mid_getManBasis_a516a2e871bea30b]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManBasisID_1c1fa1e935d6cdcf]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManComposition() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManComposition_e62d3bb06d56d7e3]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManDeviceID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManDeviceID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManFrameEpoch_c325492395d89b24]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManNextEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManNextEpoch_c325492395d89b24]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManNextID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPredSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPredSource_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManPrevEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManPrevEpoch_c325492395d89b24]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPrevID_1c1fa1e935d6cdcf]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManPurpose() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManPurpose_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitManeuverHistoryMetadata::getManReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getManReferenceFrame_69d8be1b6b0a1a94]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManUnits_e62d3bb06d56d7e3]));
              }

              void OrbitManeuverHistoryMetadata::setDcBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyFrame_800c6f740bef7b6b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcBodyTrigger(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyTrigger_1844f891addbac57], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStart_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStop(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStop_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcMaxCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMaxCycles_44ed599e93e8a30c], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcMinCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMinCycles_44ed599e93e8a30c], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStartAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStartAngle_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStopAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStopAngle_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcRefDir(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefDir_1844f891addbac57], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcRefTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefTime_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulseDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulseDuration_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulsePeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulsePeriod_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcType(const ::org::orekit::files::ccsds::definitions::DutyCycleType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcType_0249fbee5d8c189b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowClose(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowClose_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowOpen(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowOpen_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setGravitationalAssist(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravitationalAssist_564458ee450fa323], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasis(const ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasis_44d71a583450b179], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasisID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManComposition(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManComposition_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManDeviceID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManDeviceID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManFrameEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPredSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPredSource_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPurpose(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManReferenceFrame_4755133c5c4c59be], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManUnits_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            namespace ocm {
              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyTrigger),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStart),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStop),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMaxCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMinCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStartAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStopAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefDir),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefTime),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulseDuration),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulsePeriod),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcType),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowClose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowOpen),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, gravitationalAssist),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasis),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasisID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manComposition),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manDeviceID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPredSource),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPurpose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyTrigger, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStart, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMaxCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMinCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStartAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStopAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefDir, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefTime, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulseDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulsePeriod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowClose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowOpen, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getGravitationalAssist, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManComposition, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManDeviceID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPredSource, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyTrigger, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStart, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStop, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMaxCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMinCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStartAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStopAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefDir, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefTime, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulseDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulsePeriod, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcType, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowClose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowOpen, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setGravitationalAssist, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasis, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasisID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManComposition, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManDeviceID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPredSource, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPurpose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManUnits, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadata, t_OrbitManeuverHistoryMetadata, OrbitManeuverHistoryMetadata);

              void t_OrbitManeuverHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadata), &PY_TYPE_DEF(OrbitManeuverHistoryMetadata), module, "OrbitManeuverHistoryMetadata", 0);
              }

              void t_OrbitManeuverHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "class_", make_descriptor(OrbitManeuverHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "DEFAULT_DC_TYPE", make_descriptor(::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(*OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadata::wrap_Object(OrbitManeuverHistoryMetadata(((t_OrbitManeuverHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitManeuverHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitManeuverHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMinCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(ManeuverFieldType));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManDeviceID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPredSource());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyTrigger(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyTrigger", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStart", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStop", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMaxCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMaxCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMinCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMinCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStartAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStartAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStopAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStopAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefDir(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefDir", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefTime", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulseDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulseDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulsePeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulsePeriod", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_DutyCycleType::parameters_))
                {
                  OBJ_CALL(self->object.setDcType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcType", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowClose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowClose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowOpen(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowOpen", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGravitationalAssist(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravitationalAssist", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::parameters_))
                {
                  OBJ_CALL(self->object.setManBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManComposition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManComposition", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManDeviceID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManDeviceID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManNextEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPredSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPredSource", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManPrevEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitManeuverHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyTrigger(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyTrigger", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStart", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStop", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMaxCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMaxCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMinCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMinCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMinCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStartAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStartAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStopAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStopAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefDir(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefDir", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefTime", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulseDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulseDuration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulsePeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulsePeriod", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcType", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowClose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowClose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowOpen(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowOpen", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGravitationalAssist(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gravitationalAssist", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasisID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManComposition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manComposition", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManDeviceID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManDeviceID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manDeviceID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManNextEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPredSource());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPredSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPredSource", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPrevEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manUnits", arg);
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
#include "org/hipparchus/random/AbstractWell.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *AbstractWell::class$ = NULL;
      jmethodID *AbstractWell::mids$ = NULL;
      bool AbstractWell::live$ = false;

      jclass AbstractWell::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/AbstractWell");

          mids$ = new jmethodID[max_mid];
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractWell::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args);
      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractWell__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractWell, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractWell__methods_[] = {
        DECLARE_METHOD(t_AbstractWell, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractWell)[] = {
        { Py_tp_methods, t_AbstractWell__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractWell__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractWell)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(AbstractWell, t_AbstractWell, AbstractWell);

      void t_AbstractWell::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractWell), &PY_TYPE_DEF(AbstractWell), module, "AbstractWell", 0);
      }

      void t_AbstractWell::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "class_", make_descriptor(AbstractWell::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "wrapfn_", make_descriptor(t_AbstractWell::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractWell::initializeClass, 1)))
          return NULL;
        return t_AbstractWell::wrap_Object(AbstractWell(((t_AbstractWell *) arg)->object.this$));
      }
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractWell::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(AbstractWell), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *TokenType::class$ = NULL;
            jmethodID *TokenType::mids$ = NULL;
            bool TokenType::live$ = false;
            TokenType *TokenType::ENTRY = NULL;
            TokenType *TokenType::RAW_LINE = NULL;
            TokenType *TokenType::START = NULL;
            TokenType *TokenType::STOP = NULL;

            jclass TokenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/TokenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_ce3cd2b65e1aed22] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_values_cdf6af80eac5bfd5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/lexical/TokenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ENTRY = new TokenType(env->getStaticObjectField(cls, "ENTRY", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                RAW_LINE = new TokenType(env->getStaticObjectField(cls, "RAW_LINE", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                START = new TokenType(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                STOP = new TokenType(env->getStaticObjectField(cls, "STOP", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TokenType TokenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TokenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ce3cd2b65e1aed22], a0.this$));
            }

            JArray< TokenType > TokenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TokenType >(env->callStaticObjectMethod(cls, mids$[mid_values_cdf6af80eac5bfd5]));
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
        namespace utils {
          namespace lexical {
            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args);
            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TokenType_values(PyTypeObject *type);
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data);
            static PyGetSetDef t_TokenType__fields_[] = {
              DECLARE_GET_FIELD(t_TokenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TokenType__methods_[] = {
              DECLARE_METHOD(t_TokenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_TokenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TokenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TokenType)[] = {
              { Py_tp_methods, t_TokenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TokenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TokenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TokenType, t_TokenType, TokenType);
            PyObject *t_TokenType::wrap_Object(const TokenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TokenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TokenType::install(PyObject *module)
            {
              installType(&PY_TYPE(TokenType), &PY_TYPE_DEF(TokenType), module, "TokenType", 0);
            }

            void t_TokenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "class_", make_descriptor(TokenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "wrapfn_", make_descriptor(t_TokenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(TokenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "ENTRY", make_descriptor(t_TokenType::wrap_Object(*TokenType::ENTRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "RAW_LINE", make_descriptor(t_TokenType::wrap_Object(*TokenType::RAW_LINE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "START", make_descriptor(t_TokenType::wrap_Object(*TokenType::START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "STOP", make_descriptor(t_TokenType::wrap_Object(*TokenType::STOP)));
            }

            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TokenType::initializeClass, 1)))
                return NULL;
              return t_TokenType::wrap_Object(TokenType(((t_TokenType *) arg)->object.this$));
            }
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TokenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TokenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::valueOf(a0));
                return t_TokenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TokenType_values(PyTypeObject *type)
            {
              JArray< TokenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::values());
              return JArray<jobject>(result.this$).wrap(t_TokenType::wrap_jobject);
            }
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractFieldODEDetector::class$ = NULL;
        jmethodID *AbstractFieldODEDetector::mids$ = NULL;
        bool AbstractFieldODEDetector::live$ = false;
        jdouble AbstractFieldODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractFieldODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractFieldODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractFieldODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractFieldODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_751903dc38e0b7e8] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_daa4dcd20dd895b8] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_9e96a56f8b6efe47] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_95522f52875c5391] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_47d643dacb7a2361] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_5e4e748e9b4bac80] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_caf5dc8899e0b901] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxIter_74b35201f96fff90] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withSolver_c481c8eb62c06a6a] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withThreshold_5e4e748e9b4bac80] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_create_d90cb26b03bae470] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement AbstractFieldODEDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_751903dc38e0b7e8], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler AbstractFieldODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_daa4dcd20dd895b8]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval AbstractFieldODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_9e96a56f8b6efe47]));
        }

        jint AbstractFieldODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver AbstractFieldODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_95522f52875c5391]));
        }

        void AbstractFieldODEDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
        }

        jboolean AbstractFieldODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withHandler(const ::org::hipparchus::ode::events::FieldODEEventHandler & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_47d643dacb7a2361], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_5e4e748e9b4bac80], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::FieldAdaptableInterval & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_caf5dc8899e0b901], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxIter(jint a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_74b35201f96fff90], a0));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_c481c8eb62c06a6a], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_5e4e748e9b4bac80], a0.this$));
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
      namespace events {
        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data);
        static PyGetSetDef t_AbstractFieldODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEDetector)[] = {
          { Py_tp_methods, t_AbstractFieldODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEDetector, t_AbstractFieldODEDetector, AbstractFieldODEDetector);
        PyObject *t_AbstractFieldODEDetector::wrap_Object(const AbstractFieldODEDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractFieldODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEDetector), &PY_TYPE_DEF(AbstractFieldODEDetector), module, "AbstractFieldODEDetector", 0);
        }

        void t_AbstractFieldODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "class_", make_descriptor(AbstractFieldODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "wrapfn_", make_descriptor(t_AbstractFieldODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractFieldODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractFieldODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEDetector::wrap_Object(AbstractFieldODEDetector(((t_AbstractFieldODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
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
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActuatorUsed_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getActuatorUsed", "()Ljava/lang/String;");
                  mids$[mid_getBeginTime_b74f83833fdad017] = env->getMethodID(cls, "getBeginTime", "()D");
                  mids$[mid_getDuration_b74f83833fdad017] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEndTime_b74f83833fdad017] = env->getMethodID(cls, "getEndTime", "()D");
                  mids$[mid_getID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManPurpose", "()Ljava/lang/String;");
                  mids$[mid_getPrevID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTargetAttitude_ff298a39b3cae5da] = env->getMethodID(cls, "getTargetAttitude", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_getTargetMomFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getTargetMomFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTargetMomentum_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTargetMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getTargetSpinRate_b74f83833fdad017] = env->getMethodID(cls, "getTargetSpinRate", "()D");
                  mids$[mid_setActuatorUsed_734b91ac30d5f9b4] = env->getMethodID(cls, "setActuatorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_setBeginTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setBeginTime", "(D)V");
                  mids$[mid_setDuration_8ba9fe7a847cecad] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEndTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setEndTime", "(D)V");
                  mids$[mid_setID_734b91ac30d5f9b4] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_734b91ac30d5f9b4] = env->getMethodID(cls, "setManPurpose", "(Ljava/lang/String;)V");
                  mids$[mid_setPrevID_734b91ac30d5f9b4] = env->getMethodID(cls, "setPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTargetAttitude_f32de4638c68c05a] = env->getMethodID(cls, "setTargetAttitude", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
                  mids$[mid_setTargetMomFrame_4755133c5c4c59be] = env->getMethodID(cls, "setTargetMomFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTargetMomentum_1844f891addbac57] = env->getMethodID(cls, "setTargetMomentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setTargetSpinRate_8ba9fe7a847cecad] = env->getMethodID(cls, "setTargetSpinRate", "(D)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeManeuver::AttitudeManeuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::java::lang::String AttitudeManeuver::getActuatorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActuatorUsed_1c1fa1e935d6cdcf]));
              }

              jdouble AttitudeManeuver::getBeginTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeginTime_b74f83833fdad017]);
              }

              jdouble AttitudeManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_b74f83833fdad017]);
              }

              jdouble AttitudeManeuver::getEndTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEndTime_b74f83833fdad017]);
              }

              ::java::lang::String AttitudeManeuver::getID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeManeuver::getManPurpose() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPurpose_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeManeuver::getPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevID_1c1fa1e935d6cdcf]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeManeuver::getTargetAttitude() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getTargetAttitude_ff298a39b3cae5da]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeManeuver::getTargetMomFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTargetMomFrame_69d8be1b6b0a1a94]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudeManeuver::getTargetMomentum() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetMomentum_8b724f8b4fdad1a2]));
              }

              jdouble AttitudeManeuver::getTargetSpinRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTargetSpinRate_b74f83833fdad017]);
              }

              void AttitudeManeuver::setActuatorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActuatorUsed_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeManeuver::setBeginTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeginTime_8ba9fe7a847cecad], a0);
              }

              void AttitudeManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_8ba9fe7a847cecad], a0);
              }

              void AttitudeManeuver::setEndTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEndTime_8ba9fe7a847cecad], a0);
              }

              void AttitudeManeuver::setID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeManeuver::setManPurpose(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeManeuver::setPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeManeuver::setTargetAttitude(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetAttitude_f32de4638c68c05a], a0.this$);
              }

              void AttitudeManeuver::setTargetMomFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomFrame_4755133c5c4c59be], a0.this$);
              }

              void AttitudeManeuver::setTargetMomentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomentum_1844f891addbac57], a0.this$);
              }

              void AttitudeManeuver::setTargetSpinRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetSpinRate_8ba9fe7a847cecad], a0);
              }

              void AttitudeManeuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Predefined::class$ = NULL;
      jmethodID *Predefined::mids$ = NULL;
      bool Predefined::live$ = false;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::EME2000 = NULL;
      Predefined *Predefined::GCRF = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::ICRF = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::MOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::PZ90_11 = NULL;
      Predefined *Predefined::TEME = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::VEIS_1950 = NULL;

      jclass Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_valueOf_a3603354cd0de070] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/Predefined;");
          mids$[mid_values_1349eee6ecb9cac6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          EME2000 = new Predefined(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/frames/Predefined;"));
          GCRF = new Predefined(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "GTOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          ICRF = new Predefined(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          MOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "MOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          PZ90_11 = new Predefined(env->getStaticObjectField(cls, "PZ90_11", "Lorg/orekit/frames/Predefined;"));
          TEME = new Predefined(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "TOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          VEIS_1950 = new Predefined(env->getStaticObjectField(cls, "VEIS_1950", "Lorg/orekit/frames/Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Predefined::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      Predefined Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a3603354cd0de070], a0.this$));
      }

      JArray< Predefined > Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_1349eee6ecb9cac6]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args);
      static PyObject *t_Predefined_getName(t_Predefined *self);
      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Predefined_values(PyTypeObject *type);
      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data);
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data);
      static PyGetSetDef t_Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_Predefined, name),
        DECLARE_GET_FIELD(t_Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Predefined__methods_[] = {
        DECLARE_METHOD(t_Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_Predefined, getName, METH_NOARGS),
        DECLARE_METHOD(t_Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Predefined)[] = {
        { Py_tp_methods, t_Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Predefined, t_Predefined, Predefined);
      PyObject *t_Predefined::wrap_Object(const Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(Predefined), &PY_TYPE_DEF(Predefined), module, "Predefined", 0);
      }

      void t_Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "class_", make_descriptor(Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "wrapfn_", make_descriptor(t_Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "EME2000", make_descriptor(t_Predefined::wrap_Object(*Predefined::EME2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GCRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::GCRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ICRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::ICRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "PZ90_11", make_descriptor(t_Predefined::wrap_Object(*Predefined::PZ90_11)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TEME", make_descriptor(t_Predefined::wrap_Object(*Predefined::TEME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "VEIS_1950", make_descriptor(t_Predefined::wrap_Object(*Predefined::VEIS_1950)));
      }

      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Predefined::initializeClass, 1)))
          return NULL;
        return t_Predefined::wrap_Object(Predefined(((t_Predefined *) arg)->object.this$));
      }
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Predefined_getName(t_Predefined *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::Predefined::valueOf(a0));
          return t_Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Predefined_values(PyTypeObject *type)
      {
        JArray< Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_Predefined::wrap_jobject);
      }
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/Month.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateComponents::class$ = NULL;
      jmethodID *DateComponents::mids$ = NULL;
      bool DateComponents::live$ = false;
      DateComponents *DateComponents::BEIDOU_EPOCH = NULL;
      DateComponents *DateComponents::CCSDS_EPOCH = NULL;
      DateComponents *DateComponents::FIFTIES_EPOCH = NULL;
      DateComponents *DateComponents::GALILEO_EPOCH = NULL;
      DateComponents *DateComponents::GLONASS_EPOCH = NULL;
      DateComponents *DateComponents::GPS_EPOCH = NULL;
      DateComponents *DateComponents::IRNSS_EPOCH = NULL;
      DateComponents *DateComponents::J2000_EPOCH = NULL;
      DateComponents *DateComponents::JAVA_EPOCH = NULL;
      DateComponents *DateComponents::JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::MAX_EPOCH = NULL;
      DateComponents *DateComponents::MIN_EPOCH = NULL;
      DateComponents *DateComponents::MODIFIED_JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::QZSS_EPOCH = NULL;

      jclass DateComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f29ffa06e1edc0fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_cb5fad2f35fdd552] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_a0df4b8e4ed3805e] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_compareTo_e788f54a1ca1c9dc] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateComponents;)I");
          mids$[mid_createFromWeekComponents_25e1535294bfc9e8] = env->getStaticMethodID(cls, "createFromWeekComponents", "(III)Lorg/orekit/time/DateComponents;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCalendarWeek_55546ef6a647f39b] = env->getMethodID(cls, "getCalendarWeek", "()I");
          mids$[mid_getDay_55546ef6a647f39b] = env->getMethodID(cls, "getDay", "()I");
          mids$[mid_getDayOfWeek_55546ef6a647f39b] = env->getMethodID(cls, "getDayOfWeek", "()I");
          mids$[mid_getDayOfYear_55546ef6a647f39b] = env->getMethodID(cls, "getDayOfYear", "()I");
          mids$[mid_getJ2000Day_55546ef6a647f39b] = env->getMethodID(cls, "getJ2000Day", "()I");
          mids$[mid_getMJD_55546ef6a647f39b] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getMonth_55546ef6a647f39b] = env->getMethodID(cls, "getMonth", "()I");
          mids$[mid_getMonthEnum_427cb53b38e1e5c8] = env->getMethodID(cls, "getMonthEnum", "()Lorg/orekit/time/Month;");
          mids$[mid_getYear_55546ef6a647f39b] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseDate_007f42f756105ee4] = env->getStaticMethodID(cls, "parseDate", "(Ljava/lang/String;)Lorg/orekit/time/DateComponents;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU_EPOCH = new DateComponents(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/DateComponents;"));
          CCSDS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          FIFTIES_EPOCH = new DateComponents(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GALILEO_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GLONASS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GPS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          IRNSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          J2000_EPOCH = new DateComponents(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JAVA_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MAX_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MAX_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MIN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MIN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MODIFIED_JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          QZSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateComponents::DateComponents(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      DateComponents::DateComponents(const DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f29ffa06e1edc0fc, a0.this$, a1)) {}

      DateComponents::DateComponents(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      DateComponents::DateComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb5fad2f35fdd552, a0, a1.this$, a2)) {}

      DateComponents::DateComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0df4b8e4ed3805e, a0, a1, a2)) {}

      jint DateComponents::compareTo(const DateComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_e788f54a1ca1c9dc], a0.this$);
      }

      DateComponents DateComponents::createFromWeekComponents(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_createFromWeekComponents_25e1535294bfc9e8], a0, a1, a2));
      }

      jboolean DateComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jint DateComponents::getCalendarWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getCalendarWeek_55546ef6a647f39b]);
      }

      jint DateComponents::getDay() const
      {
        return env->callIntMethod(this$, mids$[mid_getDay_55546ef6a647f39b]);
      }

      jint DateComponents::getDayOfWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfWeek_55546ef6a647f39b]);
      }

      jint DateComponents::getDayOfYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfYear_55546ef6a647f39b]);
      }

      jint DateComponents::getJ2000Day() const
      {
        return env->callIntMethod(this$, mids$[mid_getJ2000Day_55546ef6a647f39b]);
      }

      jint DateComponents::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_55546ef6a647f39b]);
      }

      jint DateComponents::getMonth() const
      {
        return env->callIntMethod(this$, mids$[mid_getMonth_55546ef6a647f39b]);
      }

      ::org::orekit::time::Month DateComponents::getMonthEnum() const
      {
        return ::org::orekit::time::Month(env->callObjectMethod(this$, mids$[mid_getMonthEnum_427cb53b38e1e5c8]));
      }

      jint DateComponents::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_55546ef6a647f39b]);
      }

      jint DateComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      DateComponents DateComponents::parseDate(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDate_007f42f756105ee4], a0.this$));
      }

      ::java::lang::String DateComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg);
      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args);
      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDay(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self);
      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self);
      static PyObject *t_DateComponents_getMJD(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonth(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self);
      static PyObject *t_DateComponents_getYear(t_DateComponents *self);
      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data);
      static PyGetSetDef t_DateComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateComponents, calendarWeek),
        DECLARE_GET_FIELD(t_DateComponents, day),
        DECLARE_GET_FIELD(t_DateComponents, dayOfWeek),
        DECLARE_GET_FIELD(t_DateComponents, dayOfYear),
        DECLARE_GET_FIELD(t_DateComponents, j2000Day),
        DECLARE_GET_FIELD(t_DateComponents, mJD),
        DECLARE_GET_FIELD(t_DateComponents, month),
        DECLARE_GET_FIELD(t_DateComponents, monthEnum),
        DECLARE_GET_FIELD(t_DateComponents, year),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateComponents__methods_[] = {
        DECLARE_METHOD(t_DateComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateComponents, createFromWeekComponents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, getCalendarWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDay, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getJ2000Day, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonth, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonthEnum, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, parseDate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateComponents)[] = {
        { Py_tp_methods, t_DateComponents__methods_ },
        { Py_tp_init, (void *) t_DateComponents_init_ },
        { Py_tp_getset, t_DateComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateComponents, t_DateComponents, DateComponents);

      void t_DateComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateComponents), &PY_TYPE_DEF(DateComponents), module, "DateComponents", 0);
      }

      void t_DateComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "class_", make_descriptor(DateComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "wrapfn_", make_descriptor(t_DateComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "BEIDOU_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "CCSDS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "FIFTIES_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GALILEO_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GLONASS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GPS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "IRNSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "J2000_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JAVA_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MAX_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MAX_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MIN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MIN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "QZSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::QZSS_EPOCH)));
      }

      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateComponents::initializeClass, 1)))
          return NULL;
        return t_DateComponents::wrap_Object(DateComponents(((t_DateComponents *) arg)->object.this$));
      }
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DateComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            DateComponents a0((jobject) NULL);
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "kI", DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
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

      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg)
      {
        DateComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        DateComponents result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::createFromWeekComponents(a0, a1, a2));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromWeekComponents", args);
        return NULL;
      }

      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCalendarWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDay(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDay());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getJ2000Day());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMJD(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonth(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMonth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self)
      {
        ::org::orekit::time::Month result((jobject) NULL);
        OBJ_CALL(result = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(result);
      }

      static PyObject *t_DateComponents_getYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::parseDate(a0));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDate", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCalendarWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDay());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfYear());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getJ2000Day());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMonth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data)
      {
        ::org::orekit::time::Month value((jobject) NULL);
        OBJ_CALL(value = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(value);
      }

      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileParser::class$ = NULL;
        jmethodID *EphemerisFileParser::mids$ = NULL;
        bool EphemerisFileParser::live$ = false;

        jclass EphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_c2184fda105f33cd] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::EphemerisFile EphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::EphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_c2184fda105f33cd], a0.this$));
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
        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args);
        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg);
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data);
        static PyGetSetDef t_EphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileParser)[] = {
          { Py_tp_methods, t_EphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileParser, t_EphemerisFileParser, EphemerisFileParser);
        PyObject *t_EphemerisFileParser::wrap_Object(const EphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileParser), &PY_TYPE_DEF(EphemerisFileParser), module, "EphemerisFileParser", 0);
        }

        void t_EphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "class_", make_descriptor(EphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "wrapfn_", make_descriptor(t_EphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileParser::wrap_Object(EphemerisFileParser(((t_EphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_EphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalProcess::class$ = NULL;
        jmethodID *SemiAnalyticalProcess::mids$ = NULL;
        bool SemiAnalyticalProcess::live$ = false;

        jclass SemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_aef7db4b13ced902] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_f666564f549c2e32] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_280c3390961e0a50] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateNominalSpacecraftState_280c3390961e0a50] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_280c3390961e0a50] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalProcess::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_aef7db4b13ced902], a0.this$, a1.this$);
        }

        void SemiAnalyticalProcess::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalProcess::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_f666564f549c2e32]));
        }

        void SemiAnalyticalProcess::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_280c3390961e0a50], a0.this$);
        }

        void SemiAnalyticalProcess::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_280c3390961e0a50], a0.this$);
        }

        void SemiAnalyticalProcess::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_280c3390961e0a50], a0.this$);
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
        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args);
        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_SemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalProcess, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_SemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalProcess, t_SemiAnalyticalProcess, SemiAnalyticalProcess);

        void t_SemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalProcess), &PY_TYPE_DEF(SemiAnalyticalProcess), module, "SemiAnalyticalProcess", 0);
        }

        void t_SemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "class_", make_descriptor(SemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "wrapfn_", make_descriptor(t_SemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalProcess::wrap_Object(SemiAnalyticalProcess(((t_SemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_eaf6bc2191c5b1b4] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldAbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_eaf6bc2191c5b1b4], a0.this$));
        }

        void FieldAbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
      namespace integration {
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator$MainStateEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations, t_FieldAbstractIntegratedPropagator$MainStateEquations, FieldAbstractIntegratedPropagator$MainStateEquations);
        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(const FieldAbstractIntegratedPropagator$MainStateEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations), module, "FieldAbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(FieldAbstractIntegratedPropagator$MainStateEquations(((t_FieldAbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *Dfp::class$ = NULL;
      jmethodID *Dfp::mids$ = NULL;
      bool Dfp::live$ = false;
      jint Dfp::ERR_SCALE = (jint) 0;
      jbyte Dfp::FINITE = (jbyte) 0;
      jbyte Dfp::INFINITE$ = (jbyte) 0;
      jint Dfp::MAX_EXP = (jint) 0;
      jint Dfp::MIN_EXP = (jint) 0;
      jbyte Dfp::QNAN = (jbyte) 0;
      jint Dfp::RADIX = (jint) 0;
      jbyte Dfp::SNAN$ = (jbyte) 0;

      jclass Dfp::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/Dfp");

          mids$ = new jmethodID[max_mid];
          mids$[mid_abs_2b93193437c3f00d] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acos_2b93193437c3f00d] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acosh_2b93193437c3f00d] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_a714269abf022321] = env->getMethodID(cls, "add", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_757f32f1791cffc4] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_2b93193437c3f00d] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asinh_2b93193437c3f00d] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_2b93193437c3f00d] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan2_a714269abf022321] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanh_2b93193437c3f00d] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cbrt_2b93193437c3f00d] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_ceil_2b93193437c3f00d] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_classify_55546ef6a647f39b] = env->getMethodID(cls, "classify", "()I");
          mids$[mid_copySign_a714269abf022321] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copySign_757f32f1791cffc4] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copysign_cd2054800f3587f2] = env->getStaticMethodID(cls, "copysign", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_2b93193437c3f00d] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosh_2b93193437c3f00d] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_a714269abf022321] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_757f32f1791cffc4] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_026cdd2d1c22b25b] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dotrap_05168b982b23240b] = env->getMethodID(cls, "dotrap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_2b93193437c3f00d] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expm1_2b93193437c3f00d] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_floor_2b93193437c3f00d] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
          mids$[mid_getField_ee1a1cb642795f5d] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getOne_2b93193437c3f00d] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_2b93193437c3f00d] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_55546ef6a647f39b] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getTwo_2b93193437c3f00d] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_2b93193437c3f00d] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_greaterThan_7df7f60b9abe67da] = env->getMethodID(cls, "greaterThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_a714269abf022321] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_intLog10_55546ef6a647f39b] = env->getMethodID(cls, "intLog10", "()I");
          mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_9ab94ac1dc23b105] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_lessThan_7df7f60b9abe67da] = env->getMethodID(cls, "lessThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_linearCombination_977d9dd11ccd3173] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_bff307fe0b833d14] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_a2c478fc8981d5b7] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_e222379307dd4b32] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_cfdac956e821ce46] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_ef1588c94af8b0ba] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_d5ca073f5e9a873b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_c9179c24e516b4e9] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_2b93193437c3f00d] = env->getMethodID(cls, "log", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10_2b93193437c3f00d] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10K_55546ef6a647f39b] = env->getMethodID(cls, "log10K", "()I");
          mids$[mid_log1p_2b93193437c3f00d] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_a714269abf022321] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_757f32f1791cffc4] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_026cdd2d1c22b25b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negate_2b93193437c3f00d] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negativeOrNull_9ab94ac1dc23b105] = env->getMethodID(cls, "negativeOrNull", "()Z");
          mids$[mid_newInstance_2b93193437c3f00d] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_844df78cba5c1168] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_a714269abf022321] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_3dbae42c27edb89e] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_757f32f1791cffc4] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_026cdd2d1c22b25b] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_a276979b31da24ca] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_8efd31d061954170] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/DfpField;Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_65a23ba49b68f64d] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_a714269abf022321] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_positiveOrNull_9ab94ac1dc23b105] = env->getMethodID(cls, "positiveOrNull", "()Z");
          mids$[mid_pow_a714269abf022321] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_757f32f1791cffc4] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_026cdd2d1c22b25b] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10_026cdd2d1c22b25b] = env->getMethodID(cls, "power10", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10K_026cdd2d1c22b25b] = env->getMethodID(cls, "power10K", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_reciprocal_2b93193437c3f00d] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_a714269abf022321] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_757f32f1791cffc4] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rint_2b93193437c3f00d] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rootN_026cdd2d1c22b25b] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_scalb_026cdd2d1c22b25b] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sign_2b93193437c3f00d] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_2b93193437c3f00d] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_2b93193437c3f00d] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_2b93193437c3f00d] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_strictlyNegative_9ab94ac1dc23b105] = env->getMethodID(cls, "strictlyNegative", "()Z");
          mids$[mid_strictlyPositive_9ab94ac1dc23b105] = env->getMethodID(cls, "strictlyPositive", "()Z");
          mids$[mid_subtract_a714269abf022321] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_subtract_757f32f1791cffc4] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_2b93193437c3f00d] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tanh_2b93193437c3f00d] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDegrees_2b93193437c3f00d] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDouble_b74f83833fdad017] = env->getMethodID(cls, "toDouble", "()D");
          mids$[mid_toRadians_2b93193437c3f00d] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toSplitDouble_25e1757a36c4dde2] = env->getMethodID(cls, "toSplitDouble", "()[D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_2b93193437c3f00d] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_unequal_7df7f60b9abe67da] = env->getMethodID(cls, "unequal", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_shiftRight_a1fa5dae97ea5ed2] = env->getMethodID(cls, "shiftRight", "()V");
          mids$[mid_align_0e7cf35192c3effe] = env->getMethodID(cls, "align", "(I)I");
          mids$[mid_trunc_35d0839807afb655] = env->getMethodID(cls, "trunc", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dfp2sci_1c1fa1e935d6cdcf] = env->getMethodID(cls, "dfp2sci", "()Ljava/lang/String;");
          mids$[mid_dfp2string_1c1fa1e935d6cdcf] = env->getMethodID(cls, "dfp2string", "()Ljava/lang/String;");
          mids$[mid_trap_f48337930e947ce9] = env->getMethodID(cls, "trap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_complement_0e7cf35192c3effe] = env->getMethodID(cls, "complement", "(I)I");
          mids$[mid_shiftLeft_a1fa5dae97ea5ed2] = env->getMethodID(cls, "shiftLeft", "()V");
          mids$[mid_round_0e7cf35192c3effe] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ERR_SCALE = env->getStaticIntField(cls, "ERR_SCALE");
          FINITE = env->getStaticByteField(cls, "FINITE");
          INFINITE$ = env->getStaticByteField(cls, "INFINITE");
          MAX_EXP = env->getStaticIntField(cls, "MAX_EXP");
          MIN_EXP = env->getStaticIntField(cls, "MIN_EXP");
          QNAN = env->getStaticByteField(cls, "QNAN");
          RADIX = env->getStaticIntField(cls, "RADIX");
          SNAN$ = env->getStaticByteField(cls, "SNAN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Dfp Dfp::abs() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_abs_2b93193437c3f00d]));
      }

      Dfp Dfp::acos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acos_2b93193437c3f00d]));
      }

      Dfp Dfp::acosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acosh_2b93193437c3f00d]));
      }

      Dfp Dfp::add(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_a714269abf022321], a0.this$));
      }

      Dfp Dfp::add(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_757f32f1791cffc4], a0));
      }

      Dfp Dfp::asin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asin_2b93193437c3f00d]));
      }

      Dfp Dfp::asinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asinh_2b93193437c3f00d]));
      }

      Dfp Dfp::atan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan_2b93193437c3f00d]));
      }

      Dfp Dfp::atan2(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan2_a714269abf022321], a0.this$));
      }

      Dfp Dfp::atanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atanh_2b93193437c3f00d]));
      }

      Dfp Dfp::cbrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cbrt_2b93193437c3f00d]));
      }

      Dfp Dfp::ceil() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ceil_2b93193437c3f00d]));
      }

      jint Dfp::classify() const
      {
        return env->callIntMethod(this$, mids$[mid_classify_55546ef6a647f39b]);
      }

      Dfp Dfp::copySign(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_a714269abf022321], a0.this$));
      }

      Dfp Dfp::copySign(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_757f32f1791cffc4], a0));
      }

      Dfp Dfp::copysign(const Dfp & a0, const Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Dfp(env->callStaticObjectMethod(cls, mids$[mid_copysign_cd2054800f3587f2], a0.this$, a1.this$));
      }

      Dfp Dfp::cos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cos_2b93193437c3f00d]));
      }

      Dfp Dfp::cosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cosh_2b93193437c3f00d]));
      }

      Dfp Dfp::divide(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_a714269abf022321], a0.this$));
      }

      Dfp Dfp::divide(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_757f32f1791cffc4], a0));
      }

      Dfp Dfp::divide(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::dotrap(jint a0, const ::java::lang::String & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_dotrap_05168b982b23240b], a0, a1.this$, a2.this$, a3.this$));
      }

      jboolean Dfp::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      Dfp Dfp::exp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_exp_2b93193437c3f00d]));
      }

      Dfp Dfp::expm1() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_expm1_2b93193437c3f00d]));
      }

      Dfp Dfp::floor() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_floor_2b93193437c3f00d]));
      }

      jint Dfp::getExponent() const
      {
        return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
      }

      ::org::hipparchus::dfp::DfpField Dfp::getField() const
      {
        return ::org::hipparchus::dfp::DfpField(env->callObjectMethod(this$, mids$[mid_getField_ee1a1cb642795f5d]));
      }

      Dfp Dfp::getOne() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getOne_2b93193437c3f00d]));
      }

      Dfp Dfp::getPi() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getPi_2b93193437c3f00d]));
      }

      jint Dfp::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_55546ef6a647f39b]);
      }

      jdouble Dfp::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      Dfp Dfp::getTwo() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_2b93193437c3f00d]));
      }

      Dfp Dfp::getZero() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getZero_2b93193437c3f00d]));
      }

      jboolean Dfp::greaterThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_greaterThan_7df7f60b9abe67da], a0.this$);
      }

      jint Dfp::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      Dfp Dfp::hypot(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_hypot_a714269abf022321], a0.this$));
      }

      jint Dfp::intLog10() const
      {
        return env->callIntMethod(this$, mids$[mid_intLog10_55546ef6a647f39b]);
      }

      jint Dfp::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
      }

      jboolean Dfp::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      jboolean Dfp::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
      }

      jboolean Dfp::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_9ab94ac1dc23b105]);
      }

      jboolean Dfp::lessThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_lessThan_7df7f60b9abe67da], a0.this$);
      }

      Dfp Dfp::linearCombination(const JArray< jdouble > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_977d9dd11ccd3173], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const JArray< Dfp > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_bff307fe0b833d14], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_a2c478fc8981d5b7], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_e222379307dd4b32], a0, a1.this$, a2, a3.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_cfdac956e821ce46], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_ef1588c94af8b0ba], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5, const Dfp & a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_d5ca073f5e9a873b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5, jdouble a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_c9179c24e516b4e9], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Dfp Dfp::log() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log_2b93193437c3f00d]));
      }

      Dfp Dfp::log10() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log10_2b93193437c3f00d]));
      }

      jint Dfp::log10K() const
      {
        return env->callIntMethod(this$, mids$[mid_log10K_55546ef6a647f39b]);
      }

      Dfp Dfp::log1p() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log1p_2b93193437c3f00d]));
      }

      Dfp Dfp::multiply(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_a714269abf022321], a0.this$));
      }

      Dfp Dfp::multiply(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_757f32f1791cffc4], a0));
      }

      Dfp Dfp::multiply(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::negate() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_negate_2b93193437c3f00d]));
      }

      jboolean Dfp::negativeOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_negativeOrNull_9ab94ac1dc23b105]);
      }

      Dfp Dfp::newInstance() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_2b93193437c3f00d]));
      }

      Dfp Dfp::newInstance(const ::java::lang::String & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_844df78cba5c1168], a0.this$));
      }

      Dfp Dfp::newInstance(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_a714269abf022321], a0.this$));
      }

      Dfp Dfp::newInstance(jbyte a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_3dbae42c27edb89e], a0));
      }

      Dfp Dfp::newInstance(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_757f32f1791cffc4], a0));
      }

      Dfp Dfp::newInstance(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::newInstance(jlong a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_a276979b31da24ca], a0));
      }

      Dfp Dfp::newInstance(const ::org::hipparchus::dfp::DfpField & a0, const ::org::hipparchus::dfp::DfpField$RoundingMode & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_8efd31d061954170], a0.this$, a1.this$));
      }

      Dfp Dfp::newInstance(jbyte a0, jbyte a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_65a23ba49b68f64d], a0, a1));
      }

      Dfp Dfp::nextAfter(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_a714269abf022321], a0.this$));
      }

      jboolean Dfp::positiveOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_positiveOrNull_9ab94ac1dc23b105]);
      }

      Dfp Dfp::pow(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_a714269abf022321], a0.this$));
      }

      Dfp Dfp::pow(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_757f32f1791cffc4], a0));
      }

      Dfp Dfp::pow(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::power10(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::power10K(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10K_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::reciprocal() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_reciprocal_2b93193437c3f00d]));
      }

      Dfp Dfp::remainder(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_a714269abf022321], a0.this$));
      }

      Dfp Dfp::remainder(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_757f32f1791cffc4], a0));
      }

      Dfp Dfp::rint() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rint_2b93193437c3f00d]));
      }

      Dfp Dfp::rootN(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rootN_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::scalb(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_scalb_026cdd2d1c22b25b], a0));
      }

      Dfp Dfp::sign() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sign_2b93193437c3f00d]));
      }

      Dfp Dfp::sin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sin_2b93193437c3f00d]));
      }

      ::org::hipparchus::util::FieldSinCos Dfp::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
      }

      Dfp Dfp::sinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sinh_2b93193437c3f00d]));
      }

      ::org::hipparchus::util::FieldSinhCosh Dfp::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
      }

      Dfp Dfp::sqrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sqrt_2b93193437c3f00d]));
      }

      jboolean Dfp::strictlyNegative() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyNegative_9ab94ac1dc23b105]);
      }

      jboolean Dfp::strictlyPositive() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyPositive_9ab94ac1dc23b105]);
      }

      Dfp Dfp::subtract(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_a714269abf022321], a0.this$));
      }

      Dfp Dfp::subtract(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_757f32f1791cffc4], a0));
      }

      Dfp Dfp::tan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tan_2b93193437c3f00d]));
      }

      Dfp Dfp::tanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tanh_2b93193437c3f00d]));
      }

      Dfp Dfp::toDegrees() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toDegrees_2b93193437c3f00d]));
      }

      jdouble Dfp::toDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_toDouble_b74f83833fdad017]);
      }

      Dfp Dfp::toRadians() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toRadians_2b93193437c3f00d]));
      }

      JArray< jdouble > Dfp::toSplitDouble() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toSplitDouble_25e1757a36c4dde2]));
      }

      ::java::lang::String Dfp::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      Dfp Dfp::ulp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ulp_2b93193437c3f00d]));
      }

      jboolean Dfp::unequal(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_unequal_7df7f60b9abe67da], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_abs(t_Dfp *self);
      static PyObject *t_Dfp_acos(t_Dfp *self);
      static PyObject *t_Dfp_acosh(t_Dfp *self);
      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_asin(t_Dfp *self);
      static PyObject *t_Dfp_asinh(t_Dfp *self);
      static PyObject *t_Dfp_atan(t_Dfp *self);
      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_atanh(t_Dfp *self);
      static PyObject *t_Dfp_cbrt(t_Dfp *self);
      static PyObject *t_Dfp_ceil(t_Dfp *self);
      static PyObject *t_Dfp_classify(t_Dfp *self);
      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args);
      static PyObject *t_Dfp_cos(t_Dfp *self);
      static PyObject *t_Dfp_cosh(t_Dfp *self);
      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_exp(t_Dfp *self);
      static PyObject *t_Dfp_expm1(t_Dfp *self);
      static PyObject *t_Dfp_floor(t_Dfp *self);
      static PyObject *t_Dfp_getExponent(t_Dfp *self);
      static PyObject *t_Dfp_getField(t_Dfp *self);
      static PyObject *t_Dfp_getOne(t_Dfp *self);
      static PyObject *t_Dfp_getPi(t_Dfp *self);
      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self);
      static PyObject *t_Dfp_getReal(t_Dfp *self);
      static PyObject *t_Dfp_getTwo(t_Dfp *self);
      static PyObject *t_Dfp_getZero(t_Dfp *self);
      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_intLog10(t_Dfp *self);
      static PyObject *t_Dfp_intValue(t_Dfp *self);
      static PyObject *t_Dfp_isInfinite(t_Dfp *self);
      static PyObject *t_Dfp_isNaN(t_Dfp *self);
      static PyObject *t_Dfp_isZero(t_Dfp *self);
      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_log(t_Dfp *self);
      static PyObject *t_Dfp_log10(t_Dfp *self);
      static PyObject *t_Dfp_log10K(t_Dfp *self);
      static PyObject *t_Dfp_log1p(t_Dfp *self);
      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_negate(t_Dfp *self);
      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self);
      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self);
      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_reciprocal(t_Dfp *self);
      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_rint(t_Dfp *self);
      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_sign(t_Dfp *self);
      static PyObject *t_Dfp_sin(t_Dfp *self);
      static PyObject *t_Dfp_sinCos(t_Dfp *self);
      static PyObject *t_Dfp_sinh(t_Dfp *self);
      static PyObject *t_Dfp_sinhCosh(t_Dfp *self);
      static PyObject *t_Dfp_sqrt(t_Dfp *self);
      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self);
      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self);
      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_tan(t_Dfp *self);
      static PyObject *t_Dfp_tanh(t_Dfp *self);
      static PyObject *t_Dfp_toDegrees(t_Dfp *self);
      static PyObject *t_Dfp_toDouble(t_Dfp *self);
      static PyObject *t_Dfp_toRadians(t_Dfp *self);
      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self);
      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_ulp(t_Dfp *self);
      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data);
      static PyGetSetDef t_Dfp__fields_[] = {
        DECLARE_GET_FIELD(t_Dfp, exponent),
        DECLARE_GET_FIELD(t_Dfp, field),
        DECLARE_GET_FIELD(t_Dfp, infinite),
        DECLARE_GET_FIELD(t_Dfp, naN),
        DECLARE_GET_FIELD(t_Dfp, one),
        DECLARE_GET_FIELD(t_Dfp, pi),
        DECLARE_GET_FIELD(t_Dfp, radixDigits),
        DECLARE_GET_FIELD(t_Dfp, real),
        DECLARE_GET_FIELD(t_Dfp, two),
        DECLARE_GET_FIELD(t_Dfp, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Dfp__methods_[] = {
        DECLARE_METHOD(t_Dfp, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, abs, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, add, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, asin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan2, METH_O),
        DECLARE_METHOD(t_Dfp, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, classify, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, copysign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Dfp, cos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, divide, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, dotrap, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, equals, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, exp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, floor, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getExponent, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getField, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, greaterThan, METH_O),
        DECLARE_METHOD(t_Dfp, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, hypot, METH_O),
        DECLARE_METHOD(t_Dfp, intLog10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, intValue, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, lessThan, METH_O),
        DECLARE_METHOD(t_Dfp, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, log, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10K, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, negate, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, negativeOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, nextAfter, METH_O),
        DECLARE_METHOD(t_Dfp, positiveOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, pow, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, power10, METH_O),
        DECLARE_METHOD(t_Dfp, power10K, METH_O),
        DECLARE_METHOD(t_Dfp, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, rint, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, rootN, METH_O),
        DECLARE_METHOD(t_Dfp, scalb, METH_O),
        DECLARE_METHOD(t_Dfp, sign, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyNegative, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyPositive, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, tan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toSplitDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toString, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, unequal, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Dfp)[] = {
        { Py_tp_methods, t_Dfp__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Dfp__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Dfp)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Dfp, t_Dfp, Dfp);

      void t_Dfp::install(PyObject *module)
      {
        installType(&PY_TYPE(Dfp), &PY_TYPE_DEF(Dfp), module, "Dfp", 0);
      }

      void t_Dfp::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "class_", make_descriptor(Dfp::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "wrapfn_", make_descriptor(t_Dfp::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "boxfn_", make_descriptor(boxObject));
        env->getClass(Dfp::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "ERR_SCALE", make_descriptor(Dfp::ERR_SCALE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "FINITE", make_descriptor(Dfp::FINITE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "INFINITE", make_descriptor(Dfp::INFINITE$));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MAX_EXP", make_descriptor(Dfp::MAX_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MIN_EXP", make_descriptor(Dfp::MIN_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "QNAN", make_descriptor(Dfp::QNAN));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "RADIX", make_descriptor(Dfp::RADIX));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "SNAN", make_descriptor(Dfp::SNAN$));
      }

      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Dfp::initializeClass, 1)))
          return NULL;
        return t_Dfp::wrap_Object(Dfp(((t_Dfp *) arg)->object.this$));
      }
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Dfp::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Dfp_abs(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Dfp_asin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_asinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Dfp_atanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cbrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_ceil(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_classify(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.classify());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args)
      {
        Dfp a0((jobject) NULL);
        Dfp a1((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::Dfp::copysign(a0, a1));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "copysign", args);
        return NULL;
      }

      static PyObject *t_Dfp_cos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args)
      {
        jint a0;
        ::java::lang::String a1((jobject) NULL);
        Dfp a2((jobject) NULL);
        Dfp a3((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "Iskk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.dotrap(a0, a1, a2, a3));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotrap", args);
        return NULL;
      }

      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Dfp_exp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_expm1(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_floor(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getExponent(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getExponent());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getField(t_Dfp *self)
      {
        ::org::hipparchus::dfp::DfpField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(result);
      }

      static PyObject *t_Dfp_getOne(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getPi(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getReal(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_getTwo(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getZero(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.greaterThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "greaterThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Dfp_intLog10(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intLog10());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_intValue(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_isInfinite(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isNaN(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isZero(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.lessThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "lessThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            JArray< Dfp > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp a6((jobject) NULL);
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            jdouble a6;
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Dfp_log(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10K(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.log10K());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_log1p(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Dfp_negate(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.negativeOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::dfp::DfpField a0((jobject) NULL);
            ::org::hipparchus::dfp::DfpField$RoundingMode a1((jobject) NULL);
            PyTypeObject **p1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::hipparchus::dfp::DfpField::initializeClass, ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            jbyte a1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", args);
        return NULL;
      }

      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextAfter", arg);
        return NULL;
      }

      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.positiveOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10", arg);
        return NULL;
      }

      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10K(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10K", arg);
        return NULL;
      }

      static PyObject *t_Dfp_reciprocal(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Dfp_rint(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Dfp_sign(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinCos(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinhCosh(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sqrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyNegative());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyPositive());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Dfp_tan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_tanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDegrees(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDouble(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.toDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_toRadians(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toSplitDouble());
        return result.wrap();
      }

      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Dfp_ulp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.unequal(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "unequal", arg);
        return NULL;
      }

      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getExponent());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/FDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *FDistribution::class$ = NULL;
        jmethodID *FDistribution::mids$ = NULL;
        bool FDistribution::live$ = false;

        jclass FDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/FDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDenominatorDegreesOfFreedom_b74f83833fdad017] = env->getMethodID(cls, "getDenominatorDegreesOfFreedom", "()D");
            mids$[mid_getNumeratorDegreesOfFreedom_b74f83833fdad017] = env->getMethodID(cls, "getNumeratorDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDistribution::FDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        FDistribution::FDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble FDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble FDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble FDistribution::getDenominatorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDenominatorDegreesOfFreedom_b74f83833fdad017]);
        }

        jdouble FDistribution::getNumeratorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumeratorDegreesOfFreedom_b74f83833fdad017]);
        }

        jdouble FDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble FDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble FDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble FDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean FDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble FDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data);
        static PyGetSetDef t_FDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_FDistribution, denominatorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numeratorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numericalMean),
          DECLARE_GET_FIELD(t_FDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_FDistribution, supportConnected),
          DECLARE_GET_FIELD(t_FDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_FDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDistribution__methods_[] = {
          DECLARE_METHOD(t_FDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getDenominatorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumeratorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDistribution)[] = {
          { Py_tp_methods, t_FDistribution__methods_ },
          { Py_tp_init, (void *) t_FDistribution_init_ },
          { Py_tp_getset, t_FDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(FDistribution, t_FDistribution, FDistribution);

        void t_FDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(FDistribution), &PY_TYPE_DEF(FDistribution), module, "FDistribution", 0);
        }

        void t_FDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "class_", make_descriptor(FDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "wrapfn_", make_descriptor(t_FDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDistribution::initializeClass, 1)))
            return NULL;
          return t_FDistribution::wrap_Object(FDistribution(((t_FDistribution *) arg)->object.this$));
        }
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = FDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = FDistribution(a0, a1, a2));
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

        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadata::mids$ = NULL;
              bool AttitudeStateHistoryMetadata::live$ = false;

              jclass AttitudeStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAttBasis_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAttBasis", "()Ljava/lang/String;");
                  mids$[mid_getAttBasisID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAttBasisID", "()Ljava/lang/String;");
                  mids$[mid_getAttID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAttID", "()Ljava/lang/String;");
                  mids$[mid_getAttPrevID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAttPrevID", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeType_53d1d57d6e9487ac] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getEndpoints_c60ad1d207bc8e06] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_513511eeab1350d5] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getNbStates_55546ef6a647f39b] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getRateType_7f391c24fe2095f0] = env->getMethodID(cls, "getRateType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_setAttBasis_734b91ac30d5f9b4] = env->getMethodID(cls, "setAttBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setAttBasisID_734b91ac30d5f9b4] = env->getMethodID(cls, "setAttBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttID_734b91ac30d5f9b4] = env->getMethodID(cls, "setAttID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttPrevID_734b91ac30d5f9b4] = env->getMethodID(cls, "setAttPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeType_2fd9a6a10148e91b] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setEulerRotSeq_062f1951e591952f] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setNbStates_44ed599e93e8a30c] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setRateType_6e45359e1a7bacd4] = env->getMethodID(cls, "setRateType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistoryMetadata::AttitudeStateHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasis_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttBasisID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AttitudeStateHistoryMetadata::getAttPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttPrevID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeStateHistoryMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_53d1d57d6e9487ac]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeStateHistoryMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c60ad1d207bc8e06]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeStateHistoryMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_513511eeab1350d5]));
              }

              jint AttitudeStateHistoryMetadata::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_55546ef6a647f39b]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeStateHistoryMetadata::getRateType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateType_7f391c24fe2095f0]));
              }

              void AttitudeStateHistoryMetadata::setAttBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasis_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttBasisID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttPrevID_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_2fd9a6a10148e91b], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_062f1951e591952f], a0.this$);
              }

              void AttitudeStateHistoryMetadata::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_44ed599e93e8a30c], a0);
              }

              void AttitudeStateHistoryMetadata::setRateType(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateType_6e45359e1a7bacd4], a0.this$);
              }

              void AttitudeStateHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data);
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasis),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeStateHistoryMetadata, rateType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, getRateType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasis, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, setRateType, METH_O),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadata, t_AttitudeStateHistoryMetadata, AttitudeStateHistoryMetadata);

              void t_AttitudeStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadata), &PY_TYPE_DEF(AttitudeStateHistoryMetadata), module, "AttitudeStateHistoryMetadata", 0);
              }

              void t_AttitudeStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "class_", make_descriptor(AttitudeStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadata::wrap_Object(AttitudeStateHistoryMetadata(((t_AttitudeStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistoryMetadata_init_(t_AttitudeStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeStateHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeStateHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasis(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttBasisID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttPrevID(t_AttitudeStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getAttitudeType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEndpoints(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getEulerRotSeq(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getNbStates(t_AttitudeStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_getRateType(t_AttitudeStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setAttitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setEulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setNbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_setRateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_validate(t_AttitudeStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasis(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasis());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasis(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attBasisID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttBasisID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attBasisID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attPrevID(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttPrevID());
                return j2p(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attPrevID(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__attitudeType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__attitudeType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__endpoints(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__eulerRotSeq(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__nbStates(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeStateHistoryMetadata_set__nbStates(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeStateHistoryMetadata_get__rateType(t_AttitudeStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeStateHistoryMetadata_set__rateType(t_AttitudeStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateType", arg);
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
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldTheta::class$ = NULL;
          jmethodID *FieldTheta::mids$ = NULL;
          bool FieldTheta::live$ = false;

          jclass FieldTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_81520b552cb3fa26] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta2_81520b552cb3fa26] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta3_81520b552cb3fa26] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta4_81520b552cb3fa26] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta1_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta2_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta3_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta4() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta4_81520b552cb3fa26]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args);
          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self);
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data);
          static PyGetSetDef t_FieldTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTheta__methods_[] = {
            DECLARE_METHOD(t_FieldTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTheta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTheta)[] = {
            { Py_tp_methods, t_FieldTheta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTheta, t_FieldTheta, FieldTheta);
          PyObject *t_FieldTheta::wrap_Object(const FieldTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTheta), &PY_TYPE_DEF(FieldTheta), module, "FieldTheta", 0);
          }

          void t_FieldTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "class_", make_descriptor(FieldTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "wrapfn_", make_descriptor(t_FieldTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTheta::initializeClass, 1)))
              return NULL;
            return t_FieldTheta::wrap_Object(FieldTheta(((t_FieldTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSAlmanac::class$ = NULL;
            jmethodID *IRNSSAlmanac::mids$ = NULL;
            bool IRNSSAlmanac::live$ = false;

            jclass IRNSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_setSqrtA_8ba9fe7a847cecad] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSAlmanac::IRNSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void IRNSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_8ba9fe7a847cecad], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg);
            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_IRNSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_IRNSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSAlmanac)[] = {
              { Py_tp_methods, t_IRNSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_IRNSSAlmanac_init_ },
              { Py_tp_getset, t_IRNSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(IRNSSAlmanac, t_IRNSSAlmanac, IRNSSAlmanac);

            void t_IRNSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSAlmanac), &PY_TYPE_DEF(IRNSSAlmanac), module, "IRNSSAlmanac", 0);
            }

            void t_IRNSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "class_", make_descriptor(IRNSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "wrapfn_", make_descriptor(t_IRNSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_IRNSSAlmanac::wrap_Object(IRNSSAlmanac(((t_IRNSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              IRNSSAlmanac object((jobject) NULL);

              INT_CALL(object = IRNSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLE::class$ = NULL;
          jmethodID *TLE::mids$ = NULL;
          bool TLE::live$ = false;
          ::java::lang::String *TLE::B_STAR = NULL;
          jint TLE::DEFAULT = (jint) 0;
          jint TLE::SDP4 = (jint) 0;
          jint TLE::SDP8 = (jint) 0;
          jint TLE::SGP = (jint) 0;
          jint TLE::SGP4 = (jint) 0;
          jint TLE::SGP8 = (jint) 0;

          jclass TLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_4f379502d89f9700] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_4b8b0d91b33443f2] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDID)V");
              mids$[mid_init$_aac91b87b74d17d7] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDIDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_b74f83833fdad017] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getBStar_fd347811007a6ba3] = env->getMethodID(cls, "getBStar", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getClassification_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getElementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_55546ef6a647f39b] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
              mids$[mid_getLaunchNumber_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_b74f83833fdad017] = env->getMethodID(cls, "getMeanAnomaly", "()D");
              mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
              mids$[mid_getMeanMotionFirstDerivative_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()D");
              mids$[mid_getMeanMotionSecondDerivative_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()D");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_b74f83833fdad017] = env->getMethodID(cls, "getPerigeeArgument", "()D");
              mids$[mid_getRaan_b74f83833fdad017] = env->getMethodID(cls, "getRaan", "()D");
              mids$[mid_getRevolutionNumberAtEpoch_55546ef6a647f39b] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_getUtc_34d3bda0a8989e3e] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_e7bf5b93f9300a4f] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_2322846e1dcb232d] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f379502d89f9700, a0.this$, a1.this$, a2.this$)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b8b0d91b33443f2, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aac91b87b74d17d7, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18.this$)) {}

          jboolean TLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jdouble TLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_b74f83833fdad017]);
          }

          jdouble TLE::getBStar(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_fd347811007a6ba3], a0.this$);
          }

          jchar TLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_5e2f8fc4d7c03fbd]);
          }

          ::org::orekit::time::AbsoluteDate TLE::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
          }

          jdouble TLE::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
          }

          jint TLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_55546ef6a647f39b]);
          }

          jint TLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_55546ef6a647f39b]);
          }

          jdouble TLE::getI() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
          }

          jint TLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_55546ef6a647f39b]);
          }

          ::java::lang::String TLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf]));
          }

          jint TLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_55546ef6a647f39b]);
          }

          ::java::lang::String TLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String TLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_1c1fa1e935d6cdcf]));
          }

          jdouble TLE::getMeanAnomaly() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_b74f83833fdad017]);
          }

          jdouble TLE::getMeanMotion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
          }

          jdouble TLE::getMeanMotionFirstDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionFirstDerivative_b74f83833fdad017]);
          }

          jdouble TLE::getMeanMotionSecondDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionSecondDerivative_b74f83833fdad017]);
          }

          ::java::util::List TLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jdouble TLE::getPerigeeArgument() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_b74f83833fdad017]);
          }

          jdouble TLE::getRaan() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRaan_b74f83833fdad017]);
          }

          jint TLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_55546ef6a647f39b]);
          }

          jint TLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_55546ef6a647f39b]);
          }

          ::org::orekit::time::TimeScale TLE::getUtc() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUtc_34d3bda0a8989e3e]));
          }

          jint TLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean TLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_e7bf5b93f9300a4f], a0.this$, a1.this$);
          }

          TLE TLE::stateToTLE(const ::org::orekit::propagation::SpacecraftState & a0, const TLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_2322846e1dcb232d], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String TLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      namespace analytical {
        namespace tle {
          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getClassification(t_TLE *self);
          static PyObject *t_TLE_getDate(t_TLE *self);
          static PyObject *t_TLE_getE(t_TLE *self);
          static PyObject *t_TLE_getElementNumber(t_TLE *self);
          static PyObject *t_TLE_getEphemerisType(t_TLE *self);
          static PyObject *t_TLE_getI(t_TLE *self);
          static PyObject *t_TLE_getLaunchNumber(t_TLE *self);
          static PyObject *t_TLE_getLaunchPiece(t_TLE *self);
          static PyObject *t_TLE_getLaunchYear(t_TLE *self);
          static PyObject *t_TLE_getLine1(t_TLE *self);
          static PyObject *t_TLE_getLine2(t_TLE *self);
          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self);
          static PyObject *t_TLE_getMeanMotion(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self);
          static PyObject *t_TLE_getParametersDrivers(t_TLE *self);
          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self);
          static PyObject *t_TLE_getRaan(t_TLE *self);
          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self);
          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self);
          static PyObject *t_TLE_getUtc(t_TLE *self);
          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data);
          static PyObject *t_TLE_get__classification(t_TLE *self, void *data);
          static PyObject *t_TLE_get__date(t_TLE *self, void *data);
          static PyObject *t_TLE_get__e(t_TLE *self, void *data);
          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data);
          static PyObject *t_TLE_get__i(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line1(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line2(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data);
          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data);
          static PyObject *t_TLE_get__raan(t_TLE *self, void *data);
          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data);
          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__utc(t_TLE *self, void *data);
          static PyGetSetDef t_TLE__fields_[] = {
            DECLARE_GET_FIELD(t_TLE, bStar),
            DECLARE_GET_FIELD(t_TLE, classification),
            DECLARE_GET_FIELD(t_TLE, date),
            DECLARE_GET_FIELD(t_TLE, e),
            DECLARE_GET_FIELD(t_TLE, elementNumber),
            DECLARE_GET_FIELD(t_TLE, ephemerisType),
            DECLARE_GET_FIELD(t_TLE, i),
            DECLARE_GET_FIELD(t_TLE, launchNumber),
            DECLARE_GET_FIELD(t_TLE, launchPiece),
            DECLARE_GET_FIELD(t_TLE, launchYear),
            DECLARE_GET_FIELD(t_TLE, line1),
            DECLARE_GET_FIELD(t_TLE, line2),
            DECLARE_GET_FIELD(t_TLE, meanAnomaly),
            DECLARE_GET_FIELD(t_TLE, meanMotion),
            DECLARE_GET_FIELD(t_TLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_TLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_TLE, parametersDrivers),
            DECLARE_GET_FIELD(t_TLE, perigeeArgument),
            DECLARE_GET_FIELD(t_TLE, raan),
            DECLARE_GET_FIELD(t_TLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_TLE, satelliteNumber),
            DECLARE_GET_FIELD(t_TLE, utc),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLE__methods_[] = {
            DECLARE_METHOD(t_TLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getBStar, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getUtc, METH_NOARGS),
            DECLARE_METHOD(t_TLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_TLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLE)[] = {
            { Py_tp_methods, t_TLE__methods_ },
            { Py_tp_init, (void *) t_TLE_init_ },
            { Py_tp_getset, t_TLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLE, t_TLE, TLE);

          void t_TLE::install(PyObject *module)
          {
            installType(&PY_TYPE(TLE), &PY_TYPE_DEF(TLE), module, "TLE", 0);
          }

          void t_TLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "class_", make_descriptor(TLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "wrapfn_", make_descriptor(t_TLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "B_STAR", make_descriptor(j2p(*TLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "DEFAULT", make_descriptor(TLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP4", make_descriptor(TLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP8", make_descriptor(TLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP", make_descriptor(TLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP4", make_descriptor(TLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP8", make_descriptor(TLE::SGP8));
          }

          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLE::initializeClass, 1)))
              return NULL;
            return t_TLE::wrap_Object(TLE(((t_TLE *) arg)->object.this$));
          }
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = TLE(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = TLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDIDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getBStar(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBStar", args);
            return NULL;
          }

          static PyObject *t_TLE_getClassification(t_TLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_TLE_getDate(t_TLE *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TLE_getE(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getElementNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getEphemerisType(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getI(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getLaunchNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLaunchPiece(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_TLE_getLaunchYear(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLine1(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_TLE_getLine2(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotion(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getParametersDrivers(t_TLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRaan(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRaan());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getUtc(t_TLE *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            TLE a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            TLE result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, TLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::stateToTLE(a0, a1, a2));
              return t_TLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__classification(t_TLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_TLE_get__date(t_TLE *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TLE_get__e(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__i(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__line1(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_TLE_get__line2(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__raan(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRaan());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__utc(t_TLE *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *S2Point::class$ = NULL;
          jmethodID *S2Point::mids$ = NULL;
          bool S2Point::live$ = false;
          S2Point *S2Point::MINUS_I = NULL;
          S2Point *S2Point::MINUS_J = NULL;
          S2Point *S2Point::MINUS_K = NULL;
          S2Point *S2Point::NaN = NULL;
          S2Point *S2Point::PLUS_I = NULL;
          S2Point *S2Point::PLUS_J = NULL;
          S2Point *S2Point::PLUS_K = NULL;

          jclass S2Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/S2Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1844f891addbac57] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_distance_f0dd8cb59ea09794] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_76f75333fe7fe00c] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)D");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_460c5e2d9d51c6cc] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getPhi_b74f83833fdad017] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getTheta_b74f83833fdad017] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_getVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_cf0fa877996d1fcc] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new S2Point(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_J = new S2Point(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_K = new S2Point(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              NaN = new S2Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_I = new S2Point(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_J = new S2Point(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_K = new S2Point(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S2Point::S2Point(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1844f891addbac57, a0.this$)) {}

          S2Point::S2Point(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

          jdouble S2Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f0dd8cb59ea09794], a0.this$);
          }

          jdouble S2Point::distance(const S2Point & a0, const S2Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_76f75333fe7fe00c], a0.this$, a1.this$);
          }

          jboolean S2Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jboolean S2Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_460c5e2d9d51c6cc], a0.this$);
          }

          jdouble S2Point::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::Space S2Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_9afbccb68c8e9ef8]));
          }

          jdouble S2Point::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D S2Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVector_8b724f8b4fdad1a2]));
          }

          jint S2Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean S2Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
          }

          S2Point S2Point::negate() const
          {
            return S2Point(env->callObjectMethod(this$, mids$[mid_negate_cf0fa877996d1fcc]));
          }

          ::java::lang::String S2Point::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_getPhi(t_S2Point *self);
          static PyObject *t_S2Point_getSpace(t_S2Point *self);
          static PyObject *t_S2Point_getTheta(t_S2Point *self);
          static PyObject *t_S2Point_getVector(t_S2Point *self);
          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_isNaN(t_S2Point *self);
          static PyObject *t_S2Point_negate(t_S2Point *self);
          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data);
          static PyGetSetDef t_S2Point__fields_[] = {
            DECLARE_GET_FIELD(t_S2Point, naN),
            DECLARE_GET_FIELD(t_S2Point, phi),
            DECLARE_GET_FIELD(t_S2Point, space),
            DECLARE_GET_FIELD(t_S2Point, theta),
            DECLARE_GET_FIELD(t_S2Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S2Point__methods_[] = {
            DECLARE_METHOD(t_S2Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, distance, METH_O),
            DECLARE_METHOD(t_S2Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S2Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S2Point, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, negate, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S2Point)[] = {
            { Py_tp_methods, t_S2Point__methods_ },
            { Py_tp_init, (void *) t_S2Point_init_ },
            { Py_tp_getset, t_S2Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S2Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S2Point, t_S2Point, S2Point);

          void t_S2Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S2Point), &PY_TYPE_DEF(S2Point), module, "S2Point", 0);
          }

          void t_S2Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "class_", make_descriptor(S2Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "wrapfn_", make_descriptor(t_S2Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S2Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "NaN", make_descriptor(t_S2Point::wrap_Object(*S2Point::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_K)));
          }

          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S2Point::initializeClass, 1)))
              return NULL;
            return t_S2Point::wrap_Object(S2Point(((t_S2Point *) arg)->object.this$));
          }
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S2Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = S2Point(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                jdouble a1;
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = S2Point(a0, a1));
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

          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S2Point a0((jobject) NULL);
            S2Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S2Point::initializeClass, S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::S2Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_S2Point_getPhi(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getSpace(t_S2Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S2Point_getTheta(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getVector(t_S2Point *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S2Point_isNaN(t_S2Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S2Point_negate(t_S2Point *self)
          {
            S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_S2Point::wrap_Object(result);
          }

          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace legendre {

          ::java::lang::Class *LegendreEllipticIntegral::class$ = NULL;
          jmethodID *LegendreEllipticIntegral::mids$ = NULL;
          bool LegendreEllipticIntegral::live$ = false;

          jclass LegendreEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_bigD_79e1cb20a2d72b1b] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_cfbd18691ba7b7af] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_04fd0666b613d2ab] = env->getStaticMethodID(cls, "bigD", "(D)D");
              mids$[mid_bigD_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigD_66a05841a47df944] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_ffc2a92390051f74] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_99e3200dafc19573] = env->getStaticMethodID(cls, "bigD", "(DD)D");
              mids$[mid_bigD_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_79e1cb20a2d72b1b] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_cfbd18691ba7b7af] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_04fd0666b613d2ab] = env->getStaticMethodID(cls, "bigE", "(D)D");
              mids$[mid_bigE_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_66a05841a47df944] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_ffc2a92390051f74] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_99e3200dafc19573] = env->getStaticMethodID(cls, "bigE", "(DD)D");
              mids$[mid_bigE_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_a0ed4332acd6e8ac] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_9543fd01614535b6] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_66a05841a47df944] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_ffc2a92390051f74] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_99e3200dafc19573] = env->getStaticMethodID(cls, "bigF", "(DD)D");
              mids$[mid_bigF_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigF_a0ed4332acd6e8ac] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_9543fd01614535b6] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_79e1cb20a2d72b1b] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigK_cfbd18691ba7b7af] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_04fd0666b613d2ab] = env->getStaticMethodID(cls, "bigK", "(D)D");
              mids$[mid_bigK_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigKPrime_79e1cb20a2d72b1b] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigKPrime_cfbd18691ba7b7af] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigKPrime_04fd0666b613d2ab] = env->getStaticMethodID(cls, "bigKPrime", "(D)D");
              mids$[mid_bigKPrime_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_66a05841a47df944] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_ffc2a92390051f74] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_99e3200dafc19573] = env->getStaticMethodID(cls, "bigPi", "(DD)D");
              mids$[mid_bigPi_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_ea3ba47e5616cb34] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_2ff0fd08cf0de215] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_f804f816b79164cb] = env->getStaticMethodID(cls, "bigPi", "(DDD)D");
              mids$[mid_bigPi_8a93710b1b1536a6] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_3851ac6b27a1f79b] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_d2220cc85eeddf4c] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_nome_04fd0666b613d2ab] = env->getStaticMethodID(cls, "nome", "(D)D");
              mids$[mid_nome_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "nome", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_79e1cb20a2d72b1b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_cfbd18691ba7b7af], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_04fd0666b613d2ab], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_66a05841a47df944], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_ffc2a92390051f74], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_99e3200dafc19573], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_c6408fdce2cc6c1a], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_79e1cb20a2d72b1b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_cfbd18691ba7b7af], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_04fd0666b613d2ab], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_66a05841a47df944], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_ffc2a92390051f74], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_99e3200dafc19573], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_c6408fdce2cc6c1a], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_a0ed4332acd6e8ac], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_9543fd01614535b6], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_66a05841a47df944], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_ffc2a92390051f74], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigF(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigF_99e3200dafc19573], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigF_c6408fdce2cc6c1a], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_a0ed4332acd6e8ac], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_9543fd01614535b6], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigK_79e1cb20a2d72b1b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigK_cfbd18691ba7b7af], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigK(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigK_04fd0666b613d2ab], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigK(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigK_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_79e1cb20a2d72b1b], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_cfbd18691ba7b7af], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigKPrime(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigKPrime_04fd0666b613d2ab], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_66a05841a47df944], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_ffc2a92390051f74], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_99e3200dafc19573], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_c6408fdce2cc6c1a], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_ea3ba47e5616cb34], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_2ff0fd08cf0de215], a0.this$, a1.this$, a2.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_f804f816b79164cb], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_3851ac6b27a1f79b], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_d2220cc85eeddf4c], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          jdouble LegendreEllipticIntegral::nome(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_nome_04fd0666b613d2ab], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::nome(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_nome_6e00dc5eb352fe51], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace legendre {
          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_LegendreEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_LegendreEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigKPrime, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigPi, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, nome, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreEllipticIntegral)[] = {
            { Py_tp_methods, t_LegendreEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LegendreEllipticIntegral, t_LegendreEllipticIntegral, LegendreEllipticIntegral);

          void t_LegendreEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreEllipticIntegral), &PY_TYPE_DEF(LegendreEllipticIntegral), module, "LegendreEllipticIntegral", 0);
          }

          void t_LegendreEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "class_", make_descriptor(LegendreEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "wrapfn_", make_descriptor(t_LegendreEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_LegendreEllipticIntegral::wrap_Object(LegendreEllipticIntegral(((t_LegendreEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigD", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigE", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigF", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigK", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigKPrime", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a3((jobject) NULL);
                jint a4;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a3((jobject) NULL);
                PyTypeObject **p3;
                jint a4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigPi", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "nome", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *AbstractEncodedMessage::class$ = NULL;
          jmethodID *AbstractEncodedMessage::mids$ = NULL;
          bool AbstractEncodedMessage::live$ = false;

          jclass AbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/AbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_f4947a88f79e0725] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_a1fa5dae97ea5ed2] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_55546ef6a647f39b] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractEncodedMessage::AbstractEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          jlong AbstractEncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_f4947a88f79e0725], a0);
          }

          void AbstractEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_a1fa5dae97ea5ed2]);
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
        namespace parser {
          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self);

          static PyMethodDef t_AbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_AbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_AbstractEncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractEncodedMessage)[] = {
            { Py_tp_methods, t_AbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_AbstractEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractEncodedMessage, t_AbstractEncodedMessage, AbstractEncodedMessage);

          void t_AbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractEncodedMessage), &PY_TYPE_DEF(AbstractEncodedMessage), module, "AbstractEncodedMessage", 0);
          }

          void t_AbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "class_", make_descriptor(AbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "wrapfn_", make_descriptor(t_AbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_AbstractEncodedMessage::wrap_Object(AbstractEncodedMessage(((t_AbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            AbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = AbstractEncodedMessage());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *ClockCorrection::class$ = NULL;
            jmethodID *ClockCorrection::mids$ = NULL;
            bool ClockCorrection::live$ = false;

            jclass ClockCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/ClockCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
                mids$[mid_getDeltaClockC0_b74f83833fdad017] = env->getMethodID(cls, "getDeltaClockC0", "()D");
                mids$[mid_getDeltaClockC1_b74f83833fdad017] = env->getMethodID(cls, "getDeltaClockC1", "()D");
                mids$[mid_getDeltaClockC2_b74f83833fdad017] = env->getMethodID(cls, "getDeltaClockC2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ClockCorrection::ClockCorrection(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

            jdouble ClockCorrection::getDeltaClockC0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC0_b74f83833fdad017]);
            }

            jdouble ClockCorrection::getDeltaClockC1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC1_b74f83833fdad017]);
            }

            jdouble ClockCorrection::getDeltaClockC2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC2_b74f83833fdad017]);
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
          namespace common {
            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data);
            static PyGetSetDef t_ClockCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC0),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC1),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ClockCorrection__methods_[] = {
              DECLARE_METHOD(t_ClockCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC0, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC1, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ClockCorrection)[] = {
              { Py_tp_methods, t_ClockCorrection__methods_ },
              { Py_tp_init, (void *) t_ClockCorrection_init_ },
              { Py_tp_getset, t_ClockCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ClockCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ClockCorrection, t_ClockCorrection, ClockCorrection);

            void t_ClockCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(ClockCorrection), &PY_TYPE_DEF(ClockCorrection), module, "ClockCorrection", 0);
            }

            void t_ClockCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "class_", make_descriptor(ClockCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "wrapfn_", make_descriptor(t_ClockCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ClockCorrection::initializeClass, 1)))
                return NULL;
              return t_ClockCorrection::wrap_Object(ClockCorrection(((t_ClockCorrection *) arg)->object.this$));
            }
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ClockCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ClockCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ClockCorrection(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonMessageType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonMessageType::class$ = NULL;
          jmethodID *PythonMessageType::mids$ = NULL;
          bool PythonMessageType::live$ = false;

          jclass PythonMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_parse_9c30feea4fe836ce] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageType::PythonMessageType() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonMessageType::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonMessageType::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonMessageType::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace parser {
          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self);
          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args);
          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data);
          static PyGetSetDef t_PythonMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageType, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageType__methods_[] = {
            DECLARE_METHOD(t_PythonMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageType, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageType)[] = {
            { Py_tp_methods, t_PythonMessageType__methods_ },
            { Py_tp_init, (void *) t_PythonMessageType_init_ },
            { Py_tp_getset, t_PythonMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageType, t_PythonMessageType, PythonMessageType);

          void t_PythonMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageType), &PY_TYPE_DEF(PythonMessageType), module, "PythonMessageType", 1);
          }

          void t_PythonMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "class_", make_descriptor(PythonMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "wrapfn_", make_descriptor(t_PythonMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageType::initializeClass);
            JNINativeMethod methods[] = {
              { "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;", (void *) t_PythonMessageType_parse0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageType_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageType::initializeClass, 1)))
              return NULL;
            return t_PythonMessageType::wrap_Object(PythonMessageType(((t_PythonMessageType *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageType object((jobject) NULL);

            INT_CALL(object = PythonMessageType());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args)
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

          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::gnss::metric::messages::ParsedMessage value((jobject) NULL);
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "parse", "Oi", o0, (int) a1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &value))
            {
              throwTypeError("parse", result);
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

          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/SplineInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *SplineInterpolator::class$ = NULL;
        jmethodID *SplineInterpolator::mids$ = NULL;
        bool SplineInterpolator::live$ = false;

        jclass SplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/SplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_4b522051166e7218] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_a8efc421c988dfdd] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SplineInterpolator::SplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction SplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_4b522051166e7218], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction SplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_a8efc421c988dfdd], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args);

        static PyMethodDef t_SplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_SplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SplineInterpolator)[] = {
          { Py_tp_methods, t_SplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_SplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SplineInterpolator, t_SplineInterpolator, SplineInterpolator);

        void t_SplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SplineInterpolator), &PY_TYPE_DEF(SplineInterpolator), module, "SplineInterpolator", 0);
        }

        void t_SplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "class_", make_descriptor(SplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "wrapfn_", make_descriptor(t_SplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_SplineInterpolator::wrap_Object(SplineInterpolator(((t_SplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          SplineInterpolator object((jobject) NULL);

          INT_CALL(object = SplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PyhonData.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PyhonData::class$ = NULL;
          jmethodID *PyhonData::mids$ = NULL;
          bool PyhonData::live$ = false;

          jclass PyhonData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PyhonData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PyhonData::PyhonData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PyhonData::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PyhonData::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PyhonData::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PyhonData_finalize(t_PyhonData *self);
          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args);
          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data);
          static PyGetSetDef t_PyhonData__fields_[] = {
            DECLARE_GET_FIELD(t_PyhonData, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PyhonData__methods_[] = {
            DECLARE_METHOD(t_PyhonData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PyhonData, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PyhonData)[] = {
            { Py_tp_methods, t_PyhonData__methods_ },
            { Py_tp_init, (void *) t_PyhonData_init_ },
            { Py_tp_getset, t_PyhonData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PyhonData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PyhonData, t_PyhonData, PyhonData);

          void t_PyhonData::install(PyObject *module)
          {
            installType(&PY_TYPE(PyhonData), &PY_TYPE_DEF(PyhonData), module, "PyhonData", 1);
          }

          void t_PyhonData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "class_", make_descriptor(PyhonData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "wrapfn_", make_descriptor(t_PyhonData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PyhonData::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PyhonData_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PyhonData_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PyhonData::initializeClass, 1)))
              return NULL;
            return t_PyhonData::wrap_Object(PyhonData(((t_PyhonData *) arg)->object.this$));
          }
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PyhonData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds)
          {
            PyhonData object((jobject) NULL);

            INT_CALL(object = PyhonData());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PyhonData_finalize(t_PyhonData *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args)
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

          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data)
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
