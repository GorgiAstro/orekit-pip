#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/ChiSquareTest.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *ChiSquareTest::class$ = NULL;
        jmethodID *ChiSquareTest::mids$ = NULL;
        bool ChiSquareTest::live$ = false;

        jclass ChiSquareTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/ChiSquareTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_chiSquare_1a9d0eafbd140a5e] = env->getMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_f8078c674056fb4a] = env->getMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_8361d6bcedc1da1a] = env->getMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_1a9d0eafbd140a5e] = env->getMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_f8078c674056fb4a] = env->getMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_61b6a9dae7ed2786] = env->getMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_8ea380ac7c124df6] = env->getMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_8361d6bcedc1da1a] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_0d632518d2300ac8] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquareTest::ChiSquareTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble ChiSquareTest::chiSquare(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_1a9d0eafbd140a5e], a0.this$);
        }

        jdouble ChiSquareTest::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_1a9d0eafbd140a5e], a0.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_61b6a9dae7ed2786], a0.this$, a1);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_8ea380ac7c124df6], a0.this$, a1.this$, a2);
        }

        jdouble ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_0d632518d2300ac8], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args);

        static PyMethodDef t_ChiSquareTest__methods_[] = {
          DECLARE_METHOD(t_ChiSquareTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquare, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTest, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTestDataSetsComparison, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquareTest)[] = {
          { Py_tp_methods, t_ChiSquareTest__methods_ },
          { Py_tp_init, (void *) t_ChiSquareTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquareTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ChiSquareTest, t_ChiSquareTest, ChiSquareTest);

        void t_ChiSquareTest::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquareTest), &PY_TYPE_DEF(ChiSquareTest), module, "ChiSquareTest", 0);
        }

        void t_ChiSquareTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "class_", make_descriptor(ChiSquareTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "wrapfn_", make_descriptor(t_ChiSquareTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquareTest::initializeClass, 1)))
            return NULL;
          return t_ChiSquareTest::wrap_Object(ChiSquareTest(((t_ChiSquareTest *) arg)->object.this$));
        }
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquareTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds)
        {
          ChiSquareTest object((jobject) NULL);

          INT_CALL(object = ChiSquareTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/UpdatableFrame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *UpdatableFrame::class$ = NULL;
      jmethodID *UpdatableFrame::mids$ = NULL;
      bool UpdatableFrame::live$ = false;

      jclass UpdatableFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/UpdatableFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2c9eb35eb4351d75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_4f060f3eeb795497] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_updateTransform_112222c650e15b7d] = env->getMethodID(cls, "updateTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Lorg/orekit/time/AbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_2c9eb35eb4351d75, a0.this$, a1.this$, a2.this$)) {}

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_4f060f3eeb795497, a0.this$, a1.this$, a2.this$, a3)) {}

      void UpdatableFrame::updateTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_updateTransform_112222c650e15b7d], a0.this$, a1.this$, a2.this$, a3.this$);
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
      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args);

      static PyMethodDef t_UpdatableFrame__methods_[] = {
        DECLARE_METHOD(t_UpdatableFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, updateTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UpdatableFrame)[] = {
        { Py_tp_methods, t_UpdatableFrame__methods_ },
        { Py_tp_init, (void *) t_UpdatableFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UpdatableFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(UpdatableFrame, t_UpdatableFrame, UpdatableFrame);

      void t_UpdatableFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(UpdatableFrame), &PY_TYPE_DEF(UpdatableFrame), module, "UpdatableFrame", 0);
      }

      void t_UpdatableFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "class_", make_descriptor(UpdatableFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "wrapfn_", make_descriptor(t_UpdatableFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UpdatableFrame::initializeClass, 1)))
          return NULL;
        return t_UpdatableFrame::wrap_Object(UpdatableFrame(((t_UpdatableFrame *) arg)->object.this$));
      }
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UpdatableFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2, a3));
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

      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::frames::Transform a2((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a3((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.updateTransform(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "updateTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Asin.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asin::class$ = NULL;
        jmethodID *Asin::mids$ = NULL;
        bool Asin::live$ = false;

        jclass Asin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asin::Asin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Asin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
      namespace function {
        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asin_value(t_Asin *self, PyObject *args);

        static PyMethodDef t_Asin__methods_[] = {
          DECLARE_METHOD(t_Asin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asin)[] = {
          { Py_tp_methods, t_Asin__methods_ },
          { Py_tp_init, (void *) t_Asin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asin, t_Asin, Asin);

        void t_Asin::install(PyObject *module)
        {
          installType(&PY_TYPE(Asin), &PY_TYPE_DEF(Asin), module, "Asin", 0);
        }

        void t_Asin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "class_", make_descriptor(Asin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "wrapfn_", make_descriptor(t_Asin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asin::initializeClass, 1)))
            return NULL;
          return t_Asin::wrap_Object(Asin(((t_Asin *) arg)->object.this$));
        }
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds)
        {
          Asin object((jobject) NULL);

          INT_CALL(object = Asin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asin_value(t_Asin *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSScale::class$ = NULL;
      jmethodID *GLONASSScale::mids$ = NULL;
      bool GLONASSScale::live$ = false;

      jclass GLONASSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_209f08246d708042] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_cf010978f3c5a913] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_b16e79ba1b2830a1] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_ada3024ac7559675] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_94772beff3ac8a91] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_23ced097258e06b3] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble GLONASSScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String GLONASSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_b16e79ba1b2830a1], a0.this$);
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_ada3024ac7559675], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_94772beff3ac8a91], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_23ced097258e06b3], a0.this$);
      }

      jdouble GLONASSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble GLONASSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String GLONASSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self);
      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data);
      static PyGetSetDef t_GLONASSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSScale__methods_[] = {
        DECLARE_METHOD(t_GLONASSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSScale)[] = {
        { Py_tp_methods, t_GLONASSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GLONASSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSScale, t_GLONASSScale, GLONASSScale);

      void t_GLONASSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSScale), &PY_TYPE_DEF(GLONASSScale), module, "GLONASSScale", 0);
      }

      void t_GLONASSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "class_", make_descriptor(GLONASSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "wrapfn_", make_descriptor(t_GLONASSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSScale::initializeClass, 1)))
          return NULL;
        return t_GLONASSScale::wrap_Object(GLONASSScale(((t_GLONASSScale *) arg)->object.this$));
      }
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GLONASSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data)
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
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinates::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinates::mids$ = NULL;
      bool FieldAbsolutePVCoordinates::live$ = false;

      jclass FieldAbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_52100c6847eaec19] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
          mids$[mid_init$_a21a3f679d555370] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_2a0b4cce78661178] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_d473bf44c6f0ba81] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_908dc2ce6b1cd1a1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_78bcd70fff2e0c4a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_8e6f8770f80ed059] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_a1f4328f7f5e607a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_0e5092b170a8b3e9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_acdc2ed2e333ac4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_cb22ebaaad002a3b] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_04c84225ba0acc81] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_7d8eb4c884905d3b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_shiftedBy_98193c33f95d3c3c] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_toAbsolutePVCoordinates_0bbeea3cc786f34b] = env->getMethodID(cls, "toAbsolutePVCoordinates", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_ed886b943b6de8d9] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a1) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_52100c6847eaec19, a0.this$, a1.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldAbsolutePVCoordinates & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a21a3f679d555370, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2a0b4cce78661178, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d473bf44c6f0ba81, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_908dc2ce6b1cd1a1, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_78bcd70fff2e0c4a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8e6f8770f80ed059, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a1f4328f7f5e607a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0e5092b170a8b3e9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const FieldAbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_acdc2ed2e333ac4b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_be698fa91827b9b2]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cb22ebaaad002a3b], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_04c84225ba0acc81], a0.this$));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7d8eb4c884905d3b], a0));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_98193c33f95d3c3c], a0.this$));
      }

      ::org::orekit::utils::AbsolutePVCoordinates FieldAbsolutePVCoordinates::toAbsolutePVCoordinates() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_toAbsolutePVCoordinates_0bbeea3cc786f34b]));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_ed886b943b6de8d9]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toAbsolutePVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toTaylorProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedFieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinates, t_FieldAbsolutePVCoordinates, FieldAbsolutePVCoordinates);
      PyObject *t_FieldAbsolutePVCoordinates::wrap_Object(const FieldAbsolutePVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinates), &PY_TYPE_DEF(FieldAbsolutePVCoordinates), module, "FieldAbsolutePVCoordinates", 0);
      }

      void t_FieldAbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "class_", make_descriptor(FieldAbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinates::wrap_Object(FieldAbsolutePVCoordinates(((t_FieldAbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldAbsolutePVCoordinates::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldAbsolutePVCoordinates::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            FieldAbsolutePVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsolutePVCoordinates());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.toTaylorProvider());
        return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizationProblemBuilder::class$ = NULL;
        jmethodID *OptimizationProblemBuilder::mids$ = NULL;
        bool OptimizationProblemBuilder::live$ = false;

        jclass OptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_build_fabe1e3047de884e] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_getSensors_d751c1a57012b438] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
            mids$[mid_getDrivers_d751c1a57012b438] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
            mids$[mid_getNbParams_d6ab429752e7c267] = env->getMethodID(cls, "getNbParams", "()I");
            mids$[mid_getGenerator_59ec2baea1fab58e] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/rugged/utils/DerivativeGenerator;");
            mids$[mid_getMeasurements_8a09f92731ab04fb] = env->getMethodID(cls, "getMeasurements", "()Lorg/orekit/rugged/adjustment/measurements/Observables;");
            mids$[mid_createTargetAndWeight_ff7cb6c242604316] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_ff7cb6c242604316] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createFunction_b9638c47db64ddc7] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem OptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_fabe1e3047de884e], a0, a1));
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
    namespace rugged {
      namespace adjustment {
        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_OptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_OptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_OptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OptimizationProblemBuilder, t_OptimizationProblemBuilder, OptimizationProblemBuilder);

        void t_OptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizationProblemBuilder), &PY_TYPE_DEF(OptimizationProblemBuilder), module, "OptimizationProblemBuilder", 0);
        }

        void t_OptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "class_", make_descriptor(OptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "wrapfn_", make_descriptor(t_OptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_OptimizationProblemBuilder::wrap_Object(OptimizationProblemBuilder(((t_OptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataWriter::class$ = NULL;
            jmethodID *AdmCommonMetadataWriter::mids$ = NULL;
            bool AdmCommonMetadataWriter::live$ = false;

            jclass AdmCommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6dd55b83fbc2ed8f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)V");
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmCommonMetadataWriter::AdmCommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_6dd55b83fbc2ed8f, a0.this$)) {}
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
            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmCommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataWriter)[] = {
              { Py_tp_methods, t_AdmCommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_AdmCommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataWriter, t_AdmCommonMetadataWriter, AdmCommonMetadataWriter);

            void t_AdmCommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataWriter), &PY_TYPE_DEF(AdmCommonMetadataWriter), module, "AdmCommonMetadataWriter", 0);
            }

            void t_AdmCommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "class_", make_descriptor(AdmCommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "wrapfn_", make_descriptor(t_AdmCommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataWriter::wrap_Object(AdmCommonMetadataWriter(((t_AdmCommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a0((jobject) NULL);
              AdmCommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = AdmCommonMetadataWriter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *WriterBuilder::class$ = NULL;
          jmethodID *WriterBuilder::mids$ = NULL;
          bool WriterBuilder::live$ = false;

          jclass WriterBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/WriterBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_e28302a82adb77ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmWriter_23c93b609649e631] = env->getMethodID(cls, "buildAcmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmWriter;");
              mids$[mid_buildAemWriter_6d0e5cf65744a22d] = env->getMethodID(cls, "buildAemWriter", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;");
              mids$[mid_buildApmWriter_f69cb258ef86a872] = env->getMethodID(cls, "buildApmWriter", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmWriter;");
              mids$[mid_buildCdmWriter_522bec80cf151c2b] = env->getMethodID(cls, "buildCdmWriter", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmWriter;");
              mids$[mid_buildNdmWriter_8b6a196a7d6ed7e5] = env->getMethodID(cls, "buildNdmWriter", "()Lorg/orekit/files/ccsds/ndm/NdmWriter;");
              mids$[mid_buildOcmWriter_07ff352b1a29d8b6] = env->getMethodID(cls, "buildOcmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;");
              mids$[mid_buildOemWriter_9a5f31897f9d2b87] = env->getMethodID(cls, "buildOemWriter", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;");
              mids$[mid_buildOmmWriter_26d28c24a57d26a4] = env->getMethodID(cls, "buildOmmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmWriter;");
              mids$[mid_buildOpmWriter_860ae140e88023f6] = env->getMethodID(cls, "buildOpmWriter", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmWriter;");
              mids$[mid_buildTdmWriter_3f510563eaf6f808] = env->getMethodID(cls, "buildTdmWriter", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmWriter;");
              mids$[mid_create_23cb629edb0279d7] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/WriterBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WriterBuilder::WriterBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          WriterBuilder::WriterBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_e28302a82adb77ed, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter WriterBuilder::buildAcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter(env->callObjectMethod(this$, mids$[mid_buildAcmWriter_23c93b609649e631]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter WriterBuilder::buildAemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter(env->callObjectMethod(this$, mids$[mid_buildAemWriter_6d0e5cf65744a22d]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter WriterBuilder::buildApmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter(env->callObjectMethod(this$, mids$[mid_buildApmWriter_f69cb258ef86a872]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmWriter WriterBuilder::buildCdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmWriter(env->callObjectMethod(this$, mids$[mid_buildCdmWriter_522bec80cf151c2b]));
          }

          ::org::orekit::files::ccsds::ndm::NdmWriter WriterBuilder::buildNdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmWriter(env->callObjectMethod(this$, mids$[mid_buildNdmWriter_8b6a196a7d6ed7e5]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter WriterBuilder::buildOcmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter(env->callObjectMethod(this$, mids$[mid_buildOcmWriter_07ff352b1a29d8b6]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter WriterBuilder::buildOemWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter(env->callObjectMethod(this$, mids$[mid_buildOemWriter_9a5f31897f9d2b87]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter WriterBuilder::buildOmmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter(env->callObjectMethod(this$, mids$[mid_buildOmmWriter_26d28c24a57d26a4]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter WriterBuilder::buildOpmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter(env->callObjectMethod(this$, mids$[mid_buildOpmWriter_860ae140e88023f6]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmWriter WriterBuilder::buildTdmWriter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmWriter(env->callObjectMethod(this$, mids$[mid_buildTdmWriter_3f510563eaf6f808]));
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
          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args);
          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self);
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data);
          static PyGetSetDef t_WriterBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_WriterBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WriterBuilder__methods_[] = {
            DECLARE_METHOD(t_WriterBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WriterBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildAemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildApmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildCdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildNdmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOcmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOemWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOmmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildOpmWriter, METH_NOARGS),
            DECLARE_METHOD(t_WriterBuilder, buildTdmWriter, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WriterBuilder)[] = {
            { Py_tp_methods, t_WriterBuilder__methods_ },
            { Py_tp_init, (void *) t_WriterBuilder_init_ },
            { Py_tp_getset, t_WriterBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WriterBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(WriterBuilder, t_WriterBuilder, WriterBuilder);
          PyObject *t_WriterBuilder::wrap_Object(const WriterBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WriterBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WriterBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WriterBuilder *self = (t_WriterBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WriterBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(WriterBuilder), &PY_TYPE_DEF(WriterBuilder), module, "WriterBuilder", 0);
          }

          void t_WriterBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "class_", make_descriptor(WriterBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "wrapfn_", make_descriptor(t_WriterBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WriterBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WriterBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WriterBuilder::initializeClass, 1)))
              return NULL;
            return t_WriterBuilder::wrap_Object(WriterBuilder(((t_WriterBuilder *) arg)->object.this$));
          }
          static PyObject *t_WriterBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WriterBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WriterBuilder_of_(t_WriterBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_WriterBuilder_init_(t_WriterBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                WriterBuilder object((jobject) NULL);

                INT_CALL(object = WriterBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                WriterBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = WriterBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(WriterBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_WriterBuilder_buildAcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildAemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemWriter());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildApmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmWriter());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildCdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmWriter());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildNdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmWriter());
            return ::org::orekit::files::ccsds::ndm::t_NdmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOcmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOemWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemWriter());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOmmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildOpmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmWriter());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmWriter::wrap_Object(result);
          }

          static PyObject *t_WriterBuilder_buildTdmWriter(t_WriterBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmWriter result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmWriter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmWriter::wrap_Object(result);
          }
          static PyObject *t_WriterBuilder_get__parameters_(t_WriterBuilder *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonFieldInterpolationGrid::class$ = NULL;
            jmethodID *PythonFieldInterpolationGrid::mids$ = NULL;
            bool PythonFieldInterpolationGrid::live$ = false;

            jclass PythonFieldInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_0fb3037dbc9bf797] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldInterpolationGrid::PythonFieldInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonFieldInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonFieldInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonFieldInterpolationGrid::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          namespace utilities {
            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self);
            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data);
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonFieldInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, self),
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonFieldInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonFieldInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonFieldInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldInterpolationGrid, t_PythonFieldInterpolationGrid, PythonFieldInterpolationGrid);
            PyObject *t_PythonFieldInterpolationGrid::wrap_Object(const PythonFieldInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldInterpolationGrid), &PY_TYPE_DEF(PythonFieldInterpolationGrid), module, "PythonFieldInterpolationGrid", 1);
            }

            void t_PythonFieldInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "class_", make_descriptor(PythonFieldInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "wrapfn_", make_descriptor(t_PythonFieldInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonFieldInterpolationGrid::wrap_Object(PythonFieldInterpolationGrid(((t_PythonFieldInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonFieldInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
              PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data)
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
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_4320462275d66e78] = env->getMethodID(cls, "accept", "(ID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleConsumer::accept(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_4320462275d66e78], a0, a1);
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
            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleConsumer, t_ParseToken$IndexedDoubleConsumer, ParseToken$IndexedDoubleConsumer);

            void t_ParseToken$IndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer), module, "ParseToken$IndexedDoubleConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleConsumer::wrap_Object(ParseToken$IndexedDoubleConsumer(((t_ParseToken$IndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader::class$ = NULL;
      jmethodID *EopHistoryLoader::mids$ = NULL;
      bool EopHistoryLoader::live$ = false;

      jclass EopHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fillHistory_09d2fc89df23cd1a] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void EopHistoryLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_fillHistory_09d2fc89df23cd1a], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, fillHistory, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader)[] = {
        { Py_tp_methods, t_EopHistoryLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader, t_EopHistoryLoader, EopHistoryLoader);

      void t_EopHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader), &PY_TYPE_DEF(EopHistoryLoader), module, "EopHistoryLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "Parser", make_descriptor(&PY_TYPE_DEF(EopHistoryLoader$Parser)));
      }

      void t_EopHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "class_", make_descriptor(EopHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "wrapfn_", make_descriptor(t_EopHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader::wrap_Object(EopHistoryLoader(((t_EopHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::SortedSet a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
        {
          OBJ_CALL(self->object.fillHistory(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/TrapezoidIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *TrapezoidIntegrator::class$ = NULL;
        jmethodID *TrapezoidIntegrator::mids$ = NULL;
        bool TrapezoidIntegrator::live$ = false;
        jint TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass TrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/TrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_eb6adaa8ce308c89] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_9981f74b2d109da6] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TrapezoidIntegrator::TrapezoidIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_eb6adaa8ce308c89, a0, a1, a2, a3)) {}
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
      namespace integration {
        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_TrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_TrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrapezoidIntegrator)[] = {
          { Py_tp_methods, t_TrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_TrapezoidIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(TrapezoidIntegrator, t_TrapezoidIntegrator, TrapezoidIntegrator);

        void t_TrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrapezoidIntegrator), &PY_TYPE_DEF(TrapezoidIntegrator), module, "TrapezoidIntegrator", 0);
        }

        void t_TrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "class_", make_descriptor(TrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "wrapfn_", make_descriptor(t_TrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(TrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_TrapezoidIntegrator::wrap_Object(TrapezoidIntegrator(((t_TrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              TrapezoidIntegrator object((jobject) NULL);

              INT_CALL(object = TrapezoidIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1, a2, a3));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseAmbiguityModifier::class$ = NULL;
          jmethodID *PhaseAmbiguityModifier::mids$ = NULL;
          bool PhaseAmbiguityModifier::live$ = false;

          jclass PhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseAmbiguityModifier::PhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

          ::java::util::List PhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void PhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void PhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self);
          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_PhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_PhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_PhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(PhaseAmbiguityModifier, t_PhaseAmbiguityModifier, PhaseAmbiguityModifier);

          void t_PhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseAmbiguityModifier), &PY_TYPE_DEF(PhaseAmbiguityModifier), module, "PhaseAmbiguityModifier", 0);
          }

          void t_PhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "class_", make_descriptor(PhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_PhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseAmbiguityModifier::wrap_Object(PhaseAmbiguityModifier(((t_PhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            PhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = PhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data)
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
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondaryODE::class$ = NULL;
      jmethodID *SecondaryODE::mids$ = NULL;
      bool SecondaryODE::live$ = false;

      jclass SecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_907b23240de8dc2b] = env->getMethodID(cls, "computeDerivatives", "(D[D[D[D)[D");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_3c38b5b1fdb014e1] = env->getMethodID(cls, "init", "(D[D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondaryODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_907b23240de8dc2b], a0, a1.this$, a2.this$, a3.this$));
      }

      jint SecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      void SecondaryODE::init(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_3c38b5b1fdb014e1], a0, a1.this$, a2.this$, a3);
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
      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self);
      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data);
      static PyGetSetDef t_SecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondaryODE__methods_[] = {
        DECLARE_METHOD(t_SecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondaryODE)[] = {
        { Py_tp_methods, t_SecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondaryODE, t_SecondaryODE, SecondaryODE);

      void t_SecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondaryODE), &PY_TYPE_DEF(SecondaryODE), module, "SecondaryODE", 0);
      }

      void t_SecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "class_", make_descriptor(SecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "wrapfn_", make_descriptor(t_SecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondaryODE::initializeClass, 1)))
          return NULL;
        return t_SecondaryODE::wrap_Object(SecondaryODE(((t_SecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D[D", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[D[DD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Perturbations::class$ = NULL;
              jmethodID *Perturbations::mids$ = NULL;
              bool Perturbations::live$ = false;

              jclass Perturbations::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Perturbations");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_793ac08908193b1e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBodies;)V");
                  mids$[mid_getAlbedoGridSize_d6ab429752e7c267] = env->getMethodID(cls, "getAlbedoGridSize", "()I");
                  mids$[mid_getAlbedoModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getAlbedoModel", "()Ljava/lang/String;");
                  mids$[mid_getAtmosphericModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                  mids$[mid_getCentralBodyRotation_9981f74b2d109da6] = env->getMethodID(cls, "getCentralBodyRotation", "()D");
                  mids$[mid_getEquatorialRadius_9981f74b2d109da6] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFixedF10P7_9981f74b2d109da6] = env->getMethodID(cls, "getFixedF10P7", "()D");
                  mids$[mid_getFixedF10P7Mean_9981f74b2d109da6] = env->getMethodID(cls, "getFixedF10P7Mean", "()D");
                  mids$[mid_getFixedGeomagneticAp_9981f74b2d109da6] = env->getMethodID(cls, "getFixedGeomagneticAp", "()D");
                  mids$[mid_getFixedGeomagneticDst_9981f74b2d109da6] = env->getMethodID(cls, "getFixedGeomagneticDst", "()D");
                  mids$[mid_getFixedGeomagneticKp_9981f74b2d109da6] = env->getMethodID(cls, "getFixedGeomagneticKp", "()D");
                  mids$[mid_getFixedM10P7_9981f74b2d109da6] = env->getMethodID(cls, "getFixedM10P7", "()D");
                  mids$[mid_getFixedM10P7Mean_9981f74b2d109da6] = env->getMethodID(cls, "getFixedM10P7Mean", "()D");
                  mids$[mid_getFixedS10P7_9981f74b2d109da6] = env->getMethodID(cls, "getFixedS10P7", "()D");
                  mids$[mid_getFixedS10P7Mean_9981f74b2d109da6] = env->getMethodID(cls, "getFixedS10P7Mean", "()D");
                  mids$[mid_getFixedY10P7_9981f74b2d109da6] = env->getMethodID(cls, "getFixedY10P7", "()D");
                  mids$[mid_getFixedY10P7Mean_9981f74b2d109da6] = env->getMethodID(cls, "getFixedY10P7Mean", "()D");
                  mids$[mid_getGm_9981f74b2d109da6] = env->getMethodID(cls, "getGm", "()D");
                  mids$[mid_getGravityDegree_d6ab429752e7c267] = env->getMethodID(cls, "getGravityDegree", "()I");
                  mids$[mid_getGravityModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                  mids$[mid_getGravityOrder_d6ab429752e7c267] = env->getMethodID(cls, "getGravityOrder", "()I");
                  mids$[mid_getInterpMethodSW_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpMethodSW", "()Ljava/lang/String;");
                  mids$[mid_getNBodyPerturbations_d751c1a57012b438] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                  mids$[mid_getOblateFlattening_9981f74b2d109da6] = env->getMethodID(cls, "getOblateFlattening", "()D");
                  mids$[mid_getOceanTidesModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getOceanTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getReductionTheory_d2c8eb4129821f0e] = env->getMethodID(cls, "getReductionTheory", "()Ljava/lang/String;");
                  mids$[mid_getShadowBodies_d751c1a57012b438] = env->getMethodID(cls, "getShadowBodies", "()Ljava/util/List;");
                  mids$[mid_getShadowModel_384f8b83ce262c6d] = env->getMethodID(cls, "getShadowModel", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_getSolidTidesModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getSolidTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getSpaceWeatherEpoch_80e11148db499dda] = env->getMethodID(cls, "getSpaceWeatherEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getSpaceWeatherSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getSpaceWeatherSource", "()Ljava/lang/String;");
                  mids$[mid_getSrpModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getSrpModel", "()Ljava/lang/String;");
                  mids$[mid_setAlbedoGridSize_8fd427ab23829bf5] = env->getMethodID(cls, "setAlbedoGridSize", "(I)V");
                  mids$[mid_setAlbedoModel_105e1eadb709d9ac] = env->getMethodID(cls, "setAlbedoModel", "(Ljava/lang/String;)V");
                  mids$[mid_setAtmosphericModel_105e1eadb709d9ac] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                  mids$[mid_setCentralBodyRotation_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCentralBodyRotation", "(D)V");
                  mids$[mid_setEquatorialRadius_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEquatorialRadius", "(D)V");
                  mids$[mid_setFixedF10P7_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedF10P7", "(D)V");
                  mids$[mid_setFixedF10P7Mean_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedF10P7Mean", "(D)V");
                  mids$[mid_setFixedGeomagneticAp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedGeomagneticAp", "(D)V");
                  mids$[mid_setFixedGeomagneticDst_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedGeomagneticDst", "(D)V");
                  mids$[mid_setFixedGeomagneticKp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedGeomagneticKp", "(D)V");
                  mids$[mid_setFixedM10P7_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedM10P7", "(D)V");
                  mids$[mid_setFixedM10P7Mean_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedM10P7Mean", "(D)V");
                  mids$[mid_setFixedS10P7_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedS10P7", "(D)V");
                  mids$[mid_setFixedS10P7Mean_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedS10P7Mean", "(D)V");
                  mids$[mid_setFixedY10P7_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedY10P7", "(D)V");
                  mids$[mid_setFixedY10P7Mean_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFixedY10P7Mean", "(D)V");
                  mids$[mid_setGm_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setGm", "(D)V");
                  mids$[mid_setGravityModel_c9a77c84756b106b] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                  mids$[mid_setInterpMethodSW_105e1eadb709d9ac] = env->getMethodID(cls, "setInterpMethodSW", "(Ljava/lang/String;)V");
                  mids$[mid_setNBodyPerturbations_aa335fea495d60e0] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                  mids$[mid_setOblateFlattening_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOblateFlattening", "(D)V");
                  mids$[mid_setOceanTidesModel_105e1eadb709d9ac] = env->getMethodID(cls, "setOceanTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setReductionTheory_105e1eadb709d9ac] = env->getMethodID(cls, "setReductionTheory", "(Ljava/lang/String;)V");
                  mids$[mid_setShadowBodies_aa335fea495d60e0] = env->getMethodID(cls, "setShadowBodies", "(Ljava/util/List;)V");
                  mids$[mid_setShadowModel_96bc3dfff38fb961] = env->getMethodID(cls, "setShadowModel", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;)V");
                  mids$[mid_setSolidTidesModel_105e1eadb709d9ac] = env->getMethodID(cls, "setSolidTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setSpaceWeatherEpoch_8497861b879c83f7] = env->getMethodID(cls, "setSpaceWeatherEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setSpaceWeatherSource_105e1eadb709d9ac] = env->getMethodID(cls, "setSpaceWeatherSource", "(Ljava/lang/String;)V");
                  mids$[mid_setSrpModel_105e1eadb709d9ac] = env->getMethodID(cls, "setSrpModel", "(Ljava/lang/String;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Perturbations::Perturbations(const ::org::orekit::bodies::CelestialBodies & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_793ac08908193b1e, a0.this$)) {}

              jint Perturbations::getAlbedoGridSize() const
              {
                return env->callIntMethod(this$, mids$[mid_getAlbedoGridSize_d6ab429752e7c267]);
              }

              ::java::lang::String Perturbations::getAlbedoModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAlbedoModel_d2c8eb4129821f0e]));
              }

              ::java::lang::String Perturbations::getAtmosphericModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_d2c8eb4129821f0e]));
              }

              jdouble Perturbations::getCentralBodyRotation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCentralBodyRotation_9981f74b2d109da6]);
              }

              jdouble Perturbations::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedF10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedF10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7Mean_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedGeomagneticAp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticAp_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedGeomagneticDst() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticDst_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedGeomagneticKp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticKp_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedM10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedM10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7Mean_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedS10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedS10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7Mean_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedY10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7_9981f74b2d109da6]);
              }

              jdouble Perturbations::getFixedY10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7Mean_9981f74b2d109da6]);
              }

              jdouble Perturbations::getGm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGm_9981f74b2d109da6]);
              }

              jint Perturbations::getGravityDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityDegree_d6ab429752e7c267]);
              }

              ::java::lang::String Perturbations::getGravityModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_d2c8eb4129821f0e]));
              }

              jint Perturbations::getGravityOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityOrder_d6ab429752e7c267]);
              }

              ::java::lang::String Perturbations::getInterpMethodSW() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodSW_d2c8eb4129821f0e]));
              }

              ::java::util::List Perturbations::getNBodyPerturbations() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_d751c1a57012b438]));
              }

              jdouble Perturbations::getOblateFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getOblateFlattening_9981f74b2d109da6]);
              }

              ::java::lang::String Perturbations::getOceanTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOceanTidesModel_d2c8eb4129821f0e]));
              }

              ::java::lang::String Perturbations::getReductionTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReductionTheory_d2c8eb4129821f0e]));
              }

              ::java::util::List Perturbations::getShadowBodies() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShadowBodies_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel Perturbations::getShadowModel() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel(env->callObjectMethod(this$, mids$[mid_getShadowModel_384f8b83ce262c6d]));
              }

              ::java::lang::String Perturbations::getSolidTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSolidTidesModel_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate Perturbations::getSpaceWeatherEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherEpoch_80e11148db499dda]));
              }

              ::java::lang::String Perturbations::getSpaceWeatherSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherSource_d2c8eb4129821f0e]));
              }

              ::java::lang::String Perturbations::getSrpModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSrpModel_d2c8eb4129821f0e]));
              }

              void Perturbations::setAlbedoGridSize(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoGridSize_8fd427ab23829bf5], a0);
              }

              void Perturbations::setAlbedoModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoModel_105e1eadb709d9ac], a0.this$);
              }

              void Perturbations::setAtmosphericModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_105e1eadb709d9ac], a0.this$);
              }

              void Perturbations::setCentralBodyRotation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCentralBodyRotation_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setEquatorialRadius(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEquatorialRadius_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedF10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedF10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7Mean_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedGeomagneticAp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticAp_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedGeomagneticDst(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticDst_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedGeomagneticKp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticKp_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedM10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedM10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7Mean_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedS10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedS10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7Mean_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedY10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setFixedY10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7Mean_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setGm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGm_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravityModel_c9a77c84756b106b], a0.this$, a1, a2);
              }

              void Perturbations::setInterpMethodSW(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodSW_105e1eadb709d9ac], a0.this$);
              }

              void Perturbations::setNBodyPerturbations(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_aa335fea495d60e0], a0.this$);
              }

              void Perturbations::setOblateFlattening(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOblateFlattening_1ad26e8c8c0cd65b], a0);
              }

              void Perturbations::setOceanTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOceanTidesModel_105e1eadb709d9ac], a0.this$);
              }

              void Perturbations::setReductionTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReductionTheory_105e1eadb709d9ac], a0.this$);
              }

              void Perturbations::setShadowBodies(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowBodies_aa335fea495d60e0], a0.this$);
              }

              void Perturbations::setShadowModel(const ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowModel_96bc3dfff38fb961], a0.this$);
              }

              void Perturbations::setSolidTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolidTidesModel_105e1eadb709d9ac], a0.this$);
              }

              void Perturbations::setSpaceWeatherEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherEpoch_8497861b879c83f7], a0.this$);
              }

              void Perturbations::setSpaceWeatherSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherSource_105e1eadb709d9ac], a0.this$);
              }

              void Perturbations::setSrpModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpModel_105e1eadb709d9ac], a0.this$);
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
              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self);
              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self);
              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getGm(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self);
              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self);
              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self);
              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self);
              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self);
              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self);
              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args);
              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data);
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data);
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data);
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data);
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data);
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data);
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyGetSetDef t_Perturbations__fields_[] = {
                DECLARE_GETSET_FIELD(t_Perturbations, albedoGridSize),
                DECLARE_GETSET_FIELD(t_Perturbations, albedoModel),
                DECLARE_GETSET_FIELD(t_Perturbations, atmosphericModel),
                DECLARE_GETSET_FIELD(t_Perturbations, centralBodyRotation),
                DECLARE_GETSET_FIELD(t_Perturbations, equatorialRadius),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticAp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticDst),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticKp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, gm),
                DECLARE_GET_FIELD(t_Perturbations, gravityDegree),
                DECLARE_GET_FIELD(t_Perturbations, gravityModel),
                DECLARE_GET_FIELD(t_Perturbations, gravityOrder),
                DECLARE_GETSET_FIELD(t_Perturbations, interpMethodSW),
                DECLARE_GETSET_FIELD(t_Perturbations, nBodyPerturbations),
                DECLARE_GETSET_FIELD(t_Perturbations, oblateFlattening),
                DECLARE_GETSET_FIELD(t_Perturbations, oceanTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, reductionTheory),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowBodies),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowModel),
                DECLARE_GETSET_FIELD(t_Perturbations, solidTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherEpoch),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherSource),
                DECLARE_GETSET_FIELD(t_Perturbations, srpModel),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Perturbations__methods_[] = {
                DECLARE_METHOD(t_Perturbations, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, getAlbedoGridSize, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAlbedoModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAtmosphericModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getCentralBodyRotation, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticAp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticDst, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticKp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGm, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityDegree, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityOrder, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getInterpMethodSW, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getNBodyPerturbations, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOblateFlattening, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOceanTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getReductionTheory, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowBodies, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSolidTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherEpoch, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherSource, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSrpModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, setAlbedoGridSize, METH_O),
                DECLARE_METHOD(t_Perturbations, setAlbedoModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setAtmosphericModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setCentralBodyRotation, METH_O),
                DECLARE_METHOD(t_Perturbations, setEquatorialRadius, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticAp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticDst, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticKp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setGm, METH_O),
                DECLARE_METHOD(t_Perturbations, setGravityModel, METH_VARARGS),
                DECLARE_METHOD(t_Perturbations, setInterpMethodSW, METH_O),
                DECLARE_METHOD(t_Perturbations, setNBodyPerturbations, METH_O),
                DECLARE_METHOD(t_Perturbations, setOblateFlattening, METH_O),
                DECLARE_METHOD(t_Perturbations, setOceanTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setReductionTheory, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowBodies, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSolidTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherEpoch, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherSource, METH_O),
                DECLARE_METHOD(t_Perturbations, setSrpModel, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Perturbations)[] = {
                { Py_tp_methods, t_Perturbations__methods_ },
                { Py_tp_init, (void *) t_Perturbations_init_ },
                { Py_tp_getset, t_Perturbations__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Perturbations)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Perturbations, t_Perturbations, Perturbations);

              void t_Perturbations::install(PyObject *module)
              {
                installType(&PY_TYPE(Perturbations), &PY_TYPE_DEF(Perturbations), module, "Perturbations", 0);
              }

              void t_Perturbations::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "class_", make_descriptor(Perturbations::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "wrapfn_", make_descriptor(t_Perturbations::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Perturbations::initializeClass, 1)))
                  return NULL;
                return t_Perturbations::wrap_Object(Perturbations(((t_Perturbations *) arg)->object.this$));
              }
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Perturbations::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                Perturbations object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  INT_CALL(object = Perturbations(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlbedoModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAtmosphericModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGm(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravityModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodSW());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOceanTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getReductionTheory());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolidTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherSource());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSrpModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoGridSize(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoGridSize", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAtmosphericModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCentralBodyRotation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCentralBodyRotation", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEquatorialRadius(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEquatorialRadius", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticAp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticAp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticDst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticDst", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticKp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticKp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGm", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                jint a1;
                jint a2;

                if (!parseArgs(args, "sII", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
                return NULL;
              }

              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodSW(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodSW", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setNBodyPerturbations(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setOblateFlattening(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOblateFlattening", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOceanTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOceanTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setReductionTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setReductionTheory", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setShadowBodies(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowBodies", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::parameters_))
                {
                  OBJ_CALL(self->object.setShadowModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSolidTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolidTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherEpoch", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherSource", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSrpModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) value);
              }
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setAlbedoGridSize(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoGridSize", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlbedoModel());
                return j2p(value);
              }
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAlbedoModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAtmosphericModel());
                return j2p(value);
              }
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAtmosphericModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCentralBodyRotation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centralBodyRotation", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEquatorialRadius(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "equatorialRadius", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticAp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticAp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticDst(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticDst", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticKp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticKp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gm", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityDegree());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravityModel());
                return j2p(value);
              }

              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityOrder());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodSW());
                return j2p(value);
              }
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodSW(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodSW", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNBodyPerturbations(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setOblateFlattening(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oblateFlattening", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOceanTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOceanTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oceanTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getReductionTheory());
                return j2p(value);
              }
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setReductionTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "reductionTheory", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowBodies(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowBodies", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolidTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSolidTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solidTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherEpoch", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherSource());
                return j2p(value);
              }
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherSource", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSrpModel());
                return j2p(value);
              }
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSrpModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpModel", arg);
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
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FunctionalDetector::class$ = NULL;
        jmethodID *FunctionalDetector::mids$ = NULL;
        bool FunctionalDetector::live$ = false;

        jclass FunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_cfab95c3a2ebb9cb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FunctionalDetector::FunctionalDetector() : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble FunctionalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
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
        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args);
        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args);
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data);
        static PyGetSetDef t_FunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FunctionalDetector)[] = {
          { Py_tp_methods, t_FunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FunctionalDetector_init_ },
          { Py_tp_getset, t_FunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FunctionalDetector, t_FunctionalDetector, FunctionalDetector);
        PyObject *t_FunctionalDetector::wrap_Object(const FunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FunctionalDetector), &PY_TYPE_DEF(FunctionalDetector), module, "FunctionalDetector", 0);
        }

        void t_FunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "class_", make_descriptor(FunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "wrapfn_", make_descriptor(t_FunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FunctionalDetector::wrap_Object(FunctionalDetector(((t_FunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          FunctionalDetector object((jobject) NULL);

          INT_CALL(object = FunctionalDetector());
          self->object = object;
          self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FunctionalDetector);

          return 0;
        }

        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/InterpolationTableLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *InterpolationTableLoader::class$ = NULL;
      jmethodID *InterpolationTableLoader::mids$ = NULL;
      bool InterpolationTableLoader::live$ = false;

      jclass InterpolationTableLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/InterpolationTableLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getAbscissaGrid_be783177b060994b] = env->getMethodID(cls, "getAbscissaGrid", "()[D");
          mids$[mid_getOrdinateGrid_be783177b060994b] = env->getMethodID(cls, "getOrdinateGrid", "()[D");
          mids$[mid_getValuesSamples_eda3f19b8225f78f] = env->getMethodID(cls, "getValuesSamples", "()[[D");
          mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolationTableLoader::InterpolationTableLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      JArray< jdouble > InterpolationTableLoader::getAbscissaGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAbscissaGrid_be783177b060994b]));
      }

      JArray< jdouble > InterpolationTableLoader::getOrdinateGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getOrdinateGrid_be783177b060994b]));
      }

      JArray< JArray< jdouble > > InterpolationTableLoader::getValuesSamples() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getValuesSamples_eda3f19b8225f78f]));
      }

      void InterpolationTableLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
      }

      jboolean InterpolationTableLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args);
      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data);
      static PyGetSetDef t_InterpolationTableLoader__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolationTableLoader, abscissaGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, ordinateGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, valuesSamples),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolationTableLoader__methods_[] = {
        DECLARE_METHOD(t_InterpolationTableLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, getAbscissaGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getOrdinateGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getValuesSamples, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolationTableLoader)[] = {
        { Py_tp_methods, t_InterpolationTableLoader__methods_ },
        { Py_tp_init, (void *) t_InterpolationTableLoader_init_ },
        { Py_tp_getset, t_InterpolationTableLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolationTableLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolationTableLoader, t_InterpolationTableLoader, InterpolationTableLoader);

      void t_InterpolationTableLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolationTableLoader), &PY_TYPE_DEF(InterpolationTableLoader), module, "InterpolationTableLoader", 0);
      }

      void t_InterpolationTableLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "class_", make_descriptor(InterpolationTableLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "wrapfn_", make_descriptor(t_InterpolationTableLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolationTableLoader::initializeClass, 1)))
          return NULL;
        return t_InterpolationTableLoader::wrap_Object(InterpolationTableLoader(((t_InterpolationTableLoader *) arg)->object.this$));
      }
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolationTableLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds)
      {
        InterpolationTableLoader object((jobject) NULL);

        INT_CALL(object = InterpolationTableLoader());
        self->object = object;

        return 0;
      }

      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbscissaGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrdinateGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValuesSamples());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.loadData(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbscissaGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrdinateGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValuesSamples());
        return JArray<jobject>(value.this$).wrap(NULL);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseAbstractUnivariateSolver::class$ = NULL;
        jmethodID *BaseAbstractUnivariateSolver::mids$ = NULL;
        bool BaseAbstractUnivariateSolver::live$ = false;

        jclass BaseAbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getRelativeAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_getStartValue_9981f74b2d109da6] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_solve_473ffc752427b240] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_f8d9b8fc210a2541] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_fe5bc4a065ab530b] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_computeObjectiveValue_bf28ed64d6e8576b] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_incrementEvaluationCount_ff7cb6c242604316] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
            mids$[mid_verifyInterval_13edac039e8cc967] = env->getMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_verifyBracketing_13edac039e8cc967] = env->getMethodID(cls, "verifyBracketing", "(DD)V");
            mids$[mid_isBracketing_0fc66ee74538f12c] = env->getMethodID(cls, "isBracketing", "(DD)Z");
            mids$[mid_isSequence_de33958d3e7816c8] = env->getMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_verifySequence_bd28dc6055dc5bbd] = env->getMethodID(cls, "verifySequence", "(DDD)V");
            mids$[mid_setup_4b5586fe764146e7] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6]);
        }

        jint BaseAbstractUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        jdouble BaseAbstractUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_9981f74b2d109da6]);
        }

        jdouble BaseAbstractUnivariateSolver::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
        }

        jdouble BaseAbstractUnivariateSolver::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
        }

        jdouble BaseAbstractUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_9981f74b2d109da6]);
        }

        jdouble BaseAbstractUnivariateSolver::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_9981f74b2d109da6]);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_473ffc752427b240], a0, a1.this$, a2);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_f8d9b8fc210a2541], a0, a1.this$, a2, a3);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_fe5bc4a065ab530b], a0, a1.this$, a2, a3, a4);
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
        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, max),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, min),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, startValue),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMax, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMin, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateSolver, t_BaseAbstractUnivariateSolver, BaseAbstractUnivariateSolver);
        PyObject *t_BaseAbstractUnivariateSolver::wrap_Object(const BaseAbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateSolver), &PY_TYPE_DEF(BaseAbstractUnivariateSolver), module, "BaseAbstractUnivariateSolver", 0);
        }

        void t_BaseAbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "class_", make_descriptor(BaseAbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateSolver::wrap_Object(BaseAbstractUnivariateSolver(((t_BaseAbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Section::class$ = NULL;
          jmethodID *Section::mids$ = NULL;
          bool Section::live$ = false;

          jclass Section::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Section");

              mids$ = new jmethodID[max_mid];
              mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Section::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_validate(t_Section *self, PyObject *arg);

          static PyMethodDef t_Section__methods_[] = {
            DECLARE_METHOD(t_Section, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Section)[] = {
            { Py_tp_methods, t_Section__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Section)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Section, t_Section, Section);

          void t_Section::install(PyObject *module)
          {
            installType(&PY_TYPE(Section), &PY_TYPE_DEF(Section), module, "Section", 0);
          }

          void t_Section::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "class_", make_descriptor(Section::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "wrapfn_", make_descriptor(t_Section::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Section::initializeClass, 1)))
              return NULL;
            return t_Section::wrap_Object(Section(((t_Section *) arg)->object.this$));
          }
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Section::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Section_validate(t_Section *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearProcess::class$ = NULL;
          jmethodID *LinearProcess::mids$ = NULL;
          bool LinearProcess::live$ = false;

          jclass LinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_d2f757ff843db093] = env->getMethodID(cls, "getEvolution", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/linear/LinearEvolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::linear::LinearEvolution LinearProcess::getEvolution(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::linear::LinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_d2f757ff843db093], a0.this$));
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
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args);
          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg);
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data);
          static PyGetSetDef t_LinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_LinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearProcess__methods_[] = {
            DECLARE_METHOD(t_LinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearProcess, getEvolution, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearProcess)[] = {
            { Py_tp_methods, t_LinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearProcess, t_LinearProcess, LinearProcess);
          PyObject *t_LinearProcess::wrap_Object(const LinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearProcess), &PY_TYPE_DEF(LinearProcess), module, "LinearProcess", 0);
          }

          void t_LinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "class_", make_descriptor(LinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "wrapfn_", make_descriptor(t_LinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearProcess::initializeClass, 1)))
              return NULL;
            return t_LinearProcess::wrap_Object(LinearProcess(((t_LinearProcess *) arg)->object.this$));
          }
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearEvolution result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEvolution(a0));
              return ::org::hipparchus::filtering::kalman::linear::t_LinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", arg);
            return NULL;
          }
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParserBuilder::class$ = NULL;
          jmethodID *ParserBuilder::mids$ = NULL;
          bool ParserBuilder::live$ = false;

          jclass ParserBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParserBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_e28302a82adb77ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmParser_397557f13593ede8] = env->getMethodID(cls, "buildAcmParser", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;");
              mids$[mid_buildAemParser_eb5f4dc14b29617c] = env->getMethodID(cls, "buildAemParser", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemParser;");
              mids$[mid_buildApmParser_44724c4e4b854ec2] = env->getMethodID(cls, "buildApmParser", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmParser;");
              mids$[mid_buildCdmParser_e546a3e931cb5b92] = env->getMethodID(cls, "buildCdmParser", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;");
              mids$[mid_buildNdmParser_cb8a7531c6b49edb] = env->getMethodID(cls, "buildNdmParser", "()Lorg/orekit/files/ccsds/ndm/NdmParser;");
              mids$[mid_buildOcmParser_e7a3c2d9a62629c6] = env->getMethodID(cls, "buildOcmParser", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;");
              mids$[mid_buildOemParser_a517b0450fdb3998] = env->getMethodID(cls, "buildOemParser", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemParser;");
              mids$[mid_buildOmmParser_95d92899297688d3] = env->getMethodID(cls, "buildOmmParser", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmParser;");
              mids$[mid_buildOpmParser_e13b341b4f517cd5] = env->getMethodID(cls, "buildOpmParser", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmParser;");
              mids$[mid_buildTdmParser_b124bbfa04761895] = env->getMethodID(cls, "buildTdmParser", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmParser;");
              mids$[mid_getDefaultInterpolationDegree_d6ab429752e7c267] = env->getMethodID(cls, "getDefaultInterpolationDegree", "()I");
              mids$[mid_getDefaultMass_9981f74b2d109da6] = env->getMethodID(cls, "getDefaultMass", "()D");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_isSimpleEOP_eee3de00fe971136] = env->getMethodID(cls, "isSimpleEOP", "()Z");
              mids$[mid_withDefaultInterpolationDegree_4ca1b888c33ecf3c] = env->getMethodID(cls, "withDefaultInterpolationDegree", "(I)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withDefaultMass_9437dbbc40d5787c] = env->getMethodID(cls, "withDefaultMass", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withMu_9437dbbc40d5787c] = env->getMethodID(cls, "withMu", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withParsedUnitsBehavior_6ecc9d16f861fa10] = env->getMethodID(cls, "withParsedUnitsBehavior", "(Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withSimpleEOP_2b37804fccc7a944] = env->getMethodID(cls, "withSimpleEOP", "(Z)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_create_2e5c29c55da7a1ec] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ParserBuilder::ParserBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ParserBuilder::ParserBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_e28302a82adb77ed, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser ParserBuilder::buildAcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser(env->callObjectMethod(this$, mids$[mid_buildAcmParser_397557f13593ede8]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemParser ParserBuilder::buildAemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemParser(env->callObjectMethod(this$, mids$[mid_buildAemParser_eb5f4dc14b29617c]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser ParserBuilder::buildApmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser(env->callObjectMethod(this$, mids$[mid_buildApmParser_44724c4e4b854ec2]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmParser ParserBuilder::buildCdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmParser(env->callObjectMethod(this$, mids$[mid_buildCdmParser_e546a3e931cb5b92]));
          }

          ::org::orekit::files::ccsds::ndm::NdmParser ParserBuilder::buildNdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmParser(env->callObjectMethod(this$, mids$[mid_buildNdmParser_cb8a7531c6b49edb]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser ParserBuilder::buildOcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser(env->callObjectMethod(this$, mids$[mid_buildOcmParser_e7a3c2d9a62629c6]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemParser ParserBuilder::buildOemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemParser(env->callObjectMethod(this$, mids$[mid_buildOemParser_a517b0450fdb3998]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser ParserBuilder::buildOmmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser(env->callObjectMethod(this$, mids$[mid_buildOmmParser_95d92899297688d3]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser ParserBuilder::buildOpmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser(env->callObjectMethod(this$, mids$[mid_buildOpmParser_e13b341b4f517cd5]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmParser ParserBuilder::buildTdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmParser(env->callObjectMethod(this$, mids$[mid_buildTdmParser_b124bbfa04761895]));
          }

          jint ParserBuilder::getDefaultInterpolationDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getDefaultInterpolationDegree_d6ab429752e7c267]);
          }

          jdouble ParserBuilder::getDefaultMass() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDefaultMass_9981f74b2d109da6]);
          }

          jdouble ParserBuilder::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ParserBuilder::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7]));
          }

          jboolean ParserBuilder::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_eee3de00fe971136]);
          }

          ParserBuilder ParserBuilder::withDefaultInterpolationDegree(jint a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultInterpolationDegree_4ca1b888c33ecf3c], a0));
          }

          ParserBuilder ParserBuilder::withDefaultMass(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultMass_9437dbbc40d5787c], a0));
          }

          ParserBuilder ParserBuilder::withMu(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withMu_9437dbbc40d5787c], a0));
          }

          ParserBuilder ParserBuilder::withParsedUnitsBehavior(const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withParsedUnitsBehavior_6ecc9d16f861fa10], a0.this$));
          }

          ParserBuilder ParserBuilder::withSimpleEOP(jboolean a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withSimpleEOP_2b37804fccc7a944], a0));
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
          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args);
          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data);
          static PyGetSetDef t_ParserBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_ParserBuilder, defaultInterpolationDegree),
            DECLARE_GET_FIELD(t_ParserBuilder, defaultMass),
            DECLARE_GET_FIELD(t_ParserBuilder, mu),
            DECLARE_GET_FIELD(t_ParserBuilder, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ParserBuilder, simpleEOP),
            DECLARE_GET_FIELD(t_ParserBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParserBuilder__methods_[] = {
            DECLARE_METHOD(t_ParserBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildApmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildCdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildNdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOmmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOpmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildTdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultInterpolationDegree, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultMass, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getMu, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, isSimpleEOP, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, withDefaultInterpolationDegree, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withDefaultMass, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withMu, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withParsedUnitsBehavior, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withSimpleEOP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParserBuilder)[] = {
            { Py_tp_methods, t_ParserBuilder__methods_ },
            { Py_tp_init, (void *) t_ParserBuilder_init_ },
            { Py_tp_getset, t_ParserBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParserBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(ParserBuilder, t_ParserBuilder, ParserBuilder);
          PyObject *t_ParserBuilder::wrap_Object(const ParserBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParserBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParserBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(ParserBuilder), &PY_TYPE_DEF(ParserBuilder), module, "ParserBuilder", 0);
          }

          void t_ParserBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "class_", make_descriptor(ParserBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "wrapfn_", make_descriptor(t_ParserBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParserBuilder::initializeClass, 1)))
              return NULL;
            return t_ParserBuilder::wrap_Object(ParserBuilder(((t_ParserBuilder *) arg)->object.this$));
          }
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParserBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ParserBuilder object((jobject) NULL);

                INT_CALL(object = ParserBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                ParserBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = ParserBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmParser());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemParser());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmParser());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmParser());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmParser());
            return ::org::orekit::files::ccsds::ndm::t_NdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmParser());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemParser());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmParser());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmParser());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmParser());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg)
          {
            jint a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultInterpolationDegree(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultInterpolationDegree", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultMass(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultMass", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withMu(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMu", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a0((jobject) NULL);
            PyTypeObject **p0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_))
            {
              OBJ_CALL(result = self->object.withParsedUnitsBehavior(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withParsedUnitsBehavior", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg)
          {
            jboolean a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withSimpleEOP(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSimpleEOP", arg);
            return NULL;
          }
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIScale::class$ = NULL;
      jmethodID *TAIScale::mids$ = NULL;
      bool TAIScale::live$ = false;

      jclass TAIScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TAIScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble TAIScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TAIScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble TAIScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String TAIScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_getName(t_TAIScale *self);
      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data);
      static PyGetSetDef t_TAIScale__fields_[] = {
        DECLARE_GET_FIELD(t_TAIScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TAIScale__methods_[] = {
        DECLARE_METHOD(t_TAIScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TAIScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIScale)[] = {
        { Py_tp_methods, t_TAIScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TAIScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIScale, t_TAIScale, TAIScale);

      void t_TAIScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIScale), &PY_TYPE_DEF(TAIScale), module, "TAIScale", 0);
      }

      void t_TAIScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "class_", make_descriptor(TAIScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "wrapfn_", make_descriptor(t_TAIScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIScale::initializeClass, 1)))
          return NULL;
        return t_TAIScale::wrap_Object(TAIScale(((t_TAIScale *) arg)->object.this$));
      }
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TAIScale_getName(t_TAIScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TAIScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersGroundReceiverBaseModifier::class$ = NULL;
          jmethodID *PhaseCentersGroundReceiverBaseModifier::mids$ = NULL;
          bool PhaseCentersGroundReceiverBaseModifier::live$ = false;

          jclass PhaseCentersGroundReceiverBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4f6a2e827b6dec38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_oneWayDistanceModification_d9ef56512f9ba161] = env->getMethodID(cls, "oneWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_twoWayDistanceModification_d9ef56512f9ba161] = env->getMethodID(cls, "twoWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersGroundReceiverBaseModifier::PhaseCentersGroundReceiverBaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f6a2e827b6dec38, a0.this$, a1.this$)) {}

          jdouble PhaseCentersGroundReceiverBaseModifier::oneWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_oneWayDistanceModification_d9ef56512f9ba161], a0.this$);
          }

          jdouble PhaseCentersGroundReceiverBaseModifier::twoWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_twoWayDistanceModification_d9ef56512f9ba161], a0.this$);
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
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args);
          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersGroundReceiverBaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersGroundReceiverBaseModifier, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersGroundReceiverBaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, oneWayDistanceModification, METH_O),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, twoWayDistanceModification, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersGroundReceiverBaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersGroundReceiverBaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersGroundReceiverBaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersGroundReceiverBaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersGroundReceiverBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersGroundReceiverBaseModifier, t_PhaseCentersGroundReceiverBaseModifier, PhaseCentersGroundReceiverBaseModifier);
          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(const PhaseCentersGroundReceiverBaseModifier& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseCentersGroundReceiverBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersGroundReceiverBaseModifier), &PY_TYPE_DEF(PhaseCentersGroundReceiverBaseModifier), module, "PhaseCentersGroundReceiverBaseModifier", 0);
          }

          void t_PhaseCentersGroundReceiverBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "class_", make_descriptor(PhaseCentersGroundReceiverBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(PhaseCentersGroundReceiverBaseModifier(((t_PhaseCentersGroundReceiverBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersGroundReceiverBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersGroundReceiverBaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.oneWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "oneWayDistanceModification", arg);
            return NULL;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.twoWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "twoWayDistanceModification", arg);
            return NULL;
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data)
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
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GMSTScale::class$ = NULL;
      jmethodID *GMSTScale::mids$ = NULL;
      bool GMSTScale::live$ = false;

      jclass GMSTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GMSTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GMSTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble GMSTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GMSTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String GMSTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_getName(t_GMSTScale *self);
      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data);
      static PyGetSetDef t_GMSTScale__fields_[] = {
        DECLARE_GET_FIELD(t_GMSTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GMSTScale__methods_[] = {
        DECLARE_METHOD(t_GMSTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GMSTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GMSTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GMSTScale)[] = {
        { Py_tp_methods, t_GMSTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GMSTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GMSTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GMSTScale, t_GMSTScale, GMSTScale);

      void t_GMSTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GMSTScale), &PY_TYPE_DEF(GMSTScale), module, "GMSTScale", 0);
      }

      void t_GMSTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "class_", make_descriptor(GMSTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "wrapfn_", make_descriptor(t_GMSTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GMSTScale::initializeClass, 1)))
          return NULL;
        return t_GMSTScale::wrap_Object(GMSTScale(((t_GMSTScale *) arg)->object.this$));
      }
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GMSTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GMSTScale_getName(t_GMSTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GMSTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *FieldDSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool FieldDSSTJ2SquaredClosedFormContext::live$ = false;

            jclass FieldDSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_46b7e8885744644e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_08d37e3f77b7239d] = env->getMethodID(cls, "getA4", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha4_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_08d37e3f77b7239d] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEta_08d37e3f77b7239d] = env->getMethodID(cls, "getEta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getS2_08d37e3f77b7239d] = env->getMethodID(cls, "getS2", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTJ2SquaredClosedFormContext::FieldDSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_46b7e8885744644e, a0.this$, a1.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getA4() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA4_08d37e3f77b7239d]));
            }

            jdouble FieldDSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_9981f74b2d109da6]);
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getEta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEta_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getS2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getS2_08d37e3f77b7239d]));
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
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args);
            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_FieldDSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, s2),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_FieldDSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_FieldDSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTJ2SquaredClosedFormContext, t_FieldDSSTJ2SquaredClosedFormContext, FieldDSSTJ2SquaredClosedFormContext);
            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(const FieldDSSTJ2SquaredClosedFormContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(FieldDSSTJ2SquaredClosedFormContext), module, "FieldDSSTJ2SquaredClosedFormContext", 0);
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "class_", make_descriptor(FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(FieldDSSTJ2SquaredClosedFormContext(((t_FieldDSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldDSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1))
              {
                INT_CALL(object = FieldDSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA4());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getS2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA4());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getS2());
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
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *SourceTable::class$ = NULL;
          jmethodID *SourceTable::mids$ = NULL;
          bool SourceTable::live$ = false;

          jclass SourceTable::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/SourceTable");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCasters_d751c1a57012b438] = env->getMethodID(cls, "getCasters", "()Ljava/util/List;");
              mids$[mid_getDataStreams_d751c1a57012b438] = env->getMethodID(cls, "getDataStreams", "()Ljava/util/List;");
              mids$[mid_getNetworks_d751c1a57012b438] = env->getMethodID(cls, "getNetworks", "()Ljava/util/List;");
              mids$[mid_getNtripFlags_d2c8eb4129821f0e] = env->getMethodID(cls, "getNtripFlags", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List SourceTable::getCasters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCasters_d751c1a57012b438]));
          }

          ::java::util::List SourceTable::getDataStreams() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataStreams_d751c1a57012b438]));
          }

          ::java::util::List SourceTable::getNetworks() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNetworks_d751c1a57012b438]));
          }

          ::java::lang::String SourceTable::getNtripFlags() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNtripFlags_d2c8eb4129821f0e]));
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
        namespace ntrip {
          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_getCasters(t_SourceTable *self);
          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self);
          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self);
          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self);
          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data);
          static PyGetSetDef t_SourceTable__fields_[] = {
            DECLARE_GET_FIELD(t_SourceTable, casters),
            DECLARE_GET_FIELD(t_SourceTable, dataStreams),
            DECLARE_GET_FIELD(t_SourceTable, networks),
            DECLARE_GET_FIELD(t_SourceTable, ntripFlags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SourceTable__methods_[] = {
            DECLARE_METHOD(t_SourceTable, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, getCasters, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getDataStreams, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNetworks, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNtripFlags, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SourceTable)[] = {
            { Py_tp_methods, t_SourceTable__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SourceTable__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SourceTable)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SourceTable, t_SourceTable, SourceTable);

          void t_SourceTable::install(PyObject *module)
          {
            installType(&PY_TYPE(SourceTable), &PY_TYPE_DEF(SourceTable), module, "SourceTable", 0);
          }

          void t_SourceTable::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "class_", make_descriptor(SourceTable::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "wrapfn_", make_descriptor(t_SourceTable::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SourceTable::initializeClass, 1)))
              return NULL;
            return t_SourceTable::wrap_Object(SourceTable(((t_SourceTable *) arg)->object.this$));
          }
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SourceTable::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SourceTable_getCasters(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(CasterRecord));
          }

          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(DataStreamRecord));
          }

          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NetworkRecord));
          }

          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNtripFlags());
            return j2p(result);
          }

          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNtripFlags());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/SDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SDP4::class$ = NULL;
          jmethodID *SDP4::mids$ = NULL;
          bool SDP4::live$ = false;

          jclass SDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_sxpInitialize_ff7cb6c242604316] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "sxpPropagate", "(D)V");
              mids$[mid_luniSolarTermsComputation_ff7cb6c242604316] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_1ad26e8c8c0cd65b] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_1ad26e8c8c0cd65b] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");
              mids$[mid_thetaG_209f08246d708042] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/AbsoluteDate;)D");

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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SDP4__methods_[] = {
            DECLARE_METHOD(t_SDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SDP4)[] = {
            { Py_tp_methods, t_SDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SDP4, t_SDP4, SDP4);

          void t_SDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SDP4), &PY_TYPE_DEF(SDP4), module, "SDP4", 0);
          }

          void t_SDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "class_", make_descriptor(SDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "wrapfn_", make_descriptor(t_SDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SDP4::initializeClass, 1)))
              return NULL;
            return t_SDP4::wrap_Object(SDP4(((t_SDP4 *) arg)->object.this$));
          }
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SDP4::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *RotationXmlTokenBuilder::class$ = NULL;
            jmethodID *RotationXmlTokenBuilder::mids$ = NULL;
            bool RotationXmlTokenBuilder::live$ = false;

            jclass RotationXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_bb6f0a25fbefd346] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RotationXmlTokenBuilder::RotationXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::java::util::List RotationXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_bb6f0a25fbefd346], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RotationXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RotationXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RotationXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RotationXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RotationXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RotationXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RotationXmlTokenBuilder, t_RotationXmlTokenBuilder, RotationXmlTokenBuilder);

            void t_RotationXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RotationXmlTokenBuilder), &PY_TYPE_DEF(RotationXmlTokenBuilder), module, "RotationXmlTokenBuilder", 0);
            }

            void t_RotationXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "class_", make_descriptor(RotationXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "wrapfn_", make_descriptor(t_RotationXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RotationXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RotationXmlTokenBuilder::wrap_Object(RotationXmlTokenBuilder(((t_RotationXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RotationXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RotationXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RotationXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorPreservingVisitor::class$ = NULL;
      jmethodID *RealVectorPreservingVisitor::mids$ = NULL;
      bool RealVectorPreservingVisitor::live$ = false;

      jclass RealVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_9981f74b2d109da6] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_48ca1125d4856a74] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_4320462275d66e78] = env->getMethodID(cls, "visit", "(ID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_9981f74b2d109da6]);
      }

      void RealVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_48ca1125d4856a74], a0, a1, a2);
      }

      void RealVectorPreservingVisitor::visit(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_4320462275d66e78], a0, a1);
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
      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self);
      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_RealVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorPreservingVisitor, t_RealVectorPreservingVisitor, RealVectorPreservingVisitor);

      void t_RealVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorPreservingVisitor), &PY_TYPE_DEF(RealVectorPreservingVisitor), module, "RealVectorPreservingVisitor", 0);
      }

      void t_RealVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "class_", make_descriptor(RealVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "wrapfn_", make_descriptor(t_RealVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorPreservingVisitor::wrap_Object(RealVectorPreservingVisitor(((t_RealVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFieldIntegratorBuilder::live$ = false;

        jclass AbstractFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_d2b5a7210d9a6d44] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractFieldIntegratorBuilder::AbstractFieldIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_d2b5a7210d9a6d44], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
      namespace conversion {
        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AbstractFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AbstractFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldIntegratorBuilder, t_AbstractFieldIntegratorBuilder, AbstractFieldIntegratorBuilder);
        PyObject *t_AbstractFieldIntegratorBuilder::wrap_Object(const AbstractFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFieldIntegratorBuilder), module, "AbstractFieldIntegratorBuilder", 0);
        }

        void t_AbstractFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "class_", make_descriptor(AbstractFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldIntegratorBuilder::wrap_Object(AbstractFieldIntegratorBuilder(((t_AbstractFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          AbstractFieldIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = AbstractFieldIntegratorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldAuxiliaryElements::class$ = NULL;
            jmethodID *FieldAuxiliaryElements::mids$ = NULL;
            bool FieldAuxiliaryElements::live$ = false;

            jclass FieldAuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_628d419054c752d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;I)V");
                mids$[mid_getAlpha_08d37e3f77b7239d] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getB_08d37e3f77b7239d] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_08d37e3f77b7239d] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getC_08d37e3f77b7239d] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
                mids$[mid_getEcc_08d37e3f77b7239d] = env->getMethodID(cls, "getEcc", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_08d37e3f77b7239d] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getH_08d37e3f77b7239d] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK_08d37e3f77b7239d] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKeplerianPeriod_08d37e3f77b7239d] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLM_08d37e3f77b7239d] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLe_08d37e3f77b7239d] = env->getMethodID(cls, "getLe", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLv_08d37e3f77b7239d] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbit_5b5bea4bdba413a2] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
                mids$[mid_getP_08d37e3f77b7239d] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getQ_08d37e3f77b7239d] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRetrogradeFactor_d6ab429752e7c267] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_08d37e3f77b7239d] = env->getMethodID(cls, "getSma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getVectorF_d1b42a6748e907f9] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorG_d1b42a6748e907f9] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorW_d1b42a6748e907f9] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_toAuxiliaryElements_cb6ec8282f1342d0] = env->getMethodID(cls, "toAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldAuxiliaryElements::FieldAuxiliaryElements(const ::org::orekit::orbits::FieldOrbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_628d419054c752d8, a0.this$, a1)) {}

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_08d37e3f77b7239d]));
            }

            ::org::orekit::time::FieldAbsoluteDate FieldAuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getEcc() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEcc_08d37e3f77b7239d]));
            }

            ::org::orekit::frames::Frame FieldAuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getH() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getH_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getKeplerianPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLe() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLe_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLv() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_08d37e3f77b7239d]));
            }

            ::org::orekit::orbits::FieldOrbit FieldAuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_5b5bea4bdba413a2]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getP() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getP_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getQ() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_08d37e3f77b7239d]));
            }

            jint FieldAuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_d6ab429752e7c267]);
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getSma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSma_08d37e3f77b7239d]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_d1b42a6748e907f9]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_d1b42a6748e907f9]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_d1b42a6748e907f9]));
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements FieldAuxiliaryElements::toAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_toAuxiliaryElements_cb6ec8282f1342d0]));
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
          namespace utilities {
            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args);
            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data);
            static PyGetSetDef t_FieldAuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, b),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, c),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, date),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, h),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, k),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, le),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, p),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, q),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorW),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_FieldAuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLe, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorW, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, toAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAuxiliaryElements)[] = {
              { Py_tp_methods, t_FieldAuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_FieldAuxiliaryElements_init_ },
              { Py_tp_getset, t_FieldAuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldAuxiliaryElements, t_FieldAuxiliaryElements, FieldAuxiliaryElements);
            PyObject *t_FieldAuxiliaryElements::wrap_Object(const FieldAuxiliaryElements& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAuxiliaryElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAuxiliaryElements), &PY_TYPE_DEF(FieldAuxiliaryElements), module, "FieldAuxiliaryElements", 0);
            }

            void t_FieldAuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "class_", make_descriptor(FieldAuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "wrapfn_", make_descriptor(t_FieldAuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_FieldAuxiliaryElements::wrap_Object(FieldAuxiliaryElements(((t_FieldAuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldAuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldAuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEcc());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getH());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLe());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLv());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getP());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getQ());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getSma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.toAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEcc());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getH());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLe());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLv());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getP());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getQ());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getSma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/ModifiedFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *ModifiedFrame::class$ = NULL;
          jmethodID *ModifiedFrame::mids$ = NULL;
          bool ModifiedFrame::live$ = false;

          jclass ModifiedFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/ModifiedFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6a2eb6e7fadbf63a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/bodies/CelestialBody;Ljava/lang/String;)V");
              mids$[mid_getCenterName_d2c8eb4129821f0e] = env->getMethodID(cls, "getCenterName", "()Ljava/lang/String;");
              mids$[mid_getRefFrame_f7bff9eee7210db3] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedFrame::ModifiedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::bodies::CelestialBody & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_6a2eb6e7fadbf63a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::String ModifiedFrame::getCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCenterName_d2c8eb4129821f0e]));
          }

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame ModifiedFrame::getRefFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_getRefFrame_f7bff9eee7210db3]));
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
          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data);
          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data);
          static PyGetSetDef t_ModifiedFrame__fields_[] = {
            DECLARE_GET_FIELD(t_ModifiedFrame, centerName),
            DECLARE_GET_FIELD(t_ModifiedFrame, refFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ModifiedFrame__methods_[] = {
            DECLARE_METHOD(t_ModifiedFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, getCenterName, METH_NOARGS),
            DECLARE_METHOD(t_ModifiedFrame, getRefFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedFrame)[] = {
            { Py_tp_methods, t_ModifiedFrame__methods_ },
            { Py_tp_init, (void *) t_ModifiedFrame_init_ },
            { Py_tp_getset, t_ModifiedFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedFrame)[] = {
            &PY_TYPE_DEF(::org::orekit::frames::Frame),
            NULL
          };

          DEFINE_TYPE(ModifiedFrame, t_ModifiedFrame, ModifiedFrame);

          void t_ModifiedFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedFrame), &PY_TYPE_DEF(ModifiedFrame), module, "ModifiedFrame", 0);
          }

          void t_ModifiedFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "class_", make_descriptor(ModifiedFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "wrapfn_", make_descriptor(t_ModifiedFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedFrame::initializeClass, 1)))
              return NULL;
            return t_ModifiedFrame::wrap_Object(ModifiedFrame(((t_ModifiedFrame *) arg)->object.this$));
          }
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ModifiedFrame object((jobject) NULL);

            if (!parseArgs(args, "kKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &a3))
            {
              INT_CALL(object = ModifiedFrame(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterName());
            return j2p(result);
          }

          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterName());
            return j2p(value);
          }

          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame value((jobject) NULL);
            OBJ_CALL(value = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(value);
          }
        }
      }
    }
  }
}
