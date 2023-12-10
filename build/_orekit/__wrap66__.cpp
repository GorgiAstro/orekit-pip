#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractShapiroBaseModifier::class$ = NULL;
          jmethodID *AbstractShapiroBaseModifier::mids$ = NULL;
          bool AbstractShapiroBaseModifier::live$ = false;

          jclass AbstractShapiroBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_doModify_811f96960c94c1de] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_shapiroCorrection_746d8b07ca1f2457] = env->getMethodID(cls, "shapiroCorrection", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/utils/TimeStampedPVCoordinates;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractShapiroBaseModifier::AbstractShapiroBaseModifier(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}
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
          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractShapiroBaseModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractShapiroBaseModifier)[] = {
            { Py_tp_methods, t_AbstractShapiroBaseModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractShapiroBaseModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractShapiroBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractShapiroBaseModifier, t_AbstractShapiroBaseModifier, AbstractShapiroBaseModifier);

          void t_AbstractShapiroBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractShapiroBaseModifier), &PY_TYPE_DEF(AbstractShapiroBaseModifier), module, "AbstractShapiroBaseModifier", 0);
          }

          void t_AbstractShapiroBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "class_", make_descriptor(AbstractShapiroBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "wrapfn_", make_descriptor(t_AbstractShapiroBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractShapiroBaseModifier::wrap_Object(AbstractShapiroBaseModifier(((t_AbstractShapiroBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            AbstractShapiroBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = AbstractShapiroBaseModifier(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSLegacyNavigationMessage::class$ = NULL;
            jmethodID *QZSSLegacyNavigationMessage::mids$ = NULL;
            bool QZSSLegacyNavigationMessage::live$ = false;

            jclass QZSSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSLegacyNavigationMessage::QZSSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSLegacyNavigationMessage, t_QZSSLegacyNavigationMessage, QZSSLegacyNavigationMessage);

            void t_QZSSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSLegacyNavigationMessage), &PY_TYPE_DEF(QZSSLegacyNavigationMessage), module, "QZSSLegacyNavigationMessage", 0);
            }

            void t_QZSSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "class_", make_descriptor(QZSSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_QZSSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSLegacyNavigationMessage::wrap_Object(QZSSLegacyNavigationMessage(((t_QZSSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              QZSSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = QZSSLegacyNavigationMessage());
              self->object = object;

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
#include "java/lang/String.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Iterable.h"
#include "java/util/Locale.h"
#include "java/util/Comparator.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *String::class$ = NULL;
    jmethodID *String::mids$ = NULL;
    bool String::live$ = false;
    ::java::util::Comparator *String::CASE_INSENSITIVE_ORDER = NULL;

    jclass String::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/String");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a6ba1b711f136c8b] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuffer;)V");
        mids$[mid_init$_637f103bf67eb332] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuilder;)V");
        mids$[mid_init$_9c4b35f0a6dc87f3] = env->getMethodID(cls, "<init>", "([B)V");
        mids$[mid_init$_819ed274952f967e] = env->getMethodID(cls, "<init>", "([C)V");
        mids$[mid_init$_d17e4ab6c0951bf6] = env->getMethodID(cls, "<init>", "([BLjava/lang/String;)V");
        mids$[mid_init$_1fa9249f4a2aa117] = env->getMethodID(cls, "<init>", "([BI)V");
        mids$[mid_init$_125b1e9f043b29f8] = env->getMethodID(cls, "<init>", "([BII)V");
        mids$[mid_init$_2df38be22737223f] = env->getMethodID(cls, "<init>", "([CII)V");
        mids$[mid_init$_32b3bfc37fd90cb0] = env->getMethodID(cls, "<init>", "([III)V");
        mids$[mid_init$_23e6b6385093e6cb] = env->getMethodID(cls, "<init>", "([BIILjava/lang/String;)V");
        mids$[mid_init$_068fdb1edf87e615] = env->getMethodID(cls, "<init>", "([BIII)V");
        mids$[mid_charAt_52047e692b58eb87] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_38565d58479aa24a] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_38565d58479aa24a] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_d9790ac9eecfe931] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_5d6fce34d596f8f0] = env->getMethodID(cls, "compareTo", "(Ljava/lang/String;)I");
        mids$[mid_compareToIgnoreCase_5d6fce34d596f8f0] = env->getMethodID(cls, "compareToIgnoreCase", "(Ljava/lang/String;)I");
        mids$[mid_concat_43625fc1c3d86afe] = env->getMethodID(cls, "concat", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_contains_dadf85946695cbec] = env->getMethodID(cls, "contains", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_contentEquals_ad98fc65393ebcf0] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/StringBuffer;)Z");
        mids$[mid_contentEquals_dadf85946695cbec] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_copyValueOf_7faef32e6b4dd67a] = env->getStaticMethodID(cls, "copyValueOf", "([C)Ljava/lang/String;");
        mids$[mid_copyValueOf_b27b10e3c7ff4c43] = env->getStaticMethodID(cls, "copyValueOf", "([CII)Ljava/lang/String;");
        mids$[mid_endsWith_6b161f495ea569b8] = env->getMethodID(cls, "endsWith", "(Ljava/lang/String;)Z");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_equalsIgnoreCase_6b161f495ea569b8] = env->getMethodID(cls, "equalsIgnoreCase", "(Ljava/lang/String;)Z");
        mids$[mid_format_800b9a7564ae3d87] = env->getStaticMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_f4558bf34d230bb6] = env->getStaticMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_getBytes_89bfc9a589d9cd37] = env->getMethodID(cls, "getBytes", "()[B");
        mids$[mid_getBytes_1444722a095e6891] = env->getMethodID(cls, "getBytes", "(Ljava/lang/String;)[B");
        mids$[mid_getBytes_4f3c9ee97860e729] = env->getMethodID(cls, "getBytes", "(II[BI)V");
        mids$[mid_getChars_6a4fae412727af3a] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_38565d58479aa24a] = env->getMethodID(cls, "indexOf", "(I)I");
        mids$[mid_indexOf_4918d8aef83f928e] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_indexOf_d9790ac9eecfe931] = env->getMethodID(cls, "indexOf", "(II)I");
        mids$[mid_intern_0090f7797e403f43] = env->getMethodID(cls, "intern", "()Ljava/lang/String;");
        mids$[mid_isBlank_e470b6d9e0d979db] = env->getMethodID(cls, "isBlank", "()Z");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_join_c8b76c27ca9a9196] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_join_adf7fa7b91236ee9] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;");
        mids$[mid_lastIndexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_38565d58479aa24a] = env->getMethodID(cls, "lastIndexOf", "(I)I");
        mids$[mid_lastIndexOf_4918d8aef83f928e] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_lastIndexOf_d9790ac9eecfe931] = env->getMethodID(cls, "lastIndexOf", "(II)I");
        mids$[mid_length_f2f64475e4580546] = env->getMethodID(cls, "length", "()I");
        mids$[mid_lines_a68a17dd093f796d] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_matches_6b161f495ea569b8] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
        mids$[mid_offsetByCodePoints_d9790ac9eecfe931] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_regionMatches_2358ea4050598726] = env->getMethodID(cls, "regionMatches", "(ILjava/lang/String;II)Z");
        mids$[mid_regionMatches_cdfc076d2b3aee21] = env->getMethodID(cls, "regionMatches", "(ZILjava/lang/String;II)Z");
        mids$[mid_repeat_90cbcc0b7a5ddae9] = env->getMethodID(cls, "repeat", "(I)Ljava/lang/String;");
        mids$[mid_replace_7365bde3c39d4280] = env->getMethodID(cls, "replace", "(CC)Ljava/lang/String;");
        mids$[mid_replace_281ed31d1c1f61f2] = env->getMethodID(cls, "replace", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_replaceAll_01d87ea922ecee51] = env->getMethodID(cls, "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_replaceFirst_01d87ea922ecee51] = env->getMethodID(cls, "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_split_1c925abc6f702288] = env->getMethodID(cls, "split", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_split_dc570674be780b54] = env->getMethodID(cls, "split", "(Ljava/lang/String;I)[Ljava/lang/String;");
        mids$[mid_startsWith_6b161f495ea569b8] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;)Z");
        mids$[mid_startsWith_8bfc3b25361c76f9] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;I)Z");
        mids$[mid_strip_0090f7797e403f43] = env->getMethodID(cls, "strip", "()Ljava/lang/String;");
        mids$[mid_stripLeading_0090f7797e403f43] = env->getMethodID(cls, "stripLeading", "()Ljava/lang/String;");
        mids$[mid_stripTrailing_0090f7797e403f43] = env->getMethodID(cls, "stripTrailing", "()Ljava/lang/String;");
        mids$[mid_subSequence_d0ccff93b0cd9262] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_90cbcc0b7a5ddae9] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_a1a389fa4c946a7a] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toCharArray_946e97d3d5d65de5] = env->getMethodID(cls, "toCharArray", "()[C");
        mids$[mid_toLowerCase_0090f7797e403f43] = env->getMethodID(cls, "toLowerCase", "()Ljava/lang/String;");
        mids$[mid_toLowerCase_bab3be9b232acc5a] = env->getMethodID(cls, "toLowerCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_0090f7797e403f43] = env->getMethodID(cls, "toUpperCase", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_bab3be9b232acc5a] = env->getMethodID(cls, "toUpperCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_trim_0090f7797e403f43] = env->getMethodID(cls, "trim", "()Ljava/lang/String;");
        mids$[mid_valueOf_7faef32e6b4dd67a] = env->getStaticMethodID(cls, "valueOf", "([C)Ljava/lang/String;");
        mids$[mid_valueOf_59ba897c407f128d] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_1e1a62b6126a9504] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/String;");
        mids$[mid_valueOf_085bbc49599fa163] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_9173130ae370f7b2] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_90cbcc0b7a5ddae9] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/String;");
        mids$[mid_valueOf_d5950e748b97110b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_valueOf_8da367bd62adf91c] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/String;");
        mids$[mid_valueOf_b27b10e3c7ff4c43] = env->getStaticMethodID(cls, "valueOf", "([CII)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CASE_INSENSITIVE_ORDER = new ::java::util::Comparator(env->getStaticObjectField(cls, "CASE_INSENSITIVE_ORDER", "Ljava/util/Comparator;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    String::String() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    String::String(const ::java::lang::StringBuffer & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6ba1b711f136c8b, a0.this$)) {}

    String::String(const ::java::lang::StringBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_637f103bf67eb332, a0.this$)) {}

    String::String(const JArray< jbyte > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c4b35f0a6dc87f3, a0.this$)) {}

    String::String(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_819ed274952f967e, a0.this$)) {}

    String::String(const JArray< jbyte > & a0, const String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d17e4ab6c0951bf6, a0.this$, a1.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1fa9249f4a2aa117, a0.this$, a1)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_125b1e9f043b29f8, a0.this$, a1, a2)) {}

    String::String(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2df38be22737223f, a0.this$, a1, a2)) {}

    String::String(const JArray< jint > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32b3bfc37fd90cb0, a0.this$, a1, a2)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, const String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23e6b6385093e6cb, a0.this$, a1, a2, a3.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_068fdb1edf87e615, a0.this$, a1, a2, a3)) {}

    jchar String::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_52047e692b58eb87], a0);
    }

    jint String::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_38565d58479aa24a], a0);
    }

    jint String::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_38565d58479aa24a], a0);
    }

    jint String::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_d9790ac9eecfe931], a0, a1);
    }

    jint String::compareTo(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_5d6fce34d596f8f0], a0.this$);
    }

    jint String::compareToIgnoreCase(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareToIgnoreCase_5d6fce34d596f8f0], a0.this$);
    }

    String String::concat(const String & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_concat_43625fc1c3d86afe], a0.this$));
    }

    jboolean String::contains(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_dadf85946695cbec], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::StringBuffer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_ad98fc65393ebcf0], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_dadf85946695cbec], a0.this$);
    }

    String String::copyValueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_7faef32e6b4dd67a], a0.this$));
    }

    String String::copyValueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_b27b10e3c7ff4c43], a0.this$, a1, a2));
    }

    jboolean String::endsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_endsWith_6b161f495ea569b8], a0.this$);
    }

    jboolean String::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jboolean String::equalsIgnoreCase(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equalsIgnoreCase_6b161f495ea569b8], a0.this$);
    }

    String String::format(const String & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_800b9a7564ae3d87], a0.this$, a1.this$));
    }

    String String::format(const ::java::util::Locale & a0, const String & a1, const JArray< ::java::lang::Object > & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_f4558bf34d230bb6], a0.this$, a1.this$, a2.this$));
    }

    JArray< jbyte > String::getBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_89bfc9a589d9cd37]));
    }

    JArray< jbyte > String::getBytes(const String & a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_1444722a095e6891], a0.this$));
    }

    void String::getBytes(jint a0, jint a1, const JArray< jbyte > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getBytes_4f3c9ee97860e729], a0, a1, a2.this$, a3);
    }

    void String::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_6a4fae412727af3a], a0, a1, a2.this$, a3);
    }

    jint String::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint String::indexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint String::indexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_38565d58479aa24a], a0);
    }

    jint String::indexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_4918d8aef83f928e], a0.this$, a1);
    }

    jint String::indexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_d9790ac9eecfe931], a0, a1);
    }

    String String::intern() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_intern_0090f7797e403f43]));
    }

    jboolean String::isBlank() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isBlank_e470b6d9e0d979db]);
    }

    jboolean String::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    String String::join(const ::java::lang::CharSequence & a0, const JArray< ::java::lang::CharSequence > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_c8b76c27ca9a9196], a0.this$, a1.this$));
    }

    String String::join(const ::java::lang::CharSequence & a0, const ::java::lang::Iterable & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_adf7fa7b91236ee9], a0.this$, a1.this$));
    }

    jint String::lastIndexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint String::lastIndexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_38565d58479aa24a], a0);
    }

    jint String::lastIndexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_4918d8aef83f928e], a0.this$, a1);
    }

    jint String::lastIndexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_d9790ac9eecfe931], a0, a1);
    }

    jint String::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_f2f64475e4580546]);
    }

    ::java::util::stream::Stream String::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_a68a17dd093f796d]));
    }

    jboolean String::matches(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_matches_6b161f495ea569b8], a0.this$);
    }

    jint String::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_d9790ac9eecfe931], a0, a1);
    }

    jboolean String::regionMatches(jint a0, const String & a1, jint a2, jint a3) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_2358ea4050598726], a0, a1.this$, a2, a3);
    }

    jboolean String::regionMatches(jboolean a0, jint a1, const String & a2, jint a3, jint a4) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_cdfc076d2b3aee21], a0, a1, a2.this$, a3, a4);
    }

    String String::repeat(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_repeat_90cbcc0b7a5ddae9], a0));
    }

    String String::replace(jchar a0, jchar a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_7365bde3c39d4280], a0, a1));
    }

    String String::replace(const ::java::lang::CharSequence & a0, const ::java::lang::CharSequence & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_281ed31d1c1f61f2], a0.this$, a1.this$));
    }

    String String::replaceAll(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceAll_01d87ea922ecee51], a0.this$, a1.this$));
    }

    String String::replaceFirst(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceFirst_01d87ea922ecee51], a0.this$, a1.this$));
    }

    JArray< String > String::split(const String & a0) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_1c925abc6f702288], a0.this$));
    }

    JArray< String > String::split(const String & a0, jint a1) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_dc570674be780b54], a0.this$, a1));
    }

    jboolean String::startsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_6b161f495ea569b8], a0.this$);
    }

    jboolean String::startsWith(const String & a0, jint a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_8bfc3b25361c76f9], a0.this$, a1);
    }

    String String::strip() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_strip_0090f7797e403f43]));
    }

    String String::stripLeading() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripLeading_0090f7797e403f43]));
    }

    String String::stripTrailing() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripTrailing_0090f7797e403f43]));
    }

    ::java::lang::CharSequence String::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_d0ccff93b0cd9262], a0, a1));
    }

    String String::substring(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_90cbcc0b7a5ddae9], a0));
    }

    String String::substring(jint a0, jint a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_a1a389fa4c946a7a], a0, a1));
    }

    JArray< jchar > String::toCharArray() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_toCharArray_946e97d3d5d65de5]));
    }

    String String::toLowerCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_0090f7797e403f43]));
    }

    String String::toLowerCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_bab3be9b232acc5a], a0.this$));
    }

    String String::toString() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    String String::toUpperCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_0090f7797e403f43]));
    }

    String String::toUpperCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_bab3be9b232acc5a], a0.this$));
    }

    String String::trim() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_trim_0090f7797e403f43]));
    }

    String String::valueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7faef32e6b4dd67a], a0.this$));
    }

    String String::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_59ba897c407f128d], a0));
    }

    String String::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1e1a62b6126a9504], a0));
    }

    String String::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_085bbc49599fa163], a0));
    }

    String String::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9173130ae370f7b2], a0));
    }

    String String::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_90cbcc0b7a5ddae9], a0));
    }

    String String::valueOf(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d5950e748b97110b], a0.this$));
    }

    String String::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8da367bd62adf91c], a0));
    }

    String String::valueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b27b10e3c7ff4c43], a0.this$, a1, a2));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg);
    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds);
    static PyObject *t_String_charAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointCount(t_String *self, PyObject *args);
    static PyObject *t_String_compareTo(t_String *self, PyObject *arg);
    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_concat(t_String *self, PyObject *arg);
    static PyObject *t_String_contains(t_String *self, PyObject *arg);
    static PyObject *t_String_contentEquals(t_String *self, PyObject *args);
    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_endsWith(t_String *self, PyObject *arg);
    static PyObject *t_String_equals(t_String *self, PyObject *args);
    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_format(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_getBytes(t_String *self, PyObject *args);
    static PyObject *t_String_getChars(t_String *self, PyObject *args);
    static PyObject *t_String_hashCode(t_String *self, PyObject *args);
    static PyObject *t_String_indexOf(t_String *self, PyObject *args);
    static PyObject *t_String_intern(t_String *self);
    static PyObject *t_String_isBlank(t_String *self);
    static PyObject *t_String_isEmpty(t_String *self);
    static PyObject *t_String_join(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args);
    static PyObject *t_String_length(t_String *self);
    static PyObject *t_String_lines(t_String *self);
    static PyObject *t_String_matches(t_String *self, PyObject *arg);
    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args);
    static PyObject *t_String_regionMatches(t_String *self, PyObject *args);
    static PyObject *t_String_repeat(t_String *self, PyObject *arg);
    static PyObject *t_String_replace(t_String *self, PyObject *args);
    static PyObject *t_String_replaceAll(t_String *self, PyObject *args);
    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args);
    static PyObject *t_String_split(t_String *self, PyObject *args);
    static PyObject *t_String_startsWith(t_String *self, PyObject *args);
    static PyObject *t_String_strip(t_String *self);
    static PyObject *t_String_stripLeading(t_String *self);
    static PyObject *t_String_stripTrailing(t_String *self);
    static PyObject *t_String_subSequence(t_String *self, PyObject *args);
    static PyObject *t_String_substring(t_String *self, PyObject *args);
    static PyObject *t_String_toCharArray(t_String *self);
    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args);
    static PyObject *t_String_toString(t_String *self, PyObject *args);
    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args);
    static PyObject *t_String_trim(t_String *self);
    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_get__blank(t_String *self, void *data);
    static PyObject *t_String_get__bytes(t_String *self, void *data);
    static PyObject *t_String_get__empty(t_String *self, void *data);
    static PyGetSetDef t_String__fields_[] = {
      DECLARE_GET_FIELD(t_String, blank),
      DECLARE_GET_FIELD(t_String, bytes),
      DECLARE_GET_FIELD(t_String, empty),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_String__methods_[] = {
      DECLARE_METHOD(t_String, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, charAt, METH_O),
      DECLARE_METHOD(t_String, codePointAt, METH_O),
      DECLARE_METHOD(t_String, codePointBefore, METH_O),
      DECLARE_METHOD(t_String, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_String, compareTo, METH_O),
      DECLARE_METHOD(t_String, compareToIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, concat, METH_O),
      DECLARE_METHOD(t_String, contains, METH_O),
      DECLARE_METHOD(t_String, contentEquals, METH_VARARGS),
      DECLARE_METHOD(t_String, copyValueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, endsWith, METH_O),
      DECLARE_METHOD(t_String, equals, METH_VARARGS),
      DECLARE_METHOD(t_String, equalsIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, format, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, getBytes, METH_VARARGS),
      DECLARE_METHOD(t_String, getChars, METH_VARARGS),
      DECLARE_METHOD(t_String, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_String, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, intern, METH_NOARGS),
      DECLARE_METHOD(t_String, isBlank, METH_NOARGS),
      DECLARE_METHOD(t_String, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_String, join, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, length, METH_NOARGS),
      DECLARE_METHOD(t_String, lines, METH_NOARGS),
      DECLARE_METHOD(t_String, matches, METH_O),
      DECLARE_METHOD(t_String, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_String, regionMatches, METH_VARARGS),
      DECLARE_METHOD(t_String, repeat, METH_O),
      DECLARE_METHOD(t_String, replace, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceAll, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceFirst, METH_VARARGS),
      DECLARE_METHOD(t_String, split, METH_VARARGS),
      DECLARE_METHOD(t_String, startsWith, METH_VARARGS),
      DECLARE_METHOD(t_String, strip, METH_NOARGS),
      DECLARE_METHOD(t_String, stripLeading, METH_NOARGS),
      DECLARE_METHOD(t_String, stripTrailing, METH_NOARGS),
      DECLARE_METHOD(t_String, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_String, substring, METH_VARARGS),
      DECLARE_METHOD(t_String, toCharArray, METH_NOARGS),
      DECLARE_METHOD(t_String, toLowerCase, METH_VARARGS),
      DECLARE_METHOD(t_String, toString, METH_VARARGS),
      DECLARE_METHOD(t_String, toUpperCase, METH_VARARGS),
      DECLARE_METHOD(t_String, trim, METH_NOARGS),
      DECLARE_METHOD(t_String, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(String)[] = {
      { Py_tp_methods, t_String__methods_ },
      { Py_tp_init, (void *) t_String_init_ },
      { Py_tp_getset, t_String__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(String)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(String, t_String, String);

    void t_String::install(PyObject *module)
    {
      installType(&PY_TYPE(String), &PY_TYPE_DEF(String), module, "String", 0);
    }

    void t_String::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "class_", make_descriptor(String::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "wrapfn_", make_descriptor(unboxString));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "boxfn_", make_descriptor(boxString));
      env->getClass(String::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "CASE_INSENSITIVE_ORDER", make_descriptor(::java::util::t_Comparator::wrap_Object(*String::CASE_INSENSITIVE_ORDER)));
    }

    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, String::initializeClass, 1)))
        return NULL;
      return t_String::wrap_Object(String(((t_String *) arg)->object.this$));
    }
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, String::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String object((jobject) NULL);

          INT_CALL(object = String());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::StringBuilder a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuilder::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          String a1((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[Bs", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String a3((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIII", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
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

    static PyObject *t_String_charAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "charAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointBefore", arg);
      return NULL;
    }

    static PyObject *t_String_codePointCount(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_String_compareTo(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareToIgnoreCase(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareToIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_concat(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.concat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "concat", arg);
      return NULL;
    }

    static PyObject *t_String_contains(t_String *self, PyObject *arg)
    {
      ::java::lang::CharSequence a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_String_contentEquals(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "contentEquals", args);
      return NULL;
    }

    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "copyValueOf", args);
      return NULL;
    }

    static PyObject *t_String_endsWith(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.endsWith(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "endsWith", arg);
      return NULL;
    }

    static PyObject *t_String_equals(t_String *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.equalsIgnoreCase(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equalsIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_format(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "format", args);
      return NULL;
    }

    static PyObject *t_String_getBytes(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jbyte > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBytes());
          return result.wrap();
        }
        break;
       case 1:
        {
          String a0((jobject) NULL);
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          jint a0;
          jint a1;
          JArray< jbyte > a2((jobject) NULL);
          jint a3;

          if (!parseArgs(args, "II[BI", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.getBytes(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getBytes", args);
      return NULL;
    }

    static PyObject *t_String_getChars(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "getChars", args);
      return NULL;
    }

    static PyObject *t_String_hashCode(t_String *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_String_indexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", args);
      return NULL;
    }

    static PyObject *t_String_intern(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.intern());
      return j2p(result);
    }

    static PyObject *t_String_isBlank(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isBlank());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_isEmpty(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_join(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          JArray< ::java::lang::CharSequence > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "O[O", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::Iterable a1((jobject) NULL);
          PyTypeObject **p1;
          String result((jobject) NULL);

          if (!parseArgs(args, "OK", ::java::lang::PY_TYPE(CharSequence), ::java::lang::Iterable::initializeClass, &a0, &a1, &p1, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "join", args);
      return NULL;
    }

    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", args);
      return NULL;
    }

    static PyObject *t_String_length(t_String *self)
    {
      jint result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_String_lines(t_String *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_String_matches(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.matches(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "matches", arg);
      return NULL;
    }

    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_String_regionMatches(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          jint a0;
          String a1((jobject) NULL);
          jint a2;
          jint a3;
          jboolean result;

          if (!parseArgs(args, "IsII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 5:
        {
          jboolean a0;
          jint a1;
          String a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean result;

          if (!parseArgs(args, "ZIsII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3, a4));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "regionMatches", args);
      return NULL;
    }

    static PyObject *t_String_repeat(t_String *self, PyObject *arg)
    {
      jint a0;
      String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.repeat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "repeat", arg);
      return NULL;
    }

    static PyObject *t_String_replace(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jchar a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "CC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::CharSequence a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "OO", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_String_replaceAll(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceAll(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceFirst(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceFirst", args);
      return NULL;
    }

    static PyObject *t_String_split(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.split(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.split(a0, a1));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "split", args);
      return NULL;
    }

    static PyObject *t_String_startsWith(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.startsWith(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jboolean result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.startsWith(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "startsWith", args);
      return NULL;
    }

    static PyObject *t_String_strip(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.strip());
      return j2p(result);
    }

    static PyObject *t_String_stripLeading(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripLeading());
      return j2p(result);
    }

    static PyObject *t_String_stripTrailing(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripTrailing());
      return j2p(result);
    }

    static PyObject *t_String_subSequence(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subSequence", args);
      return NULL;
    }

    static PyObject *t_String_substring(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "substring", args);
      return NULL;
    }

    static PyObject *t_String_toCharArray(t_String *self)
    {
      JArray< jchar > result((jobject) NULL);
      OBJ_CALL(result = self->object.toCharArray());
      return result.wrap();
    }

    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toLowerCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toLowerCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_String_toString(t_String *self, PyObject *args)
    {
      String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toUpperCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toUpperCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_String_trim(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.trim());
      return j2p(result);
    }

    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jboolean a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jchar a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jdouble a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jfloat a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_String_get__blank(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isBlank());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_String_get__bytes(t_String *self, void *data)
    {
      JArray< jbyte > value((jobject) NULL);
      OBJ_CALL(value = self->object.getBytes());
      return value.wrap();
    }

    static PyObject *t_String_get__empty(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *TaylorMap::class$ = NULL;
        jmethodID *TaylorMap::mids$ = NULL;
        bool TaylorMap::live$ = false;

        jclass TaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/TaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d6beef7d5ac3aeda] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_c80ec2f7d8b5fe87] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_compose_d43e52d71d192134] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/TaylorMap;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_getFunction_e42bfd21ac531fa1] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getNbFunctions_f2f64475e4580546] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_f2f64475e4580546] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_7cdc325af0834901] = env->getMethodID(cls, "getPoint", "()[D");
            mids$[mid_invert_23d0f1e57994ee82] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_value_4b742fe429c22ba8] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TaylorMap::TaylorMap(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6beef7d5ac3aeda, a0.this$, a1.this$)) {}

        TaylorMap::TaylorMap(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c80ec2f7d8b5fe87, a0, a1, a2)) {}

        TaylorMap TaylorMap::compose(const TaylorMap & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_compose_d43e52d71d192134], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure TaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_e42bfd21ac531fa1], a0));
        }

        jint TaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_f2f64475e4580546]);
        }

        jint TaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_f2f64475e4580546]);
        }

        JArray< jdouble > TaylorMap::getPoint() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_7cdc325af0834901]));
        }

        TaylorMap TaylorMap::invert(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_invert_23d0f1e57994ee82], a0.this$));
        }

        JArray< jdouble > TaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_4b742fe429c22ba8], a0.this$));
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
        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self);
        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data);
        static PyGetSetDef t_TaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_TaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_TaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_TaylorMap, point),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TaylorMap__methods_[] = {
          DECLARE_METHOD(t_TaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, compose, METH_O),
          DECLARE_METHOD(t_TaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_TaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, invert, METH_O),
          DECLARE_METHOD(t_TaylorMap, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TaylorMap)[] = {
          { Py_tp_methods, t_TaylorMap__methods_ },
          { Py_tp_init, (void *) t_TaylorMap_init_ },
          { Py_tp_getset, t_TaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TaylorMap, t_TaylorMap, TaylorMap);

        void t_TaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(TaylorMap), &PY_TYPE_DEF(TaylorMap), module, "TaylorMap", 0);
        }

        void t_TaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "class_", make_descriptor(TaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "wrapfn_", make_descriptor(t_TaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TaylorMap::initializeClass, 1)))
            return NULL;
          return t_TaylorMap::wrap_Object(TaylorMap(((t_TaylorMap *) arg)->object.this$));
        }
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a1((jobject) NULL);
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jint a1;
              jint a2;
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = TaylorMap(a0, a1, a2));
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

        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg)
        {
          TaylorMap a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", TaylorMap::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return result.wrap();
        }

        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCycleSlipDetector::class$ = NULL;
          jmethodID *PhaseMinusCodeCycleSlipDetector::mids$ = NULL;
          bool PhaseMinusCodeCycleSlipDetector::live$ = false;

          jclass PhaseMinusCodeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5a15021085cabdb] = env->getMethodID(cls, "<init>", "(DDII)V");
              mids$[mid_manageData_a74883e6a7063961] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseMinusCodeCycleSlipDetector::PhaseMinusCodeCycleSlipDetector(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_b5a15021085cabdb, a0, a1, a2, a3)) {}
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
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_PhaseMinusCodeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCycleSlipDetector)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_PhaseMinusCodeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCycleSlipDetector, t_PhaseMinusCodeCycleSlipDetector, PhaseMinusCodeCycleSlipDetector);

          void t_PhaseMinusCodeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCycleSlipDetector), &PY_TYPE_DEF(PhaseMinusCodeCycleSlipDetector), module, "PhaseMinusCodeCycleSlipDetector", 0);
          }

          void t_PhaseMinusCodeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "class_", make_descriptor(PhaseMinusCodeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "wrapfn_", make_descriptor(t_PhaseMinusCodeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCycleSlipDetector::wrap_Object(PhaseMinusCodeCycleSlipDetector(((t_PhaseMinusCodeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint a3;
            PhaseMinusCodeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PhaseMinusCodeCycleSlipDetector(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3CoordinateHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3CoordinateHermiteInterpolator::class$ = NULL;
        jmethodID *SP3CoordinateHermiteInterpolator::mids$ = NULL;
        bool SP3CoordinateHermiteInterpolator::live$ = false;

        jclass SP3CoordinateHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3CoordinateHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_726464cbb7d28c95] = env->getMethodID(cls, "<init>", "(IDZ)V");
            mids$[mid_interpolate_090ef627bbfd8ed4] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/files/sp3/SP3Coordinate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3CoordinateHermiteInterpolator::SP3CoordinateHermiteInterpolator(jint a0, jdouble a1, jboolean a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_726464cbb7d28c95, a0, a1, a2)) {}
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
      namespace sp3 {
        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args);
        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data);
        static PyGetSetDef t_SP3CoordinateHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_SP3CoordinateHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3CoordinateHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3CoordinateHermiteInterpolator)[] = {
          { Py_tp_methods, t_SP3CoordinateHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_SP3CoordinateHermiteInterpolator_init_ },
          { Py_tp_getset, t_SP3CoordinateHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3CoordinateHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
          NULL
        };

        DEFINE_TYPE(SP3CoordinateHermiteInterpolator, t_SP3CoordinateHermiteInterpolator, SP3CoordinateHermiteInterpolator);
        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_Object(const SP3CoordinateHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3CoordinateHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3CoordinateHermiteInterpolator), &PY_TYPE_DEF(SP3CoordinateHermiteInterpolator), module, "SP3CoordinateHermiteInterpolator", 0);
        }

        void t_SP3CoordinateHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "class_", make_descriptor(SP3CoordinateHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "wrapfn_", make_descriptor(t_SP3CoordinateHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_SP3CoordinateHermiteInterpolator::wrap_Object(SP3CoordinateHermiteInterpolator(((t_SP3CoordinateHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jboolean a2;
          SP3CoordinateHermiteInterpolator object((jobject) NULL);

          if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
          {
            INT_CALL(object = SP3CoordinateHermiteInterpolator(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventOccurrence::class$ = NULL;
        jmethodID *EventOccurrence::mids$ = NULL;
        bool EventOccurrence::live$ = false;

        jclass EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b46c1ee579b4120a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_getAction_8c7583beb4e5a879] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_239034750ae844b7] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/ODEState;");
            mids$[mid_getStopTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getStopTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventOccurrence::EventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b46c1ee579b4120a, a0.this$, a1.this$, a2)) {}

        ::org::hipparchus::ode::events::Action EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_8c7583beb4e5a879]));
        }

        ::org::hipparchus::ode::ODEState EventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_getNewState_239034750ae844b7]));
        }

        jdouble EventOccurrence::getStopTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStopTime_456d9a2f64d6b28d]);
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
        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data);
        static PyGetSetDef t_EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventOccurrence, stopTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventOccurrence)[] = {
          { Py_tp_methods, t_EventOccurrence__methods_ },
          { Py_tp_init, (void *) t_EventOccurrence_init_ },
          { Py_tp_getset, t_EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventOccurrence, t_EventOccurrence, EventOccurrence);

        void t_EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventOccurrence), &PY_TYPE_DEF(EventOccurrence), module, "EventOccurrence", 0);
        }

        void t_EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "class_", make_descriptor(EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "wrapfn_", make_descriptor(t_EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventOccurrence::wrap_Object(EventOccurrence(((t_EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          EventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KkD", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &a2))
          {
            INT_CALL(object = EventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::ODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStopTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStopTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorConverter.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorConverter::class$ = NULL;
        jmethodID *PythonAbstractPropagatorConverter::mids$ = NULL;
        bool PythonAbstractPropagatorConverter::live$ = false;

        jclass PythonAbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_682853cb9e463f06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getModel_b196da25fd980476] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_aaef55ff59f9c00e] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorConverter::PythonAbstractPropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_682853cb9e463f06, a0.this$, a1, a2)) {}

        void PythonAbstractPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractPropagatorConverter::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self);
        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorConverter, t_PythonAbstractPropagatorConverter, PythonAbstractPropagatorConverter);

        void t_PythonAbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorConverter), &PY_TYPE_DEF(PythonAbstractPropagatorConverter), module, "PythonAbstractPropagatorConverter", 1);
        }

        void t_PythonAbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "class_", make_descriptor(PythonAbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;", (void *) t_PythonAbstractPropagatorConverter_getModel0 },
            { "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;", (void *) t_PythonAbstractPropagatorConverter_getObjectiveFunction1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorConverter::wrap_Object(PythonAbstractPropagatorConverter(((t_PythonAbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractPropagatorConverter(a0, a1, a2));
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

        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModel", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &value))
          {
            throwTypeError("getModel", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObjectiveFunction", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &value))
          {
            throwTypeError("getObjectiveFunction", result);
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

        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *InertiaKey::class$ = NULL;
              jmethodID *InertiaKey::mids$ = NULL;
              bool InertiaKey::live$ = false;
              InertiaKey *InertiaKey::COMMENT = NULL;
              InertiaKey *InertiaKey::I11 = NULL;
              InertiaKey *InertiaKey::I12 = NULL;
              InertiaKey *InertiaKey::I13 = NULL;
              InertiaKey *InertiaKey::I22 = NULL;
              InertiaKey *InertiaKey::I23 = NULL;
              InertiaKey *InertiaKey::I33 = NULL;
              InertiaKey *InertiaKey::INERTIA_REF_FRAME = NULL;
              InertiaKey *InertiaKey::IXX = NULL;
              InertiaKey *InertiaKey::IXY = NULL;
              InertiaKey *InertiaKey::IXZ = NULL;
              InertiaKey *InertiaKey::IYY = NULL;
              InertiaKey *InertiaKey::IYZ = NULL;
              InertiaKey *InertiaKey::IZZ = NULL;

              jclass InertiaKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/InertiaKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_fa3fde71911d30a3] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)Z");
                  mids$[mid_valueOf_5c58724e1bf76e6f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");
                  mids$[mid_values_4524b8bdd6bc6ba2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new InertiaKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I11 = new InertiaKey(env->getStaticObjectField(cls, "I11", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I12 = new InertiaKey(env->getStaticObjectField(cls, "I12", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I13 = new InertiaKey(env->getStaticObjectField(cls, "I13", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I22 = new InertiaKey(env->getStaticObjectField(cls, "I22", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I23 = new InertiaKey(env->getStaticObjectField(cls, "I23", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I33 = new InertiaKey(env->getStaticObjectField(cls, "I33", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  INERTIA_REF_FRAME = new InertiaKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXX = new InertiaKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXY = new InertiaKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXZ = new InertiaKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYY = new InertiaKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYZ = new InertiaKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IZZ = new InertiaKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean InertiaKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_fa3fde71911d30a3], a0.this$, a1.this$, a2.this$);
              }

              InertiaKey InertiaKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InertiaKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5c58724e1bf76e6f], a0.this$));
              }

              JArray< InertiaKey > InertiaKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InertiaKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4524b8bdd6bc6ba2]));
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
              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InertiaKey_values(PyTypeObject *type);
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data);
              static PyGetSetDef t_InertiaKey__fields_[] = {
                DECLARE_GET_FIELD(t_InertiaKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InertiaKey__methods_[] = {
                DECLARE_METHOD(t_InertiaKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, process, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InertiaKey)[] = {
                { Py_tp_methods, t_InertiaKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InertiaKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InertiaKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InertiaKey, t_InertiaKey, InertiaKey);
              PyObject *t_InertiaKey::wrap_Object(const InertiaKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InertiaKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InertiaKey::install(PyObject *module)
              {
                installType(&PY_TYPE(InertiaKey), &PY_TYPE_DEF(InertiaKey), module, "InertiaKey", 0);
              }

              void t_InertiaKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "class_", make_descriptor(InertiaKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "wrapfn_", make_descriptor(t_InertiaKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(InertiaKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "COMMENT", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I11", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I11)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I12", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I12)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I13", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I13)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I22", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I22)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I23", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I23)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I33", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I33)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "INERTIA_REF_FRAME", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXX", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IZZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IZZ)));
              }

              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InertiaKey::initializeClass, 1)))
                  return NULL;
                return t_InertiaKey::wrap_Object(InertiaKey(((t_InertiaKey *) arg)->object.this$));
              }
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InertiaKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InertiaKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::valueOf(a0));
                  return t_InertiaKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InertiaKey_values(PyTypeObject *type)
              {
                JArray< InertiaKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::values());
                return JArray<jobject>(result.this$).wrap(t_InertiaKey::wrap_jobject);
              }
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data)
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
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedField::class$ = NULL;
      jmethodID *TimeStampedField::mids$ = NULL;
      bool TimeStampedField::live$ = false;

      jclass TimeStampedField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44175088f72cd4c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_c3308b1248756dcf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getValue_e6d4d3215c30992a] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44175088f72cd4c9, a0.this$, a1.this$)) {}

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3308b1248756dcf, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedField::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::hipparchus::CalculusFieldElement TimeStampedField::getValue() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e6d4d3215c30992a]));
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
      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args);
      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data);
      static PyGetSetDef t_TimeStampedField__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedField, date),
        DECLARE_GET_FIELD(t_TimeStampedField, value),
        DECLARE_GET_FIELD(t_TimeStampedField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedField__methods_[] = {
        DECLARE_METHOD(t_TimeStampedField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedField, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedField, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedField)[] = {
        { Py_tp_methods, t_TimeStampedField__methods_ },
        { Py_tp_init, (void *) t_TimeStampedField_init_ },
        { Py_tp_getset, t_TimeStampedField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedField, t_TimeStampedField, TimeStampedField);
      PyObject *t_TimeStampedField::wrap_Object(const TimeStampedField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedField::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedField), &PY_TYPE_DEF(TimeStampedField), module, "TimeStampedField", 0);
      }

      void t_TimeStampedField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "class_", make_descriptor(TimeStampedField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "wrapfn_", make_descriptor(t_TimeStampedField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedField::initializeClass, 1)))
          return NULL;
        return t_TimeStampedField::wrap_Object(TimeStampedField(((t_TimeStampedField *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
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

      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "java/util/Map.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF::class$ = NULL;
        jmethodID *CPF::mids$ = NULL;
        bool CPF::live$ = false;
        ::java::lang::String *CPF::DEFAULT_ID = NULL;

        jclass CPF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatelliteCoordinate_c3cd3ea9a0404274] = env->getMethodID(cls, "addSatelliteCoordinate", "(Ljava/lang/String;Lorg/orekit/files/ilrs/CPF$CPFCoordinate;)V");
            mids$[mid_addSatelliteCoordinates_6ea6ec8379c9f4a5] = env->getMethodID(cls, "addSatelliteCoordinates", "(Ljava/lang/String;Ljava/util/List;)V");
            mids$[mid_addSatelliteVelocityToCPFCoordinate_ff42c417021079b7] = env->getMethodID(cls, "addSatelliteVelocityToCPFCoordinate", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_79ac7ef6978f6ee0] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CPFHeader;");
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_getTimeScale_63ac10047983bd43] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_setFilter_8aadfa247de709c5] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setInterpolationSample_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationSample", "(I)V");
            mids$[mid_setMu_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setTimeScale_6d73d536a2f24dd5] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ID = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ID", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF::CPF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void CPF::addSatelliteCoordinate(const ::java::lang::String & a0, const ::org::orekit::files::ilrs::CPF$CPFCoordinate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinate_c3cd3ea9a0404274], a0.this$, a1.this$);
        }

        void CPF::addSatelliteCoordinates(const ::java::lang::String & a0, const ::java::util::List & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinates_6ea6ec8379c9f4a5], a0.this$, a1.this$);
        }

        void CPF::addSatelliteVelocityToCPFCoordinate(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteVelocityToCPFCoordinate_ff42c417021079b7], a0.this$, a1.this$);
        }

        ::java::util::List CPF::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
        }

        ::org::orekit::files::ilrs::CPFHeader CPF::getHeader() const
        {
          return ::org::orekit::files::ilrs::CPFHeader(env->callObjectMethod(this$, mids$[mid_getHeader_79ac7ef6978f6ee0]));
        }

        ::java::util::Map CPF::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
        }

        ::org::orekit::time::TimeScale CPF::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_63ac10047983bd43]));
        }

        void CPF::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_8aadfa247de709c5], a0.this$);
        }

        void CPF::setInterpolationSample(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationSample_0a2a1ac2721c0336], a0);
        }

        void CPF::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_77e0f9a1f260e2e5], a0);
        }

        void CPF::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeScale_6d73d536a2f24dd5], a0.this$);
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
      namespace ilrs {
        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_getComments(t_CPF *self);
        static PyObject *t_CPF_getHeader(t_CPF *self);
        static PyObject *t_CPF_getSatellites(t_CPF *self);
        static PyObject *t_CPF_getTimeScale(t_CPF *self);
        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_get__comments(t_CPF *self, void *data);
        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__header(t_CPF *self, void *data);
        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data);
        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data);
        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data);
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPF__fields_[] = {
          DECLARE_GET_FIELD(t_CPF, comments),
          DECLARE_SET_FIELD(t_CPF, filter),
          DECLARE_GET_FIELD(t_CPF, header),
          DECLARE_SET_FIELD(t_CPF, interpolationSample),
          DECLARE_SET_FIELD(t_CPF, mu),
          DECLARE_GET_FIELD(t_CPF, satellites),
          DECLARE_GETSET_FIELD(t_CPF, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF__methods_[] = {
          DECLARE_METHOD(t_CPF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteVelocityToCPFCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CPF, setFilter, METH_O),
          DECLARE_METHOD(t_CPF, setInterpolationSample, METH_O),
          DECLARE_METHOD(t_CPF, setMu, METH_O),
          DECLARE_METHOD(t_CPF, setTimeScale, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF)[] = {
          { Py_tp_methods, t_CPF__methods_ },
          { Py_tp_init, (void *) t_CPF_init_ },
          { Py_tp_getset, t_CPF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF, t_CPF, CPF);

        void t_CPF::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF), &PY_TYPE_DEF(CPF), module, "CPF", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "CPFCoordinate", make_descriptor(&PY_TYPE_DEF(CPF$CPFCoordinate)));
        }

        void t_CPF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "class_", make_descriptor(CPF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "wrapfn_", make_descriptor(t_CPF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "boxfn_", make_descriptor(boxObject));
          env->getClass(CPF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "DEFAULT_ID", make_descriptor(j2p(*CPF::DEFAULT_ID)));
        }

        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF::initializeClass, 1)))
            return NULL;
          return t_CPF::wrap_Object(CPF(((t_CPF *) arg)->object.this$));
        }
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds)
        {
          CPF object((jobject) NULL);

          INT_CALL(object = CPF());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF$CPFCoordinate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::files::ilrs::CPF$CPFCoordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.addSatelliteCoordinates(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinates", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteVelocityToCPFCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteVelocityToCPFCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_getComments(t_CPF *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CPF_getHeader(t_CPF *self)
        {
          ::org::orekit::files::ilrs::CPFHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(result);
        }

        static PyObject *t_CPF_getSatellites(t_CPF *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF_getTimeScale(t_CPF *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setInterpolationSample(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationSample", arg);
          return NULL;
        }

        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::time::TimeScale a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CPF_get__comments(t_CPF *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_CPF_get__header(t_CPF *self, void *data)
        {
          ::org::orekit::files::ilrs::CPFHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(value);
        }

        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setInterpolationSample(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "interpolationSample", arg);
          return -1;
        }

        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray$ExpansionMode::class$ = NULL;
      jmethodID *ResizableDoubleArray$ExpansionMode::mids$ = NULL;
      bool ResizableDoubleArray$ExpansionMode::live$ = false;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::ADDITIVE = NULL;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE = NULL;

      jclass ResizableDoubleArray$ExpansionMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray$ExpansionMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_3fb491c1a5f8ff4c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_values_35c0e83df799f77a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "ADDITIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          MULTIPLICATIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "MULTIPLICATIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray$ExpansionMode ResizableDoubleArray$ExpansionMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ResizableDoubleArray$ExpansionMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3fb491c1a5f8ff4c], a0.this$));
      }

      JArray< ResizableDoubleArray$ExpansionMode > ResizableDoubleArray$ExpansionMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ResizableDoubleArray$ExpansionMode >(env->callStaticObjectMethod(cls, mids$[mid_values_35c0e83df799f77a]));
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
      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data);
      static PyGetSetDef t_ResizableDoubleArray$ExpansionMode__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray$ExpansionMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray$ExpansionMode__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray$ExpansionMode)[] = {
        { Py_tp_methods, t_ResizableDoubleArray$ExpansionMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ResizableDoubleArray$ExpansionMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray$ExpansionMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray$ExpansionMode, t_ResizableDoubleArray$ExpansionMode, ResizableDoubleArray$ExpansionMode);
      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_Object(const ResizableDoubleArray$ExpansionMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ResizableDoubleArray$ExpansionMode::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray$ExpansionMode), &PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode), module, "ResizableDoubleArray$ExpansionMode", 0);
      }

      void t_ResizableDoubleArray$ExpansionMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "class_", make_descriptor(ResizableDoubleArray$ExpansionMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "wrapfn_", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(ResizableDoubleArray$ExpansionMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "ADDITIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::ADDITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "MULTIPLICATIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE)));
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray$ExpansionMode::wrap_Object(ResizableDoubleArray$ExpansionMode(((t_ResizableDoubleArray$ExpansionMode *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ResizableDoubleArray$ExpansionMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::valueOf(a0));
          return t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type)
      {
        JArray< ResizableDoubleArray$ExpansionMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::values());
        return JArray<jobject>(result.this$).wrap(t_ResizableDoubleArray$ExpansionMode::wrap_jobject);
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiElliptic::class$ = NULL;
          jmethodID *JacobiElliptic::mids$ = NULL;
          bool JacobiElliptic::live$ = false;

          jclass JacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_0ba5fed9597b693e] = env->getMethodID(cls, "arccd", "(D)D");
              mids$[mid_arccn_0ba5fed9597b693e] = env->getMethodID(cls, "arccn", "(D)D");
              mids$[mid_arccs_0ba5fed9597b693e] = env->getMethodID(cls, "arccs", "(D)D");
              mids$[mid_arcdc_0ba5fed9597b693e] = env->getMethodID(cls, "arcdc", "(D)D");
              mids$[mid_arcdn_0ba5fed9597b693e] = env->getMethodID(cls, "arcdn", "(D)D");
              mids$[mid_arcds_0ba5fed9597b693e] = env->getMethodID(cls, "arcds", "(D)D");
              mids$[mid_arcnc_0ba5fed9597b693e] = env->getMethodID(cls, "arcnc", "(D)D");
              mids$[mid_arcnd_0ba5fed9597b693e] = env->getMethodID(cls, "arcnd", "(D)D");
              mids$[mid_arcns_0ba5fed9597b693e] = env->getMethodID(cls, "arcns", "(D)D");
              mids$[mid_arcsc_0ba5fed9597b693e] = env->getMethodID(cls, "arcsc", "(D)D");
              mids$[mid_arcsd_0ba5fed9597b693e] = env->getMethodID(cls, "arcsd", "(D)D");
              mids$[mid_arcsn_0ba5fed9597b693e] = env->getMethodID(cls, "arcsn", "(D)D");
              mids$[mid_getM_456d9a2f64d6b28d] = env->getMethodID(cls, "getM", "()D");
              mids$[mid_valuesC_3ea25bc763e15782] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarC;");
              mids$[mid_valuesD_e78d63d17e7bd96c] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarD;");
              mids$[mid_valuesN_7d28cafc08fb26d3] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarN;");
              mids$[mid_valuesS_3b6e505e34acdbf7] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JacobiElliptic::arccd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccd_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arccn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccn_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arccs(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccs_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcdc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdc_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcdn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdn_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcds(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcds_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcnc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnc_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcnd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnd_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcns(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcns_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcsc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsc_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcsd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsd_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::arcsn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsn_0ba5fed9597b693e], a0);
          }

          jdouble JacobiElliptic::getM() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarC JacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_3ea25bc763e15782], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarD JacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_e78d63d17e7bd96c], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarN JacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_7d28cafc08fb26d3], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarS JacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_3b6e505e34acdbf7], a0));
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
          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self);
          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data);
          static PyGetSetDef t_JacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiElliptic, m),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_JacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, arccd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccs, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcds, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcns, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_JacobiElliptic, valuesC, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesD, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesN, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesS, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiElliptic)[] = {
            { Py_tp_methods, t_JacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiElliptic, t_JacobiElliptic, JacobiElliptic);

          void t_JacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiElliptic), &PY_TYPE_DEF(JacobiElliptic), module, "JacobiElliptic", 0);
          }

          void t_JacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "class_", make_descriptor(JacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "wrapfn_", make_descriptor(t_JacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_JacobiElliptic::wrap_Object(JacobiElliptic(((t_JacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccs(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcds(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcns(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarC result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesC(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarC::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarD result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesD(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarD::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarN result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesN(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarN::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarS result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesS(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarS::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineDatation::class$ = NULL;
        jmethodID *LineDatation::mids$ = NULL;
        bool LineDatation::live$ = false;

        jclass LineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_a76f1ca2cc1b76e5] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_e912d21057defe63] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_0ba5fed9597b693e] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate LineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_a76f1ca2cc1b76e5], a0));
        }

        jdouble LineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_e912d21057defe63], a0.this$);
        }

        jdouble LineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_0ba5fed9597b693e], a0);
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
      namespace linesensor {
        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg);

        static PyMethodDef t_LineDatation__methods_[] = {
          DECLARE_METHOD(t_LineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineDatation)[] = {
          { Py_tp_methods, t_LineDatation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineDatation, t_LineDatation, LineDatation);

        void t_LineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LineDatation), &PY_TYPE_DEF(LineDatation), module, "LineDatation", 0);
        }

        void t_LineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "class_", make_descriptor(LineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "wrapfn_", make_descriptor(t_LineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineDatation::initializeClass, 1)))
            return NULL;
          return t_LineDatation::wrap_Object(LineDatation(((t_LineDatation *) arg)->object.this$));
        }
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/LenseThirringRelativity.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
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
      namespace gravity {

        ::java::lang::Class *LenseThirringRelativity::class$ = NULL;
        jmethodID *LenseThirringRelativity::mids$ = NULL;
        bool LenseThirringRelativity::live$ = false;

        jclass LenseThirringRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/LenseThirringRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3469fac3d9918fac] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LenseThirringRelativity::LenseThirringRelativity(jdouble a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3469fac3d9918fac, a0, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean LenseThirringRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::List LenseThirringRelativity::getParametersDrivers() const
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
        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args);
        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data);
        static PyGetSetDef t_LenseThirringRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_LenseThirringRelativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LenseThirringRelativity__methods_[] = {
          DECLARE_METHOD(t_LenseThirringRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LenseThirringRelativity)[] = {
          { Py_tp_methods, t_LenseThirringRelativity__methods_ },
          { Py_tp_init, (void *) t_LenseThirringRelativity_init_ },
          { Py_tp_getset, t_LenseThirringRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LenseThirringRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LenseThirringRelativity, t_LenseThirringRelativity, LenseThirringRelativity);

        void t_LenseThirringRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(LenseThirringRelativity), &PY_TYPE_DEF(LenseThirringRelativity), module, "LenseThirringRelativity", 0);
        }

        void t_LenseThirringRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "class_", make_descriptor(LenseThirringRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "wrapfn_", make_descriptor(t_LenseThirringRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LenseThirringRelativity::initializeClass, 1)))
            return NULL;
          return t_LenseThirringRelativity::wrap_Object(LenseThirringRelativity(((t_LenseThirringRelativity *) arg)->object.this$));
        }
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LenseThirringRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          LenseThirringRelativity object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            INT_CALL(object = LenseThirringRelativity(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args)
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

        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data)
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
#include "java/io/BufferedReader.h"
#include "java/io/IOException.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *BufferedReader::class$ = NULL;
    jmethodID *BufferedReader::mids$ = NULL;
    bool BufferedReader::live$ = false;

    jclass BufferedReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/BufferedReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1c6153fa427d8a7] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;)V");
        mids$[mid_init$_205448b9adc07b31] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;I)V");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_lines_a68a17dd093f796d] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_mark_0a2a1ac2721c0336] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_e470b6d9e0d979db] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_a7dcb595f3e6fbfc] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_readLine_0090f7797e403f43] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_ready_e470b6d9e0d979db] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_7ae3461a92a43152] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_955f7541fca701ab] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BufferedReader::BufferedReader(const ::java::io::Reader & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_a1c6153fa427d8a7, a0.this$)) {}

    BufferedReader::BufferedReader(const ::java::io::Reader & a0, jint a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_205448b9adc07b31, a0.this$, a1)) {}

    void BufferedReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    ::java::util::stream::Stream BufferedReader::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_a68a17dd093f796d]));
    }

    void BufferedReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_0a2a1ac2721c0336], a0);
    }

    jboolean BufferedReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_e470b6d9e0d979db]);
    }

    jint BufferedReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint BufferedReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a7dcb595f3e6fbfc], a0.this$, a1, a2);
    }

    ::java::lang::String BufferedReader::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_0090f7797e403f43]));
    }

    jboolean BufferedReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_e470b6d9e0d979db]);
    }

    void BufferedReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_7ae3461a92a43152]);
    }

    jlong BufferedReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_955f7541fca701ab], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_lines(t_BufferedReader *self);
    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self);
    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args);

    static PyMethodDef t_BufferedReader__methods_[] = {
      DECLARE_METHOD(t_BufferedReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, close, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, lines, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, read, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, readLine, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(BufferedReader)[] = {
      { Py_tp_methods, t_BufferedReader__methods_ },
      { Py_tp_init, (void *) t_BufferedReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(BufferedReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(BufferedReader, t_BufferedReader, BufferedReader);

    void t_BufferedReader::install(PyObject *module)
    {
      installType(&PY_TYPE(BufferedReader), &PY_TYPE_DEF(BufferedReader), module, "BufferedReader", 0);
    }

    void t_BufferedReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "class_", make_descriptor(BufferedReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "wrapfn_", make_descriptor(t_BufferedReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, BufferedReader::initializeClass, 1)))
        return NULL;
      return t_BufferedReader::wrap_Object(BufferedReader(((t_BufferedReader *) arg)->object.this$));
    }
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, BufferedReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::Reader a0((jobject) NULL);
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            INT_CALL(object = BufferedReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::Reader a0((jobject) NULL);
          jint a1;
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "kI", ::java::io::Reader::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BufferedReader(a0, a1));
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

    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_BufferedReader_lines(t_BufferedReader *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrHeader::class$ = NULL;
            jmethodID *SsrHeader::mids$ = NULL;
            bool SsrHeader::live$ = false;

            jclass SsrHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIodSsr_f2f64475e4580546] = env->getMethodID(cls, "getIodSsr", "()I");
                mids$[mid_getSsrEpoch1s_456d9a2f64d6b28d] = env->getMethodID(cls, "getSsrEpoch1s", "()D");
                mids$[mid_getSsrMultipleMessageIndicator_f2f64475e4580546] = env->getMethodID(cls, "getSsrMultipleMessageIndicator", "()I");
                mids$[mid_getSsrProviderId_f2f64475e4580546] = env->getMethodID(cls, "getSsrProviderId", "()I");
                mids$[mid_getSsrSolutionId_f2f64475e4580546] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                mids$[mid_getSsrUpdateInterval_f2f64475e4580546] = env->getMethodID(cls, "getSsrUpdateInterval", "()I");
                mids$[mid_setIodSsr_0a2a1ac2721c0336] = env->getMethodID(cls, "setIodSsr", "(I)V");
                mids$[mid_setSsrEpoch1s_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSsrEpoch1s", "(D)V");
                mids$[mid_setSsrMultipleMessageIndicator_0a2a1ac2721c0336] = env->getMethodID(cls, "setSsrMultipleMessageIndicator", "(I)V");
                mids$[mid_setSsrProviderId_0a2a1ac2721c0336] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                mids$[mid_setSsrSolutionId_0a2a1ac2721c0336] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                mids$[mid_setSsrUpdateInterval_0a2a1ac2721c0336] = env->getMethodID(cls, "setSsrUpdateInterval", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrHeader::SsrHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint SsrHeader::getIodSsr() const
            {
              return env->callIntMethod(this$, mids$[mid_getIodSsr_f2f64475e4580546]);
            }

            jdouble SsrHeader::getSsrEpoch1s() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSsrEpoch1s_456d9a2f64d6b28d]);
            }

            jint SsrHeader::getSsrMultipleMessageIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrMultipleMessageIndicator_f2f64475e4580546]);
            }

            jint SsrHeader::getSsrProviderId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrProviderId_f2f64475e4580546]);
            }

            jint SsrHeader::getSsrSolutionId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_f2f64475e4580546]);
            }

            jint SsrHeader::getSsrUpdateInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrUpdateInterval_f2f64475e4580546]);
            }

            void SsrHeader::setIodSsr(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIodSsr_0a2a1ac2721c0336], a0);
            }

            void SsrHeader::setSsrEpoch1s(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrEpoch1s_77e0f9a1f260e2e5], a0);
            }

            void SsrHeader::setSsrMultipleMessageIndicator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrMultipleMessageIndicator_0a2a1ac2721c0336], a0);
            }

            void SsrHeader::setSsrProviderId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrProviderId_0a2a1ac2721c0336], a0);
            }

            void SsrHeader::setSsrSolutionId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_0a2a1ac2721c0336], a0);
            }

            void SsrHeader::setSsrUpdateInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_0a2a1ac2721c0336], a0);
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
            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self);
            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_SsrHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_SsrHeader, iodSsr),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrEpoch1s),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrMultipleMessageIndicator),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrProviderId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrSolutionId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrUpdateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrHeader__methods_[] = {
              DECLARE_METHOD(t_SsrHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, getIodSsr, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrEpoch1s, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrMultipleMessageIndicator, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrProviderId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrSolutionId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrUpdateInterval, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, setIodSsr, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrEpoch1s, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrMultipleMessageIndicator, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrProviderId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrSolutionId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrUpdateInterval, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrHeader)[] = {
              { Py_tp_methods, t_SsrHeader__methods_ },
              { Py_tp_init, (void *) t_SsrHeader_init_ },
              { Py_tp_getset, t_SsrHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrHeader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrHeader, t_SsrHeader, SsrHeader);

            void t_SsrHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrHeader), &PY_TYPE_DEF(SsrHeader), module, "SsrHeader", 0);
            }

            void t_SsrHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "class_", make_descriptor(SsrHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "wrapfn_", make_descriptor(t_SsrHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrHeader::initializeClass, 1)))
                return NULL;
              return t_SsrHeader::wrap_Object(SsrHeader(((t_SsrHeader *) arg)->object.this$));
            }
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds)
            {
              SsrHeader object((jobject) NULL);

              INT_CALL(object = SsrHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIodSsr());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrProviderId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIodSsr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSsrEpoch1s(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrEpoch1s", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrMultipleMessageIndicator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrMultipleMessageIndicator", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrProviderId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrSolutionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIodSsr());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIodSsr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSsrEpoch1s(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrEpoch1s", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrMultipleMessageIndicator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrMultipleMessageIndicator", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrProviderId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrProviderId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrSolutionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrUpdateInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/hipparchus/ode/MultistepFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepFieldIntegrator::class$ = NULL;
      jmethodID *MultistepFieldIntegrator::mids$ = NULL;
      bool MultistepFieldIntegrator::live$ = false;

      jclass MultistepFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_f2f64475e4580546] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_456d9a2f64d6b28d] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_b792653519a95a45] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
          mids$[mid_setMaxGrowth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_a7608ffb03fe3825] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/FieldODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_306bab15a17e087f] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_rescale_03a16642f77779e7] = env->getMethodID(cls, "rescale", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_computeStepGrowShrinkFactor_0ba5fed9597b693e] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_start_257c87e40eefb645] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepFieldIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_456d9a2f64d6b28d]);
      }

      jdouble MultistepFieldIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_456d9a2f64d6b28d]);
      }

      jint MultistepFieldIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_f2f64475e4580546]);
      }

      jdouble MultistepFieldIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::ode::FieldODEIntegrator MultistepFieldIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::FieldODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_b792653519a95a45]));
      }

      void MultistepFieldIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_77e0f9a1f260e2e5], a0);
      }

      void MultistepFieldIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_77e0f9a1f260e2e5], a0);
      }

      void MultistepFieldIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_77e0f9a1f260e2e5], a0);
      }

      void MultistepFieldIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::FieldODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_a7608ffb03fe3825], a0.this$);
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
      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args);
      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data);
      static PyGetSetDef t_MultistepFieldIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, starterIntegrator),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepFieldIntegrator)[] = {
        { Py_tp_methods, t_MultistepFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepFieldIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepFieldIntegrator, t_MultistepFieldIntegrator, MultistepFieldIntegrator);
      PyObject *t_MultistepFieldIntegrator::wrap_Object(const MultistepFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MultistepFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MultistepFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepFieldIntegrator), &PY_TYPE_DEF(MultistepFieldIntegrator), module, "MultistepFieldIntegrator", 0);
      }

      void t_MultistepFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "class_", make_descriptor(MultistepFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "wrapfn_", make_descriptor(t_MultistepFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepFieldIntegrator::wrap_Object(MultistepFieldIntegrator(((t_MultistepFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxGrowth(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinReduction(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setSafety(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEIntegrator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxGrowth(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinReduction(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setSafety(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "safety", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractScheduler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractScheduler::class$ = NULL;
          jmethodID *PythonAbstractScheduler::mids$ = NULL;
          bool PythonAbstractScheduler::live$ = false;

          jclass PythonAbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_30703ff0587c737c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_measurementIsFeasible_ee2067c5768b6768] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractScheduler::PythonAbstractScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_30703ff0587c737c, a0.this$, a1.this$)) {}

          void PythonAbstractScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractScheduler::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args);
          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self);
          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args);
          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data);
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data);
          static PyGetSetDef t_PythonAbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, self),
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractScheduler)[] = {
            { Py_tp_methods, t_PythonAbstractScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractScheduler_init_ },
            { Py_tp_getset, t_PythonAbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(PythonAbstractScheduler, t_PythonAbstractScheduler, PythonAbstractScheduler);
          PyObject *t_PythonAbstractScheduler::wrap_Object(const PythonAbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractScheduler), &PY_TYPE_DEF(PythonAbstractScheduler), module, "PythonAbstractScheduler", 1);
          }

          void t_PythonAbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "class_", make_descriptor(PythonAbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "wrapfn_", make_descriptor(t_PythonAbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z", (void *) t_PythonAbstractScheduler_measurementIsFeasible0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractScheduler_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractScheduler::wrap_Object(PythonAbstractScheduler(((t_PythonAbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            PythonAbstractScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = PythonAbstractScheduler(a0, a1));
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

          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args)
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

          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "measurementIsFeasible", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("measurementIsFeasible", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data)
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
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSPhaseModifier::RelativisticClockOneWayGNSSPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::java::util::List RelativisticClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSPhaseModifier, t_RelativisticClockOneWayGNSSPhaseModifier, RelativisticClockOneWayGNSSPhaseModifier);

          void t_RelativisticClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSPhaseModifier), module, "RelativisticClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticClockOneWayGNSSPhaseModifier(((t_RelativisticClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadataKey::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadataKey::live$ = false;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COMMENT = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ORDERING = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_TYPE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_UNITS = NULL;

              jclass OrbitCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_dca7a7adb1df2a69] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_43c5599a4203b947] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");
                  mids$[mid_values_d39077ee89578e67] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_CONFIDENCE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_FRAME_EPOCH = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_NEXT_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ORDERING = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ORDERING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MAX = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MIN = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_UNITS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_dca7a7adb1df2a69], a0.this$, a1.this$, a2.this$);
              }

              OrbitCovarianceHistoryMetadataKey OrbitCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_43c5599a4203b947], a0.this$));
              }

              JArray< OrbitCovarianceHistoryMetadataKey > OrbitCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d39077ee89578e67]));
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
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadataKey, t_OrbitCovarianceHistoryMetadataKey, OrbitCovarianceHistoryMetadataKey);
              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_Object(const OrbitCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadataKey), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadataKey), module, "OrbitCovarianceHistoryMetadataKey", 0);
              }

              void t_OrbitCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "class_", make_descriptor(OrbitCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_CONFIDENCE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_FRAME_EPOCH", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_NEXT_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ORDERING", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ORDERING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MAX", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MIN", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_UNITS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_UNITS)));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(OrbitCovarianceHistoryMetadataKey(((t_OrbitCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data)
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
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanLoadDeformationCoefficients::class$ = NULL;
          jmethodID *OceanLoadDeformationCoefficients::mids$ = NULL;
          bool OceanLoadDeformationCoefficients::live$ = false;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::GEGOUT = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_1996 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2003 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2010 = NULL;

          jclass OceanLoadDeformationCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCoefficients_7cdc325af0834901] = env->getMethodID(cls, "getCoefficients", "()[D");
              mids$[mid_valueOf_b05ac29bf3fe556e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_values_c2a660f935c29a1b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEGOUT = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "GEGOUT", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_1996 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2003 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2010 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > OceanLoadDeformationCoefficients::getCoefficients() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_7cdc325af0834901]));
          }

          OceanLoadDeformationCoefficients OceanLoadDeformationCoefficients::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b05ac29bf3fe556e], a0.this$));
          }

          JArray< OceanLoadDeformationCoefficients > OceanLoadDeformationCoefficients::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OceanLoadDeformationCoefficients >(env->callStaticObjectMethod(cls, mids$[mid_values_c2a660f935c29a1b]));
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
          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self);
          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type);
          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadDeformationCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, coefficients),
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadDeformationCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, of_, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, getCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadDeformationCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadDeformationCoefficients__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OceanLoadDeformationCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadDeformationCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OceanLoadDeformationCoefficients, t_OceanLoadDeformationCoefficients, OceanLoadDeformationCoefficients);
          PyObject *t_OceanLoadDeformationCoefficients::wrap_Object(const OceanLoadDeformationCoefficients& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OceanLoadDeformationCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OceanLoadDeformationCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadDeformationCoefficients), &PY_TYPE_DEF(OceanLoadDeformationCoefficients), module, "OceanLoadDeformationCoefficients", 0);
          }

          void t_OceanLoadDeformationCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "class_", make_descriptor(OceanLoadDeformationCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "wrapfn_", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadDeformationCoefficients::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "GEGOUT", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::GEGOUT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_1996", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2003", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2010", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2010)));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadDeformationCoefficients::wrap_Object(OceanLoadDeformationCoefficients(((t_OceanLoadDeformationCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCoefficients());
            return result.wrap();
          }

          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanLoadDeformationCoefficients result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::valueOf(a0));
              return t_OceanLoadDeformationCoefficients::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type)
          {
            JArray< OceanLoadDeformationCoefficients > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::values());
            return JArray<jobject>(result.this$).wrap(t_OceanLoadDeformationCoefficients::wrap_jobject);
          }
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCoefficients());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmData::class$ = NULL;
              jmethodID *OpmData::mids$ = NULL;
              bool OpmData::live$ = false;

              jclass OpmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2effa3f20002c99c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_5a3868cb67b566ca] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_5ef7d45a76a827d2] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getManeuver_c348bbaee3991177] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_a6156df500549a58] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getNbManeuvers_f2f64475e4580546] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getSpacecraftParametersBlock_df8be17b569173ba] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getStateVectorBlock_f5a5aa01774b47f8] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/odm/StateVector;");
                  mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_hasManeuvers_e470b6d9e0d979db] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmData::OpmData(const ::org::orekit::files::ccsds::ndm::odm::StateVector & a0, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::java::util::List & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2effa3f20002c99c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OpmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_5a3868cb67b566ca]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OpmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_5ef7d45a76a827d2]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver OpmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_c348bbaee3991177], a0));
              }

              ::java::util::List OpmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_a6156df500549a58]));
              }

              jdouble OpmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_456d9a2f64d6b28d]);
              }

              jint OpmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_f2f64475e4580546]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OpmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_df8be17b569173ba]));
              }

              ::org::orekit::files::ccsds::ndm::odm::StateVector OpmData::getStateVectorBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_f5a5aa01774b47f8]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OpmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52]));
              }

              jboolean OpmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_e470b6d9e0d979db]);
              }

              void OpmData::validate(jdouble a0) const
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
          namespace odm {
            namespace opm {
              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self);
              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self);
              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_getManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getMass(t_OpmData *self);
              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self);
              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self);
              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self);
              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data);
              static PyGetSetDef t_OpmData__fields_[] = {
                DECLARE_GET_FIELD(t_OpmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OpmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OpmData, maneuvers),
                DECLARE_GET_FIELD(t_OpmData, mass),
                DECLARE_GET_FIELD(t_OpmData, nbManeuvers),
                DECLARE_GET_FIELD(t_OpmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OpmData, stateVectorBlock),
                DECLARE_GET_FIELD(t_OpmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmData__methods_[] = {
                DECLARE_METHOD(t_OpmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getManeuver, METH_O),
                DECLARE_METHOD(t_OpmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getStateVectorBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmData)[] = {
                { Py_tp_methods, t_OpmData__methods_ },
                { Py_tp_init, (void *) t_OpmData_init_ },
                { Py_tp_getset, t_OpmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OpmData, t_OpmData, OpmData);

              void t_OpmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmData), &PY_TYPE_DEF(OpmData), module, "OpmData", 0);
              }

              void t_OpmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "class_", make_descriptor(OpmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "wrapfn_", make_descriptor(t_OpmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmData::initializeClass, 1)))
                  return NULL;
                return t_OpmData::wrap_Object(OpmData(((t_OpmData *) arg)->object.this$));
              }
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::java::util::List a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                jdouble a6;
                OpmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkKkD", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6))
                {
                  INT_CALL(object = OpmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_OpmData_getManeuvers(t_OpmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_OpmData_getMass(t_OpmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector result((jobject) NULL);
                OBJ_CALL(result = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(result);
              }

              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg)
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

              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector value((jobject) NULL);
                OBJ_CALL(value = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegrator::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_15e7459be7ec40d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_bd5994787e9d7b3a] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegrator::ClassicalRungeKuttaFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_15e7459be7ec40d8, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ClassicalRungeKuttaFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
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
      namespace nonstiff {
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegrator, t_ClassicalRungeKuttaFieldIntegrator, ClassicalRungeKuttaFieldIntegrator);
        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(const ClassicalRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegrator), module, "ClassicalRungeKuttaFieldIntegrator", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(ClassicalRungeKuttaFieldIntegrator(((t_ClassicalRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ClassicalRungeKuttaFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ClassicalRungeKuttaFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultiStartMultivariateOptimizer::class$ = NULL;
          jmethodID *MultiStartMultivariateOptimizer::mids$ = NULL;
          bool MultiStartMultivariateOptimizer::live$ = false;

          jclass MultiStartMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b2cc3ff8a13fefdd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
              mids$[mid_getOptima_5cdf4d4dfeae2fec] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_store_c35f22fb54413ac4] = env->getMethodID(cls, "store", "(Lorg/hipparchus/optim/PointValuePair;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiStartMultivariateOptimizer::MultiStartMultivariateOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_b2cc3ff8a13fefdd, a0.this$, a1, a2.this$)) {}

          JArray< ::org::hipparchus::optim::PointValuePair > MultiStartMultivariateOptimizer::getOptima() const
          {
            return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_5cdf4d4dfeae2fec]));
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
          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultiStartMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, optima),
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiStartMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, getOptima, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiStartMultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultiStartMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) t_MultiStartMultivariateOptimizer_init_ },
            { Py_tp_getset, t_MultiStartMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiStartMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultiStartMultivariateOptimizer, t_MultiStartMultivariateOptimizer, MultiStartMultivariateOptimizer);
          PyObject *t_MultiStartMultivariateOptimizer::wrap_Object(const MultiStartMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultiStartMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiStartMultivariateOptimizer), &PY_TYPE_DEF(MultiStartMultivariateOptimizer), module, "MultiStartMultivariateOptimizer", 0);
          }

          void t_MultiStartMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "class_", make_descriptor(MultiStartMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultiStartMultivariateOptimizer::wrap_Object(MultiStartMultivariateOptimizer(((t_MultiStartMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
            MultiStartMultivariateOptimizer object((jobject) NULL);

            if (!parseArgs(args, "KIk", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2))
            {
              INT_CALL(object = MultiStartMultivariateOptimizer(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOptima());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            return callSuper(PY_TYPE(MultiStartMultivariateOptimizer), (PyObject *) self, "getOptima", args, 2);
          }
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
            OBJ_CALL(value = self->object.getOptima());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeTroposphericDelayModifier::live$ = false;

          jclass BaseRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorTroposphericModel_79833a4daf329f8b] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeErrorTroposphericModel_452a588415b00924] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_6ee08425733fb734] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          jdouble BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeErrorTroposphericModel_79833a4daf329f8b], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeErrorTroposphericModel_452a588415b00924], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, rangeErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeTroposphericDelayModifier, t_BaseRangeTroposphericDelayModifier, BaseRangeTroposphericDelayModifier);

          void t_BaseRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeTroposphericDelayModifier), module, "BaseRangeTroposphericDelayModifier", 0);
          }

          void t_BaseRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "class_", make_descriptor(BaseRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeTroposphericDelayModifier::wrap_Object(BaseRangeTroposphericDelayModifier(((t_BaseRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/forces/radiation/PythonAbstractRadiationForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonAbstractRadiationForceModel::class$ = NULL;
        jmethodID *PythonAbstractRadiationForceModel::mids$ = NULL;
        bool PythonAbstractRadiationForceModel::live$ = false;

        jclass PythonAbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonAbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_719ca4870d1969c7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractRadiationForceModel::PythonAbstractRadiationForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_719ca4870d1969c7, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::java::util::List PythonAbstractRadiationForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        void PythonAbstractRadiationForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
      namespace radiation {
        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractRadiationForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractRadiationForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractRadiationForceModel, t_PythonAbstractRadiationForceModel, PythonAbstractRadiationForceModel);

        void t_PythonAbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractRadiationForceModel), &PY_TYPE_DEF(PythonAbstractRadiationForceModel), module, "PythonAbstractRadiationForceModel", 0);
        }

        void t_PythonAbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "class_", make_descriptor(PythonAbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "wrapfn_", make_descriptor(t_PythonAbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractRadiationForceModel::wrap_Object(PythonAbstractRadiationForceModel(((t_PythonAbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          PythonAbstractRadiationForceModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PythonAbstractRadiationForceModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args)
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

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data)
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
#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *AbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *AbstractGNSSAttitudeProvider::mids$ = NULL;
        bool AbstractGNSSAttitudeProvider::live$ = false;

        jclass AbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_validityEnd_aaa854c403487cf3] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_aaa854c403487cf3] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getSun_488529e6bae70b9b] = env->getMethodID(cls, "getSun", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
            mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::Attitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::attitudes::FieldAttitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_aaa854c403487cf3]));
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
      namespace attitude {
        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self);

        static PyMethodDef t_AbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, getAttitude, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_AbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGNSSAttitudeProvider, t_AbstractGNSSAttitudeProvider, AbstractGNSSAttitudeProvider);

        void t_AbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGNSSAttitudeProvider), &PY_TYPE_DEF(AbstractGNSSAttitudeProvider), module, "AbstractGNSSAttitudeProvider", 0);
        }

        void t_AbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "class_", make_descriptor(AbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_AbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractGNSSAttitudeProvider::wrap_Object(AbstractGNSSAttitudeProvider(((t_AbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
                return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::attitudes::Attitude result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
                return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
          return NULL;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonProcessingState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonProcessingState::class$ = NULL;
            jmethodID *PythonProcessingState::mids$ = NULL;
            bool PythonProcessingState::live$ = false;

            jclass PythonProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_processToken_aa256c47fb7b26f1] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonProcessingState::PythonProcessingState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonProcessingState::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonProcessingState::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonProcessingState::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          namespace parsing {
            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self);
            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args);
            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data);
            static PyGetSetDef t_PythonProcessingState__fields_[] = {
              DECLARE_GET_FIELD(t_PythonProcessingState, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonProcessingState__methods_[] = {
              DECLARE_METHOD(t_PythonProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonProcessingState, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonProcessingState)[] = {
              { Py_tp_methods, t_PythonProcessingState__methods_ },
              { Py_tp_init, (void *) t_PythonProcessingState_init_ },
              { Py_tp_getset, t_PythonProcessingState__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonProcessingState, t_PythonProcessingState, PythonProcessingState);

            void t_PythonProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonProcessingState), &PY_TYPE_DEF(PythonProcessingState), module, "PythonProcessingState", 1);
            }

            void t_PythonProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "class_", make_descriptor(PythonProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "wrapfn_", make_descriptor(t_PythonProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonProcessingState::initializeClass);
              JNINativeMethod methods[] = {
                { "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z", (void *) t_PythonProcessingState_processToken0 },
                { "pythonDecRef", "()V", (void *) t_PythonProcessingState_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonProcessingState::initializeClass, 1)))
                return NULL;
              return t_PythonProcessingState::wrap_Object(PythonProcessingState(((t_PythonProcessingState *) arg)->object.this$));
            }
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds)
            {
              PythonProcessingState object((jobject) NULL);

              INT_CALL(object = PythonProcessingState());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args)
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

            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "processToken", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("processToken", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data)
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
}
